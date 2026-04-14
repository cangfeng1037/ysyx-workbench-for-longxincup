// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_dpi.h"


int Vtop::get_pc() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_pc\n"); );
    // Init
    IData/*31:0*/ get_pc__Vfuncrtn__Vcvt;
    get_pc__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_pc");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_pc_t __Vcb = (Vtop__Vcb_get_pc_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), get_pc__Vfuncrtn__Vcvt);
    int get_pc__Vfuncrtn;
    for (size_t get_pc__Vfuncrtn__Vidx = 0; get_pc__Vfuncrtn__Vidx < 1; ++get_pc__Vfuncrtn__Vidx) get_pc__Vfuncrtn = get_pc__Vfuncrtn__Vcvt;
    return get_pc__Vfuncrtn;
}

int Vtop::get_inst() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_inst\n"); );
    // Init
    IData/*31:0*/ get_inst__Vfuncrtn__Vcvt;
    get_inst__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_inst");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_inst_t __Vcb = (Vtop__Vcb_get_inst_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), get_inst__Vfuncrtn__Vcvt);
    int get_inst__Vfuncrtn;
    for (size_t get_inst__Vfuncrtn__Vidx = 0; get_inst__Vfuncrtn__Vidx < 1; ++get_inst__Vfuncrtn__Vidx) get_inst__Vfuncrtn = get_inst__Vfuncrtn__Vcvt;
    return get_inst__Vfuncrtn;
}

int Vtop::get_difftest_valid() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_difftest_valid\n"); );
    // Init
    IData/*31:0*/ get_difftest_valid__Vfuncrtn__Vcvt;
    get_difftest_valid__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_difftest_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_difftest_valid_t __Vcb = (Vtop__Vcb_get_difftest_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), get_difftest_valid__Vfuncrtn__Vcvt);
    int get_difftest_valid__Vfuncrtn;
    for (size_t get_difftest_valid__Vfuncrtn__Vidx = 0; get_difftest_valid__Vfuncrtn__Vidx < 1; ++get_difftest_valid__Vfuncrtn__Vidx) get_difftest_valid__Vfuncrtn = get_difftest_valid__Vfuncrtn__Vcvt;
    return get_difftest_valid__Vfuncrtn;
}

int Vtop::get_non_inst() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_non_inst\n"); );
    // Init
    IData/*31:0*/ get_non_inst__Vfuncrtn__Vcvt;
    get_non_inst__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_non_inst");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_non_inst_t __Vcb = (Vtop__Vcb_get_non_inst_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), get_non_inst__Vfuncrtn__Vcvt);
    int get_non_inst__Vfuncrtn;
    for (size_t get_non_inst__Vfuncrtn__Vidx = 0; get_non_inst__Vfuncrtn__Vidx < 1; ++get_non_inst__Vfuncrtn__Vidx) get_non_inst__Vfuncrtn = get_non_inst__Vfuncrtn__Vcvt;
    return get_non_inst__Vfuncrtn;
}

int Vtop::get_gpr(int idx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_gpr\n"); );
    // Init
    IData/*31:0*/ idx__Vcvt;
    idx__Vcvt = 0;
    IData/*31:0*/ get_gpr__Vfuncrtn__Vcvt;
    get_gpr__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_gpr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_gpr_t __Vcb = (Vtop__Vcb_get_gpr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    idx__Vcvt = idx;
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), idx__Vcvt, get_gpr__Vfuncrtn__Vcvt);
    int get_gpr__Vfuncrtn;
    for (size_t get_gpr__Vfuncrtn__Vidx = 0; get_gpr__Vfuncrtn__Vidx < 1; ++get_gpr__Vfuncrtn__Vidx) get_gpr__Vfuncrtn = get_gpr__Vfuncrtn__Vcvt;
    return get_gpr__Vfuncrtn;
}

