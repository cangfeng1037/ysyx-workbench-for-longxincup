// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

void Vtop___024root____Vdpiexp_top__DOT__cpu__DOT__regfile__DOT__rf_read_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &rf_read__Vfuncrtn);

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
        Verilated::stackCheck(57);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_top__cpu__regfile.configure(this, name(), "top.cpu.regfile", "regfile", "<null>", -12, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_top__cpu__regfile.exportInsert(__Vfinal, "rf_read", (void*)(&Vtop___024root____Vdpiexp_top__DOT__cpu__DOT__regfile__DOT__rf_read_TOP));
    }
}
