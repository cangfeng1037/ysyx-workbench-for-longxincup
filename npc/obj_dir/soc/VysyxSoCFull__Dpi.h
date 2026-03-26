// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at verilog/top.sv:11965:18
    extern int get_d_cnt();
    // DPI export at verilog/top.sv:11950:18
    extern int get_dcache_hit_count();
    // DPI export at verilog/top.sv:11955:18
    extern int get_dcache_miss_count();
    // DPI export at verilog/top.sv:11891:18
    extern int get_difftest_valid();
    // DPI export at verilog/top.sv:11975:18
    extern int get_flush_cnt();
    // DPI export at verilog/top.sv:11901:18
    extern int get_gpr(int idx);
    // DPI export at verilog/top.sv:11940:18
    extern int get_hit_count();
    // DPI export at verilog/top.sv:11960:18
    extern int get_i_cnt();
    // DPI export at verilog/top.sv:11886:18
    extern int get_inst();
    // DPI export at verilog/top.sv:11945:18
    extern int get_miss_count();
    // DPI export at verilog/top.sv:11896:18
    extern int get_non_inst();
    // DPI export at verilog/top.sv:11881:18
    extern int get_pc();
    // DPI export at verilog/top.sv:11970:18
    extern int get_stall_cnt();

    // DPI IMPORTS
    // DPI import at verilog/top.sv:11823:34
    extern void ebreak();
    // DPI import at /home/cangfeng_/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:7556:30
    extern void mrom_read(int raddr, int* rdata);

#ifdef __cplusplus
}
#endif

#endif  // guard
