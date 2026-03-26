// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vtop__Vcb_get_difftest_valid_t = void (*) (Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_difftest_valid__Vfuncrtn);
using Vtop__Vcb_get_gpr_t = void (*) (Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &get_gpr__Vfuncrtn);
using Vtop__Vcb_get_hit_count_t = void (*) (Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_hit_count__Vfuncrtn);
using Vtop__Vcb_get_inst_t = void (*) (Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst__Vfuncrtn);
using Vtop__Vcb_get_miss_count_t = void (*) (Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_miss_count__Vfuncrtn);
using Vtop__Vcb_get_non_inst_t = void (*) (Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_non_inst__Vfuncrtn);
using Vtop__Vcb_get_pc_t = void (*) (Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_pc__Vfuncrtn);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_top__difftest_dpi;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
