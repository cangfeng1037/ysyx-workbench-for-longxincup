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
    // DPI export at verilog/core/top.sv:13166:18
    extern int get_bp_hit_count();
    // DPI export at verilog/core/top.sv:13161:18
    extern int get_bp_total_count();
    // DPI export at verilog/core/top.sv:13146:18
    extern int get_d_cnt();
    // DPI export at verilog/core/top.sv:13131:18
    extern int get_dcache_hit_count();
    // DPI export at verilog/core/top.sv:13136:18
    extern int get_dcache_miss_count();
    // DPI export at verilog/core/top.sv:13072:18
    extern int get_difftest_valid();
    // DPI export at verilog/core/top.sv:13156:18
    extern int get_flush_cnt();
    // DPI export at verilog/core/top.sv:13082:18
    extern int get_gpr(int idx);
    // DPI export at verilog/core/top.sv:13121:18
    extern int get_hit_count();
    // DPI export at verilog/core/top.sv:13141:18
    extern int get_i_cnt();
    // DPI export at verilog/core/top.sv:13067:18
    extern int get_inst();
    // DPI export at verilog/core/top.sv:13126:18
    extern int get_miss_count();
    // DPI export at verilog/core/top.sv:13077:18
    extern int get_non_inst();
    // DPI export at verilog/core/top.sv:13062:18
    extern int get_pc();
    // DPI export at verilog/core/top.sv:13151:18
    extern int get_stall_cnt();

    // DPI IMPORTS
    // DPI import at verilog/core/top.sv:13002:34
    extern void ebreak();

#ifdef __cplusplus
}
#endif

#endif  // guard
