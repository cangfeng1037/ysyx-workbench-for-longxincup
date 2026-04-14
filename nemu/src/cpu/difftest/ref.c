 /***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
#include <string.h>
#include <stdlib.h>

#define DIFFTEST_TO_DUT 0
#define DIFFTEST_TO_REF 1

#ifndef CONFIG_DIFFTEST
static bool skip_next_exec = false;
static vaddr_t last_commit_pc = 0;

static inline bool difftest_debug_enabled() {
  static int cached = -1;
  if (cached == -1) {
    const char *e = getenv("NEMU_DIFFTEST_DEBUG");
    cached = (e && *e && strcmp(e, "0") != 0) ? 1 : 0;
  }
  return cached == 1;
}



__EXPORT void difftest_skip_ref() {
  skip_next_exec = true;
}

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  uint8_t *haddr = guest_to_host(addr);
  if (direction == DIFFTEST_TO_REF) {
    // dut -> ref，把buf的内容写入ref内存
    memcpy(haddr, buf, n); // 向haddr地址写入buf的内容，长度为n
    return;
  } else if (direction == DIFFTEST_TO_DUT) {
    // ref -> dut, 把ref内存的内容写入buf
    memcpy(buf, haddr, n); // 从haddr地址读取内容到buf，长度为n
    return;
  }
  //assert(0);
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {
  //assert(0);
  CPU_state *r = (CPU_state *)dut;
  if (direction == DIFFTEST_TO_REF) {
    // dut -> ref，把dut的寄存器状态写入ref
    cpu = *r;
    // sync 后保持“提交PC语义”一致
    last_commit_pc = cpu.pc;
  } else if (direction == DIFFTEST_TO_DUT) {
    // ref -> dut, 把ref的寄存器状态写入dut
    *r = cpu;
    // 导出“当前提交指令PC”(执行前PC)，而不是执行后的dnpc
    r->pc = last_commit_pc;
    if (difftest_debug_enabled()) {
      printf("[NEMU-DIFF] regcpy TO_DUT exported_pc=0x%08x cpu_pc=0x%08x\n",
             (uint32_t)r->pc, (uint32_t)cpu.pc);
    }
  }
}

__EXPORT void difftest_exec(uint64_t n) {
  if (skip_next_exec) {
    skip_next_exec = false;
    return;
  }
  // 对齐 DUT commit_pc 语义：记录执行前PC
  vaddr_t before_pc = cpu.pc;
  last_commit_pc = before_pc;
  cpu_exec(n);
  if (difftest_debug_enabled()) {
    printf("[NEMU-DIFF] exec n=%lu before_pc=0x%08x after_pc=0x%08x\n",
           (unsigned long)n, (uint32_t)before_pc, (uint32_t)cpu.pc);
  }
  //assert(0);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  void init_device();
  init_mem();
  IFDEF(CONFIG_DEVICE, init_device());
  /* Perform ISA dependent initialization. */
  init_isa();
  // 与 NEMU 正常启动路径保持一致：从 RESET_VECTOR 取指
  cpu.pc = RESET_VECTOR;
  last_commit_pc = cpu.pc;
}
#endif
