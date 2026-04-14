// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__io_halt__0 = vlSelfRef.io_halt;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_halt_ret = 0U;
    vlSelfRef.io_non_inst = 0U;
    vlSelfRef.io_master_awlen = 0U;
    vlSelfRef.io_master_awburst = 0U;
    vlSelfRef.io_slave_awready = 0U;
    vlSelfRef.io_slave_wready = 0U;
    vlSelfRef.io_slave_bvalid = 0U;
    vlSelfRef.io_slave_bresp = 0U;
    vlSelfRef.io_slave_bid = 0U;
    vlSelfRef.io_slave_arready = 0U;
    vlSelfRef.io_slave_rvalid = 0U;
    vlSelfRef.io_slave_rresp = 0U;
    vlSelfRef.io_slave_rdata = 0U;
    vlSelfRef.io_slave_rlast = 0U;
    vlSelfRef.io_slave_rid = 0U;
    vlSelfRef.io_gpr_0 = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("verilog/core/top.sv", 12671, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 2048> Vtop__ConstPool__TABLE_h02e7d842_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_5;
    top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_5 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_11;
    top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_11 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_12;
    top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_12 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_13;
    top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_13 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_14;
    top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_14 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN;
    top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14;
    top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_2;
    top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_2 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_14;
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_14 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_18;
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_18 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_21;
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_21 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_23;
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_23 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_26;
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_26 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_2;
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_2 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11;
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12;
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13;
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20;
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_6;
    top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_6 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_3;
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_3 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_4;
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_4 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_13;
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_13 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_14;
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_14 = 0;
    IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_1;
    __VdfgRegularize_hd87f99a1_0_1 = 0;
    IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_3;
    __VdfgRegularize_hd87f99a1_0_3 = 0;
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.io_pc = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__pc;
    vlSelfRef.io_inst = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__inst;
    vlSelfRef.io_commit_addr = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__addr;
    vlSelfRef.io_difftest_valid = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state;
    vlSelfRef.top__DOT__npc_cpu__DOT___GEN = ((0xa000ffffU 
                                               < vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__pc) 
                                              | (8U 
                                                 == 
                                                 (vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__pc 
                                                  >> 0x1cU)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr 
        = ((0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
            ? 0x305U : ((0x30200073U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                         ? 0x341U : (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                     >> 0x14U)));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__in_ready 
        = (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_0 
        = (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__io_in_ready_0 
        = (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN 
        = (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_6 
        = (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_24 
        = (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_13 
        = (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_19 
        = (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___read_tags_3_T 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___read_en_T_1 
        = (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_7 
        = (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_9 
        = (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__read_en 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           | (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT___lo_next_T 
        = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low);
    vlSelfRef.io_gpr_1 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_1;
    vlSelfRef.io_gpr_2 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_2;
    vlSelfRef.io_gpr_3 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_3;
    vlSelfRef.io_gpr_4 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_4;
    vlSelfRef.io_gpr_5 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_5;
    vlSelfRef.io_gpr_6 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_6;
    vlSelfRef.io_gpr_7 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_7;
    vlSelfRef.io_gpr_8 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_8;
    vlSelfRef.io_gpr_9 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_9;
    vlSelfRef.io_gpr_10 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_10;
    vlSelfRef.io_gpr_11 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_11;
    vlSelfRef.io_gpr_12 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_12;
    vlSelfRef.io_gpr_13 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_13;
    vlSelfRef.io_gpr_14 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_14;
    vlSelfRef.io_gpr_15 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_15;
    vlSelfRef.io_gpr_16 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_16;
    vlSelfRef.io_gpr_17 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_17;
    vlSelfRef.io_gpr_18 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_18;
    vlSelfRef.io_gpr_19 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_19;
    vlSelfRef.io_gpr_20 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_20;
    vlSelfRef.io_gpr_21 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_21;
    vlSelfRef.io_gpr_22 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_22;
    vlSelfRef.io_gpr_23 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_23;
    vlSelfRef.io_gpr_24 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_24;
    vlSelfRef.io_gpr_25 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_25;
    vlSelfRef.io_gpr_26 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_26;
    vlSelfRef.io_gpr_27 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_27;
    vlSelfRef.io_gpr_28 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_28;
    vlSelfRef.io_gpr_29 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_29;
    vlSelfRef.io_gpr_30 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_30;
    vlSelfRef.io_gpr_31 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_31;
    vlSelfRef.io_halt = ((0x100073U == vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__inst) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jalr_T 
        = (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a 
           + vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b);
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jal_T 
        = (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b 
           + vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc);
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_27 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt) 
           == (7U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg) 
                     >> 2U)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lookup_word_addr 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg) 
            << 3U) | (7U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg) 
                            >> 2U)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_13 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg) 
            << 3U) | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___read_addr_T_3 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg) 
            << 3U) | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_2 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg) 
            << 3U) | (7U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg) 
                            >> 2U)));
    vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_en) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_idx_s0 
        = (0x3ffU & (vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_pc_s0 
                     ^ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_ghr_s0)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rand_way 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_1) 
            << 1U) | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0));
    vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_wen 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb) 
              | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh)));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
           & ((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state)) 
              & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state))
                  ? ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__out_sent)) 
                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__req_sent))
                  : (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__read_addr 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg) 
            << 3U) | (7U & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))
                             ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg) 
                                >> 2U) : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__io_mem_req_valid_0 
        = ((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state)) 
           & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__req_sent)) 
              & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state))));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_load) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_store));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__isTargetWord 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt) 
           == (7U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg) 
                     >> 2U)));
    vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_en_d0)
            ? vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory
           [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_addr_d0]
            : 0U);
    top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_11 
        = (IData)((0x33U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_12 
        = (IData)((0x7033U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_14 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_2 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lb) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lw) 
              | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lbu) 
                 | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lh) 
                    | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lhu) 
                       | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sw) 
                          | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sb) 
                             | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sh))))))));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__imm_i 
        = (((- (IData)((vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                        >> 0x1fU))) << 0xcU) | (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                >> 0x14U));
    if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass) {
        __VdfgRegularize_hd87f99a1_0_1 = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_addr_reg;
        vlSelfRef.__VdfgRegularize_hd87f99a1_0_2 = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_data_reg;
    } else {
        __VdfgRegularize_hd87f99a1_0_1 = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg;
        vlSelfRef.__VdfgRegularize_hd87f99a1_0_2 = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_data_reg;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_slli 
        = (IData)((0x1013U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_3_ext_R0_data 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT___R0_en_d0)
            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory
           [vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT___R0_addr_d0]
            : 0U);
    if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT___R0_en_d0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_0_ext_R0_data 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory
            [vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT___R0_addr_d0];
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_1_ext_R0_data 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory
            [vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT___R0_addr_d0];
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_2_ext_R0_data 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory
            [vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT___R0_addr_d0];
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_3_ext_R0_data 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory
            [vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT___R0_addr_d0];
    } else {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_0_ext_R0_data = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_1_ext_R0_data = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_2_ext_R0_data = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_3_ext_R0_data = 0U;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32 
        = ((((- (IData)((1U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg) 
                               >> 3U)))) << 0x18U) 
            | (0xff0000U & ((- (IData)((1U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg) 
                                              >> 2U)))) 
                            << 0x10U))) | ((0xff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg) 
                                                              >> 1U)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg)))))));
    top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_6 
        = ((2U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
           | (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_2_ext_R0_data 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT___R0_en_d0)
            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory
           [vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_18 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg));
    if ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
        if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_31;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_30;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_29;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_28;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_27;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_26;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_25;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_24;
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_23;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_22;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_21;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_20;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_19;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_18;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_17;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_16;
        }
    } else if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_15;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_14;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_13;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_12;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_11;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_10;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_9;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_8;
        }
    } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
        if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_7;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_6;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_5;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_4;
        }
    } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_3;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_2;
        }
    } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
            = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_1;
    } else {
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp 
            = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_0;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_1_ext_R0_data 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT___R0_en_d0)
            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory
           [vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_0_ext_R0_data 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT___R0_en_d0)
            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory
           [vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_val_out 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrs) 
            | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrw))
            ? vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_rdata
            : (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jal) 
                | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jalr))
                ? ((IData)(4U) + vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__pc)
                : vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu__DOT__casez_tmp 
        = ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
            ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
                        ? 0U : (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a 
                                < vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b))
                    : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
                        ? VL_LTS_III(32, vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a, vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b)
                        : VL_MODDIV_III(32, vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a, vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b)))
                : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
                        ? VL_MODDIVS_III(32, vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a, vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b)
                        : VL_DIV_III(32, vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a, vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b))
                    : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
                        ? (IData)((0x1ffffffffULL & 
                                   VL_DIVS_QQQ(33, 
                                               (((QData)((IData)(
                                                                 (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a 
                                                                  >> 0x1fU))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a))), 
                                               (((QData)((IData)(
                                                                 (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b 
                                                                  >> 0x1fU))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b))))))
                        : (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a 
                           * vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b))))
            : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a, 
                                         (0x1fU & vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b))
                        : (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a 
                           >> (0x1fU & vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b)))
                    : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
                        ? (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a 
                           << (0x1fU & vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b))
                        : (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a 
                           ^ vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b)))
                : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
                        ? (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a 
                           | vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b)
                        : (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a 
                           & vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b))
                    : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op))
                        ? (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a 
                           - vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b)
                        : (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a 
                           + vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp 
        = ((0x80000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
            ? ((0x40000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                ? ((0x20000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                    ? ((0x10000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_31
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_30)
                        : ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_29
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_28))
                    : ((0x10000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_27
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_26)
                        : ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_25
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_24)))
                : ((0x20000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                    ? ((0x10000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_23
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_22)
                        : ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_21
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_20))
                    : ((0x10000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_19
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_18)
                        : ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_17
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_16))))
            : ((0x40000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                ? ((0x20000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                    ? ((0x10000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_15
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_14)
                        : ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_13
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_12))
                    : ((0x10000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_11
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_10)
                        : ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_9
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_8)))
                : ((0x20000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                    ? ((0x10000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_7
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_6)
                        : ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_5
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_4))
                    : ((0x10000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_3
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_2)
                        : ((0x8000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_1
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_0)))));
    vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_val_out 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrs) 
            | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrw))
            ? vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_rdata
            : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load)
                ? vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__mem_data
                : (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jal) 
                    | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jalr))
                    ? ((IData)(4U) + vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__pc)
                    : vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_csrrs) 
            | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_csrrw))
            ? vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_rdata
            : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_load)
                ? vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__mem_data
                : (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_jal) 
                    | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_jalr))
                    ? ((IData)(4U) + vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__pc)
                    : vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__addr)));
    top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_5 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_4 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase));
    vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp_0 
        = ((0x1000000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
            ? ((0x800000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                ? ((0x400000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                    ? ((0x200000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_31
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_30)
                        : ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_29
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_28))
                    : ((0x200000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_27
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_26)
                        : ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_25
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_24)))
                : ((0x400000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                    ? ((0x200000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_23
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_22)
                        : ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_21
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_20))
                    : ((0x200000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_19
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_18)
                        : ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_17
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_16))))
            : ((0x800000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                ? ((0x400000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                    ? ((0x200000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_15
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_14)
                        : ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_13
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_12))
                    : ((0x200000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_11
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_10)
                        : ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_9
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_8)))
                : ((0x400000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                    ? ((0x200000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_7
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_6)
                        : ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_5
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_4))
                    : ((0x200000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_3
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_2)
                        : ((0x100000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_1
                            : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_0)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending)) 
                 & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__rand_way 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_1) 
            << 1U) | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0));
    vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_rd_en 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_en) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_0 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lbu) 
            | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lw)) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lh) 
              | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lb) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lhu))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_en) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_out_valid 
        = ((~ ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
               | (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)))) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)));
    if ((0x20U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
        if ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63;
                        } else {
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62;
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56;
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48;
            }
        } else if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40;
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32;
        }
    } else if ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
        if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24;
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16;
        }
    } else if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8;
        }
    } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
        if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4;
        }
    } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2;
        }
    } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1;
    } else {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_4 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
           | (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_taken 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_beq)
            ? (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs1_data 
               == vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs2_data)
            : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bne)
                ? (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs1_data 
                   != vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs2_data)
                : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_blt)
                    ? VL_LTS_III(32, vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs1_data, vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs2_data)
                    : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bltu)
                        ? (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs1_data 
                           < vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs2_data)
                        : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bge)
                            ? VL_GTES_III(32, vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs1_data, vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs2_data)
                            : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bgeu) 
                               & (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs1_data 
                                  >= vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs2_data)))))));
    vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_is_branch 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_beq) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bne) 
              | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_blt) 
                 | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bltu) 
                    | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bge) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bgeu))))));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_11 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy) 
           & ((~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu) 
                  | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase))) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_31 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           | (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_valid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_en) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_15 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           | (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_13 
        = ((0x33U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
           | (0x13U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr 
        = (IData)((0x67U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lw 
        = (IData)((0x2003U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lb 
        = (IData)((3U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lh 
        = (IData)((0x1003U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    if (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state) {
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_0 
            = (0U != (0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                               >> 0xfU)));
        vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1 
            = (0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                        >> 0xfU));
        vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2 
            = (0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                        >> 0x14U));
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_2 
            = (0U != (0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                               >> 0x14U)));
    } else {
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_0 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_2 = 0U;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_5 
        = ((2U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_25 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           | (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sw 
        = (IData)((0x2023U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sb 
        = (IData)((0x23U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sh 
        = (IData)((0x1023U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_beq 
        = (IData)((0x63U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bne 
        = (IData)((0x1063U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_blt 
        = (IData)((0x4063U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bge 
        = (IData)((0x5063U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1 
        = (1U & ((~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))) 
                 | (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__out_valid) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_34 
        = ((~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__io_mem_req_valid_0));
    vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_bypass 
        = (((~ ((0x28U == (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                           >> 0x1aU)) | ((0x20U == 
                                          (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                                           >> 0x1aU)) 
                                         | (0x8000U 
                                            == (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                                                >> 0x10U))))) 
            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_store)) 
           | ((0xa0010000U > vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__pc) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_1)));
    vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT____Vcellinp__pht_ext__W0_data 
        = (3U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s1)
                  ? (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_en_d0) 
                      & (3U == vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory
                         [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_addr_d0]))
                      ? 3U : ((IData)(1U) + (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data)))
                  : ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data))
                      ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data) 
                              - (IData)(1U)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3 
        = (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg 
           & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32);
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp) 
              == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__load_tag)));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_srli 
        = ((~ (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
               >> 0x1eU)) & (IData)(top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_5));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_srai 
        = ((IData)(top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_5) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
              >> 0x1eU));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_5 
        = (1U & ((~ (IData)(top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_4)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_12 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
           & (IData)(top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_4));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem1HasRd 
        = (((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_load)) 
            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_rd_en)) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
        = ((0x20U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
            ? ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_63)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_62))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_61)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_60)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_59)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_58))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_57)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_56))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_55)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_54))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_53)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_52)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_51)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_50))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_49)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_48)))))
                : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_47)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_46))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_45)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_44)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_43)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_42))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_41)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_40))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_39)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_38))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_37)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_36)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_35)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_34))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_33)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_32))))))
            : ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_31)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_30))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_29)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_28)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_27)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_26))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_25)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_24))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_23)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_22))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_21)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_20)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_19)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_18))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_17)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_16)))))
                : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_15)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_14))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_13)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_12)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_11)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_10))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_9)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_8))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_7)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_6))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_5)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_4)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_3)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_2))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_1)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_0)))))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit3 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_3_ext_R0_data 
              == vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
        = ((0x20U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
            ? ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_63)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_62))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_61)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_60)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_59)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_58))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_57)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_56))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_55)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_54))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_53)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_52)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_51)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_50))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_49)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_48)))))
                : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_47)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_46))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_45)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_44)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_43)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_42))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_41)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_40))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_39)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_38))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_37)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_36)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_35)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_34))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_33)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_32))))))
            : ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_31)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_30))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_29)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_28)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_27)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_26))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_25)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_24))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_23)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_22))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_21)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_20)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_19)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_18))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_17)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_16)))))
                : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_15)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_14))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_13)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_12)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_11)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_10))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_9)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_8))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_7)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_6))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_5)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_4)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_3)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_2))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_1)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_0)))))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_2_ext_R0_data 
              == vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
        = ((0x20U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
            ? ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_63)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_62))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_61)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_60)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_59)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_58))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_57)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_56))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_55)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_54))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_53)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_52)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_51)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_50))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_49)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_48)))))
                : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_47)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_46))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_45)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_44)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_43)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_42))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_41)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_40))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_39)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_38))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_37)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_36)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_35)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_34))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_33)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_32))))))
            : ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_31)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_30))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_29)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_28)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_27)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_26))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_25)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_24))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_23)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_22))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_21)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_20)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_19)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_18))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_17)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_16)))))
                : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_15)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_14))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_13)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_12)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_11)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_10))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_9)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_8))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_7)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_6))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_5)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_4)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_3)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_2))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_1)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_0)))))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_1_ext_R0_data 
              == vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
        = ((0x20U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
            ? ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_63)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_62))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_61)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_60)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_59)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_58))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_57)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_56))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_55)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_54))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_53)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_52)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_51)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_50))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_49)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_48)))))
                : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_47)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_46))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_45)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_44)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_43)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_42))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_41)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_40))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_39)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_38))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_37)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_36)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_35)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_34))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_33)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_32))))))
            : ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_31)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_30))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_29)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_28)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_27)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_26))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_25)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_24))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_23)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_22))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_21)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_20)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_19)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_18))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_17)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_16)))))
                : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_15)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_14))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_13)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_12)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_11)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_10))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_9)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_8))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_7)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_6))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_5)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_4)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_3)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_2))
                            : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_1)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_0)))))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_0_ext_R0_data 
              == vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2) 
            & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0))))
            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__rand_way)
            : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp)
                ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0)
                    ? (2U | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1))
                    : 1U) : 0U));
    if ((0x20U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
        if ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                            if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_63;
                                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63;
                            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_63;
                                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63;
                            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_63;
                                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63;
                            } else {
                                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_63;
                                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63;
                            }
                        } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62;
                        } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62;
                        } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62;
                        } else {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62;
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                        if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_61;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61;
                        } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_61;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61;
                        } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_61;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61;
                        } else {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_61;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61;
                        }
                    } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                        if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_59;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59;
                        } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_59;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59;
                        } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_59;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59;
                        } else {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_59;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59;
                        }
                    } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_57;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_57;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_57;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_57;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57;
                    }
                } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56;
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                        if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_55;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55;
                        } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_55;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55;
                        } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_55;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55;
                        } else {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_55;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55;
                        }
                    } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_53;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_53;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_53;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_53;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53;
                    }
                } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_51;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_51;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_51;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_51;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51;
                    }
                } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_49;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_49;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_49;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_49;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49;
                }
            } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48;
            }
        } else if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                        if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_47;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47;
                        } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_47;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47;
                        } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_47;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47;
                        } else {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_47;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47;
                        }
                    } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_45;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_45;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_45;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_45;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45;
                    }
                } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_43;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_43;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_43;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_43;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43;
                    }
                } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_41;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_41;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_41;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_41;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41;
                }
            } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40;
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_39;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_39;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_39;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_39;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39;
                    }
                } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_37;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_37;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_37;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_37;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37;
                }
            } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_35;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_35;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_35;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_35;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35;
                }
            } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_33;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_33;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_33;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_33;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33;
            }
        } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32;
        } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32;
        } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32;
        }
    } else if ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
        if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                        if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_31;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31;
                        } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_31;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31;
                        } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_31;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31;
                        } else {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_31;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31;
                        }
                    } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_29;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_29;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_29;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_29;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29;
                    }
                } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_27;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_27;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_27;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_27;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27;
                    }
                } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_25;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_25;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_25;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_25;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25;
                }
            } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24;
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_23;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_23;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_23;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_23;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23;
                    }
                } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_21;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_21;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_21;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_21;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21;
                }
            } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_19;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_19;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_19;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_19;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19;
                }
            } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_17;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_17;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_17;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_17;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17;
            }
        } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16;
        } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16;
        } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16;
        }
    } else if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_15;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_15;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15;
                    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_15;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_15;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15;
                    }
                } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_13;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_13;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_13;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_13;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13;
                }
            } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_11;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_11;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_11;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_11;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11;
                }
            } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_9;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_9;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_9;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_9;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9;
            }
        } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8;
        } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8;
        } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8;
        }
    } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
        if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7;
                } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7;
                }
            } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5;
            }
        } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4;
        } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4;
        } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4;
        }
    } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3;
            } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3;
            }
        } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2;
        } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2;
        } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2;
        }
    } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
        if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1;
        } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1;
        } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1;
        }
    } else if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0;
    } else if ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0;
    } else if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0;
    } else {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32 
        = (((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state)) 
            & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_out_valid) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6)))) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT___GEN 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_out_valid));
    vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_valid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_en) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_out_valid));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit0 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_tag_reg 
              == vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_0));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_tag_reg 
              == vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_1));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit2 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_tag_reg 
              == vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_2));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit3 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_tag_reg 
              == vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_3));
    vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_branch_bits_is_branch_taken 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_taken) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_is_branch));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_11) 
           & (IData)(vlSelfRef.io_master_bvalid));
    if (vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_valid) {
        vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out 
            = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_rd_addr 
            = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__wbHasRd 
            = (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr));
    } else {
        vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_rd_addr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__wbHasRd = 0U;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           | ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
              | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_15)));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_10 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrs));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_load 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lw) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lbu) 
              | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lh) 
                 | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lhu) 
                    | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lb)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_1 
        = ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
            ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                    ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_31)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_30))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_29)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_28)))
                    : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_27)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_26))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_25)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_24))))
                : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                    ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_23)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_22))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_21)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_20)))
                    : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_19)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_18))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_17)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_16)))))
            : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                    ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_15)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_14))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_13)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_12)))
                    : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_11)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_10))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_9)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_8))))
                : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                    ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_7)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_6))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_5)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_4)))
                    : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_3)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_2))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_1)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_0))))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_7 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1) 
            == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_0));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_2 
        = ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
            ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                    ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_31)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_30))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_29)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_28)))
                    : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_27)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_26))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_25)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_24))))
                : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                    ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_23)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_22))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_21)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_20)))
                    : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_19)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_18))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_17)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_16)))))
            : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                    ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_15)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_14))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_13)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_12)))
                    : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_11)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_10))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_9)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_8))))
                : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                    ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_7)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_6))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_5)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_4)))
                    : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_3)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_2))
                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2))
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_1)
                            : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_0))))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_5 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2) 
            == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_2));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data 
        = (((1U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
            | (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)))
            ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7)
                     ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint)
                              ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)
                                  ? ((0x200bff8U == vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                      ? vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low
                                      : ((0x200bffcU 
                                          == vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                          ? vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high
                                          : 0U)) : 0U)
                              : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)
                                  ? 0U : vlSelfRef.io_master_rdata))));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rlast 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7)) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint) 
              | ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                 & (IData)(vlSelfRef.io_master_rlast))));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7)) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint)
               ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)
               : ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                  & (IData)(vlSelfRef.io_master_rvalid))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_6 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_15) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_25));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_store 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sw) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sb) 
              | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sh)));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_branch 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bne) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_beq) 
              | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bge) 
                 | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bgeu) 
                    | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_blt) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bltu))))));
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_2 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1) 
           | (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_check_now 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_1) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_expect_valid_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now 
        = ((~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__first_inst_reg) 
               | (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg 
                  == vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc))) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_1));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_alu_op 
        = (((IData)(top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_11) 
            & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
               >> 0x1eU)) ? 1U : (((IData)(top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_12) 
                                   | (IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))))
                                   ? 2U : (((IData)(top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_13) 
                                            & (0x6000U 
                                               == (0x7000U 
                                                   & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))
                                            ? 3U : 
                                           (((IData)(top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_13) 
                                             & (0x4000U 
                                                == 
                                                (0x7000U 
                                                 & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))
                                             ? 4U : 
                                            (((IData)(
                                                      (0x1033U 
                                                       == 
                                                       (0x4000707fU 
                                                        & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))) 
                                              | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_slli))
                                              ? 5U : 
                                             ((((IData)(top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_14) 
                                                & (IData)(
                                                          (0U 
                                                           == 
                                                           (0xfe000000U 
                                                            & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))) 
                                               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_srli))
                                               ? 6U
                                               : ((
                                                   ((IData)(top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_14) 
                                                    & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                       >> 0x1eU)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_srai))
                                                   ? 7U
                                                   : 
                                                  ((IData)(
                                                           (0x2033U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))
                                                    ? 0xdU
                                                    : 
                                                   ((IData)(
                                                            (0x3033U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))
                                                     ? 0xeU
                                                     : 
                                                    ((IData)(
                                                             (0x2013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))
                                                      ? 0xdU
                                                      : 
                                                     ((IData)(
                                                              (0x3013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))
                                                       ? 0xeU
                                                       : 
                                                      (((IData)(top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_11) 
                                                        & (1U 
                                                           == 
                                                           (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                            >> 0x19U)))
                                                        ? 8U
                                                        : 
                                                       ((IData)(
                                                                (0x2004033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))
                                                         ? 9U
                                                         : 
                                                        (((IData)(top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_14) 
                                                          & (1U 
                                                             == 
                                                             (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                              >> 0x19U)))
                                                          ? 0xaU
                                                          : 
                                                         ((IData)(
                                                                  (0x2006033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))
                                                           ? 0xbU
                                                           : 
                                                          (((IData)(top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_12) 
                                                            & (1U 
                                                               == 
                                                               (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                                >> 0x19U)))
                                                            ? 0xcU
                                                            : 0U))))))))))))))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1) 
              | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit3))));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_3 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT___GEN));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem2HasRd 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_valid) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit0) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit1) 
              | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit2) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit3))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__mergedWord 
        = (((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
            & vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data) 
           | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3);
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rdata 
        = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                  | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
            ? 0U : vlSelfRef.io_master_rdata);
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_10 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last 
        = ((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
           & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
               ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rlast)
               : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_5)));
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_26 = 
        ((9U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
         | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_6));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state) 
           & ((IData)(top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_13) 
              | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_load) 
                 | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_store) 
                    | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_branch) 
                       | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr) 
                          | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_10)))))));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs2 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state) 
           & ((0x33U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
              | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_store) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_branch))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_2) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_20 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_2) 
           | (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_out_valid 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__out_valid));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_0 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_98 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_4 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_3)) 
                 | (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lineWordData 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg) 
            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__isTargetWord))
            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__mergedWord
            : vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data);
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_10) 
           & (IData)(vlSelfRef.io_master_rlast));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_10) 
           & (IData)(vlSelfRef.io_master_rvalid));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_33 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last)));
    __VdfgRegularize_hd87f99a1_0_3 = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))
                                       ? (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wb_addr 
                                          + ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt) 
                                             << 2U))
                                       : ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_26)
                                           ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs1));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs2));
    if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_20) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wsize_0 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wmask_0 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wdata_0 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0 = 0U;
    } else {
        if ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wsize_0 = 2U;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wmask_0 = 0xfU;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wdata_0 
                = (((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                     ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_0_ext_R0_data) 
                   | (((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_1_ext_R0_data
                        : 0U) | (((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                   ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_2_ext_R0_data
                                   : 0U) | ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                             ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_3_ext_R0_data
                                             : 0U))));
        } else if (top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_26) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wsize_0 = 0U;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wmask_0 = 0U;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wdata_0 = 0U;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wsize_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wsize_reg;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wmask_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wdata_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg;
        }
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0 
            = __VdfgRegularize_hd87f99a1_0_3;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_valid 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_20)) 
           & ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
              | ((5U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                 & ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                    | ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_25)) 
                       & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))))));
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_21 = 
        ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_20) 
         | (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_out_valid));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__exu_fwd_live_valid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_out_valid)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_14 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_0));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_21 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem2_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem2HasRd) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_7)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem1_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem1HasRd) 
              & (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1) 
                  == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_addr)) 
                 & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_0))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_wb_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__wbHasRd) 
              & (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1) 
                  == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_rd_addr)) 
                 & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_0))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem2_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem2HasRd) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_5)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem1_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem1HasRd) 
              & (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2) 
                  == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_addr)) 
                 & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_2))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_wb_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__wbHasRd) 
              & (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2) 
                  == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_rd_addr)) 
                 & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_2))));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0 
        = (((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_20)) 
            & ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
               | ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_6)) 
                  & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))))) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_valid));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_10 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_21) 
           | (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_resp_ready 
        = ((~ (IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_21)) 
           & ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
              | ((6U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                 & ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                    | ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_31)) 
                       & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))))));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_3 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_2));
    vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_is_branch) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_2 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state)) 
                 | ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T)) 
                    | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now))));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__io_load_tag_alloc_valid_0 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_0) 
              & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en) 
                 & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T));
    if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__exu_fwd_live_valid) {
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__hold_capture 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T;
        vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_val_out 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu__DOT__casez_tmp;
        vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_is_load 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_addr 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr;
    } else {
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__hold_capture = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_val_out 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_val_out;
        vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_is_load 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_is_load;
        vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_addr 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_addr;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_valid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__exu_fwd_live_valid) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_valid));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_19 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_14));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_6 = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem1_dep) 
                                                | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem2_dep) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_wb_dep)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_5 = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem1_dep) 
                                                | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem2_dep) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_wb_dep)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_1 
        = ((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_arvalid 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
           & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0)) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_valid)));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0));
    vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_burst 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_10)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_18));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_21 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_10) 
           | ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
              | (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_11 
        = ((6U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_10));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_bready_0 
        = ((~ ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
               | ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                  | (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))))) 
           & ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_resp_ready)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_rready_0 
        = ((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
           & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_resp_ready)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_8 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_resp_ready) 
           & ((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
              & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid)
                  : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_5) 
                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid)))));
    top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__io_load_tag_alloc_valid_0) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__redirect_valid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_1));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_10 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_addr) 
            == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_0));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_8 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_addr) 
            == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_2));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_9 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__exu_fwd_live_valid)
             ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en)
             : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en)) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_2 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_valid)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_1)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_4 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_3 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy)) 
                 & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid))));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awaddr 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid)
            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0
            : 0U);
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_2 
        = (((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
            & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state))) 
           & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_21)) 
              & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))));
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_23 = 
        ((8U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
         | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_21));
    vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_rsize 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_11)
            ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg)
                     ? 2U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__rsize_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_bready_0 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_11) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_bready_0));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_rready 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7)) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_rready_0) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_359 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_8));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_357 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_8));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_0 
        = ((~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)))) 
           & (IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_1 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_2 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_3 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_4 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_5 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_6 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_7 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_8 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_9 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_10 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_11 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_12 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_13 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_14 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_15 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_16 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_17 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_18 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_19 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_20 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_21 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_22 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_23 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_24 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_25 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_26 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_27 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_28 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_29 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_30 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_31 
        = ((IData)(top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN) 
           & (0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__redirect_valid) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_1) 
              & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jal) 
                 | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_branch_bits_is_branch_taken) 
                    | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jalr) 
                       | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_ecall) 
                          | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_mret)))))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__exuHasRd 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_valid) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_9));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_araddr 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_2)
            ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_11)
                     ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg)
                              ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__line_base
                              : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_addr_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__isClintWrite 
        = ((0U != ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid)
                    ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_20)
                        ? 0U : (__VdfgRegularize_hd87f99a1_0_3 
                                >> 0x19U)) : 0U)) & 
           (0x200c000U > vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awaddr));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__halfData 
        = (0xffffU & ((1U & ((~ (IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_23)) 
                             & (__VdfgRegularize_hd87f99a1_0_1 
                                >> 1U))) ? ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_23)
                                             ? 0U : 
                                            (vlSelfRef.__VdfgRegularize_hd87f99a1_0_2 
                                             >> 0x10U))
                       : ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_23)
                           ? 0U : vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)));
    if (top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_23) {
        vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_addr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data = 0U;
    } else {
        vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_addr 
            = __VdfgRegularize_hd87f99a1_0_1;
        vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data 
            = vlSelfRef.__VdfgRegularize_hd87f99a1_0_2;
    }
    vlSelfRef.io_master_bready = vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_bready_0;
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_9 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_rready));
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_14 = 
        ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_357) 
         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) 
           | (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__exuHasRd) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_10)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__exuHasRd) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_8)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__isClintWrite)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp 
        = (0xffU & ((0U == (3U & vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_addr))
                     ? vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data
                     : ((1U == (3U & vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_addr))
                         ? (vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data 
                            >> 8U) : ((2U == (3U & vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_addr))
                                       ? (vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data 
                                          >> 0x10U)
                                       : (vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data 
                                          >> 0x18U)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
           & (IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_14));
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_18 = 
        ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_14) 
         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_5 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_4));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_ready 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_is_load)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_dep));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_ready 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_is_load)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_dep));
    vlSelfRef.io_master_wlast = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy)
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_12)
                                  : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wdata 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
            ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0)
                ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wdata_0
                : 0U) : ((IData)(top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_6)
                          ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wdata));
    vlSelfRef.io_master_wdata = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy)
                                  ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_5)
                                      ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wdata)
                                  : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN)
                                      ? vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wdata
                                      : 0U));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wstrb 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
            ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0)
                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wmask_0)
                : 0U) : ((IData)(top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_6)
                          ? 0U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wmask)));
    vlSelfRef.io_master_wstrb = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy)
                                  ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_5)
                                      ? 0U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wstrb))
                                  : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN)
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wstrb)
                                      : 0U));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0)
            : ((1U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
               & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))));
    if (vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy) {
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_wvalid_0 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_12) 
               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0));
        vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_12) 
               & (IData)(vlSelfRef.io_master_wready));
    } else {
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_wvalid_0 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN) 
               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0));
        vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN) 
               & (IData)(vlSelfRef.io_master_wready));
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_17 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
           & (IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_18));
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20 
        = ((~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))) 
           & (IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_18));
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_18) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)));
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_18) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)));
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_18) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_5) 
           | ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
              | (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))));
    vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_5) 
           | ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
               ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit) 
                  | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg))
               : ((4U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                  | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg))));
    vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_valid 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_5)) 
                 & ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                     ? (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit))
                     : (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)))));
    vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs1_fwd_en 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_ready) 
           | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_6));
    vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs2_fwd_en 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_ready) 
           | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_5));
    vlSelfRef.io_master_wvalid = vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_wvalid_0;
    vlSelfRef.io_master_awid = vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0;
    if (vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0) {
        vlSelfRef.io_master_awaddr = vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awaddr;
        vlSelfRef.io_master_awsize = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid) 
                                       & (3U > (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wsize_0)))
                                       ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wsize_0)
                                       : 2U);
        vlSelfRef.io_master_awvalid = vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid;
    } else {
        vlSelfRef.io_master_awaddr = 0U;
        vlSelfRef.io_master_awsize = 0U;
        vlSelfRef.io_master_awvalid = 0U;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0) 
              & (IData)(vlSelfRef.io_master_awready)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_99 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_100 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_101 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_102 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_103 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_104 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_105 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_106 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_107 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_108 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_109 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_110 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_111 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_112 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_113 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_114 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_115 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_116 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_117 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_118 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_119 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_120 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_121 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_122 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_123 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_124 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_125 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_126 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_127 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_128 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_129 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_130 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_131 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_132 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_133 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_134 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_135 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_136 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_137 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_138 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_139 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_140 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_141 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_142 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_143 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_144 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_145 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_146 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_147 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_148 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_149 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_150 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_151 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_152 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_153 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_154 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_155 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_156 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_157 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_158 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_159 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_160 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_161 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_162 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20) 
           & (0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_164 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_165 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_166 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_167 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_168 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_169 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_170 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_171 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_172 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_173 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_174 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_175 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_176 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_177 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_178 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_179 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_180 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_181 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_182 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_183 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_184 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_185 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_186 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_187 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_188 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_189 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_190 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_191 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_192 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_193 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_194 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_195 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_196 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_197 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_198 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_199 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_200 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_201 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_202 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_203 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_204 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_205 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_206 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_207 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_208 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_209 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_210 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_211 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_212 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_213 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_214 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_215 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_216 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_217 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_218 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_219 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_220 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_221 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_222 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_223 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_224 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_225 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_226 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_227 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11) 
           & (0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_229 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_230 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_231 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_232 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_233 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_234 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_235 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_236 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_237 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_238 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_239 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_240 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_241 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_242 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_243 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_244 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_245 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_246 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_247 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_248 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_249 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_250 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_251 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_252 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_253 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_254 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_255 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_256 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_257 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_258 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_259 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_260 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_261 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_262 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_263 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_264 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_265 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_266 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_267 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_268 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_269 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_270 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_271 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_272 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_273 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_274 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_275 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_276 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_277 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_278 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_279 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_280 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_281 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_282 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_283 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_284 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_285 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_286 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_287 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_288 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_289 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_290 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_291 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_292 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12) 
           & (0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_293 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_294 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_295 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_296 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_297 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_298 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_299 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_300 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_301 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_302 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_303 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_304 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_305 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_306 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_307 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_308 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_309 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_310 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_311 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_312 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_313 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_314 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_315 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_316 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_317 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_318 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_319 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_320 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_321 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_322 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_323 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_324 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_325 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_326 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_327 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_328 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_329 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_330 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_331 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_332 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_333 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_334 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_335 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_336 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_337 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_338 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_339 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_340 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_341 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_342 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_343 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_344 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_345 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_346 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_347 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_348 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_349 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_350 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_351 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_352 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_353 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_354 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_355 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_356 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13) 
           & (0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)));
    top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_2 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15) 
           | (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_resp_ready 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_valid) 
                                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs1_data 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs1_fwd_en)
            ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_ready)
                ? vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_val_out
                : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem1_dep)
                    ? vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_val_out
                    : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem2_dep)
                        ? vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_val_out
                        : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_wb_dep)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out
                            : 0U)))) : ((0U == (0x1fU 
                                                & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                   >> 0xfU)))
                                         ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs2_data 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs2_fwd_en)
            ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_ready)
                ? vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_val_out
                : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem1_dep)
                    ? vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_val_out
                    : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem2_dep)
                        ? vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_val_out
                        : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_wb_dep)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out
                            : 0U)))) : ((0U == (0x1fU 
                                                & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                   >> 0x14U)))
                                         ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp_0));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu_io_stall 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)) 
           & (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state) 
               & (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs1) 
                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_0) 
                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_1))) 
                  | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs2) 
                     & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_2) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_2))))) 
              | (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use) 
                    & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_9) 
                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_10))) 
                   | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use) 
                      & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_9) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_8)))) 
                  & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_is_load) 
                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_valid))) 
                 | (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use) 
                       & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_7))) 
                      | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use) 
                         & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6) 
                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_5)))) 
                     & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_valid)) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load))) 
                    | (((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs1_fwd_en)) 
                        & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_dep) 
                           | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_6))) 
                       | ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs2_fwd_en)) 
                          & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_dep) 
                             | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_5))))))));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_12 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__isClintWrite)) 
           & ((IData)(vlSelfRef.io_master_awvalid) 
              & (IData)(vlSelfRef.io_master_awready)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_24 
        = ((6U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
           | (IData)(top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_2));
    vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_fetch_resp_valid 
        = ((~ (IData)(top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_2)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_rready 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_resp_ready) 
                                           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_resp_ready) 
           & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending)) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_arvalid));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__rdAddr 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid)
            ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst)
                ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__line_base
                : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg)
            : vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_araddr);
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_alu_b 
        = (((0x13U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
            | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_load) 
               | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_store) 
                  | ((0x6fU == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                     | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr) 
                        | ((0x17U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                           | ((0x37U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                              | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_branch))))))))
            ? (((0x37U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                | (0x17U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))
                ? (0xfffff000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                : ((0x6fU == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))
                    ? (((- (IData)((vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                    >> 0x1fU))) << 0x14U) 
                       | (((0xff000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst) 
                           | (0x800U & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                        >> 9U))) | 
                          (0x7feU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                     >> 0x14U)))) : 
                   ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr)
                     ? vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__imm_i
                     : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_store)
                         ? (((- (IData)((vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                         >> 0x1fU))) 
                             << 0xcU) | ((0xfe0U & 
                                          (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                           >> 0x14U)) 
                                         | (0x1fU & 
                                            (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                             >> 7U))))
                         : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_branch)
                             ? (((- (IData)((vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                      >> 7U)))))
                             : (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_slli) 
                                 | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_srli) 
                                    | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_srai)))
                                 ? (0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                             >> 0x14U))
                                 : vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__imm_i))))))
            : vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs2_data);
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__req_valid)) 
                 & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__out_valid)) 
                    & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu_io_stall)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_0 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__req_valid) 
              & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu_io_stall)) 
                 & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__redirect_valid)))));
    vlSelfRef.top__DOT__npc_cpu__DOT___ifu2_io_in_ready 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu_io_stall)) 
                 & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0))));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__r_last_fire 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_rready) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_rready_0 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)
               ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_rready)
               : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_rready_0)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_19 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11));
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_14 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_1)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_4)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_5 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_3) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_1));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid)) 
           & ((0U != (vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__rdAddr 
                      >> 0x19U)) & (0x200c000U > vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__rdAddr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_28 
        = (1U & ((~ ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_0))) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)));
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___ifu2_io_in_ready) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__out_valid));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__io_out_valid_0 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___ifu2_io_in_ready));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_in_ready 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___ifu2_io_in_ready));
    vlSelfRef.io_master_rready = vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_rready_0;
    top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14 = 
        ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_19) 
         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_20 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_19)) 
                 | (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))));
    vlSelfRef.io_master_arid = ((IData)(top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_14)
                                 ? 0U : (1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead))));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_2 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_1) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_3 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_valid) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_arvalid) 
              & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_5) 
                 & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead)
                     ? (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state))
                     : ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid)) 
                        & (IData)(vlSelfRef.io_master_arready))))));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__casez_tmp 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
            ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0)
                ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire)
                    ? (2U | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0) 
                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready)))
                    : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_3)
                    ? 1U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)))
            : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                ? ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid) 
                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_rready_0)) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rlast))
                    ? 0U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                    ? (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready))
                        ? 3U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                    : ((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid)) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_bready_0))
                        ? 0U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)))));
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_3 
        = ((IData)(top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_14) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead));
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_13 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_5));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__io_out_valid_0));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT___GEN 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_in_ready) 
           & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_fetch_resp_valid)));
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__io_inst_resp_ready_0 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_in_ready) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___ifu2_io_in_ready));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_3 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
           & (IData)(top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_5 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
           & ((IData)(top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)));
    __Vtableidx1 = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_0) 
                      << 0xaU) | (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit) 
                                   << 9U) | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt) 
                                             << 6U))) 
                    | ((0x38U & (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_20)
                                   ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)
                                   : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_21)
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)))) 
                                 << 3U)) | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
        = Vtop__ConstPool__TABLE_h02e7d842_0[__Vtableidx1];
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_arvalid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_3) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_2) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_arvalid)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___dbgDcacheWbHot_T 
        = (((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
            & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0)
                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire)
                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_3))) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_valid));
    if (top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_3) {
        vlSelfRef.io_master_araddr = 0U;
        vlSelfRef.io_master_arsize = 0U;
        vlSelfRef.io_master_arburst = 0U;
        vlSelfRef.io_master_arlen = 0U;
    } else {
        vlSelfRef.io_master_araddr = vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__rdAddr;
        if (vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid) {
            vlSelfRef.io_master_arsize = 2U;
            vlSelfRef.io_master_arburst = vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst;
            vlSelfRef.io_master_arlen = (7U & (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst))));
        } else {
            vlSelfRef.io_master_arsize = ((1U & ((~ 
                                                  ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_valid) 
                                                   & (3U 
                                                      > (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_rsize)))) 
                                                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_1)))
                                           ? 2U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_rsize));
            if (vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_2) {
                vlSelfRef.io_master_arburst = 0U;
                vlSelfRef.io_master_arlen = 0U;
            } else {
                vlSelfRef.io_master_arburst = vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_burst;
                vlSelfRef.io_master_arlen = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_burst)
                                              ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_10)
                                                  ? 0U
                                                  : 
                                                 (7U 
                                                  & (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_18)))))
                                              : 0U);
            }
        }
    }
    vlSelfRef.io_master_arvalid = ((IData)(top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_13) 
                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid)
                                       ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid)
                                       : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_arvalid)));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_arready 
        = ((IData)(top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_13) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid) 
              & (IData)(vlSelfRef.io_master_arready)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_10 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_arvalid));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_11 
        = ((IData)(vlSelfRef.io_master_arvalid) & (IData)(vlSelfRef.io_master_arready));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__ar_fire 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_arready));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_25 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_arready) 
            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_valid));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
        = ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
            ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                ? (((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                    & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__io_inst_resp_ready_0) 
                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_fetch_resp_valid)))
                    ? 0U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                    ? (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_21))
                        ? 6U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                    : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_25)
                        ? 5U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))))
            : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                    ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit)
                        ? 6U : (4U | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_25)))
                    : 3U) : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                              ? 2U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_0)
                                       ? 1U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)))));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge io_halt)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge io_halt)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_pc = VL_RAND_RESET_I(32);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_commit_addr = VL_RAND_RESET_I(32);
    vlSelf->io_halt_ret = VL_RAND_RESET_I(1);
    vlSelf->io_non_inst = VL_RAND_RESET_I(1);
    vlSelf->io_interrupt = VL_RAND_RESET_I(1);
    vlSelf->io_master_awready = VL_RAND_RESET_I(1);
    vlSelf->io_master_awvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_awaddr = VL_RAND_RESET_I(32);
    vlSelf->io_master_awid = VL_RAND_RESET_I(4);
    vlSelf->io_master_awlen = VL_RAND_RESET_I(8);
    vlSelf->io_master_awsize = VL_RAND_RESET_I(3);
    vlSelf->io_master_awburst = VL_RAND_RESET_I(2);
    vlSelf->io_master_wready = VL_RAND_RESET_I(1);
    vlSelf->io_master_wvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_wdata = VL_RAND_RESET_I(32);
    vlSelf->io_master_wstrb = VL_RAND_RESET_I(4);
    vlSelf->io_master_wlast = VL_RAND_RESET_I(1);
    vlSelf->io_master_bready = VL_RAND_RESET_I(1);
    vlSelf->io_master_bvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_bresp = VL_RAND_RESET_I(2);
    vlSelf->io_master_bid = VL_RAND_RESET_I(4);
    vlSelf->io_master_arready = VL_RAND_RESET_I(1);
    vlSelf->io_master_arvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_araddr = VL_RAND_RESET_I(32);
    vlSelf->io_master_arid = VL_RAND_RESET_I(4);
    vlSelf->io_master_arlen = VL_RAND_RESET_I(8);
    vlSelf->io_master_arsize = VL_RAND_RESET_I(3);
    vlSelf->io_master_arburst = VL_RAND_RESET_I(2);
    vlSelf->io_master_rready = VL_RAND_RESET_I(1);
    vlSelf->io_master_rvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_rresp = VL_RAND_RESET_I(2);
    vlSelf->io_master_rdata = VL_RAND_RESET_I(32);
    vlSelf->io_master_rlast = VL_RAND_RESET_I(1);
    vlSelf->io_master_rid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_awready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_awvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_awaddr = VL_RAND_RESET_I(32);
    vlSelf->io_slave_awid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_awlen = VL_RAND_RESET_I(8);
    vlSelf->io_slave_awsize = VL_RAND_RESET_I(3);
    vlSelf->io_slave_awburst = VL_RAND_RESET_I(2);
    vlSelf->io_slave_wready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_wvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_wdata = VL_RAND_RESET_I(32);
    vlSelf->io_slave_wstrb = VL_RAND_RESET_I(4);
    vlSelf->io_slave_wlast = VL_RAND_RESET_I(1);
    vlSelf->io_slave_bready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_bvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_bresp = VL_RAND_RESET_I(2);
    vlSelf->io_slave_bid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_arready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_arvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_araddr = VL_RAND_RESET_I(32);
    vlSelf->io_slave_arid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_arlen = VL_RAND_RESET_I(8);
    vlSelf->io_slave_arsize = VL_RAND_RESET_I(3);
    vlSelf->io_slave_arburst = VL_RAND_RESET_I(2);
    vlSelf->io_slave_rready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_rvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_rresp = VL_RAND_RESET_I(2);
    vlSelf->io_slave_rdata = VL_RAND_RESET_I(32);
    vlSelf->io_slave_rlast = VL_RAND_RESET_I(1);
    vlSelf->io_slave_rid = VL_RAND_RESET_I(4);
    vlSelf->io_halt = VL_RAND_RESET_I(1);
    vlSelf->io_gpr_0 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_1 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_2 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_3 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_4 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_5 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_6 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_7 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_8 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_9 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_10 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_11 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_12 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_13 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_14 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_15 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_16 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_17 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_18 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_19 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_20 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_21 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_22 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_23 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_24 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_25 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_26 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_27 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_28 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_29 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_30 = VL_RAND_RESET_I(32);
    vlSelf->io_gpr_31 = VL_RAND_RESET_I(32);
    vlSelf->io_difftest_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_arready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rlast = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wstrb = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__npc_cpu__DOT___axi_mem_master_io_master_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___axi_mem_master_io_master_araddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___dcache1_io_data_req_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_rsize = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_burst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___dcache1_io_data_resp_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___icache1_io_fetch_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___icache1_io_inst_req_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___icache1_io_inst_resp_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___hazard_unit_io_fs1_fwd_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___hazard_unit_io_fs2_fwd_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___wb_io_rd_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___wb_io_wb_fwd_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___wb_io_wb_fwd_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___mem2_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_val_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_rd_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_val_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_bypass = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___exu_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___exu_io_branch_bits_is_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___exu_io_exu_fwd_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_is_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___exu_io_exu_fwd_val_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___exu_io_bpu_update_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___exu_io_bpu_update_is_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_in_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_alu_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bgeu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_csr_raddr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_id_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_id_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_use_rs1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___idu_io_use_rs2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT___ifu2_io_in_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__idu_io_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__stall_cnt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__flush_cnt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__ifu1__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__ifu1__DOT__req_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__ifu1__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__ifu1__DOT__pred_next_pc_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__ifu1__DOT__pred_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__ifu1__DOT__redirect_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__ifu1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__ifu2__DOT__waiting = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__ifu2__DOT__wait_pc_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__ifu2__DOT__i_cnt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__ifu2__DOT__io_inst_resp_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__idu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__idu__DOT__io_out_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__idu__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__idu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__idu__DOT__imm_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__idu__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__idu__DOT__is_srai = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__idu__DOT__is_srli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__idu__DOT__is_slli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__idu__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__idu__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__idu__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__csr_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_csrrw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_csrrs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_mret = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__is_bgeu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_is_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_val_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__first_inst_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__bp_expect_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__bp_total_count_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__bp_hit_count_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__redirect_now = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__exu_fwd_live_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__io_load_tag_alloc_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jal_T = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jalr_T = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__bp_check_now = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__hold_capture = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__exu__DOT__alu__DOT__casez_tmp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__load_tag = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__csr_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__is_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__is_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__is_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__is_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__is_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__is_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__is_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__in_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__req_sent = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__out_sent = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT__io_mem_req_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__total_mem_cycles = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__load_tag = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__is_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__is_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__is_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__is_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__csr_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__io_in_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT__halfData = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__mem2__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__csr_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__is_csrrw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__is_csrrs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT__dbgFollowCnt = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__npc_cpu__DOT__wb__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_26 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_30 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_0 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_1 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_2 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_3 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_4 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_5 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_6 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_7 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_8 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_9 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_10 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_11 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_12 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_13 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_14 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_15 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_16 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_17 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_18 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_19 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_20 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_21 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_22 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_23 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_24 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_25 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_26 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_27 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_28 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_29 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_30 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_31 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__exuHasRd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem1HasRd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem2HasRd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__wbHasRd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_dep = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem1_dep = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem2_dep = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_wb_dep = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_dep = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem1_dep = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem2_dep = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_wb_dep = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_26 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_30 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__ghr = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__pred_pc_s1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__update_fire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__update_pc_s0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__update_target_s0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__update_ghr_s0 = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__update_idx_s0 = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__update_fire_s1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__update_idx_s1 = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__update_btb_idx_s1 = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__update_target_s1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT____Vcellinp__pht_ext__W0_data = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_addr_d0 = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(33);
    }
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__index_reg = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__lk_tag_reg = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__lk_offset_reg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__lk_pc_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_1 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_2 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_3 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__line_base = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__resp_inst_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__resp_pc_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__victim_way = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__hit_count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__miss_count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__lookup_word_addr = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__hit0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__hit1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__hit2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__hit3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT___GEN_13 = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__rand_way = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT___GEN_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_5 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_3_ext_R0_data = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_2_ext_R0_data = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_1_ext_R0_data = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_0_ext_R0_data = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_3_ext_R0_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_2_ext_R0_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_1_ext_R0_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_0_ext_R0_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_26 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_30 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_34 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_35 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_36 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_37 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_38 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_39 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_40 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_41 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_42 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_43 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_44 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_45 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_46 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_47 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_48 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_50 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_51 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_52 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_53 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_54 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_55 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_56 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_57 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_58 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_59 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_60 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_61 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_62 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_63 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_26 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_30 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_34 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_35 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_36 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_37 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_38 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_39 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_40 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_41 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_42 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_43 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_44 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_45 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_46 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_47 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_48 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_50 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_51 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_52 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_53 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_54 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_55 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_56 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_57 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_58 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_59 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_60 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_61 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_62 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_63 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_26 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_30 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_34 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_35 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_36 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_37 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_38 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_39 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_40 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_41 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_42 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_43 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_44 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_45 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_46 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_47 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_48 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_50 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_51 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_52 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_53 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_54 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_55 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_56 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_57 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_58 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_59 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_60 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_61 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_62 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_63 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_26 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_30 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_34 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_35 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_36 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_37 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_38 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_39 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_40 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_41 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_42 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_43 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_44 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_45 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_46 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_47 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_48 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_50 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_51 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_52 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_53 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_54 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_55 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_56 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_57 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_58 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_59 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_60 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_61 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_62 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_63 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__line_base = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__miss_addr_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_addr_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__resp_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__wsize_reg = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__wb_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__rsize_reg = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__req_pc_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__req_inst_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__rand_way = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__hit_count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__miss_count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___read_tags_3_T = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___read_en_T_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__read_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___read_addr_T_3 = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__read_addr = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__hit0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__hit1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__hit2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__hit3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_2 = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___dbgDcacheWbHot_T = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__isTargetWord = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__mergedWord = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__lineWordData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wsize_0 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wdata_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wmask_0 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_34 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_98 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_99 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_100 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_101 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_102 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_103 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_104 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_105 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_106 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_107 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_108 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_109 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_110 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_111 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_112 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_113 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_114 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_115 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_116 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_117 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_118 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_119 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_120 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_121 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_122 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_123 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_124 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_125 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_126 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_127 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_128 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_129 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_130 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_131 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_132 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_133 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_134 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_135 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_136 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_137 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_138 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_139 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_140 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_141 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_142 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_143 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_144 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_145 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_146 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_147 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_148 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_149 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_150 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_151 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_152 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_153 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_154 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_155 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_156 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_157 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_158 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_159 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_160 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_161 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_162 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_164 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_165 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_166 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_167 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_168 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_169 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_170 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_171 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_172 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_173 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_174 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_175 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_176 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_177 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_178 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_179 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_180 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_181 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_182 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_183 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_184 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_185 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_186 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_187 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_188 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_189 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_190 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_191 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_192 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_193 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_194 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_195 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_196 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_197 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_198 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_199 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_200 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_201 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_202 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_203 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_204 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_205 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_206 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_207 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_208 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_209 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_210 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_211 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_212 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_213 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_214 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_215 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_216 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_217 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_218 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_219 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_220 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_221 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_222 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_223 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_224 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_225 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_226 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_227 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_229 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_230 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_231 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_232 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_233 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_234 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_235 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_236 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_237 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_238 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_239 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_240 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_241 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_242 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_243 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_244 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_245 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_246 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_247 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_248 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_249 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_250 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_251 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_252 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_253 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_254 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_255 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_256 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_257 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_258 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_259 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_260 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_261 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_262 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_263 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_264 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_265 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_266 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_267 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_268 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_269 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_270 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_271 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_272 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_273 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_274 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_275 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_276 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_277 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_278 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_279 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_280 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_281 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_282 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_283 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_284 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_285 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_286 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_287 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_288 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_289 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_290 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_291 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_292 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_293 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_294 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_295 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_296 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_297 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_298 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_299 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_300 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_301 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_302 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_303 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_304 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_305 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_306 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_307 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_308 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_309 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_310 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_311 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_312 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_313 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_314 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_315 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_316 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_317 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_318 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_319 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_320 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_321 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_322 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_323 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_324 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_325 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_326 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_327 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_328 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_329 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_330 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_331 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_332 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_333 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_334 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_335 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_336 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_337 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_338 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_339 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_340 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_341 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_342 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_343 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_344 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_345 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_346 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_347 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_348 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_349 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_350 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_351 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_352 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_353 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_354 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_355 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_356 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_357 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_359 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_21 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__ar_fire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__r_last_fire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wmask = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_waddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_rready_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_bready_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_mem_master__DOT__casez_tmp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__axi_clint_slave__DOT___lo_next_T = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT__rdAddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT__isClintWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_wvalid_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_bready_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_rready_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_cpu__DOT__csr__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__csr__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__csr__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__csr__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_16 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_17 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_18 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_19 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_20 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_21 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_22 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_23 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_24 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_25 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_26 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_27 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_28 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_29 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_30 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__regs_31 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__npc_cpu__DOT__regfile__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_2 = VL_RAND_RESET_I(32);
    vlSelf->__VdfgRegularize_hd87f99a1_0_5 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lw = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lbu = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lh = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lhu = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lb = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lk_pc_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__npc_cpu__DOT__csr__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory__v0 = VL_RAND_RESET_I(9);
    vlSelf->__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory__v0 = 0;
    vlSelf->__VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory__v0 = VL_RAND_RESET_I(9);
    vlSelf->__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory__v0 = 0;
    vlSelf->__VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory__v0 = VL_RAND_RESET_I(9);
    vlSelf->__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory__v0 = 0;
    vlSelf->__VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory__v0 = VL_RAND_RESET_I(9);
    vlSelf->__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__io_halt__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
