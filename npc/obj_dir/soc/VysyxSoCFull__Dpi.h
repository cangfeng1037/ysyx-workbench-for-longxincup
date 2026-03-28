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
    // DPI export at verilog/top.sv:11981:18
    extern int get_d_cnt();
    // DPI export at verilog/top.sv:11966:18
    extern int get_dcache_hit_count();
    // DPI export at verilog/top.sv:11971:18
    extern int get_dcache_miss_count();
    // DPI export at verilog/top.sv:11907:18
    extern int get_difftest_valid();
    // DPI export at verilog/top.sv:11991:18
    extern int get_flush_cnt();
    // DPI export at verilog/top.sv:11917:18
    extern int get_gpr(int idx);
    // DPI export at verilog/top.sv:11956:18
    extern int get_hit_count();
    // DPI export at verilog/top.sv:11976:18
    extern int get_i_cnt();
    // DPI export at verilog/top.sv:11902:18
    extern int get_inst();
    // DPI export at verilog/top.sv:11961:18
    extern int get_miss_count();
    // DPI export at verilog/top.sv:11912:18
    extern int get_non_inst();
    // DPI export at verilog/top.sv:11897:18
    extern int get_pc();
    // DPI export at verilog/top.sv:11986:18
    extern int get_stall_cnt();

    // DPI IMPORTS
    // DPI import at verilog/top.sv:11839:34
    extern void ebreak();
    // DPI import at /home/cangfeng_/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:7556:30
    extern void mrom_read(int raddr, int* rdata);

#ifdef __cplusplus
}
#endif

#endif  // guard
