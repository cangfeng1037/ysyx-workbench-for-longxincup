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

#define mepc 0x341
#define mcause 0x342
#define mtvec 0x305

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  // 汇编执行ecall后，跳转到这里，完成自陷操作
  //printf("""Raising intr: NO = %d, epc = " FMT_WORD "\n", NO, epc);
  csr_write(mepc, epc);          // 将异常发生时的pc保存到mepc寄存器中
  csr_write(mcause, NO);           // 将异常号保存到mcause
  //printf("mepc = " FMT_WORD ", mcause = " FMT_WORD ", mtvec = " FMT_WORD "\n", csr_read(mepc), csr_read(mcause), csr_read(mtvec));
#ifdef CONFIG_ETRACE
  printf("ETRACE: intr NO = %d, epc = " FMT_WORD "\n", NO, epc);≠
#endif

  return csr_read(mtvec);        // 返回异常处理入口地址mtvec
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
