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
            VL_FATAL_MT("verilog/top.sv", 1328, "", "Settle region did not converge.");
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

void Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem_blackbox__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_pc = vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc;
    vlSelfRef.top__DOT____Vcellinp__ebreak_box__is_ebreak 
        = (0x100073U == vlSelfRef.io_inst);
    vlSelfRef.io_gpr_1 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_1;
    vlSelfRef.io_gpr_2 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_2;
    vlSelfRef.io_gpr_3 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_3;
    vlSelfRef.io_gpr_4 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_4;
    vlSelfRef.io_gpr_5 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_5;
    vlSelfRef.io_gpr_6 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_6;
    vlSelfRef.io_gpr_7 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_7;
    vlSelfRef.io_gpr_8 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_8;
    vlSelfRef.io_gpr_9 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_9;
    vlSelfRef.io_gpr_10 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_10;
    vlSelfRef.io_gpr_11 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_11;
    vlSelfRef.io_gpr_12 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_12;
    vlSelfRef.io_gpr_13 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_13;
    vlSelfRef.io_gpr_14 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_14;
    vlSelfRef.io_gpr_15 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_15;
    vlSelfRef.io_gpr_16 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_16;
    vlSelfRef.io_gpr_17 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_17;
    vlSelfRef.io_gpr_18 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_18;
    vlSelfRef.io_gpr_19 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_19;
    vlSelfRef.io_gpr_20 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_20;
    vlSelfRef.io_gpr_21 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_21;
    vlSelfRef.io_gpr_22 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_22;
    vlSelfRef.io_gpr_23 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_23;
    vlSelfRef.io_gpr_24 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_24;
    vlSelfRef.io_gpr_25 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_25;
    vlSelfRef.io_gpr_26 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_26;
    vlSelfRef.io_gpr_27 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_27;
    vlSelfRef.io_gpr_28 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_28;
    vlSelfRef.io_gpr_29 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_29;
    vlSelfRef.io_gpr_30 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_30;
    vlSelfRef.io_gpr_31 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_31;
    vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_10 
        = (IData)((0x33U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_11 
        = (IData)((0x7033U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_12 
        = ((0x33U == (0x7fU & vlSelfRef.io_inst)) | 
           (0x13U == (0x7fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_13 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT__imm_i = 
        (((- (IData)((vlSelfRef.io_inst >> 0x1fU))) 
          << 0xcU) | (vlSelfRef.io_inst >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_beq 
        = (IData)((0x63U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bne 
        = (IData)((0x1063U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_blt 
        = (IData)((0x4063U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bge 
        = (IData)((0x5063U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_jalr 
        = (IData)((0x67U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp 
        = ((0x80000U & vlSelfRef.io_inst) ? ((0x40000U 
                                              & vlSelfRef.io_inst)
                                              ? ((0x20000U 
                                                  & vlSelfRef.io_inst)
                                                  ? 
                                                 ((0x10000U 
                                                   & vlSelfRef.io_inst)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelfRef.io_inst)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_31
                                                    : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_30)
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelfRef.io_inst)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_29
                                                    : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_28))
                                                  : 
                                                 ((0x10000U 
                                                   & vlSelfRef.io_inst)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelfRef.io_inst)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_27
                                                    : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_26)
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelfRef.io_inst)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_25
                                                    : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_24)))
                                              : ((0x20000U 
                                                  & vlSelfRef.io_inst)
                                                  ? 
                                                 ((0x10000U 
                                                   & vlSelfRef.io_inst)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelfRef.io_inst)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_23
                                                    : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_22)
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelfRef.io_inst)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_21
                                                    : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_20))
                                                  : 
                                                 ((0x10000U 
                                                   & vlSelfRef.io_inst)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelfRef.io_inst)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_19
                                                    : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_18)
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelfRef.io_inst)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_17
                                                    : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_16))))
            : ((0x40000U & vlSelfRef.io_inst) ? ((0x20000U 
                                                  & vlSelfRef.io_inst)
                                                  ? 
                                                 ((0x10000U 
                                                   & vlSelfRef.io_inst)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelfRef.io_inst)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_15
                                                    : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_14)
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelfRef.io_inst)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_13
                                                    : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_12))
                                                  : 
                                                 ((0x10000U 
                                                   & vlSelfRef.io_inst)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelfRef.io_inst)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_11
                                                    : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_10)
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelfRef.io_inst)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_9
                                                    : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_8)))
                : ((0x20000U & vlSelfRef.io_inst) ? 
                   ((0x10000U & vlSelfRef.io_inst) ? 
                    ((0x8000U & vlSelfRef.io_inst) ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_7
                      : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_6)
                     : ((0x8000U & vlSelfRef.io_inst)
                         ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_5
                         : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_4))
                    : ((0x10000U & vlSelfRef.io_inst)
                        ? ((0x8000U & vlSelfRef.io_inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_3
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_2)
                        : ((0x8000U & vlSelfRef.io_inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_1
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_0)))));
    vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp_0 
        = ((0x1000000U & vlSelfRef.io_inst) ? ((0x800000U 
                                                & vlSelfRef.io_inst)
                                                ? (
                                                   (0x400000U 
                                                    & vlSelfRef.io_inst)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.io_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.io_inst)
                                                      ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_31
                                                      : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_30)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.io_inst)
                                                      ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_29
                                                      : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_28))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.io_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.io_inst)
                                                      ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_27
                                                      : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_26)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.io_inst)
                                                      ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_25
                                                      : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_24)))
                                                : (
                                                   (0x400000U 
                                                    & vlSelfRef.io_inst)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.io_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.io_inst)
                                                      ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_23
                                                      : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_22)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.io_inst)
                                                      ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_21
                                                      : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_20))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.io_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.io_inst)
                                                      ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_19
                                                      : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_18)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.io_inst)
                                                      ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_17
                                                      : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_16))))
            : ((0x800000U & vlSelfRef.io_inst) ? ((0x400000U 
                                                   & vlSelfRef.io_inst)
                                                   ? 
                                                  ((0x200000U 
                                                    & vlSelfRef.io_inst)
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_15
                                                     : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_14)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_13
                                                     : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_12))
                                                   : 
                                                  ((0x200000U 
                                                    & vlSelfRef.io_inst)
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_11
                                                     : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_10)
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_9
                                                     : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_8)))
                : ((0x400000U & vlSelfRef.io_inst) ? 
                   ((0x200000U & vlSelfRef.io_inst)
                     ? ((0x100000U & vlSelfRef.io_inst)
                         ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_7
                         : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_6)
                     : ((0x100000U & vlSelfRef.io_inst)
                         ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_5
                         : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_4))
                    : ((0x200000U & vlSelfRef.io_inst)
                        ? ((0x100000U & vlSelfRef.io_inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_3
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_2)
                        : ((0x100000U & vlSelfRef.io_inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_1
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_0)))));
    vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sw 
        = (IData)((0x2023U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sb 
        = (IData)((0x23U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sh 
        = (IData)((0x1023U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lw 
        = (IData)((0x2003U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lh 
        = (IData)((0x1003U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lb 
        = (IData)((3U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_slli 
        = (IData)((0x1013U == (0x707fU & vlSelfRef.io_inst)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_5 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.io_inst)));
    if ((0x73U == vlSelfRef.io_inst)) {
        vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_waddr = 0x341U;
        vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr = 0x305U;
    } else if ((0x30200073U == vlSelfRef.io_inst)) {
        vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_waddr = 0x342U;
        vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr = 0x341U;
    } else {
        vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_waddr 
            = (vlSelfRef.io_inst >> 0x14U);
        vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr 
            = (vlSelfRef.io_inst >> 0x14U);
    }
    vlSelfRef.top__DOT__cpu__DOT___csr_io_csr_rdata 
        = ((0x300U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
            ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus
            : ((0x342U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mcause
                : ((0x341U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                    ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mepc
                    : ((0x305U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                        ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mtvec
                        : 0U))));
    vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_wen = 
        ((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_csrrw) 
         | (0x73U == vlSelfRef.io_inst));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_branch 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bne) 
           | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_beq) 
              | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bge) 
                 | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bgeu) 
                    | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_blt) 
                       | (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bltu))))));
    vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data 
        = ((0U == (0x1fU & (vlSelfRef.io_inst >> 0xfU)))
            ? 0U : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp);
    vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_wdata 
        = ((0x73U == vlSelfRef.io_inst) ? vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc
            : ((0x30200073U == vlSelfRef.io_inst) ? 0U
                : vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data));
    vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data 
        = ((0U == (0x1fU & (vlSelfRef.io_inst >> 0x14U)))
            ? 0U : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp_0);
    vlSelfRef.top__DOT__cpu__DOT___mem_io_mem_wen = 
        ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sw) 
         | ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sb) 
            | (IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sh)));
    vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_load 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lw) 
           | ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lb) 
              | ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lbu) 
                 | ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lh) 
                    | (IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lhu)))));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_load 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lw) 
           | ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lbu) 
              | ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lh) 
                 | ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lhu) 
                    | (IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lb)))));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srli 
        = ((~ (vlSelfRef.io_inst >> 0x1eU)) & (IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_5));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srai 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_5) 
           & (vlSelfRef.io_inst >> 0x1eU));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a 
        = (((0x17U == (0x7fU & vlSelfRef.io_inst)) 
            | (0x6fU == (0x7fU & vlSelfRef.io_inst)))
            ? vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc
            : ((0x37U == (0x7fU & vlSelfRef.io_inst))
                ? 0U : vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data));
    vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN 
        = (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_load) 
            | ((0x37U == (0x7fU & vlSelfRef.io_inst)) 
               | ((0x17U == (0x7fU & vlSelfRef.io_inst)) 
                  | ((0x33U == (0x7fU & vlSelfRef.io_inst)) 
                     | ((0x6fU == (0x7fU & vlSelfRef.io_inst)) 
                        | ((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_jalr) 
                           | ((0x13U == (0x7fU & vlSelfRef.io_inst)) 
                              | (((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_csrrw) 
                                  | (IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_csrrs)) 
                                 & (0U != (0x1fU & 
                                           (vlSelfRef.io_inst 
                                            >> 7U))))))))))) 
           & (0U != (0x1fU & (vlSelfRef.io_inst >> 7U))));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op 
        = (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_10) 
            & (vlSelfRef.io_inst >> 0x1eU)) ? 1U : 
           (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_11) 
             | (IData)((0x7013U == (0x707fU & vlSelfRef.io_inst))))
             ? 2U : (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_12) 
                      & (0x6000U == (0x7000U & vlSelfRef.io_inst)))
                      ? 3U : (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_12) 
                               & (0x4000U == (0x7000U 
                                              & vlSelfRef.io_inst)))
                               ? 4U : (((IData)((0x1033U 
                                                 == 
                                                 (0x4000707fU 
                                                  & vlSelfRef.io_inst))) 
                                        | (IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_slli))
                                        ? 5U : ((((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_13) 
                                                  & (IData)(
                                                            (0U 
                                                             == 
                                                             (0xfe000000U 
                                                              & vlSelfRef.io_inst)))) 
                                                 | (IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srli))
                                                 ? 6U
                                                 : 
                                                ((((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_13) 
                                                   & (vlSelfRef.io_inst 
                                                      >> 0x1eU)) 
                                                  | (IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srai))
                                                  ? 7U
                                                  : 
                                                 ((IData)(
                                                          (0x2033U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.io_inst)))
                                                   ? 0xdU
                                                   : 
                                                  ((IData)(
                                                           (0x3033U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.io_inst)))
                                                    ? 0xeU
                                                    : 
                                                   ((IData)(
                                                            (0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.io_inst)))
                                                     ? 0xdU
                                                     : 
                                                    ((IData)(
                                                             (0x3013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelfRef.io_inst)))
                                                      ? 0xeU
                                                      : 
                                                     (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_10) 
                                                       & (1U 
                                                          == 
                                                          (vlSelfRef.io_inst 
                                                           >> 0x19U)))
                                                       ? 8U
                                                       : 
                                                      ((IData)(
                                                               (0x2004033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelfRef.io_inst)))
                                                        ? 9U
                                                        : 
                                                       (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_13) 
                                                         & (1U 
                                                            == 
                                                            (vlSelfRef.io_inst 
                                                             >> 0x19U)))
                                                         ? 0xaU
                                                         : 
                                                        ((IData)(
                                                                 (0x2006033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelfRef.io_inst)))
                                                          ? 0xbU
                                                          : 
                                                         (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_11) 
                                                           & (1U 
                                                              == 
                                                              (vlSelfRef.io_inst 
                                                               >> 0x19U)))
                                                           ? 0xcU
                                                           : 0U))))))))))))))));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b 
        = (((0x13U == (0x7fU & vlSelfRef.io_inst)) 
            | ((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_load) 
               | ((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_mem_wen) 
                  | ((0x6fU == (0x7fU & vlSelfRef.io_inst)) 
                     | ((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_jalr) 
                        | ((0x17U == (0x7fU & vlSelfRef.io_inst)) 
                           | ((0x37U == (0x7fU & vlSelfRef.io_inst)) 
                              | (IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_branch))))))))
            ? (((0x37U == (0x7fU & vlSelfRef.io_inst)) 
                | (0x17U == (0x7fU & vlSelfRef.io_inst)))
                ? (0xfffff000U & vlSelfRef.io_inst)
                : ((0x6fU == (0x7fU & vlSelfRef.io_inst))
                    ? (((- (IData)((vlSelfRef.io_inst 
                                    >> 0x1fU))) << 0x14U) 
                       | (((0xff000U & vlSelfRef.io_inst) 
                           | (0x800U & (vlSelfRef.io_inst 
                                        >> 9U))) | 
                          (0x7feU & (vlSelfRef.io_inst 
                                     >> 0x14U)))) : 
                   ((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_jalr)
                     ? vlSelfRef.top__DOT__cpu__DOT__idu__DOT__imm_i
                     : ((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_mem_wen)
                         ? (((- (IData)((vlSelfRef.io_inst 
                                         >> 0x1fU))) 
                             << 0xcU) | ((0xfe0U & 
                                          (vlSelfRef.io_inst 
                                           >> 0x14U)) 
                                         | (0x1fU & 
                                            (vlSelfRef.io_inst 
                                             >> 7U))))
                         : ((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_branch)
                             ? (((- (IData)((vlSelfRef.io_inst 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelfRef.io_inst 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelfRef.io_inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelfRef.io_inst 
                                                      >> 7U)))))
                             : (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_slli) 
                                 | ((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srli) 
                                    | (IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srai)))
                                 ? (0x1fU & (vlSelfRef.io_inst 
                                             >> 0x14U))
                                 : vlSelfRef.top__DOT__cpu__DOT__idu__DOT__imm_i))))))
            : vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data);
    vlSelfRef.top__DOT__cpu__DOT___exu_io_branch_pc_branch 
        = (vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b 
           + vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc);
    vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp 
        = ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
            ? ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
                ? ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
                        ? 0U : (vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a 
                                < vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b))
                    : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
                        ? VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a, vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b)
                        : VL_MODDIV_III(32, vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a, vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b)))
                : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
                        ? VL_MODDIVS_III(32, vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a, vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b)
                        : VL_DIV_III(32, vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a, vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b))
                    : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
                        ? (IData)((0x1ffffffffULL & 
                                   VL_DIVS_QQQ(33, 
                                               (((QData)((IData)(
                                                                 (vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a 
                                                                  >> 0x1fU))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a))), 
                                               (((QData)((IData)(
                                                                 (vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b 
                                                                  >> 0x1fU))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b))))))
                        : (vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a 
                           * vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b))))
            : ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
                ? ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a, 
                                         (0x1fU & vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b))
                        : (vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a 
                           >> (0x1fU & vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b)))
                    : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
                        ? (vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a 
                           << (0x1fU & vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b))
                        : (vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a 
                           ^ vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b)))
                : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
                        ? (vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a 
                           | vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b)
                        : (vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a 
                           & vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b))
                    : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op))
                        ? (vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a 
                           - vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b)
                        : (vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a 
                           + vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b)))));
    if ((((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_load) 
          | (IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_mem_wen)) 
         & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_mem_wen)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem_blackbox__DOT__pmem_read_TOP(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp, vlSelfRef.__Vfunc_top__DOT__cpu__DOT__mem_blackbox__DOT__pmem_read__0__Vfuncout);
        vlSelfRef.top__DOT__cpu__DOT___mem_blackbox_rdata 
            = vlSelfRef.__Vfunc_top__DOT__cpu__DOT__mem_blackbox__DOT__pmem_read__0__Vfuncout;
    } else {
        vlSelfRef.top__DOT__cpu__DOT___mem_blackbox_rdata = 0U;
    }
    vlSelfRef.top__DOT__cpu__DOT__mem__DOT___rdata_byte_T_1 
        = (vlSelfRef.top__DOT__cpu__DOT___mem_blackbox_rdata 
           >> (0x18U & (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp 
                        << 3U)));
    vlSelfRef.top__DOT__cpu__DOT__mem__DOT___rdata_half_T_1 
        = (vlSelfRef.top__DOT__cpu__DOT___mem_blackbox_rdata 
           >> (0x10U & (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp 
                        << 3U)));
    vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data = 
        (((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_csrrs) 
          | (IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_csrrw))
          ? vlSelfRef.top__DOT__cpu__DOT___csr_io_csr_rdata
          : ((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_load)
              ? ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lb)
                  ? (((- (IData)((1U & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT___rdata_byte_T_1 
                                        >> 7U)))) << 8U) 
                     | (0xffU & vlSelfRef.top__DOT__cpu__DOT__mem__DOT___rdata_byte_T_1))
                  : ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lbu)
                      ? (0xffU & vlSelfRef.top__DOT__cpu__DOT__mem__DOT___rdata_byte_T_1)
                      : ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lh)
                          ? (((- (IData)((1U & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT___rdata_half_T_1 
                                                >> 0xfU)))) 
                              << 0x10U) | (0xffffU 
                                           & vlSelfRef.top__DOT__cpu__DOT__mem__DOT___rdata_half_T_1))
                          : ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lhu)
                              ? (0xffffU & vlSelfRef.top__DOT__cpu__DOT__mem__DOT___rdata_half_T_1)
                              : ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lw)
                                  ? vlSelfRef.top__DOT__cpu__DOT___mem_blackbox_rdata
                                  : 0U))))) : (((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.io_inst)) 
                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_jalr))
                                                ? ((IData)(4U) 
                                                   + vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc)
                                                : vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp)));
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
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge top.__Vcellinp__ebreak_box__is_ebreak)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge top.__Vcellinp__ebreak_box__is_ebreak)\n");
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
    vlSelf->io_halt_ret = VL_RAND_RESET_I(1);
    vlSelf->io_non_inst = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT____Vcellinp__ebreak_box__is_ebreak = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___csr_io_csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT___mem_blackbox_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT___regfile_io_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT___regfile_io_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT___wb_io_rd_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT___wb_io_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__cpu__DOT___wb_io_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT___wb_io_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___mem_io_out_bits_is_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___mem_io_out_bits_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___mem_io_out_bits_is_csrrw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___mem_io_out_bits_is_csrrs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___mem_io_mem_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___exu_io_out_bits_is_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___exu_io_out_bits_is_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___exu_io_out_bits_is_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___exu_io_out_bits_is_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___exu_io_out_bits_is_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___exu_io_out_bits_is_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___exu_io_out_bits_is_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___exu_io_out_bits_is_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___exu_io_branch_pc_branch = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT___idu_io_out_bits_alu_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT___idu_io_out_bits_alu_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT___idu_io_out_bits_alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT___idu_io_out_bits_is_beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___idu_io_out_bits_is_bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___idu_io_out_bits_is_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___idu_io_out_bits_is_bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___idu_io_out_bits_is_bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___idu_io_out_bits_is_bgeu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT___idu_io_csr_raddr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__cpu__DOT__ifu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__idu__DOT__imm_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__idu__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__idu__DOT__is_srai = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__idu__DOT__is_srli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__idu__DOT__is_slli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__idu__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem__DOT___rdata_byte_T_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem__DOT___rdata_half_T_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_16 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_17 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_18 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_19 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_20 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_21 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_22 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_23 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_24 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_25 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_26 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_27 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_28 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_29 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_30 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_31 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__casez_tmp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT__casez_tmp_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regfile__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__csr__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__csr__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__csr__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__csr__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_top__DOT__cpu__DOT__mem_blackbox__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT____Vcellinp__ebreak_box__is_ebreak__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
