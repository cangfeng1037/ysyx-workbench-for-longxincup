// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_bp_hit_count_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_bp_hit_count__Vfuncrtn);
void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_bp_total_count_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_bp_total_count__Vfuncrtn);
void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_d_cnt_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_d_cnt__Vfuncrtn);
void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_dcache_hit_count_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_dcache_hit_count__Vfuncrtn);
void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_dcache_miss_count_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_dcache_miss_count__Vfuncrtn);
void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_difftest_valid_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_difftest_valid__Vfuncrtn);
void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_flush_cnt_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_flush_cnt__Vfuncrtn);
void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_gpr_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &get_gpr__Vfuncrtn);
void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_hit_count_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_hit_count__Vfuncrtn);
void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_i_cnt_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_i_cnt__Vfuncrtn);
void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_inst_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst__Vfuncrtn);
void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_miss_count_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_miss_count__Vfuncrtn);
void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_non_inst_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_non_inst__Vfuncrtn);
void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_pc_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_pc__Vfuncrtn);
void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_stall_cnt_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_stall_cnt__Vfuncrtn);

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(1245);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_top__difftest_dpi.configure(this, name(), "top.difftest_dpi", "difftest_dpi", "<null>", -9, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_bp_hit_count", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_bp_hit_count_TOP));
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_bp_total_count", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_bp_total_count_TOP));
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_d_cnt", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_d_cnt_TOP));
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_dcache_hit_count", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_dcache_hit_count_TOP));
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_dcache_miss_count", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_dcache_miss_count_TOP));
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_difftest_valid", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_difftest_valid_TOP));
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_flush_cnt", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_flush_cnt_TOP));
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_gpr", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_gpr_TOP));
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_hit_count", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_hit_count_TOP));
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_i_cnt", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_i_cnt_TOP));
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_inst", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_inst_TOP));
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_miss_count", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_miss_count_TOP));
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_non_inst", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_non_inst_TOP));
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_pc", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_pc_TOP));
        __Vscope_top__difftest_dpi.exportInsert(__Vfinal, "get_stall_cnt", (void*)(&Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_stall_cnt_TOP));
    }
}
