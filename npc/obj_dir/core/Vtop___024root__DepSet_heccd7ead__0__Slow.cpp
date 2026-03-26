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
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT____Vcellinp__ebreak_box__is_ebreak__0 
        = vlSelfRef.top__DOT____Vcellinp__ebreak_box__is_ebreak;
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
            VL_FATAL_MT("verilog/top.sv", 61861, "", "Settle region did not converge.");
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
VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__1(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__2(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__3(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
        Vtop___024root___stl_sequent__TOP__1(vlSelf);
        Vtop___024root___stl_sequent__TOP__2(vlSelf);
        Vtop___024root___stl_sequent__TOP__3(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_inst = vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__inst_reg;
    vlSelfRef.io_difftest_valid = (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_0 
        = (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_5 
        = (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN 
        = (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_3 
        = (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_dcache_req_ready_0 
        = (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4 
        = (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5 
        = (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_8 
        = (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_0 
        = (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1 
        = (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_2 
        = (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT___lo_next_T 
        = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low);
    vlSelfRef.io_pc = vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg;
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
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___pc_T 
        = ((IData)(4U) + vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc);
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr 
        = ((0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
            ? 0x305U : ((0x30200073U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                         ? 0x341U : (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                     >> 0x14U)));
    vlSelfRef.top__DOT____Vcellinp__ebreak_box__is_ebreak 
        = ((0x100073U == vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__inst_reg) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_18 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_20 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_22 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_24 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_26 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_28 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_30 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_31 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_33 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_34 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_35 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_36 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_37 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_38 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_39 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_40 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_42 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_43 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_44 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_45 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_46 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_47 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_48 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_49 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_51 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_52 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_53 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_54 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_55 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_56 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_57 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_58 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_60 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_61 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_62 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_63 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_64 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_65 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_66 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_67 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_69 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_70 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_71 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_72 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_73 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_74 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_75 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_76 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_78 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_79 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_80 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_81 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_82 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_83 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_84 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_85 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_87 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_88 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_89 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_90 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_91 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_92 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_93 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_94 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_96 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_97 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_98 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_99 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_100 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_101 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_102 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_103 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_105 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_106 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_107 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_108 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_109 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_110 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_111 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_112 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_114 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_115 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_116 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_117 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_118 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_119 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_120 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_121 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_123 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_124 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_125 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_126 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_127 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_128 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_129 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_130 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_132 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_133 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_134 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_135 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_136 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_137 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_138 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_139 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_141 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_142 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_143 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_144 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_145 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_146 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_147 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_148 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_150 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_151 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_152 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_153 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_154 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_155 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_156 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_157 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_159 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_160 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_161 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_162 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_163 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_164 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_165 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_166 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_168 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_169 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_170 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_171 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_172 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_173 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_174 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_175 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_177 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_178 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_179 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_180 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_181 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_182 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_183 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_184 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_186 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_187 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_188 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_189 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_190 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_191 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_192 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_193 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_195 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_196 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_197 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_198 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_199 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_200 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_201 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_202 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_204 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_205 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_206 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_207 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_208 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_209 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_210 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_211 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_213 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_214 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_215 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_216 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_217 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_218 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_219 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_220 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_222 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_223 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_224 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_225 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_226 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_227 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_228 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_229 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_231 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_232 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_233 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_234 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_235 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_236 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_237 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_238 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_240 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_241 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_242 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_243 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_244 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_245 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_246 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_247 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_249 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_250 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_251 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_252 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_253 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_254 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_255 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_256 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_258 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_259 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_260 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_261 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_262 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_263 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_264 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_265 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_267 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_268 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_269 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_270 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_271 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_272 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_273 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_274 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_276 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_277 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_278 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_279 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_280 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_281 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_282 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_283 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_285 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_286 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_287 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_288 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_289 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_290 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_291 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_292 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_294 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_295 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_296 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_297 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_298 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_299 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_300 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_301 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_303 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_304 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_305 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_306 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_307 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_308 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_309 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_310 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_312 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_313 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_314 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_315 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_316 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_317 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_318 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_319 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_321 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_322 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_323 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_324 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_325 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_326 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_327 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_328 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_330 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_331 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_332 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_333 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_334 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_335 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_336 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_337 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_339 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_340 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_341 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_342 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_343 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_344 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_345 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_346 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_348 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_349 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_350 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_351 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_352 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_353 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_354 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_355 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_357 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_358 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_359 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_360 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_361 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_362 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_363 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_364 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_366 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_367 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_368 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_369 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_370 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_371 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_372 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_373 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_375 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_376 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_377 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_378 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_379 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_380 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_381 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_382 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_384 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_385 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_386 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_387 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_388 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_389 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_390 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_391 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_393 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_394 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_395 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_396 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_397 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_398 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_399 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_400 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_402 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_403 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_404 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_405 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_406 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_407 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_408 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_409 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_411 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_412 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_413 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_414 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_415 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_416 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_417 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_418 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_420 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_421 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_422 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_423 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_424 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_425 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_426 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_427 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_429 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_430 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_431 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_432 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_433 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_434 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_435 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_436 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_438 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_439 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_440 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_441 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_442 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_443 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_444 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_445 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_447 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_448 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_449 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_450 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_451 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_452 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_453 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_454 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_456 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_457 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_458 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_459 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_460 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_461 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_462 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_463 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_465 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_466 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_467 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_468 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_469 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_470 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_471 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_472 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_474 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_475 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_476 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_477 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_478 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_479 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_480 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_481 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_483 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_484 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_485 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_486 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_487 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_488 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_489 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_490 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_492 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_493 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_494 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_495 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_496 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_497 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_498 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_499 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_501 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_502 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_503 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_504 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_505 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_506 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_507 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_508 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_510 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_511 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_512 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_513 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_514 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_515 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_516 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_517 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_519 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_520 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_521 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_522 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_523 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_524 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_525 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_526 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_528 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_529 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_530 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_531 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_532 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_533 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_534 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_535 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_537 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_538 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_539 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_540 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_541 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_542 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_543 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_544 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_546 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_547 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_548 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_549 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_550 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_551 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_552 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_553 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_555 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_556 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_557 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_558 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_559 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_560 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_561 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_562 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_564 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_565 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_566 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_567 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_568 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_569 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_570 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_571 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_573 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_574 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_575 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_576 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_577 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_578 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_579 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_580 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_582 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_583 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_584 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_585 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_586 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_587 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_588 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_589 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_590 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_591 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_592 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_593 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_594 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_595 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_596 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_597 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_7 
        = (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__line_base 
           + (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_910 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_406 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_911 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_407 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_912 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_408 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_913 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_409 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_914 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_410 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_915 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_411 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_916 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_412 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_917 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_413 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_918 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_414 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_919 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_415 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_920 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_416 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_921 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_417 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_922 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_418 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_923 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_419 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_924 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_420 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_925 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_421 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_926 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_422 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_927 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_423 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_928 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_424 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_929 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_425 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_930 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_426 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_931 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_427 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_932 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_428 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_933 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_429 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_934 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_430 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_935 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_431 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_936 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_432 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_937 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_433 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_938 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_434 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_939 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_435 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_940 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_436 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_941 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_437 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_942 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_438 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_943 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_439 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_944 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_440 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_945 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_441 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_946 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_442 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_947 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_443 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_948 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_444 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_949 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_445 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_950 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_446 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_951 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_447 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_952 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_448 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_953 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_449 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_954 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_450 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_955 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_451 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_956 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_452 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_957 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_453 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_958 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_454 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_959 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_455 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_960 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_456 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_961 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_457 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_962 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_458 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_963 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_459 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_964 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_460 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_965 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_461 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_966 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_462 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_967 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_463 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_968 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_464 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_969 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_465 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_970 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_466 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_971 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_467 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_972 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_468 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_973 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_469 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_974 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_470 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_975 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_471 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_976 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_472 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_977 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_473 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_978 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_474 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_979 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_475 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_980 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_476 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_981 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_477 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_982 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_478 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_983 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_479 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_984 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_480 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_985 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_481 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_986 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_482 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_987 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_483 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_988 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_484 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_989 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_485 
        = ((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_990 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_486 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_991 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_487 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_992 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_488 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_993 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_489 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_994 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_490 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_995 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_491 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_996 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_492 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_997 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_493 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_998 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_494 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_999 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_495 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1000 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_496 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1001 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_497 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1002 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_498 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1003 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_499 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1004 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_500 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1005 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_501 
        = ((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1006 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_502 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1007 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_503 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1008 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_504 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1009 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_505 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1010 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_506 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1011 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_507 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1012 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_508 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1013 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_509 
        = ((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1014 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_510 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1015 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_511 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1016 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_512 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1017 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_513 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1018 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_514 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1019 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_515 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1020 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_516 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1021 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_517 
        = ((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1022 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_518 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1023 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_519 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1024 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_520 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1025 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_521 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1026 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_522 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1027 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_523 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1028 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_524 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1029 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_525 
        = ((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1030 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_526 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1031 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_527 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1032 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_528 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1033 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_529 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1034 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_530 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1035 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_531 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1036 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_532 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1037 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_533 
        = ((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1038 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_534 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1039 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_535 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1040 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_536 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1041 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_537 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1042 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_538 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1043 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_539 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1044 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_540 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1045 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_541 
        = ((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1046 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_542 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1047 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_543 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1048 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_544 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1049 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_545 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1050 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_546 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1051 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_547 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1052 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_548 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1053 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_549 
        = ((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1054 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_550 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1055 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_551 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1056 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_552 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1057 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_553 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1058 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_554 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1059 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_555 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1060 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_556 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1061 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_557 
        = ((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1062 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_558 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1063 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_559 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1064 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_560 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1065 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_561 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1066 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_562 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1067 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_563 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1068 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_564 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1069 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_565 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1070 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_566 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1071 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_567 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1072 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_568 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1073 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_569 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1074 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_570 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1075 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_571 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1076 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_572 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1077 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_573 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1078 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_574 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1079 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_575 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1080 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_576 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1081 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_577 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1082 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_578 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1083 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_579 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1084 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_580 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1085 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_581 
        = ((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1086 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_582 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1087 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_583 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1088 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_584 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1089 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_585 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1090 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_586 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1091 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_587 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1092 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_588 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1093 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_589 
        = ((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1094 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_590 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1095 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_591 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1096 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_592 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1097 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_593 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1098 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_594 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1099 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_595 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1100 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_596 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1101 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_597 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1102 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_598 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1103 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_599 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1104 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_600 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1105 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_601 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1106 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_602 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1107 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_603 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1108 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_604 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1109 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_605 
        = ((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1110 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_606 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1111 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_607 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1112 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_608 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1113 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_609 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1114 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_610 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1115 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_611 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1116 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_612 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1117 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_613 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1118 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_614 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1119 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_615 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1120 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_616 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1121 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_617 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1122 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_618 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1123 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_619 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1124 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_620 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1125 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_621 
        = ((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1126 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_622 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1127 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_623 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1128 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_624 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1129 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_625 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1130 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_626 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1131 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_627 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1132 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_628 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1133 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_629 
        = ((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1134 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_630 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1135 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_631 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1136 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_632 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1137 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_633 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1138 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_634 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1139 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_635 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1140 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_636 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1141 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_637 
        = ((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1142 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_638 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1143 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_639 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1144 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_640 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1145 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_641 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1146 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_642 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1147 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_643 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1148 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_644 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1149 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_645 
        = ((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1150 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_646 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1151 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_647 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1152 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_648 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1153 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_649 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1154 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_650 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1155 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_651 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1156 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_652 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1157 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_653 
        = ((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1158 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_654 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1159 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_655 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1160 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_656 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1161 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_657 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1162 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_658 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1163 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_659 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1164 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_660 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1165 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_661 
        = ((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1166 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_662 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1167 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_663 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1168 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_664 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1169 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_665 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1170 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_666 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1171 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_667 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1172 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_668 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1173 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_669 
        = ((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1174 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_670 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1175 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_671 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1176 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_672 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1177 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_673 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1178 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_674 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1179 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_675 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1180 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_676 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1181 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_677 
        = ((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1182 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_678 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1183 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_679 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1184 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_680 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1185 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_681 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1186 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_682 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1187 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_683 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1188 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_684 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1189 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_685 
        = ((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1190 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_686 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1191 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_687 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1192 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_688 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1193 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_689 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1194 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_690 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1195 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_691 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1196 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_692 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1197 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_693 
        = ((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1198 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_694 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1199 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_695 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1200 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_696 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1201 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_697 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1202 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_698 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1203 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_699 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1204 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_700 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1205 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_701 
        = ((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1206 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_702 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1207 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_703 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1208 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_704 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1209 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_705 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1210 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_706 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1211 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_707 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1212 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_708 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1213 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_709 
        = ((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1214 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_710 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1215 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_711 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1216 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_712 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1217 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_713 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1218 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_714 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1219 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_715 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1220 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_716 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1221 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_717 
        = ((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1222 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_718 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1223 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_719 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1224 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_720 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1225 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_721 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1226 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_722 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1227 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_723 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1228 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_724 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1229 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_725 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1230 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_726 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1231 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_727 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1232 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_728 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1233 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_729 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1234 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_730 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1235 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_731 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1236 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_732 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1237 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_733 
        = ((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1238 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_734 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1239 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_735 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1240 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_736 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1241 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_737 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1242 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_738 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1243 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_739 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1244 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_740 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1245 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_741 
        = ((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1246 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_742 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1247 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_743 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1248 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_744 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1249 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_745 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1250 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_746 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1251 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_747 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1252 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_748 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1253 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_749 
        = ((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1254 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_750 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1255 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_751 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1256 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_752 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1257 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_753 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1258 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_754 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1259 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_755 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1260 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_756 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1261 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_757 
        = ((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1262 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_758 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1263 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_759 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1264 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_760 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1265 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_761 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1266 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_762 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1267 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_763 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1268 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_764 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1269 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_765 
        = ((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1270 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_766 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1271 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_767 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1272 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_768 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1273 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_769 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1274 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_770 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1275 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_771 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1276 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_772 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1277 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_773 
        = ((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1278 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_774 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1279 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_775 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1280 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_776 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1281 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_777 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1282 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_778 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1283 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_779 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1284 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_780 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1285 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_781 
        = ((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1286 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_782 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1287 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_783 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1288 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_784 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1289 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_785 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1290 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_786 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1291 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_787 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1292 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_788 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1293 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_789 
        = ((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1294 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_790 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1295 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_791 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1296 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_792 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1297 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_793 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1298 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_794 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1299 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_795 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1300 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_796 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1301 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_797 
        = ((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1302 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_798 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1303 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_799 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1304 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_800 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1305 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_801 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1306 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_802 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1307 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_803 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1308 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_804 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1309 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_805 
        = ((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1310 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_806 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1311 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_807 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1312 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_808 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1313 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_809 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1314 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_810 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1315 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_811 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1316 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_812 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1317 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_813 
        = ((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1318 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_814 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1319 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_815 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1320 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_816 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1321 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_817 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1322 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_818 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1323 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_819 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1324 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_820 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1325 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_821 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1326 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_822 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1327 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_823 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1328 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_824 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1329 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_825 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1330 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_826 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1331 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_827 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1332 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_828 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1333 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_829 
        = ((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1334 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_830 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1335 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_831 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1336 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_832 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1337 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_833 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1338 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_834 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1339 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_835 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1340 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_836 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1341 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_837 
        = ((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1342 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_838 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1343 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_839 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1344 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_840 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1345 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_841 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1346 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_842 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1347 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_843 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1348 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_844 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1349 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_845 
        = ((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1350 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_846 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1351 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_847 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1352 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_848 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1353 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_849 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1354 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_850 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1355 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_851 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1356 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_852 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1357 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_853 
        = ((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1358 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_854 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1359 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_855 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1360 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_856 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1361 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_857 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1362 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_858 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1363 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_859 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1364 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_860 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1365 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_861 
        = ((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1366 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_862 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1367 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_863 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1368 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_864 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1369 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_865 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1370 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_866 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1371 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_867 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1372 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_868 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1373 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_869 
        = ((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1374 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_870 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1375 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_871 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1376 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_872 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1377 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_873 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1378 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_874 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1379 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_875 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1380 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_876 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1381 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_877 
        = ((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1382 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_878 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1383 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_879 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1384 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_880 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1385 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_881 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1386 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_882 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1387 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_883 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1388 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_884 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1389 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_885 
        = ((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1390 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_886 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1391 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_887 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1392 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_888 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1393 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_889 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1394 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_890 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1395 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_891 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1396 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_892 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1397 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_893 
        = ((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1398 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_894 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1399 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_895 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1400 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_896 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1401 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_897 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1402 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_898 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1403 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_899 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1404 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_900 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1405 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_901 
        = ((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1406 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_902 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1407 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_903 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1408 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_904 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1409 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_905 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1410 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_906 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1411 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_907 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1412 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_908 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1413 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_909 
        = ((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_65 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_50 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_66 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_51 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_67 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_52 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_68 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_53 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_69 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_54 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_70 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_55 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_71 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_56 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_72 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_57 
        = ((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt)));
    vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_branch_bits_pc_branch 
        = (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b 
           + vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc);
    vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_en) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rand_way 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_1) 
            << 1U) | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_0 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__out_valid));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__io_mem_req_valid_0 
        = ((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state)) 
           & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__req_sent)) 
              & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state))));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_load) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_store));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__io_out_valid_0 
        = ((~ ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
               | (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)))) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_10 
        = (IData)((0x33U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_11 
        = (IData)((0x7033U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_12 
        = ((0x33U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
           | (0x13U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_13 
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
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr 
        = (IData)((0x67U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__imm_i 
        = (((- (IData)((vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                        >> 0x1fU))) << 0xcU) | (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                >> 0x14U));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_8 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
           | (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sw 
        = (IData)((0x2023U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sb 
        = (IData)((0x23U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sh 
        = (IData)((0x1023U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_slli 
        = (IData)((0x1013U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_in_ready 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state)) 
                 & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__busy))));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_6 
        = ((2U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
           | (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13 
        = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_5 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_4 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase));
    if ((0x20U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_1;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_7;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_1;
                        } else {
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_1;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_7;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_1;
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_1;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_1;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_1;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_1;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_1;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_1;
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_1;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_1;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_1;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_1;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_1;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_1;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_1;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_1;
            }
        } else if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_1;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_1;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_1;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_1;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_1;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_1;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_1;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_1;
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_1;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_1;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_1;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_1;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_1;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_1;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_1;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_1;
        }
    } else if ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_1;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_1;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_1;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_1;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_1;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_1;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_1;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_1;
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_1;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_1;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_1;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_1;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_1;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_1;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_1;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_1;
        }
    } else if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_1;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_1;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_1;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_1;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_1;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_1;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_1;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_1;
        }
    } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_1;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_1;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_1;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_1;
        }
    } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_1;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_1;
        }
    } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_7;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_1;
    } else {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_7;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_1;
    }
}
