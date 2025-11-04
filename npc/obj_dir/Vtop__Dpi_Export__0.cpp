// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_dpi.h"


unsigned int Vtop::rf_read(int idx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::rf_read\n"); );
    // Init
    IData/*31:0*/ idx__Vcvt;
    idx__Vcvt = 0;
    IData/*31:0*/ rf_read__Vfuncrtn__Vcvt;
    rf_read__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("rf_read");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_rf_read_t __Vcb = (Vtop__Vcb_rf_read_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    idx__Vcvt = idx;
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), idx__Vcvt, rf_read__Vfuncrtn__Vcvt);
    unsigned int rf_read__Vfuncrtn;
    for (size_t rf_read__Vfuncrtn__Vidx = 0; rf_read__Vfuncrtn__Vidx < 1; ++rf_read__Vfuncrtn__Vidx) rf_read__Vfuncrtn = rf_read__Vfuncrtn__Vcvt;
    return rf_read__Vfuncrtn;
}
