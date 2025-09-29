#pragma once
#include <stdint.h>
#include <stddef.h>

struct CPU_state {
    uint32_t gpr[32];
    uint32_t pc;
};

void difftest_init(uintptr_t reset_vec, const void *img_buf, size_t img_size);
void difftest_sync(const uint32_t gpr[32], uint32_t pc);
void difftest_step(uint32_t n);
void difftest_get_reg(CPU_state *state);
bool difftest_check_reg(const uint32_t dut_gpr[32], uint32_t dut_pc);