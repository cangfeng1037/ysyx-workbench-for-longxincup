#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <verilated.h>
#include <dlfcn.h>
#include "difftest.h"  // 使用统一的 CPU_state 定义

#define DIFFTEST_TO_DUT 0
#define DIFFTEST_TO_REF 1

using difftest_init_t   = void (*)(int);
using difftest_memcpy_t = void (*)(uintptr_t addr, void *buf, size_t n, bool direction);
using difftest_regcpy_t = void (*)(void *dut, bool direction);
using difftest_exec_t   = void (*)(uint64_t n);
using difftest_skip_ref_t = void (*)();
using difftest_init_mrom_t = void (*)(const void* buf, size_t size);

static void* ref_handle = nullptr;
static difftest_init_t ref_init;
static difftest_memcpy_t ref_memcpy;
static difftest_regcpy_t ref_regcpy;
static difftest_exec_t ref_exec;
static difftest_skip_ref_t ref_skip = nullptr;
static difftest_init_mrom_t ref_init_mrom = nullptr;

// 为避免与 NEMU 的 CPU_state 大小不一致导致溢出，使用足够大的中间缓冲区
static constexpr size_t DIFF_CTX_SIZE = 1024;      // 保守值
static constexpr size_t OFF_GPR       = 0;
static constexpr size_t OFF_PC        = 32 * sizeof(uint32_t);

extern "C" void init_mrom(const void* buf, size_t size);

static void difftest_load() {
    const char *so_path = getenv("DIFFTEST_SO");
    if (!so_path || !*so_path) so_path = "/home/cangfeng_/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so";
    ref_handle = dlopen(so_path, RTLD_LAZY | RTLD_LOCAL); // 解析动态库
    if (!ref_handle) {
        printf("dlopen %s failed: %s\n", so_path, dlerror());
        exit(1);
    }
    ref_init   = (difftest_init_t)   dlsym(ref_handle, "difftest_init");
    ref_memcpy = (difftest_memcpy_t) dlsym(ref_handle, "difftest_memcpy");
    ref_regcpy = (difftest_regcpy_t) dlsym(ref_handle, "difftest_regcpy");
    ref_exec   = (difftest_exec_t)   dlsym(ref_handle, "difftest_exec");
    ref_skip   = (difftest_skip_ref_t)dlsym(ref_handle, "difftest_skip_ref");
    ref_init_mrom = (difftest_init_mrom_t)dlsym(ref_handle, "init_mrom");
    if (!ref_init || !ref_memcpy || !ref_regcpy || !ref_exec || !ref_skip || !ref_init_mrom) {
        printf("dlsym failed: %s\n", dlerror());
        exit(1);
    }
}

void difftest_init(uintptr_t reset_vec, const void* img_buf, size_t img_size) {
    difftest_load();
    ref_init(0);
    if (img_buf && img_size) {
        ref_init_mrom(img_buf, img_size); // 初始化 MROM 内容
        printf("[DiffTest] Image copied to REF.\n");
    } else {
        printf("[DiffTest] No image copied to REF.\n");
    }
}

void difftest_sync(const uint32_t gpr[32], uint32_t pc) {
    alignas(16) uint8_t buf[DIFF_CTX_SIZE] = {0};
    memcpy(buf + OFF_GPR, gpr, 32 * sizeof(uint32_t));
    memcpy(buf + OFF_PC,  &pc, sizeof(uint32_t));
    // 将“大的”上下文从 DUT 写到 REF
    ref_regcpy(buf, DIFFTEST_TO_REF);
}

void difftest_step(uint32_t n) {
    ref_exec(n);
}

void difftest_get_reg(CPU_state* s) {
    alignas(16) uint8_t buf[DIFF_CTX_SIZE] = {0};
    // 从 REF 取回完整上下文到大缓冲区，再抽取前缀（GPR+PC）
    ref_regcpy(buf, DIFFTEST_TO_DUT);
    memcpy(s->gpr, buf + OFF_GPR, 32 * sizeof(uint32_t));
    memcpy(&s->pc,  buf + OFF_PC,  sizeof(uint32_t));
}

bool difftest_check_reg(const uint32_t dut_gpr[32], uint32_t dut_pc) {
    CPU_state ref_s{};
    difftest_get_reg(&ref_s);
    for (int i = 0; i < 32; i ++ ) {
        if (ref_s.gpr[i] != dut_gpr[i]) {
            printf("Difftest failed at gpr[%d], ref: 0x%08x, dut: 0x%08x\n", i, ref_s.gpr[i], dut_gpr[i]);
            return false;
        }
    }
    if (ref_s.pc != dut_pc) {
        printf("Difftest failed at pc, ref: 0x%08x, dut: 0x%08x\n", ref_s.pc, dut_pc);
        return false;
    }
    return true;
}

bool difftest_skip() {
    if (!ref_skip) return false;
    ref_skip();
    return true;
}