int Vtop::get_hit_count() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_hit_count\n"); );
    // Init
    IData/*31:0*/ get_hit_count__Vfuncrtn__Vcvt;
    get_hit_count__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_hit_count");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_hit_count_t __Vcb = (Vtop__Vcb_get_hit_count_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), get_hit_count__Vfuncrtn__Vcvt);
    int get_hit_count__Vfuncrtn;
    for (size_t get_hit_count__Vfuncrtn__Vidx = 0; get_hit_count__Vfuncrtn__Vidx < 1; ++get_hit_count__Vfuncrtn__Vidx) get_hit_count__Vfuncrtn = get_hit_count__Vfuncrtn__Vcvt;
    return get_hit_count__Vfuncrtn;
}

int Vtop::get_miss_count() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_miss_count\n"); );
    // Init
    IData/*31:0*/ get_miss_count__Vfuncrtn__Vcvt;
    get_miss_count__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_miss_count");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_miss_count_t __Vcb = (Vtop__Vcb_get_miss_count_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), get_miss_count__Vfuncrtn__Vcvt);
    int get_miss_count__Vfuncrtn;
    for (size_t get_miss_count__Vfuncrtn__Vidx = 0; get_miss_count__Vfuncrtn__Vidx < 1; ++get_miss_count__Vfuncrtn__Vidx) get_miss_count__Vfuncrtn = get_miss_count__Vfuncrtn__Vcvt;
    return get_miss_count__Vfuncrtn;
}

int Vtop::get_dcache_hit_count() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_dcache_hit_count\n"); );
    // Init
    IData/*31:0*/ get_dcache_hit_count__Vfuncrtn__Vcvt;
    get_dcache_hit_count__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_dcache_hit_count");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_dcache_hit_count_t __Vcb = (Vtop__Vcb_get_dcache_hit_count_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), get_dcache_hit_count__Vfuncrtn__Vcvt);
    int get_dcache_hit_count__Vfuncrtn;
    for (size_t get_dcache_hit_count__Vfuncrtn__Vidx = 0; get_dcache_hit_count__Vfuncrtn__Vidx < 1; ++get_dcache_hit_count__Vfuncrtn__Vidx) get_dcache_hit_count__Vfuncrtn = get_dcache_hit_count__Vfuncrtn__Vcvt;
    return get_dcache_hit_count__Vfuncrtn;
}

int Vtop::get_dcache_miss_count() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_dcache_miss_count\n"); );
    // Init
    IData/*31:0*/ get_dcache_miss_count__Vfuncrtn__Vcvt;
    get_dcache_miss_count__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_dcache_miss_count");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_dcache_miss_count_t __Vcb = (Vtop__Vcb_get_dcache_miss_count_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), get_dcache_miss_count__Vfuncrtn__Vcvt);
    int get_dcache_miss_count__Vfuncrtn;
    for (size_t get_dcache_miss_count__Vfuncrtn__Vidx = 0; get_dcache_miss_count__Vfuncrtn__Vidx < 1; ++get_dcache_miss_count__Vfuncrtn__Vidx) get_dcache_miss_count__Vfuncrtn = get_dcache_miss_count__Vfuncrtn__Vcvt;
    return get_dcache_miss_count__Vfuncrtn;
}

int Vtop::get_i_cnt() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_i_cnt\n"); );
    // Init
    IData/*31:0*/ get_i_cnt__Vfuncrtn__Vcvt;
    get_i_cnt__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_i_cnt");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_i_cnt_t __Vcb = (Vtop__Vcb_get_i_cnt_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), get_i_cnt__Vfuncrtn__Vcvt);
    int get_i_cnt__Vfuncrtn;
    for (size_t get_i_cnt__Vfuncrtn__Vidx = 0; get_i_cnt__Vfuncrtn__Vidx < 1; ++get_i_cnt__Vfuncrtn__Vidx) get_i_cnt__Vfuncrtn = get_i_cnt__Vfuncrtn__Vcvt;
    return get_i_cnt__Vfuncrtn;
}

