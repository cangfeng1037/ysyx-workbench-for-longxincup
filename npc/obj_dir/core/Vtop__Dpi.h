// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at verilog/top.sv:62224:18
    extern int get_difftest_valid();
    // DPI export at verilog/top.sv:62234:18
    extern int get_gpr(int idx);
    // DPI export at verilog/top.sv:62273:18
    extern int get_hit_count();
    // DPI export at verilog/top.sv:62219:18
    extern int get_inst();
    // DPI export at verilog/top.sv:62278:18
    extern int get_miss_count();
    // DPI export at verilog/top.sv:62229:18
    extern int get_non_inst();
    // DPI export at verilog/top.sv:62214:18
    extern int get_pc();

    // DPI IMPORTS
    // DPI import at verilog/top.sv:62162:34
    extern void ebreak();

#ifdef __cplusplus
}
#endif

#endif  // guard
