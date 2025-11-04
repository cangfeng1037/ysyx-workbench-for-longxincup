#include <stdint.h>
#include "reg.h"

#define CSR_MEPC 0x341
#define CSR_MCAUSE 0x342
#define CSR_MTVEC 0x305


word_t csr_read(uint32_t addr);

void  csr_write(uint32_t addr, word_t val);