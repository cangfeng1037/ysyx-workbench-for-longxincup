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

#include "local-include/reg.h"
#include "local-include/csr.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_N, TYPE_J, TYPE_R,
  TYPE_B, // none
};

#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 20) | BITS(i, 19, 12) << 12 | BITS(i, 20, 20) << 11 | BITS(i, 30, 21) << 1;} while(0)
#define immB() do { *imm = (SEXT(BITS(i, 31, 31) , 1) << 12) | BITS(i, 7, 7) << 11 | BITS(i, 30, 25) << 5 | BITS(i, 11, 8) << 1;} while(0)
#define csrN() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
// src1，src2源操作数1，2，imm立即数，rd目标存储器编号
static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);
  switch (type) {
    case TYPE_I: src1R();          immI(); break; // 提取rs1寄存器值，读立即数immI()
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_N: break;
    case TYPE_J: immJ(); break; // TYPE_J跳转类型指令
    case TYPE_R: src1R(); src2R(); break; // TYPE_R寄存器类型指令
    case TYPE_B: src1R(); src2R(); immB(); break; // TYPE_B分支类型指令
    default: panic("unsupported type = %d", type);
  }
}

static int decode_exec(Decode *s) {
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  int rd = 0; \
  word_t src1 = 0, src2 = 0, imm = 0; \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(rd) = s->pc + imm);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui, U, R(rd) = imm); // lui指令，立即数加载到rd寄存器
  
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  
  // I型指令，立即数操作
  //INSTPAT("??????? ????? 00000 000 ????? 00100 11", li, I, R(rd) = imm); // 完成li指令，给rd赋值立即数
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi, I, R(rd) = src1 + imm); // 完成addi指令，给rd赋值src1+imm
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi, I, R(rd) = src1 & imm); // andi，与立即数
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori, I, R(rd) = src1 ^ imm); // xori,异或立即数
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori, I, R(rd) = src1 | imm); // ori,或立即数


  INSTPAT("0000000 00000 00001 000 00000 11001 11", ret, I, s->dnpc = (src1 + imm) & ~0x1); // ret指令，跳转回src1 + imm
  INSTPAT("0000000 00000 ????? 000 ????? 00100 11", mv, I, R(rd) = src1); // mv指令，给rd赋值src1
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw, I, R(rd) = Mr(src1 + imm, 4)); // lw : src1偏移imm字节后读取数据
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu, I, R(rd) = Mr(src1 + imm, 1)); // lbu,读一个字节0符号数)
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh, I, R(rd) = SEXT(Mr(src1 + imm, 2), 16)); // lh,读半节，符号扩展为32位
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu, I, R(rd) = Mr(src1 + imm, 2)); // lhu,读半节，0扩展
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb, I, R(rd) = SEXT(Mr(src1 + imm, 1), 8)); // lb,读一个字节，符号扩展为32位


  INSTPAT("0000000 00001 ????? 011 ????? 00100 11", seqz, I, R(rd) = src1 == 0 ? 1 : 0 ); // seqz指令，判断src1是否为0，若为0则rd=1，否则rd=0
  INSTPAT("0100000 ????? ????? 101 ????? 00100 11", srai, I, R(rd) = (sword_t)src1 >> (imm & 0x1f)); // srai,立即数算术右移，取imm后五位
  INSTPAT("0000000 ????? ????? 101 ????? 00100 11", srli, I, R(rd) = src1 >> (imm & 0x1f)); // srli,立即数逻辑右移，取imm后五位
  INSTPAT("0000000 ????? ????? 001 ????? 00100 11", slli, I, R(rd) = src1 << (imm & 0x1f)); // slli,立即数逻辑左移，取imm后五位


  // J型指令，跳转型
  INSTPAT("??????? ????? ????? ??? 00000 11011 11", j, J, s->dnpc = s->pc + imm);
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal, J, s->dnpc = s->pc + imm; R(rd) = s->snpc);
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr, I, s->dnpc = (src1 + imm) & ~0x1; R(rd) = s->snpc); // jalr指令，跳转到src1 + imm的地址，并将下一条指令地址存入rd寄存器


  // R型指令，寄存器操作
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add, R, R(rd) = src1 + src2); // add指令，R类型寄存器指令，rd = src1 + src2
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub, R, R(rd) = src1 - src2);
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor, R, R(rd) = src1 ^ src2); // xor,按位异或
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or, R, R(rd) = src1 | src2); // or
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and, R, R(rd) = src1 & src2);
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul, R, R(rd) = src1 * src2);
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh, R, R(rd) = ((int64_t)(sword_t)src1 * (int64_t)(sword_t)src2) >> 32;); // mulh,有符号乘法高32位
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu, R, R(rd) = ((uint64_t)(word_t)src1 * (uint64_t)(word_t)src2) >> 32;); // mulhu,无符号乘法高32位
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", mv, R, R(rd) = src1); // mv指令，寄存器间搬运
  // 除法，处理除数为0的情况

  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div, R, {
      sword_t a = (sword_t)src1; sword_t b = (sword_t)src2;
      if (b == 0) R(rd) = (word_t)-1;
      else if (a == INT32_MIN && b == -1) R(rd) = INT32_MIN; // INT_MIN / -1溢出
      else R(rd) = (word_t)(a / b);
    }
  );
  
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu, R, {
      word_t a = (word_t)src1; word_t b = (word_t)src2;
      if (b == 0) R(rd) = (word_t)-1;
      else R(rd) = a / b;
    }
  ); // divu,无符号除法
  
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem, R, {
      sword_t a = (sword_t)src1; sword_t b = (sword_t)src2;
      if (b == 0) R(rd) = (word_t)-1;
      else if (a == INT32_MIN && b == -1) R(rd) = INT32_MIN; // INT_MIN / -1溢出
      else R(rd) = (word_t)(a % b);
    }
  );
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu, R, {
      word_t a = (word_t)src1; word_t b = (word_t)src2;
      if (b == 0) R(rd) = (word_t)-1;
      else R(rd) = a % b;
    }
  ); // remu,无符号取余数

  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt, R, R(rd) = (sword_t)src1 < (sword_t)src2 ? 1 : 0); // slt,比较置数
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll, R, R(rd) = src1 << (src2 & 0x1f)); // sll,逻辑左移src2的低5位位
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl, R, R(rd) = src1 >> (src2 & 0x1f)); // srl,逻辑右移src2的低5位位
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu, R, R(rd) = ((word_t)src1 < (word_t)src2) ? 1 : 0); // sltu指令，比较置位
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra, R, R(rd) = (sword_t)src1 >> (src2 & 0x1f)); // sra,算术右移


  // B型指令，分支跳转
  //INSTPAT("??????? ????? ????? 000 ????? 11000 11", beqz, B, if(src1 == 0) s->dnpc = s->pc + imm); // beqz指令，src1为0跳转
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne, B, if(src1 != src2) s->dnpc = s->pc + imm);// bne指令，两个寄存器不相等时跳转
  INSTPAT("??????? ????? ????? 010 ????? 11000 11", blez, B, if(src1 <= 0) s->dnpc = s->pc + imm); // blez, src1小于等于1跳转
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge, B, if((sword_t)src1 >= (sword_t)src2) s->dnpc = s->pc + imm);
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq, B, if(src1 == src2) s->dnpc = s->pc + imm);
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu, B, if((word_t)(src1) >= (word_t)(src2)) s->dnpc = s->pc + imm); // bgeu,无符号大于等于跳转
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt, B, if((sword_t)src1 < (sword_t)src2) s->dnpc = s->pc + imm); // blt
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu, B, if((word_t)(src1) < (word_t)(src2)) s->dnpc = s->pc + imm); // bltu,无符号小于跳转
 
  // S型指令，存储操作
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh, S, Mw(src1 + imm, 2, src2)); // sh,半字存储指令，存低16位
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw, S, Mw(src1 + imm, 4, src2));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb, S, Mw(src1 + imm, 1, src2));

  // CSR系统寄存器操作
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw, I, { csr_write(imm, src1); R(rd) = csr_read(imm); } ); // csrrw指令，读写CSR寄存器
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs, I, {
  R(rd) = csr_read(imm);
  if (src1 != 0) csr_write(imm, csr_read(imm) | src1);
});

  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall, N, {
      //printf("ecall at pc = " FMT_WORD "\n", s->pc);
      word_t epc = s->pc;
      word_t exc_entry = isa_raise_intr(11, epc); // 11是ecall的异常号
      s->dnpc = exc_entry;
  });

  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret, N, {
    word_t mstatus = csr_read(0x342); // CSR_MSTATUS
    word_t mpie = (mstatus >> 7) & 0x1;
    mstatus = (mstatus & ~(1 << 3)) | (mpie << 3); // 恢复mie
    mstatus = mstatus | (1 << 7); // 设置mpie为1
    csr_write(0x300, mstatus);
    cpu.pc = csr_read(0x341); // CSR_MEPCc s
    s->dnpc = cpu.pc;
  });

  // 无效指令
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));

  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
