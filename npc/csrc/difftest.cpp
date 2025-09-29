#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Vtop.h"
#include <verilated.h>
#include <dlfcn.h>

#define DIFFTEST_TO_DUT 0
#define DIFFTEST_TO_REF 1

using difftest_init_t   = void (*)(int);
using difftest_memcpy_t = void (*)(uintptr_t addr, void *buf, size_t n, bool direction);
using difftest_regcpy_t = void (*)(void *dut, bool direction);
using difftest_exec_t   = void (*)(uint64_t n);

static void* ref_handle = nullptr;
static difftest_init_t ref_init;
static difftest_memcpy_t ref_memcpy;
static difftest_regcpy_t ref_regcpy;
static difftest_exec_t ref_exec;

struct CPU_state {
    uint32_t gpr[32];
    uint32_t pc;
};

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

    if (!ref_init || !ref_memcpy || !ref_regcpy || !ref_exec) {
        printf("dlsym failed: %s\n", dlerror());
        exit(1);
    }
}

void difftest_init(uintptr_t reset_vec, const void* img_buf, size_t img_size) {
    difftest_load();
    ref_init(0);
    // 将DUT的镜像拷贝到ref的guest内存
    if (img_buf && img_size) {
        ref_memcpy(reset_vec, const_cast<void*>(img_buf), img_size, DIFFTEST_TO_REF);
        printf("[DiffTest] Image copied to REF.\n");
    } else {
        printf("[DiffTest] No image copied to REF.\n");
    }
}

void difftest_sync(const uint32_t gpr[32], uint32_t pc) {
    CPU_state s{};
    for (int i = 0; i < 32; i ++ ) s.gpr[i] = gpr[i];
    s.pc = pc;
    ref_regcpy(&s, DIFFTEST_TO_REF);
}

void difftest_step(uint32_t n) {
    ref_exec(n);
}

void difftest_get_reg(CPU_state* s) {
    ref_regcpy(s, DIFFTEST_TO_DUT);
    return;  
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
