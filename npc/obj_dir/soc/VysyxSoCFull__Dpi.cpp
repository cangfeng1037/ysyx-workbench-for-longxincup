// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call VysyxSoCFull::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "VysyxSoCFull__Dpi.h"
#include "VysyxSoCFull.h"

#ifndef VL_DPIDECL_get_bp_hit_count_
#define VL_DPIDECL_get_bp_hit_count_
int get_bp_hit_count() {
    // DPI export at verilog/soc/top.sv:13296:18
    return VysyxSoCFull::get_bp_hit_count();
}
#endif

#ifndef VL_DPIDECL_get_bp_total_count_
#define VL_DPIDECL_get_bp_total_count_
int get_bp_total_count() {
    // DPI export at verilog/soc/top.sv:13291:18
    return VysyxSoCFull::get_bp_total_count();
}
#endif

#ifndef VL_DPIDECL_get_d_cnt_
#define VL_DPIDECL_get_d_cnt_
int get_d_cnt() {
    // DPI export at verilog/soc/top.sv:13276:18
    return VysyxSoCFull::get_d_cnt();
}
#endif

#ifndef VL_DPIDECL_get_dcache_hit_count_
#define VL_DPIDECL_get_dcache_hit_count_
int get_dcache_hit_count() {
    // DPI export at verilog/soc/top.sv:13261:18
    return VysyxSoCFull::get_dcache_hit_count();
}
#endif

#ifndef VL_DPIDECL_get_dcache_miss_count_
#define VL_DPIDECL_get_dcache_miss_count_
int get_dcache_miss_count() {
    // DPI export at verilog/soc/top.sv:13266:18
    return VysyxSoCFull::get_dcache_miss_count();
}
#endif

#ifndef VL_DPIDECL_get_difftest_valid_
#define VL_DPIDECL_get_difftest_valid_
int get_difftest_valid() {
    // DPI export at verilog/soc/top.sv:13202:18
    return VysyxSoCFull::get_difftest_valid();
}
#endif

#ifndef VL_DPIDECL_get_flush_cnt_
#define VL_DPIDECL_get_flush_cnt_
int get_flush_cnt() {
    // DPI export at verilog/soc/top.sv:13286:18
    return VysyxSoCFull::get_flush_cnt();
}
#endif

#ifndef VL_DPIDECL_get_gpr_
#define VL_DPIDECL_get_gpr_
int get_gpr(int idx) {
    // DPI export at verilog/soc/top.sv:13212:18
    return VysyxSoCFull::get_gpr(idx);
}
#endif

#ifndef VL_DPIDECL_get_hit_count_
#define VL_DPIDECL_get_hit_count_
int get_hit_count() {
    // DPI export at verilog/soc/top.sv:13251:18
    return VysyxSoCFull::get_hit_count();
}
#endif

#ifndef VL_DPIDECL_get_i_cnt_
#define VL_DPIDECL_get_i_cnt_
int get_i_cnt() {
    // DPI export at verilog/soc/top.sv:13271:18
    return VysyxSoCFull::get_i_cnt();
}
#endif

#ifndef VL_DPIDECL_get_inst_
#define VL_DPIDECL_get_inst_
int get_inst() {
    // DPI export at verilog/soc/top.sv:13197:18
    return VysyxSoCFull::get_inst();
}
#endif

#ifndef VL_DPIDECL_get_miss_count_
#define VL_DPIDECL_get_miss_count_
int get_miss_count() {
    // DPI export at verilog/soc/top.sv:13256:18
    return VysyxSoCFull::get_miss_count();
}
#endif

#ifndef VL_DPIDECL_get_non_inst_
#define VL_DPIDECL_get_non_inst_
int get_non_inst() {
    // DPI export at verilog/soc/top.sv:13207:18
    return VysyxSoCFull::get_non_inst();
}
#endif

#ifndef VL_DPIDECL_get_pc_
#define VL_DPIDECL_get_pc_
int get_pc() {
    // DPI export at verilog/soc/top.sv:13192:18
    return VysyxSoCFull::get_pc();
}
#endif

#ifndef VL_DPIDECL_get_stall_cnt_
#define VL_DPIDECL_get_stall_cnt_
int get_stall_cnt() {
    // DPI export at verilog/soc/top.sv:13281:18
    return VysyxSoCFull::get_stall_cnt();
}
#endif

