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
    // DPI export at verilog/soc/top.sv:13296:18
    extern int get_bp_hit_count();
    // DPI export at verilog/soc/top.sv:13291:18
    extern int get_bp_total_count();
    // DPI export at verilog/soc/top.sv:13276:18
    extern int get_d_cnt();
    // DPI export at verilog/soc/top.sv:13261:18
    extern int get_dcache_hit_count();
    // DPI export at verilog/soc/top.sv:13266:18
    extern int get_dcache_miss_count();
    // DPI export at verilog/soc/top.sv:13202:18
    extern int get_difftest_valid();
    // DPI export at verilog/soc/top.sv:13286:18
    extern int get_flush_cnt();
    // DPI export at verilog/soc/top.sv:13212:18
    extern int get_gpr(int idx);
    // DPI export at verilog/soc/top.sv:13251:18
    extern int get_hit_count();
    // DPI export at verilog/soc/top.sv:13271:18
    extern int get_i_cnt();
    // DPI export at verilog/soc/top.sv:13197:18
    extern int get_inst();
    // DPI export at verilog/soc/top.sv:13256:18
    extern int get_miss_count();
    // DPI export at verilog/soc/top.sv:13207:18
    extern int get_non_inst();
    // DPI export at verilog/soc/top.sv:13192:18
    extern int get_pc();
    // DPI export at verilog/soc/top.sv:13281:18
    extern int get_stall_cnt();

    // DPI IMPORTS
    // DPI import at verilog/soc/top.sv:13132:34
    extern void ebreak();
    // DPI import at /home/cangfeng_/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:7556:30
    extern void mrom_read(int raddr, int* rdata);

#ifdef __cplusplus
}
#endif

#endif  // guard
