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
    // DPI export at verilog/top.sv:2696:18
    extern int get_difftest_valid();
    // DPI export at verilog/top.sv:2706:18
    extern int get_gpr(int idx);
    // DPI export at verilog/top.sv:2691:18
    extern int get_inst();
    // DPI export at verilog/top.sv:2701:18
    extern int get_non_inst();
    // DPI export at verilog/top.sv:2686:18
    extern int get_pc();

    // DPI IMPORTS
    // DPI import at verilog/top.sv:2636:34
    extern void ebreak();
    // DPI import at /home/cangfeng_/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:6266:30
    extern void mrom_read(int raddr, int* rdata);

#ifdef __cplusplus
}
#endif

#endif  // guard