int Vtop::get_d_cnt() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_d_cnt\n"); );
    // Init
    IData/*31:0*/ get_d_cnt__Vfuncrtn__Vcvt;
    get_d_cnt__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_d_cnt");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_d_cnt_t __Vcb = (Vtop__Vcb_get_d_cnt_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), get_d_cnt__Vfuncrtn__Vcvt);
    int get_d_cnt__Vfuncrtn;
    for (size_t get_d_cnt__Vfuncrtn__Vidx = 0; get_d_cnt__Vfuncrtn__Vidx < 1; ++get_d_cnt__Vfuncrtn__Vidx) get_d_cnt__Vfuncrtn = get_d_cnt__Vfuncrtn__Vcvt;
    return get_d_cnt__Vfuncrtn;
}

int Vtop::get_stall_cnt() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_stall_cnt\n"); );
    // Init
    IData/*31:0*/ get_stall_cnt__Vfuncrtn__Vcvt;
    get_stall_cnt__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_stall_cnt");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_stall_cnt_t __Vcb = (Vtop__Vcb_get_stall_cnt_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), get_stall_cnt__Vfuncrtn__Vcvt);
    int get_stall_cnt__Vfuncrtn;
    for (size_t get_stall_cnt__Vfuncrtn__Vidx = 0; get_stall_cnt__Vfuncrtn__Vidx < 1; ++get_stall_cnt__Vfuncrtn__Vidx) get_stall_cnt__Vfuncrtn = get_stall_cnt__Vfuncrtn__Vcvt;
    return get_stall_cnt__Vfuncrtn;
}

int Vtop::get_flush_cnt() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_flush_cnt\n"); );
    // Init
    IData/*31:0*/ get_flush_cnt__Vfuncrtn__Vcvt;
    get_flush_cnt__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_flush_cnt");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_flush_cnt_t __Vcb = (Vtop__Vcb_get_flush_cnt_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), get_flush_cnt__Vfuncrtn__Vcvt);
    int get_flush_cnt__Vfuncrtn;
    for (size_t get_flush_cnt__Vfuncrtn__Vidx = 0; get_flush_cnt__Vfuncrtn__Vidx < 1; ++get_flush_cnt__Vfuncrtn__Vidx) get_flush_cnt__Vfuncrtn = get_flush_cnt__Vfuncrtn__Vcvt;
    return get_flush_cnt__Vfuncrtn;
}

int Vtop::get_bp_total_count() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_bp_total_count\n"); );
    // Init
    IData/*31:0*/ get_bp_total_count__Vfuncrtn__Vcvt;
    get_bp_total_count__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_bp_total_count");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_bp_total_count_t __Vcb = (Vtop__Vcb_get_bp_total_count_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), get_bp_total_count__Vfuncrtn__Vcvt);
    int get_bp_total_count__Vfuncrtn;
    for (size_t get_bp_total_count__Vfuncrtn__Vidx = 0; get_bp_total_count__Vfuncrtn__Vidx < 1; ++get_bp_total_count__Vfuncrtn__Vidx) get_bp_total_count__Vfuncrtn = get_bp_total_count__Vfuncrtn__Vcvt;
    return get_bp_total_count__Vfuncrtn;
}

int Vtop::get_bp_hit_count() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_bp_hit_count\n"); );
    // Init
    IData/*31:0*/ get_bp_hit_count__Vfuncrtn__Vcvt;
    get_bp_hit_count__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_bp_hit_count");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_bp_hit_count_t __Vcb = (Vtop__Vcb_get_bp_hit_count_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), get_bp_hit_count__Vfuncrtn__Vcvt);
    int get_bp_hit_count__Vfuncrtn;
    for (size_t get_bp_hit_count__Vfuncrtn__Vidx = 0; get_bp_hit_count__Vfuncrtn__Vidx < 1; ++get_bp_hit_count__Vfuncrtn__Vidx) get_bp_hit_count__Vfuncrtn = get_bp_hit_count__Vfuncrtn__Vcvt;
    return get_bp_hit_count__Vfuncrtn;
}
