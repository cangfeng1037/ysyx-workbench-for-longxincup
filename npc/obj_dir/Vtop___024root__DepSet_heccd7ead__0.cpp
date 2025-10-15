// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__ebreak_TOP();

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x100073U == vlSelfRef.inst)) {
        Vtop___024root____Vdpiimwrap_top__DOT__ebreak_TOP();
    }
    vlSelfRef.top__DOT__cpu__DOT__pc_current = ((IData)(vlSelfRef.rst)
                                                 ? 0x80000000U
                                                 : vlSelfRef.top__DOT__cpu__DOT__pc_next);
    vlSelfRef.pc = vlSelfRef.top__DOT__cpu__DOT__pc_current;
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
}

void Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0;
    __VdlyVal__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0;
    __VdlyDim0__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0;
    __VdlySet__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 0;
    // Body
    if (VL_UNLIKELY((vlSelfRef.top__DOT__cpu__DOT__is_srai))) {
        VL_WRITEF_NX("SRAI: a=0x%08x, b=0x%08x, b[4:0]=%2#, result=0x%08x\n",0,
                     32,vlSelfRef.top__DOT__cpu__DOT__alu_a,
                     32,vlSelfRef.top__DOT__cpu__DOT__alu_b,
                     5,(0x1fU & vlSelfRef.top__DOT__cpu__DOT__alu_b),
                     32,vlSelfRef.top__DOT__cpu__DOT__raddr);
    }
    if (((IData)(vlSelfRef.top__DOT__cpu__DOT__valid) 
         & (IData)(vlSelfRef.top__DOT__cpu__DOT__wen))) {
        Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem__DOT__pmem_write_TOP(vlSelfRef.top__DOT__cpu__DOT__raddr, 
                                                                                VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__rs2_data, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__cpu__DOT__raddr), 3U)), 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sw)
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sh)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelfRef.top__DOT__cpu__DOT__raddr)
                                                                                 ? 0xcU
                                                                                 : 3U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sb)
                                                                                 ? 
                                                                                ((0U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                                                                 ? 4U
                                                                                 : 8U)))
                                                                                 : 0U))));
    }
    __VdlySet__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 0U;
    if (((((IData)(vlSelfRef.top__DOT__cpu__DOT__is_addi) 
           | ((0x17U == (0x7fU & vlSelfRef.inst)) | 
              ((0x37U == (0x7fU & vlSelfRef.inst)) 
               | ((0x6fU == (0x7fU & vlSelfRef.inst)) 
                  | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_jalr) 
                     | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_andi) 
                        | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_ori) 
                           | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_add) 
                              | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_xori) 
                                 | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sub) 
                                    | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_xor) 
                                       | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_and) 
                                          | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_or) 
                                             | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_slt) 
                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sltu) 
                                                   | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sll) 
                                                      | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_srl) 
                                                         | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_mul) 
                                                            | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sra) 
                                                               | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_div) 
                                                                  | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_divu) 
                                                                     | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_rem) 
                                                                        | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_remu) 
                                                                           | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_seqz) 
                                                                              | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_srai) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_slli) 
                                                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_srli))))))))))))))))))))))))))) 
          | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lbu) 
             | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lw) 
                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lh) 
                   | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_lhu))))) 
         & (0U != (0x1fU & (vlSelfRef.inst >> 7U))))) {
        __VdlyVal__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 
            = vlSelfRef.top__DOT__cpu__DOT__reg_wdata;
        __VdlyDim0__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 
            = (0x1fU & (vlSelfRef.inst >> 7U));
        __VdlySet__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 1U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0) {
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[__VdlyDim0__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0] 
            = __VdlyVal__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0;
    }
    vlSelfRef.halt_ret = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
        [0xaU];
    vlSelfRef.top__DOT__cpu__DOT__rs2_data = ((0U == 
                                               (0x1fU 
                                                & (vlSelfRef.inst 
                                                   >> 0x14U)))
                                               ? 0U
                                               : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
                                              [(0x1fU 
                                                & (vlSelfRef.inst 
                                                   >> 0x14U))]);
    vlSelfRef.top__DOT__cpu__DOT__rs1_data = ((0U == 
                                               (0x1fU 
                                                & (vlSelfRef.inst 
                                                   >> 0xfU)))
                                               ? 0U
                                               : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
                                              [(0x1fU 
                                                & (vlSelfRef.inst 
                                                   >> 0xfU))]);
    vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_3 
        = (vlSelfRef.top__DOT__cpu__DOT__rs1_data == vlSelfRef.top__DOT__cpu__DOT__rs2_data);
    vlSelfRef.top__DOT__cpu__DOT__alu_b = ((0x17U == 
                                            (0x7fU 
                                             & vlSelfRef.inst))
                                            ? (0xfffff000U 
                                               & vlSelfRef.inst)
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.inst))
                                                ? vlSelfRef.top__DOT__cpu__DOT__rs1_data
                                                : ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_jalr)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__imm_i
                                                    : 
                                                   ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_addi)
                                                     ? vlSelfRef.top__DOT__cpu__DOT__imm_i
                                                     : 
                                                    ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_andi)
                                                      ? vlSelfRef.top__DOT__cpu__DOT__imm_i
                                                      : 
                                                     ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_ori)
                                                       ? vlSelfRef.top__DOT__cpu__DOT__imm_i
                                                       : 
                                                      ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_xori)
                                                        ? vlSelfRef.top__DOT__cpu__DOT__imm_i
                                                        : 
                                                       ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lw)
                                                         ? vlSelfRef.top__DOT__cpu__DOT__imm_i
                                                         : 
                                                        ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lbu)
                                                          ? vlSelfRef.top__DOT__cpu__DOT__imm_i
                                                          : 
                                                         ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lh)
                                                           ? vlSelfRef.top__DOT__cpu__DOT__imm_i
                                                           : 
                                                          ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lhu)
                                                            ? vlSelfRef.top__DOT__cpu__DOT__imm_i
                                                            : 
                                                           ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_seqz)
                                                             ? 0U
                                                             : 
                                                            ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_srai)
                                                              ? 
                                                             (0x1fU 
                                                              & (vlSelfRef.inst 
                                                                 >> 0x14U))
                                                              : 
                                                             ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_srli)
                                                               ? 
                                                              (0x1fU 
                                                               & (vlSelfRef.inst 
                                                                  >> 0x14U))
                                                               : 
                                                              ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_slli)
                                                                ? 
                                                               (0x1fU 
                                                                & (vlSelfRef.inst 
                                                                   >> 0x14U))
                                                                : 
                                                               ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_add)
                                                                 ? vlSelfRef.top__DOT__cpu__DOT__rs2_data
                                                                 : 
                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sub)
                                                                  ? vlSelfRef.top__DOT__cpu__DOT__rs2_data
                                                                  : 
                                                                 ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_xor)
                                                                   ? vlSelfRef.top__DOT__cpu__DOT__rs2_data
                                                                   : 
                                                                  ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_or)
                                                                    ? vlSelfRef.top__DOT__cpu__DOT__rs2_data
                                                                    : 
                                                                   ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_and)
                                                                     ? vlSelfRef.top__DOT__cpu__DOT__rs2_data
                                                                     : 
                                                                    ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_mul)
                                                                      ? vlSelfRef.top__DOT__cpu__DOT__rs2_data
                                                                      : 
                                                                     ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_div)
                                                                       ? vlSelfRef.top__DOT__cpu__DOT__rs2_data
                                                                       : 
                                                                      ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_divu)
                                                                        ? vlSelfRef.top__DOT__cpu__DOT__rs2_data
                                                                        : 
                                                                       ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_rem)
                                                                         ? vlSelfRef.top__DOT__cpu__DOT__rs2_data
                                                                         : 
                                                                        ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_remu)
                                                                          ? vlSelfRef.top__DOT__cpu__DOT__rs2_data
                                                                          : 
                                                                         ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sll)
                                                                           ? 
                                                                          (0x1fU 
                                                                           & vlSelfRef.top__DOT__cpu__DOT__rs2_data)
                                                                           : 
                                                                          ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_srl)
                                                                            ? 
                                                                           (0x1fU 
                                                                            & vlSelfRef.top__DOT__cpu__DOT__rs2_data)
                                                                            : 
                                                                           ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sra)
                                                                             ? 
                                                                            (0x1fU 
                                                                             & vlSelfRef.top__DOT__cpu__DOT__rs2_data)
                                                                             : 
                                                                            ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sb)
                                                                              ? vlSelfRef.top__DOT__cpu__DOT__imm_s
                                                                              : 
                                                                             ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sh)
                                                                               ? vlSelfRef.top__DOT__cpu__DOT__imm_s
                                                                               : 
                                                                              ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sw)
                                                                                ? vlSelfRef.top__DOT__cpu__DOT__imm_s
                                                                                : vlSelfRef.top__DOT__cpu__DOT__rs2_data)))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__cpu__DOT__alu_a = ((0x17U == 
                                            (0x7fU 
                                             & vlSelfRef.inst))
                                            ? vlSelfRef.top__DOT__cpu__DOT__pc_current
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.inst))
                                                ? vlSelfRef.top__DOT__cpu__DOT__pc_current
                                                : vlSelfRef.top__DOT__cpu__DOT__rs1_data));
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

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/cangfeng_/ysyx-workbench/npc/vsrc/top.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/cangfeng_/ysyx-workbench/npc/vsrc/top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/cangfeng_/ysyx-workbench/npc/vsrc/top.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
