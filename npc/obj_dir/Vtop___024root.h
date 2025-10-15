// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ top__DOT__cpu__DOT__is_jalr;
        CData/*0:0*/ top__DOT__cpu__DOT__is_addi;
        CData/*0:0*/ top__DOT__cpu__DOT__is_andi;
        CData/*0:0*/ top__DOT__cpu__DOT__is_ori;
        CData/*0:0*/ top__DOT__cpu__DOT__is_xori;
        CData/*0:0*/ top__DOT__cpu__DOT__is_lw;
        CData/*0:0*/ top__DOT__cpu__DOT__is_lbu;
        CData/*0:0*/ top__DOT__cpu__DOT__is_lh;
        CData/*0:0*/ top__DOT__cpu__DOT__is_lhu;
        CData/*0:0*/ top__DOT__cpu__DOT__is_seqz;
        CData/*0:0*/ top__DOT__cpu__DOT__is_srai;
        CData/*0:0*/ top__DOT__cpu__DOT__is_srli;
        CData/*0:0*/ top__DOT__cpu__DOT__is_slli;
        CData/*0:0*/ top__DOT__cpu__DOT__is_add;
        CData/*0:0*/ top__DOT__cpu__DOT__is_sub;
        CData/*0:0*/ top__DOT__cpu__DOT__is_xor;
        CData/*0:0*/ top__DOT__cpu__DOT__is_or;
        CData/*0:0*/ top__DOT__cpu__DOT__is_and;
        CData/*0:0*/ top__DOT__cpu__DOT__is_mul;
        CData/*0:0*/ top__DOT__cpu__DOT__is_mulh;
        CData/*0:0*/ top__DOT__cpu__DOT__is_div;
        CData/*0:0*/ top__DOT__cpu__DOT__is_divu;
        CData/*0:0*/ top__DOT__cpu__DOT__is_rem;
        CData/*0:0*/ top__DOT__cpu__DOT__is_remu;
        CData/*0:0*/ top__DOT__cpu__DOT__is_slt;
        CData/*0:0*/ top__DOT__cpu__DOT__is_sltu;
        CData/*0:0*/ top__DOT__cpu__DOT__is_sll;
        CData/*0:0*/ top__DOT__cpu__DOT__is_srl;
        CData/*0:0*/ top__DOT__cpu__DOT__is_sra;
        CData/*0:0*/ top__DOT__cpu__DOT__is_sw;
        CData/*0:0*/ top__DOT__cpu__DOT__is_sb;
        CData/*0:0*/ top__DOT__cpu__DOT__is_sh;
        CData/*0:0*/ top__DOT__cpu__DOT__valid;
        CData/*0:0*/ top__DOT__cpu__DOT__wen;
        CData/*3:0*/ top__DOT__cpu__DOT__op;
        CData/*0:0*/ top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_3;
        CData/*0:0*/ top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_13;
        CData/*0:0*/ top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_17;
        CData/*0:0*/ top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_19;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ top__DOT__cpu__DOT__r2byte;
        VL_OUT(pc,31,0);
        VL_IN(inst,31,0);
        VL_OUT(halt_ret,31,0);
        IData/*31:0*/ top__DOT__cpu__DOT__pc_current;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_next;
        IData/*31:0*/ top__DOT__cpu__DOT__raddr;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_i;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_s;
        IData/*31:0*/ top__DOT__cpu__DOT__rs1_data;
        IData/*31:0*/ top__DOT__cpu__DOT__rs2_data;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_wdata;
        IData/*31:0*/ top__DOT__cpu__DOT__load_wdata;
        IData/*31:0*/ top__DOT__cpu__DOT__rdata;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_a;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_b;
        IData/*31:0*/ top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5;
        IData/*31:0*/ __Vfunc_top__DOT__cpu__DOT__mem__DOT__pmem_read__1__Vfuncout;
    };
    struct {
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__regfile__DOT__regs_out;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
