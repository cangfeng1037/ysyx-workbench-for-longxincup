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
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  // 遍历打印所有通用寄存器
  for (int i = 0; i < 32; i ++ ) {
    printf("%-3s = 0x%08x\t", regs[i], cpu.gpr[i]);

    if((i + 1) % 4 == 0) printf("\n");
  }

  printf("pc = 0x%08x\n", cpu.pc);
}

word_t isa_reg_str2val(const char *s, bool *success) {
  *success = false;

  // 处理特殊寄存器
  if (strcmp(s, "pc") == 0) { // pc程序寄存器，指向下一CPU指令的地址
    *success = true;
    return cpu.pc; // 返回程序计数器的值
  }

  // 处理通用寄存器
  for (int i = 0; i < 32; i ++ ) {
    if (strcmp(s, regs[i]) == 0) {
      *success = true;
      return cpu.gpr[i]; // 返回对应寄存器的值
    }
  }

  // 处理数字寄存器名 (x0, x1, x31)
  if(s[0] == 'x') {
    char *endptr;
    long reg_num = strtol(s + 1, &endptr, 10); // 转换字符串为10进制数
    if (*endptr == '\0' && reg_num >= 0 && reg_num < 32) {
      *success = true;
      return cpu.gpr[reg_num]; // 返回对应寄存器的值
    }
  }

  return 0;

}
