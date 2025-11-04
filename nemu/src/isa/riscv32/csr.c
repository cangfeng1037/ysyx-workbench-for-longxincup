#include "local-include/csr.h"
#include <cpu/cpu.h>
#include "common.h"
#include "isa.h"

extern CPU_state cpu;

word_t csr_read(uint32_t addr) {
  switch (addr) {
    case 0x305: return cpu.mtvec;  break;  // 存储异常处理入口地址
    case 0x341: return cpu.mepc;   break;  // 存储机器异常时pc指向的指令
    case 0x342: return cpu.mcause; break;  // 存储异常时机器原因
    case 0x300: return cpu.mstatus;break;  // 存储异常时机器状态
    default: panic("csr_read: unimplemented CSR address 0x%x, pc = %x", addr, cpu.pc);
  }
}

void csr_write(uint32_t addr, word_t val) {
  switch (addr) {
    case 0x305: cpu.mtvec   = val; break;
    case 0x341: cpu.mepc    = val; break;
    case 0x342: cpu.mcause  = val; break;
    case 0x300: cpu.mstatus = val; break;
    default: panic("csr_write: unimplemented CSR address 0x%x, pc = %x", addr, cpu.pc);
  }
}
