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

#define DIFFTEST_TO_DUT 0
#define DIFFTEST_TO_REF 1

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
  } else if (direction == DIFFTEST_TO_DUT) {
    // ref -> dut, 把ref的寄存器状态写入dut
    *r = cpu;
  }
}

__EXPORT void difftest_exec(uint64_t n) {
  cpu_exec(n);
  //assert(0);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
