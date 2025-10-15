// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/cangfeng_/ysyx-workbench/npc/vsrc/top.v", 1, "", "Settle region did not converge.");
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc = vlSelfRef.top__DOT__cpu__DOT__pc_current;
    vlSelfRef.halt_ret = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
        [0xaU];
    vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5 
        = ((((- (IData)((vlSelfRef.inst >> 0x1fU))) 
             << 0xdU) | (((0x1000U & (vlSelfRef.inst 
                                      >> 0x13U)) | 
                          (0x800U & (vlSelfRef.inst 
                                     << 4U))) | ((0x7e0U 
                                                  & (vlSelfRef.inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelfRef.inst 
                                                       >> 7U))))) 
           + vlSelfRef.top__DOT__cpu__DOT__pc_current);
    vlSelfRef.top__DOT__cpu__DOT__is_slt = (IData)(
                                                   (0x2033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_sltu = (IData)(
                                                    (0x3033U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__imm_i = (((- (IData)(
                                                       (vlSelfRef.inst 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelfRef.inst 
                                              >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__imm_s = (((- (IData)(
                                                       (vlSelfRef.inst 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & (vlSelfRef.inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelfRef.inst 
                                                    >> 7U))));
    vlSelfRef.top__DOT__cpu__DOT__rs2_data = ((0U == 
                                               (0x1fU 
                                                & (vlSelfRef.inst 
                                                   >> 0x14U)))
                                               ? 0U
                                               : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
                                              [(0x1fU 
                                                & (vlSelfRef.inst 
                                                   >> 0x14U))]);
    vlSelfRef.top__DOT__cpu__DOT__is_sw = (IData)((0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_sb = (IData)((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_sh = (IData)((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_addi = (IData)(
                                                    (0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_andi = (IData)(
                                                    (0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_ori = (IData)(
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_xori = (IData)(
                                                    (0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_seqz = (IData)(
                                                    (0x103013U 
                                                     == 
                                                     (0xfff0707fU 
                                                      & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_slli = (IData)(
                                                    (0x1013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_sll = (IData)(
                                                   (0x1033U 
                                                    == 
                                                    (0x4000707fU 
                                                     & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__rs1_data = ((0U == 
                                               (0x1fU 
                                                & (vlSelfRef.inst 
                                                   >> 0xfU)))
                                               ? 0U
                                               : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
                                              [(0x1fU 
                                                & (vlSelfRef.inst 
                                                   >> 0xfU))]);
    vlSelfRef.top__DOT__cpu__DOT__is_jalr = (IData)(
                                                    (0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_lw = (IData)((0x2003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_lbu = (IData)(
                                                   (0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_lh = (IData)((0x1003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_lhu = (IData)(
                                                   (0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_xor = (IData)(
                                                   (0x4033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_or = (IData)((0x6033U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__is_and = (IData)(
                                                   (0x7033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_13 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_17 
        = (IData)((0x33U == (0x707fU & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_19 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__wen = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sw) 
                                         | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sb) 
                                            | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_sh)));
    vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_3 
        = (vlSelfRef.top__DOT__cpu__DOT__rs1_data == vlSelfRef.top__DOT__cpu__DOT__rs2_data);
    vlSelfRef.top__DOT__cpu__DOT__is_div = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_xor) 
                                            & (1U == 
                                               (vlSelfRef.inst 
                                                >> 0x19U)));
    vlSelfRef.top__DOT__cpu__DOT__is_rem = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_or) 
                                            & (1U == 
                                               (vlSelfRef.inst 
                                                >> 0x19U)));
    vlSelfRef.top__DOT__cpu__DOT__is_remu = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_and) 
                                             & (1U 
                                                == 
                                                (vlSelfRef.inst 
                                                 >> 0x19U)));
    vlSelfRef.top__DOT__cpu__DOT__is_srai = ((IData)(vlSelfRef.top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_13) 
                                             & (vlSelfRef.inst 
                                                >> 0x1eU));
    vlSelfRef.top__DOT__cpu__DOT__is_srli = ((~ (vlSelfRef.inst 
                                                 >> 0x1eU)) 
                                             & (IData)(vlSelfRef.top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_13));
    vlSelfRef.top__DOT__cpu__DOT__is_add = ((~ (vlSelfRef.inst 
                                                >> 0x1eU)) 
                                            & (IData)(vlSelfRef.top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_17));
    vlSelfRef.top__DOT__cpu__DOT__is_sub = ((IData)(vlSelfRef.top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_17) 
                                            & (vlSelfRef.inst 
                                               >> 0x1eU));
    vlSelfRef.top__DOT__cpu__DOT__is_mul = ((IData)(vlSelfRef.top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_17) 
                                            & (1U == 
                                               (vlSelfRef.inst 
                                                >> 0x19U)));
    vlSelfRef.top__DOT__cpu__DOT__is_divu = ((IData)(vlSelfRef.top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_19) 
                                             & (1U 
                                                == 
                                                (vlSelfRef.inst 
                                                 >> 0x19U)));
    vlSelfRef.top__DOT__cpu__DOT__is_srl = ((~ (vlSelfRef.inst 
                                                >> 0x1eU)) 
                                            & (IData)(vlSelfRef.top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_19));
    vlSelfRef.top__DOT__cpu__DOT__is_sra = ((IData)(vlSelfRef.top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_19) 
                                            & (vlSelfRef.inst 
                                               >> 0x1eU));
    if ((0x17U == (0x7fU & vlSelfRef.inst))) {
        vlSelfRef.top__DOT__cpu__DOT__alu_a = vlSelfRef.top__DOT__cpu__DOT__pc_current;
        vlSelfRef.top__DOT__cpu__DOT__op = 0U;
        vlSelfRef.top__DOT__cpu__DOT__alu_b = (0xfffff000U 
                                               & vlSelfRef.inst);
    } else if ((0x6fU == (0x7fU & vlSelfRef.inst))) {
        vlSelfRef.top__DOT__cpu__DOT__alu_a = vlSelfRef.top__DOT__cpu__DOT__pc_current;
        vlSelfRef.top__DOT__cpu__DOT__op = 0U;
        vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__rs1_data;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__alu_a = vlSelfRef.top__DOT__cpu__DOT__rs1_data;
        if (vlSelfRef.top__DOT__cpu__DOT__is_jalr) {
            vlSelfRef.top__DOT__cpu__DOT__op = 0U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__imm_i;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_addi) {
            vlSelfRef.top__DOT__cpu__DOT__op = 0U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__imm_i;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_andi) {
            vlSelfRef.top__DOT__cpu__DOT__op = 2U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__imm_i;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_ori) {
            vlSelfRef.top__DOT__cpu__DOT__op = 3U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__imm_i;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_xori) {
            vlSelfRef.top__DOT__cpu__DOT__op = 4U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__imm_i;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_lw) {
            vlSelfRef.top__DOT__cpu__DOT__op = 0U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__imm_i;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_lbu) {
            vlSelfRef.top__DOT__cpu__DOT__op = 0U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__imm_i;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_lh) {
            vlSelfRef.top__DOT__cpu__DOT__op = 0U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__imm_i;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_lhu) {
            vlSelfRef.top__DOT__cpu__DOT__op = 0U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__imm_i;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_seqz) {
            vlSelfRef.top__DOT__cpu__DOT__op = 3U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = 0U;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_srai) {
            vlSelfRef.top__DOT__cpu__DOT__op = 7U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = (0x1fU 
                                                   & (vlSelfRef.inst 
                                                      >> 0x14U));
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_srli) {
            vlSelfRef.top__DOT__cpu__DOT__op = 6U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = (0x1fU 
                                                   & (vlSelfRef.inst 
                                                      >> 0x14U));
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_slli) {
            vlSelfRef.top__DOT__cpu__DOT__op = 5U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = (0x1fU 
                                                   & (vlSelfRef.inst 
                                                      >> 0x14U));
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_add) {
            vlSelfRef.top__DOT__cpu__DOT__op = 0U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_sub) {
            vlSelfRef.top__DOT__cpu__DOT__op = 1U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_xor) {
            vlSelfRef.top__DOT__cpu__DOT__op = 4U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_or) {
            vlSelfRef.top__DOT__cpu__DOT__op = 3U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_and) {
            vlSelfRef.top__DOT__cpu__DOT__op = 2U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_mul) {
            vlSelfRef.top__DOT__cpu__DOT__op = 8U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_div) {
            vlSelfRef.top__DOT__cpu__DOT__op = 9U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_divu) {
            vlSelfRef.top__DOT__cpu__DOT__op = 0xaU;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_rem) {
            vlSelfRef.top__DOT__cpu__DOT__op = 0xbU;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_remu) {
            vlSelfRef.top__DOT__cpu__DOT__op = 0xcU;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = vlSelfRef.top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_sll) {
            vlSelfRef.top__DOT__cpu__DOT__op = 5U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = (0x1fU 
                                                   & vlSelfRef.top__DOT__cpu__DOT__rs2_data);
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_srl) {
            vlSelfRef.top__DOT__cpu__DOT__op = 6U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = (0x1fU 
                                                   & vlSelfRef.top__DOT__cpu__DOT__rs2_data);
        } else if (vlSelfRef.top__DOT__cpu__DOT__is_sra) {
            vlSelfRef.top__DOT__cpu__DOT__op = 7U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = (0x1fU 
                                                   & vlSelfRef.top__DOT__cpu__DOT__rs2_data);
        } else {
            vlSelfRef.top__DOT__cpu__DOT__op = 0U;
            vlSelfRef.top__DOT__cpu__DOT__alu_b = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sb)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__imm_s
                                                    : 
                                                   ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sh)
                                                     ? vlSelfRef.top__DOT__cpu__DOT__imm_s
                                                     : 
                                                    ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sw)
                                                      ? vlSelfRef.top__DOT__cpu__DOT__imm_s
                                                      : vlSelfRef.top__DOT__cpu__DOT__rs2_data)));
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__valid = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lw) 
                                           | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lbu) 
                                              | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lhu) 
                                                 | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lh) 
                                                    | (IData)(vlSelfRef.top__DOT__cpu__DOT__wen)))));
    vlSelfRef.top__DOT__cpu__DOT__raddr = ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__op))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.top__DOT__cpu__DOT__op))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__op))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__op))
                                                     ? 0U
                                                     : 
                                                    VL_MODDIV_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_a, vlSelfRef.top__DOT__cpu__DOT__alu_b)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__op))
                                                     ? 
                                                    VL_MODDIVS_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_a, vlSelfRef.top__DOT__cpu__DOT__alu_b)
                                                     : 
                                                    VL_DIV_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_a, vlSelfRef.top__DOT__cpu__DOT__alu_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__op))
                                                     ? 
                                                    VL_DIVS_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_a, vlSelfRef.top__DOT__cpu__DOT__alu_b)
                                                     : 
                                                    (vlSelfRef.top__DOT__cpu__DOT__alu_a 
                                                     * vlSelfRef.top__DOT__cpu__DOT__alu_b))))
                                            : ((4U 
                                                & (IData)(vlSelfRef.top__DOT__cpu__DOT__op))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__op))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__cpu__DOT__alu_a, 
                                                                   (0x1fU 
                                                                    & vlSelfRef.top__DOT__cpu__DOT__alu_b))
                                                     : 
                                                    (vlSelfRef.top__DOT__cpu__DOT__alu_a 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelfRef.top__DOT__cpu__DOT__alu_b)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__op))
                                                     ? 
                                                    (vlSelfRef.top__DOT__cpu__DOT__alu_a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelfRef.top__DOT__cpu__DOT__alu_b))
                                                     : 
                                                    (vlSelfRef.top__DOT__cpu__DOT__alu_a 
                                                     ^ vlSelfRef.top__DOT__cpu__DOT__alu_b)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__op))
                                                     ? 
                                                    (vlSelfRef.top__DOT__cpu__DOT__alu_a 
                                                     | vlSelfRef.top__DOT__cpu__DOT__alu_b)
                                                     : 
                                                    (vlSelfRef.top__DOT__cpu__DOT__alu_a 
                                                     & vlSelfRef.top__DOT__cpu__DOT__alu_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__op))
                                                     ? 
                                                    (vlSelfRef.top__DOT__cpu__DOT__alu_a 
                                                     - vlSelfRef.top__DOT__cpu__DOT__alu_b)
                                                     : 
                                                    (vlSelfRef.top__DOT__cpu__DOT__alu_a 
                                                     + vlSelfRef.top__DOT__cpu__DOT__alu_b)))));
    vlSelfRef.top__DOT__cpu__DOT__pc_next = ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.inst))
                                              ? (((
                                                   (- (IData)(
                                                              (vlSelfRef.inst 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | (((0xff000U 
                                                       & vlSelfRef.inst) 
                                                      | (0x800U 
                                                         & (vlSelfRef.inst 
                                                            >> 9U))) 
                                                     | (0x7feU 
                                                        & (vlSelfRef.inst 
                                                           >> 0x14U)))) 
                                                 + vlSelfRef.top__DOT__cpu__DOT__pc_current)
                                              : ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_jalr)
                                                  ? 
                                                 (0xfffffffeU 
                                                  & vlSelfRef.top__DOT__cpu__DOT__raddr)
                                                  : 
                                                 ((IData)(
                                                          (0x63U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.inst)))
                                                   ? 
                                                  ((IData)(vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_3)
                                                    ? vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.top__DOT__cpu__DOT__pc_current))
                                                   : 
                                                  ((IData)(
                                                           (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.inst)))
                                                    ? 
                                                   ((IData)(vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_3)
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelfRef.top__DOT__cpu__DOT__pc_current)
                                                     : vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5)
                                                    : 
                                                   ((IData)(
                                                            (0x4063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.inst)))
                                                     ? 
                                                    (VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT__rs1_data, vlSelfRef.top__DOT__cpu__DOT__rs2_data)
                                                      ? vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelfRef.top__DOT__cpu__DOT__pc_current))
                                                     : 
                                                    ((IData)(
                                                             (0x6063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelfRef.inst)))
                                                      ? 
                                                     ((vlSelfRef.top__DOT__cpu__DOT__rs1_data 
                                                       < vlSelfRef.top__DOT__cpu__DOT__rs2_data)
                                                       ? vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelfRef.top__DOT__cpu__DOT__pc_current))
                                                      : 
                                                     ((IData)(
                                                              (0x5063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.inst)))
                                                       ? 
                                                      (VL_GTES_III(32, vlSelfRef.top__DOT__cpu__DOT__rs1_data, vlSelfRef.top__DOT__cpu__DOT__rs2_data)
                                                        ? vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.top__DOT__cpu__DOT__pc_current))
                                                       : 
                                                      ((IData)(
                                                               (0x7063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelfRef.inst)))
                                                        ? 
                                                       ((vlSelfRef.top__DOT__cpu__DOT__rs1_data 
                                                         >= vlSelfRef.top__DOT__cpu__DOT__rs2_data)
                                                         ? vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5
                                                         : 
                                                        ((IData)(4U) 
                                                         + vlSelfRef.top__DOT__cpu__DOT__pc_current))
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.top__DOT__cpu__DOT__pc_current)))))))));
    if (VL_UNLIKELY((((IData)(vlSelfRef.top__DOT__cpu__DOT__valid) 
                      & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__wen)))))) {
        VL_WRITEF_NX("PMEM_read from addr: %x, clk: %x, valid: %x, wen: %x\n",0,
                     32,vlSelfRef.top__DOT__cpu__DOT__raddr,
                     1,(IData)(vlSelfRef.clk),1,vlSelfRef.top__DOT__cpu__DOT__valid,
                     1,(IData)(vlSelfRef.top__DOT__cpu__DOT__wen));
        Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem__DOT__pmem_read_TOP(vlSelfRef.top__DOT__cpu__DOT__raddr, vlSelfRef.__Vfunc_top__DOT__cpu__DOT__mem__DOT__pmem_read__1__Vfuncout);
        vlSelfRef.top__DOT__cpu__DOT__rdata = vlSelfRef.__Vfunc_top__DOT__cpu__DOT__mem__DOT__pmem_read__1__Vfuncout;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__rdata = 0U;
    }
    vlSelfRef.top__DOT__cpu__DOT__r2byte = (0xffffU 
                                            & ((2U 
                                                & vlSelfRef.top__DOT__cpu__DOT__raddr)
                                                ? (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                                   >> 0x10U)
                                                : vlSelfRef.top__DOT__cpu__DOT__rdata));
    vlSelfRef.top__DOT__cpu__DOT__reg_wdata = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_addi)
                                                ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.inst))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelfRef.inst)
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.inst))
                                                     ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.inst))
                                                      ? 
                                                     ((IData)(4U) 
                                                      + vlSelfRef.top__DOT__cpu__DOT__pc_current)
                                                      : 
                                                     ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_jalr)
                                                       ? 
                                                      ((IData)(4U) 
                                                       + vlSelfRef.top__DOT__cpu__DOT__pc_current)
                                                       : 
                                                      ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_andi)
                                                        ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                        : 
                                                       ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_ori)
                                                         ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                         : 
                                                        ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_xori)
                                                          ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                          : 
                                                         ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lw)
                                                           ? vlSelfRef.top__DOT__cpu__DOT__rdata
                                                           : 
                                                          ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lbu)
                                                            ? 
                                                           (0xffU 
                                                            & ((0U 
                                                                == 
                                                                (3U 
                                                                 & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                                                ? vlSelfRef.top__DOT__cpu__DOT__rdata
                                                                : 
                                                               ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                                                 ? 
                                                                (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                                                 >> 8U)
                                                                 : 
                                                                ((2U 
                                                                  == 
                                                                  (3U 
                                                                   & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                                                  ? 
                                                                 (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                                                  >> 0x10U)
                                                                  : 
                                                                 (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                                                  >> 0x18U)))))
                                                            : 
                                                           ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lh)
                                                             ? 
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.top__DOT__cpu__DOT__r2byte) 
                                                                             >> 0xfU)))) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelfRef.top__DOT__cpu__DOT__r2byte))
                                                             : 
                                                            ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lhu)
                                                              ? (IData)(vlSelfRef.top__DOT__cpu__DOT__r2byte)
                                                              : 
                                                             ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_seqz)
                                                               ? 
                                                              ((0U 
                                                                == vlSelfRef.top__DOT__cpu__DOT__raddr)
                                                                ? 1U
                                                                : 0U)
                                                               : 
                                                              ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_srai)
                                                                ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                : 
                                                               ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_srli)
                                                                 ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                 : 
                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_slli)
                                                                  ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                  : 
                                                                 ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_add)
                                                                   ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                   : 
                                                                  ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sub)
                                                                    ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                    : 
                                                                   ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_xor)
                                                                     ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                     : 
                                                                    ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_or)
                                                                      ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                      : 
                                                                     ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_and)
                                                                       ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                       : 
                                                                      ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_mul)
                                                                        ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                        : 
                                                                       ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_div)
                                                                         ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                         : 
                                                                        ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_divu)
                                                                          ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                          : 
                                                                         ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_rem)
                                                                           ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                           : 
                                                                          ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_remu)
                                                                            ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                            : 
                                                                           ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_slt)
                                                                             ? 
                                                                            (VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_a, vlSelfRef.top__DOT__cpu__DOT__alu_b)
                                                                              ? 1U
                                                                              : 0U)
                                                                             : 
                                                                            ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sltu)
                                                                              ? 
                                                                             ((vlSelfRef.top__DOT__cpu__DOT__alu_a 
                                                                               < vlSelfRef.top__DOT__cpu__DOT__alu_b)
                                                                               ? 1U
                                                                               : 0U)
                                                                              : 
                                                                             ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sll)
                                                                               ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                               : 
                                                                              ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_srl)
                                                                                ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                                : 
                                                                               ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sra)
                                                                                 ? vlSelfRef.top__DOT__cpu__DOT__raddr
                                                                                 : 0U)))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
    vlSelf->inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9812503827101699671ull);
    vlSelf->halt_ret = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9337472404044710651ull);
    vlSelf->top__DOT__cpu__DOT__pc_current = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5552444104618770149ull);
    vlSelf->top__DOT__cpu__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10852475251118225733ull);
    vlSelf->top__DOT__cpu__DOT__raddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10283562818986379527ull);
    vlSelf->top__DOT__cpu__DOT__imm_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18257350724659255450ull);
    vlSelf->top__DOT__cpu__DOT__imm_s = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15508043474254630265ull);
    vlSelf->top__DOT__cpu__DOT__is_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11426861187791609431ull);
    vlSelf->top__DOT__cpu__DOT__is_addi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10595402588303968252ull);
    vlSelf->top__DOT__cpu__DOT__is_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12151228694907785565ull);
    vlSelf->top__DOT__cpu__DOT__is_ori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9491810685703692488ull);
    vlSelf->top__DOT__cpu__DOT__is_xori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14912386234371042611ull);
    vlSelf->top__DOT__cpu__DOT__is_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4381228460225209875ull);
    vlSelf->top__DOT__cpu__DOT__is_lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8495809440762701076ull);
    vlSelf->top__DOT__cpu__DOT__is_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4405661580365536686ull);
    vlSelf->top__DOT__cpu__DOT__is_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4429008819482671315ull);
    vlSelf->top__DOT__cpu__DOT__is_seqz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 795872038691154589ull);
    vlSelf->top__DOT__cpu__DOT__is_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5979462554283680419ull);
    vlSelf->top__DOT__cpu__DOT__is_srli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18260221605146780903ull);
    vlSelf->top__DOT__cpu__DOT__is_slli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8889305500076903ull);
    vlSelf->top__DOT__cpu__DOT__is_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2323959759629526321ull);
    vlSelf->top__DOT__cpu__DOT__is_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15119431900640770888ull);
    vlSelf->top__DOT__cpu__DOT__is_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3543333351414837289ull);
    vlSelf->top__DOT__cpu__DOT__is_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5294083185126704475ull);
    vlSelf->top__DOT__cpu__DOT__is_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13559757663919577535ull);
    vlSelf->top__DOT__cpu__DOT__is_mul = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9366486226669657749ull);
    vlSelf->top__DOT__cpu__DOT__is_mulh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14168707172575594343ull);
    vlSelf->top__DOT__cpu__DOT__is_div = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1075616662452341796ull);
    vlSelf->top__DOT__cpu__DOT__is_divu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6396548125070087652ull);
    vlSelf->top__DOT__cpu__DOT__is_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4490343622058053977ull);
    vlSelf->top__DOT__cpu__DOT__is_remu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6551769649122784286ull);
    vlSelf->top__DOT__cpu__DOT__is_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5041488304484413968ull);
    vlSelf->top__DOT__cpu__DOT__is_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18282678538893878774ull);
    vlSelf->top__DOT__cpu__DOT__is_sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11135354147392709223ull);
    vlSelf->top__DOT__cpu__DOT__is_srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10634339049124116048ull);
    vlSelf->top__DOT__cpu__DOT__is_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8713473455328101907ull);
    vlSelf->top__DOT__cpu__DOT__is_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17751284278358052199ull);
    vlSelf->top__DOT__cpu__DOT__is_sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5844083814398993041ull);
    vlSelf->top__DOT__cpu__DOT__is_sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14424327441502687849ull);
    vlSelf->top__DOT__cpu__DOT__rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13925279898668665418ull);
    vlSelf->top__DOT__cpu__DOT__rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10830496517894256851ull);
    vlSelf->top__DOT__cpu__DOT__reg_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4443918466098266857ull);
    vlSelf->top__DOT__cpu__DOT__load_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2232463716569152022ull);
    vlSelf->top__DOT__cpu__DOT__r2byte = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16586551967353147840ull);
    vlSelf->top__DOT__cpu__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 663838685550146854ull);
    vlSelf->top__DOT__cpu__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4373873853041368106ull);
    vlSelf->top__DOT__cpu__DOT__wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5180242936429922709ull);
    vlSelf->top__DOT__cpu__DOT__op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3560425415873628706ull);
    vlSelf->top__DOT__cpu__DOT__alu_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10672059043447422943ull);
    vlSelf->top__DOT__cpu__DOT__alu_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12665912432990745191ull);
    vlSelf->top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13656426537946666226ull);
    vlSelf->top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10714058343684218912ull);
    vlSelf->top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4512894634549582394ull);
    vlSelf->top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6946393195044004013ull);
    vlSelf->top__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hc6f504d5_0_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14666871268387603418ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11594587365280661975ull);
    }
    vlSelf->__Vfunc_top__DOT__cpu__DOT__mem__DOT__pmem_read__1__Vfuncout = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3495601893105415319ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
