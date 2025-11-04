// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0 
        = ((((- (IData)((vlSelf->inst >> 0x1fU))) << 0xdU) 
            | ((0x1000U & (vlSelf->inst >> 0x13U)) 
               | ((0x800U & (vlSelf->inst << 4U)) | 
                  ((0x7e0U & (vlSelf->inst >> 0x14U)) 
                   | (0x1eU & (vlSelf->inst >> 7U)))))) 
           + vlSelf->top__DOT__cpu__DOT__pc_current);
    vlSelf->top__DOT__cpu__DOT__is_csrrw = (IData)(
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT____VdfgTmp_ha5c4d92b__0 
        = ((0x73U == vlSelf->inst) | (0x30200073U == vlSelf->inst));
    vlSelf->top__DOT__cpu__DOT__is_beq = (IData)((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_bne = (IData)((0x1063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_blt = (IData)((0x4063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_bltu = (IData)((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_bge = (IData)((0x5063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_bgeu = (IData)((0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_csrrs = (IData)(
                                                   (0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_slt = (IData)((0x2033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_sltu = (IData)((0x3033U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__imm_i = (((- (IData)(
                                                     (vlSelf->inst 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->inst 
                                            >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__imm_s = (((- (IData)(
                                                     (vlSelf->inst 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))));
    vlSelf->top__DOT__cpu__DOT__is_sw = (IData)((0x2023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_sb = (IData)((0x23U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_sh = (IData)((0x1023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__rs1_data = ((0U == 
                                             (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 0xfU)))
                                             ? 0U : 
                                            vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out
                                            [(0x1fU 
                                              & (vlSelf->inst 
                                                 >> 0xfU))]);
    if ((0x73U == vlSelf->inst)) {
        vlSelf->top__DOT__cpu__DOT__csr_waddr = 0x341U;
        vlSelf->top__DOT__cpu__DOT__csr_raddr = 0x305U;
        vlSelf->top__DOT__cpu__DOT__csr_wdata = vlSelf->top__DOT__cpu__DOT__pc_current;
    } else if ((0x30200073U == vlSelf->inst)) {
        vlSelf->top__DOT__cpu__DOT__csr_waddr = 0x342U;
        vlSelf->top__DOT__cpu__DOT__csr_raddr = 0x341U;
        vlSelf->top__DOT__cpu__DOT__csr_wdata = 0U;
    } else {
        vlSelf->top__DOT__cpu__DOT__csr_waddr = (vlSelf->inst 
                                                 >> 0x14U);
        vlSelf->top__DOT__cpu__DOT__csr_raddr = (vlSelf->inst 
                                                 >> 0x14U);
        vlSelf->top__DOT__cpu__DOT__csr_wdata = vlSelf->top__DOT__cpu__DOT__rs1_data;
    }
    vlSelf->top__DOT__cpu__DOT__is_addi = (IData)((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_andi = (IData)((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_ori = (IData)((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_xori = (IData)((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_sll = (IData)((0x1033U 
                                                  == 
                                                  (0x4000707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_seqz = (IData)((0x103013U 
                                                   == 
                                                   (0xfff0707fU 
                                                    & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_slli = (IData)((0x1013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->__VdfgTmp_h05563a42__0 = vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->top__DOT__cpu__DOT__is_jalr = (IData)((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_lw = (IData)((0x2003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_lbu = (IData)((0x4003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_lh = (IData)((0x1003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_lb = (IData)((3U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_lhu = (IData)((0x5003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_xor = (IData)((0x4033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_or = (IData)((0x6033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__is_and = (IData)((0x7033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__decoder__DOT____VdfgTmp_h873f971e__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__decoder__DOT____VdfgTmp_he69f398c__0 
        = (IData)((0x33U == (0x707fU & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__decoder__DOT____VdfgTmp_hd3ddd1c8__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->inst)));
    vlSelf->top__DOT__cpu__DOT__csr_wen = ((IData)(vlSelf->top__DOT__cpu__DOT__is_csrrw) 
                                           | (IData)(vlSelf->top__DOT__cpu__DOT____VdfgTmp_ha5c4d92b__0));
    vlSelf->top__DOT__cpu__DOT__csr_rdata = ((0x305U 
                                              == (IData)(vlSelf->top__DOT__cpu__DOT__csr_raddr))
                                              ? vlSelf->top__DOT__cpu__DOT__csr__DOT__mtvec
                                              : ((0x341U 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__csr_raddr))
                                                  ? vlSelf->top__DOT__cpu__DOT__csr__DOT__mepc
                                                  : 
                                                 ((0x300U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__csr_raddr))
                                                   ? vlSelf->top__DOT__cpu__DOT__csr__DOT__mstatus
                                                   : 
                                                  ((0x342U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__csr_raddr))
                                                    ? vlSelf->top__DOT__cpu__DOT__csr__DOT__mcause
                                                    : 0U))));
    vlSelf->top__DOT__cpu__DOT__wen = ((IData)(vlSelf->top__DOT__cpu__DOT__is_sw) 
                                       | ((IData)(vlSelf->top__DOT__cpu__DOT__is_sb) 
                                          | (IData)(vlSelf->top__DOT__cpu__DOT__is_sh)));
    if ((0U == (0x1fU & (vlSelf->inst >> 0x14U)))) {
        vlSelf->top__DOT__cpu__DOT____VdfgTmp_h257cf15f__0 = 0U;
        vlSelf->top__DOT__cpu__DOT__rs2_data = 0U;
    } else {
        vlSelf->top__DOT__cpu__DOT____VdfgTmp_h257cf15f__0 
            = (0x1fU & vlSelf->__VdfgTmp_h05563a42__0);
        vlSelf->top__DOT__cpu__DOT__rs2_data = vlSelf->__VdfgTmp_h05563a42__0;
    }
    vlSelf->top__DOT__cpu__DOT__is_div = ((IData)(vlSelf->top__DOT__cpu__DOT__is_xor) 
                                          & (1U == 
                                             (vlSelf->inst 
                                              >> 0x19U)));
    vlSelf->top__DOT__cpu__DOT__is_rem = ((IData)(vlSelf->top__DOT__cpu__DOT__is_or) 
                                          & (1U == 
                                             (vlSelf->inst 
                                              >> 0x19U)));
    vlSelf->top__DOT__cpu__DOT__is_remu = ((IData)(vlSelf->top__DOT__cpu__DOT__is_and) 
                                           & (1U == 
                                              (vlSelf->inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__cpu__DOT__is_srai = ((IData)(vlSelf->top__DOT__cpu__DOT__decoder__DOT____VdfgTmp_h873f971e__0) 
                                           & (vlSelf->inst 
                                              >> 0x1eU));
    vlSelf->top__DOT__cpu__DOT__is_srli = ((~ (vlSelf->inst 
                                               >> 0x1eU)) 
                                           & (IData)(vlSelf->top__DOT__cpu__DOT__decoder__DOT____VdfgTmp_h873f971e__0));
    vlSelf->top__DOT__cpu__DOT__is_add = ((~ (vlSelf->inst 
                                              >> 0x1eU)) 
                                          & (IData)(vlSelf->top__DOT__cpu__DOT__decoder__DOT____VdfgTmp_he69f398c__0));
    vlSelf->top__DOT__cpu__DOT__is_sub = ((IData)(vlSelf->top__DOT__cpu__DOT__decoder__DOT____VdfgTmp_he69f398c__0) 
                                          & (vlSelf->inst 
                                             >> 0x1eU));
    vlSelf->top__DOT__cpu__DOT__is_mul = ((IData)(vlSelf->top__DOT__cpu__DOT__decoder__DOT____VdfgTmp_he69f398c__0) 
                                          & (1U == 
                                             (vlSelf->inst 
                                              >> 0x19U)));
    vlSelf->top__DOT__cpu__DOT__is_srl = ((~ (vlSelf->inst 
                                              >> 0x1eU)) 
                                          & (IData)(vlSelf->top__DOT__cpu__DOT__decoder__DOT____VdfgTmp_hd3ddd1c8__0));
    vlSelf->top__DOT__cpu__DOT__is_sra = ((IData)(vlSelf->top__DOT__cpu__DOT__decoder__DOT____VdfgTmp_hd3ddd1c8__0) 
                                          & (vlSelf->inst 
                                             >> 0x1eU));
    vlSelf->top__DOT__cpu__DOT__is_divu = ((IData)(vlSelf->top__DOT__cpu__DOT__decoder__DOT____VdfgTmp_hd3ddd1c8__0) 
                                           & (1U == 
                                              (vlSelf->inst 
                                               >> 0x19U)));
    if ((0x17U == (0x7fU & vlSelf->inst))) {
        vlSelf->top__DOT__cpu__DOT__alu_a = vlSelf->top__DOT__cpu__DOT__pc_current;
        vlSelf->top__DOT__cpu__DOT__op = 0U;
        vlSelf->top__DOT__cpu__DOT__alu_b = (0xfffff000U 
                                             & vlSelf->inst);
    } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
        vlSelf->top__DOT__cpu__DOT__alu_a = vlSelf->top__DOT__cpu__DOT__pc_current;
        vlSelf->top__DOT__cpu__DOT__op = 0U;
        vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__rs1_data;
    } else {
        vlSelf->top__DOT__cpu__DOT__alu_a = vlSelf->top__DOT__cpu__DOT__rs1_data;
        if (vlSelf->top__DOT__cpu__DOT__is_jalr) {
            vlSelf->top__DOT__cpu__DOT__op = 0U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__imm_i;
        } else if (vlSelf->top__DOT__cpu__DOT__is_addi) {
            vlSelf->top__DOT__cpu__DOT__op = 0U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__imm_i;
        } else if (vlSelf->top__DOT__cpu__DOT__is_andi) {
            vlSelf->top__DOT__cpu__DOT__op = 2U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__imm_i;
        } else if (vlSelf->top__DOT__cpu__DOT__is_ori) {
            vlSelf->top__DOT__cpu__DOT__op = 3U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__imm_i;
        } else if (vlSelf->top__DOT__cpu__DOT__is_xori) {
            vlSelf->top__DOT__cpu__DOT__op = 4U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__imm_i;
        } else if (vlSelf->top__DOT__cpu__DOT__is_lw) {
            vlSelf->top__DOT__cpu__DOT__op = 0U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__imm_i;
        } else if (vlSelf->top__DOT__cpu__DOT__is_lbu) {
            vlSelf->top__DOT__cpu__DOT__op = 0U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__imm_i;
        } else if (vlSelf->top__DOT__cpu__DOT__is_lh) {
            vlSelf->top__DOT__cpu__DOT__op = 0U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__imm_i;
        } else if (vlSelf->top__DOT__cpu__DOT__is_lhu) {
            vlSelf->top__DOT__cpu__DOT__op = 0U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__imm_i;
        } else if (vlSelf->top__DOT__cpu__DOT__is_lb) {
            vlSelf->top__DOT__cpu__DOT__op = 0U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__imm_i;
        } else if (vlSelf->top__DOT__cpu__DOT__is_seqz) {
            vlSelf->top__DOT__cpu__DOT__op = 3U;
            vlSelf->top__DOT__cpu__DOT__alu_b = 0U;
        } else if (vlSelf->top__DOT__cpu__DOT__is_srai) {
            vlSelf->top__DOT__cpu__DOT__op = 7U;
            vlSelf->top__DOT__cpu__DOT__alu_b = (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 0x14U));
        } else if (vlSelf->top__DOT__cpu__DOT__is_srli) {
            vlSelf->top__DOT__cpu__DOT__op = 6U;
            vlSelf->top__DOT__cpu__DOT__alu_b = (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 0x14U));
        } else if (vlSelf->top__DOT__cpu__DOT__is_slli) {
            vlSelf->top__DOT__cpu__DOT__op = 5U;
            vlSelf->top__DOT__cpu__DOT__alu_b = (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 0x14U));
        } else if (vlSelf->top__DOT__cpu__DOT__is_add) {
            vlSelf->top__DOT__cpu__DOT__op = 0U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelf->top__DOT__cpu__DOT__is_sub) {
            vlSelf->top__DOT__cpu__DOT__op = 1U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelf->top__DOT__cpu__DOT__is_xor) {
            vlSelf->top__DOT__cpu__DOT__op = 4U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelf->top__DOT__cpu__DOT__is_or) {
            vlSelf->top__DOT__cpu__DOT__op = 3U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelf->top__DOT__cpu__DOT__is_and) {
            vlSelf->top__DOT__cpu__DOT__op = 2U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelf->top__DOT__cpu__DOT__is_mul) {
            vlSelf->top__DOT__cpu__DOT__op = 8U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelf->top__DOT__cpu__DOT__is_div) {
            vlSelf->top__DOT__cpu__DOT__op = 9U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelf->top__DOT__cpu__DOT__is_divu) {
            vlSelf->top__DOT__cpu__DOT__op = 0xaU;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelf->top__DOT__cpu__DOT__is_rem) {
            vlSelf->top__DOT__cpu__DOT__op = 0xbU;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelf->top__DOT__cpu__DOT__is_remu) {
            vlSelf->top__DOT__cpu__DOT__op = 0xcU;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT__rs2_data;
        } else if (vlSelf->top__DOT__cpu__DOT__is_sll) {
            vlSelf->top__DOT__cpu__DOT__op = 5U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT____VdfgTmp_h257cf15f__0;
        } else if (vlSelf->top__DOT__cpu__DOT__is_srl) {
            vlSelf->top__DOT__cpu__DOT__op = 6U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT____VdfgTmp_h257cf15f__0;
        } else if (vlSelf->top__DOT__cpu__DOT__is_sra) {
            vlSelf->top__DOT__cpu__DOT__op = 7U;
            vlSelf->top__DOT__cpu__DOT__alu_b = vlSelf->top__DOT__cpu__DOT____VdfgTmp_h257cf15f__0;
        } else {
            vlSelf->top__DOT__cpu__DOT__op = 0U;
            vlSelf->top__DOT__cpu__DOT__alu_b = ((IData)(vlSelf->top__DOT__cpu__DOT__is_sb)
                                                  ? vlSelf->top__DOT__cpu__DOT__imm_s
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__cpu__DOT__is_sh)
                                                   ? vlSelf->top__DOT__cpu__DOT__imm_s
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__cpu__DOT__is_sw)
                                                    ? vlSelf->top__DOT__cpu__DOT__imm_s
                                                    : vlSelf->top__DOT__cpu__DOT__rs2_data)));
        }
    }
    vlSelf->top__DOT__cpu__DOT____VdfgTmp_h42b8e437__0 
        = (vlSelf->top__DOT__cpu__DOT__rs1_data == vlSelf->top__DOT__cpu__DOT__rs2_data);
    vlSelf->top__DOT__cpu__DOT____VdfgTmp_hab3eb5ba__0 
        = (((IData)(vlSelf->top__DOT__cpu__DOT__is_addi) 
            | ((0x37U == (0x7fU & vlSelf->inst)) | 
               ((0x17U == (0x7fU & vlSelf->inst)) | 
                ((0x6fU == (0x7fU & vlSelf->inst)) 
                 | ((IData)(vlSelf->top__DOT__cpu__DOT__is_jalr) 
                    | ((IData)(vlSelf->top__DOT__cpu__DOT__is_andi) 
                       | ((IData)(vlSelf->top__DOT__cpu__DOT__is_ori) 
                          | ((IData)(vlSelf->top__DOT__cpu__DOT__is_xori) 
                             | ((IData)(vlSelf->top__DOT__cpu__DOT__is_add) 
                                | ((IData)(vlSelf->top__DOT__cpu__DOT__is_sub) 
                                   | ((IData)(vlSelf->top__DOT__cpu__DOT__is_xor) 
                                      | ((IData)(vlSelf->top__DOT__cpu__DOT__is_or) 
                                         | ((IData)(vlSelf->top__DOT__cpu__DOT__is_and) 
                                            | ((IData)(vlSelf->top__DOT__cpu__DOT__is_slt) 
                                               | ((IData)(vlSelf->top__DOT__cpu__DOT__is_sltu) 
                                                  | ((IData)(vlSelf->top__DOT__cpu__DOT__is_sll) 
                                                     | ((IData)(vlSelf->top__DOT__cpu__DOT__is_srl) 
                                                        | ((IData)(vlSelf->top__DOT__cpu__DOT__is_sra) 
                                                           | ((IData)(vlSelf->top__DOT__cpu__DOT__is_mul) 
                                                              | ((IData)(vlSelf->top__DOT__cpu__DOT__is_div) 
                                                                 | ((IData)(vlSelf->top__DOT__cpu__DOT__is_divu) 
                                                                    | ((IData)(vlSelf->top__DOT__cpu__DOT__is_rem) 
                                                                       | ((IData)(vlSelf->top__DOT__cpu__DOT__is_remu) 
                                                                          | ((IData)(vlSelf->top__DOT__cpu__DOT__is_seqz) 
                                                                             | ((IData)(vlSelf->top__DOT__cpu__DOT__is_srai) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu__DOT__is_slli) 
                                                                                | (IData)(vlSelf->top__DOT__cpu__DOT__is_srli))))))))))))))))))))))))))) 
           | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lw) 
              | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lbu) 
                 | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lh) 
                    | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lb) 
                       | (IData)(vlSelf->top__DOT__cpu__DOT__is_lhu))))));
    vlSelf->non_inst = (1U & (~ ((IData)(vlSelf->top__DOT__cpu__DOT____VdfgTmp_hab3eb5ba__0) 
                                 | ((IData)(vlSelf->top__DOT__cpu__DOT__is_sw) 
                                    | ((IData)(vlSelf->top__DOT__cpu__DOT__is_sb) 
                                       | ((IData)(vlSelf->top__DOT__cpu__DOT__is_sh) 
                                          | ((IData)(vlSelf->top__DOT__cpu__DOT__is_beq) 
                                             | ((IData)(vlSelf->top__DOT__cpu__DOT__is_bne) 
                                                | ((IData)(vlSelf->top__DOT__cpu__DOT__is_blt) 
                                                   | ((IData)(vlSelf->top__DOT__cpu__DOT__is_bltu) 
                                                      | ((IData)(vlSelf->top__DOT__cpu__DOT__is_bge) 
                                                         | ((IData)(vlSelf->top__DOT__cpu__DOT__is_bgeu) 
                                                            | ((0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->inst)) 
                                                               | ((IData)(vlSelf->top__DOT__cpu__DOT__is_jalr) 
                                                                  | ((IData)(vlSelf->top__DOT__cpu__DOT__is_csrrw) 
                                                                     | ((IData)(vlSelf->top__DOT__cpu__DOT__is_csrrs) 
                                                                        | (IData)(vlSelf->top__DOT__cpu__DOT____VdfgTmp_ha5c4d92b__0)))))))))))))))));
    vlSelf->top__DOT__cpu__DOT__alu_out = ((8U & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                            ? ((4U 
                                                & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                     ? 0U
                                                     : 
                                                    VL_MODDIV_III(32, vlSelf->top__DOT__cpu__DOT__alu_a, vlSelf->top__DOT__cpu__DOT__alu_b)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                     ? 
                                                    VL_MODDIVS_III(32, vlSelf->top__DOT__cpu__DOT__alu_a, vlSelf->top__DOT__cpu__DOT__alu_b)
                                                     : 
                                                    VL_DIV_III(32, vlSelf->top__DOT__cpu__DOT__alu_a, vlSelf->top__DOT__cpu__DOT__alu_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                     ? 
                                                    VL_DIVS_III(32, vlSelf->top__DOT__cpu__DOT__alu_a, vlSelf->top__DOT__cpu__DOT__alu_b)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     * vlSelf->top__DOT__cpu__DOT__alu_b))))
                                            : ((4U 
                                                & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__cpu__DOT__alu_a, 
                                                                   (0x1fU 
                                                                    & vlSelf->top__DOT__cpu__DOT__alu_b))
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__cpu__DOT__alu_b)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__cpu__DOT__alu_b))
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     ^ vlSelf->top__DOT__cpu__DOT__alu_b)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     | vlSelf->top__DOT__cpu__DOT__alu_b)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     & vlSelf->top__DOT__cpu__DOT__alu_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     - vlSelf->top__DOT__cpu__DOT__alu_b)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     + vlSelf->top__DOT__cpu__DOT__alu_b)))));
    vlSelf->top__DOT__cpu__DOT__pc_next = ((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->inst))
                                            ? ((((- (IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                                 << 0x14U) 
                                                | ((0xff000U 
                                                    & vlSelf->inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->inst 
                                                            >> 0x14U))))) 
                                               + vlSelf->top__DOT__cpu__DOT__pc_current)
                                            : ((IData)(vlSelf->top__DOT__cpu__DOT__is_jalr)
                                                ? (0xfffffffeU 
                                                   & vlSelf->top__DOT__cpu__DOT__alu_out)
                                                : ((IData)(vlSelf->top__DOT__cpu__DOT__is_beq)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT____VdfgTmp_h42b8e437__0)
                                                     ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->top__DOT__cpu__DOT__pc_current))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__is_bne)
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__cpu__DOT____VdfgTmp_h42b8e437__0)
                                                      ? 
                                                     ((IData)(4U) 
                                                      + vlSelf->top__DOT__cpu__DOT__pc_current)
                                                      : vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0)
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__cpu__DOT__is_blt)
                                                      ? 
                                                     (VL_LTS_III(32, vlSelf->top__DOT__cpu__DOT__rs1_data, vlSelf->top__DOT__cpu__DOT__rs2_data)
                                                       ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelf->top__DOT__cpu__DOT__pc_current))
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__cpu__DOT__is_bltu)
                                                       ? 
                                                      ((vlSelf->top__DOT__cpu__DOT__rs1_data 
                                                        < vlSelf->top__DOT__cpu__DOT__rs2_data)
                                                        ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelf->top__DOT__cpu__DOT__pc_current))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__cpu__DOT__is_bge)
                                                        ? 
                                                       (VL_GTES_III(32, vlSelf->top__DOT__cpu__DOT__rs1_data, vlSelf->top__DOT__cpu__DOT__rs2_data)
                                                         ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                                         : 
                                                        ((IData)(4U) 
                                                         + vlSelf->top__DOT__cpu__DOT__pc_current))
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__cpu__DOT__is_bgeu)
                                                         ? 
                                                        ((vlSelf->top__DOT__cpu__DOT__rs1_data 
                                                          >= vlSelf->top__DOT__cpu__DOT__rs2_data)
                                                          ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                                          : 
                                                         ((IData)(4U) 
                                                          + vlSelf->top__DOT__cpu__DOT__pc_current))
                                                         : 
                                                        ((0x73U 
                                                          == vlSelf->inst)
                                                          ? vlSelf->top__DOT__cpu__DOT__csr_rdata
                                                          : 
                                                         ((0x30200073U 
                                                           == vlSelf->inst)
                                                           ? vlSelf->top__DOT__cpu__DOT__csr_rdata
                                                           : 
                                                          ((IData)(4U) 
                                                           + vlSelf->top__DOT__cpu__DOT__pc_current)))))))))));
    if ((((IData)(vlSelf->top__DOT__cpu__DOT__is_lw) 
          | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lbu) 
             | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lhu) 
                | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lh) 
                   | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lb) 
                      | (IData)(vlSelf->top__DOT__cpu__DOT__wen)))))) 
         & (~ (IData)(vlSelf->top__DOT__cpu__DOT__wen)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem__DOT__pmem_read_TOP(vlSelf->top__DOT__cpu__DOT__alu_out, vlSelf->__Vfunc_top__DOT__cpu__DOT__mem__DOT__pmem_read__1__Vfuncout);
        vlSelf->top__DOT__cpu__DOT__rdata = vlSelf->__Vfunc_top__DOT__cpu__DOT__mem__DOT__pmem_read__1__Vfuncout;
    } else {
        vlSelf->top__DOT__cpu__DOT__rdata = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__rbyte = (0xffU & ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->top__DOT__cpu__DOT__alu_out))
                                                   ? vlSelf->top__DOT__cpu__DOT__rdata
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->top__DOT__cpu__DOT__alu_out))
                                                    ? 
                                                   (vlSelf->top__DOT__cpu__DOT__rdata 
                                                    >> 8U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->top__DOT__cpu__DOT__alu_out))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__rdata 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__rdata 
                                                     >> 0x18U)))));
    vlSelf->top__DOT__cpu__DOT__r2byte = (0xffffU & 
                                          ((2U & vlSelf->top__DOT__cpu__DOT__alu_out)
                                            ? (vlSelf->top__DOT__cpu__DOT__rdata 
                                               >> 0x10U)
                                            : vlSelf->top__DOT__cpu__DOT__rdata));
    vlSelf->top__DOT__cpu__DOT__reg_wdata = ((IData)(vlSelf->top__DOT__cpu__DOT__is_addi)
                                              ? vlSelf->top__DOT__cpu__DOT__alu_out
                                              : ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelf->inst)
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))
                                                   ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__cpu__DOT__pc_current)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__is_jalr)
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->top__DOT__cpu__DOT__pc_current)
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__cpu__DOT__is_andi)
                                                      ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__cpu__DOT__is_ori)
                                                       ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__cpu__DOT__is_xori)
                                                        ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__cpu__DOT__is_lw)
                                                         ? vlSelf->top__DOT__cpu__DOT__rdata
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__cpu__DOT__is_lbu)
                                                          ? (IData)(vlSelf->top__DOT__cpu__DOT__rbyte)
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__cpu__DOT__is_lh)
                                                           ? 
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->top__DOT__cpu__DOT__r2byte) 
                                                                           >> 0xfU)))) 
                                                            << 0x10U) 
                                                           | (IData)(vlSelf->top__DOT__cpu__DOT__r2byte))
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__cpu__DOT__is_lhu)
                                                            ? (IData)(vlSelf->top__DOT__cpu__DOT__r2byte)
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__cpu__DOT__is_lb)
                                                             ? 
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->top__DOT__cpu__DOT__rbyte) 
                                                                             >> 7U)))) 
                                                              << 8U) 
                                                             | (IData)(vlSelf->top__DOT__cpu__DOT__rbyte))
                                                             : 
                                                            ((IData)(vlSelf->top__DOT__cpu__DOT__is_seqz)
                                                              ? 
                                                             ((0U 
                                                               == vlSelf->top__DOT__cpu__DOT__alu_out)
                                                               ? 1U
                                                               : 0U)
                                                              : 
                                                             ((IData)(vlSelf->top__DOT__cpu__DOT__is_srai)
                                                               ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                               : 
                                                              ((IData)(vlSelf->top__DOT__cpu__DOT__is_srli)
                                                                ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                : 
                                                               ((IData)(vlSelf->top__DOT__cpu__DOT__is_slli)
                                                                 ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                 : 
                                                                ((IData)(vlSelf->top__DOT__cpu__DOT__is_add)
                                                                  ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__cpu__DOT__is_sub)
                                                                   ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                   : 
                                                                  ((IData)(vlSelf->top__DOT__cpu__DOT__is_xor)
                                                                    ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__is_or)
                                                                     ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                     : 
                                                                    ((IData)(vlSelf->top__DOT__cpu__DOT__is_and)
                                                                      ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                      : 
                                                                     ((IData)(vlSelf->top__DOT__cpu__DOT__is_mul)
                                                                       ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__cpu__DOT__is_div)
                                                                        ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                        : 
                                                                       ((IData)(vlSelf->top__DOT__cpu__DOT__is_divu)
                                                                         ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__cpu__DOT__is_rem)
                                                                          ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                          : 
                                                                         ((IData)(vlSelf->top__DOT__cpu__DOT__is_remu)
                                                                           ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                           : 
                                                                          ((IData)(vlSelf->top__DOT__cpu__DOT__is_slt)
                                                                            ? 
                                                                           (VL_LTS_III(32, vlSelf->top__DOT__cpu__DOT__alu_a, vlSelf->top__DOT__cpu__DOT__alu_b)
                                                                             ? 1U
                                                                             : 0U)
                                                                            : 
                                                                           ((IData)(vlSelf->top__DOT__cpu__DOT__is_sltu)
                                                                             ? 
                                                                            ((vlSelf->top__DOT__cpu__DOT__alu_a 
                                                                              < vlSelf->top__DOT__cpu__DOT__alu_b)
                                                                              ? 1U
                                                                              : 0U)
                                                                             : 
                                                                            ((IData)(vlSelf->top__DOT__cpu__DOT__is_sll)
                                                                              ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                              : 
                                                                             ((IData)(vlSelf->top__DOT__cpu__DOT__is_srl)
                                                                               ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                               : 
                                                                              ((IData)(vlSelf->top__DOT__cpu__DOT__is_sra)
                                                                                ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                                : 
                                                                               ((IData)(vlSelf->top__DOT__cpu__DOT__is_csrrs)
                                                                                 ? vlSelf->top__DOT__cpu__DOT__csr_rdata
                                                                                 : 0U)))))))))))))))))))))))))))))))));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root____Vdpiimwrap_top__DOT__ebreak_TOP();

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    if ((0x100073U == vlSelf->inst)) {
        Vtop___024root____Vdpiimwrap_top__DOT__ebreak_TOP();
    }
    if ((0x30200073U == vlSelf->inst)) {
        vlSelf->top__DOT__cpu__DOT__csr__DOT__mstatus 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu__DOT__csr__DOT__mstatus) 
               | (8U & (vlSelf->top__DOT__cpu__DOT__csr__DOT__mstatus 
                        >> 4U)));
        vlSelf->top__DOT__cpu__DOT__csr__DOT__mstatus 
            = (0x80U | vlSelf->top__DOT__cpu__DOT__csr__DOT__mstatus);
    }
    if ((0x305U == (IData)(vlSelf->top__DOT__cpu__DOT__csr_waddr))) {
        if (vlSelf->top__DOT__cpu__DOT__csr_wen) {
            vlSelf->top__DOT__cpu__DOT__csr__DOT__mtvec 
                = vlSelf->top__DOT__cpu__DOT__csr_wdata;
        }
    }
    if ((0x73U == vlSelf->inst)) {
        vlSelf->top__DOT__cpu__DOT__csr__DOT__mcause = 0xbU;
    }
    if ((0x305U != (IData)(vlSelf->top__DOT__cpu__DOT__csr_waddr))) {
        if ((0x341U != (IData)(vlSelf->top__DOT__cpu__DOT__csr_waddr))) {
            if ((0x300U == (IData)(vlSelf->top__DOT__cpu__DOT__csr_waddr))) {
                if (vlSelf->top__DOT__cpu__DOT__csr_wen) {
                    vlSelf->top__DOT__cpu__DOT__csr__DOT__mstatus 
                        = vlSelf->top__DOT__cpu__DOT__csr_wdata;
                }
            }
            if ((0x300U != (IData)(vlSelf->top__DOT__cpu__DOT__csr_waddr))) {
                if ((0x342U == (IData)(vlSelf->top__DOT__cpu__DOT__csr_waddr))) {
                    if (vlSelf->top__DOT__cpu__DOT__csr_wen) {
                        vlSelf->top__DOT__cpu__DOT__csr__DOT__mcause 
                            = vlSelf->top__DOT__cpu__DOT__csr_wdata;
                    }
                }
            }
        }
        if ((0x341U == (IData)(vlSelf->top__DOT__cpu__DOT__csr_waddr))) {
            if (vlSelf->top__DOT__cpu__DOT__csr_wen) {
                vlSelf->top__DOT__cpu__DOT__csr__DOT__mepc 
                    = vlSelf->top__DOT__cpu__DOT__csr_wdata;
            }
        }
    }
    vlSelf->top__DOT__cpu__DOT__pc_current = ((IData)(vlSelf->rst)
                                               ? 0x80000000U
                                               : vlSelf->top__DOT__cpu__DOT__pc_next);
    vlSelf->pc = vlSelf->top__DOT__cpu__DOT__pc_current;
    vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0 
        = ((((- (IData)((vlSelf->inst >> 0x1fU))) << 0xdU) 
            | ((0x1000U & (vlSelf->inst >> 0x13U)) 
               | ((0x800U & (vlSelf->inst << 4U)) | 
                  ((0x7e0U & (vlSelf->inst >> 0x14U)) 
                   | (0x1eU & (vlSelf->inst >> 7U)))))) 
           + vlSelf->top__DOT__cpu__DOT__pc_current);
}

void Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0;
    __Vdlyvval__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0;
    __Vdlyvset__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 0U;
    if ((((IData)(vlSelf->top__DOT__cpu__DOT__is_lw) 
          | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lbu) 
             | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lhu) 
                | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lh) 
                   | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lb) 
                      | (IData)(vlSelf->top__DOT__cpu__DOT__wen)))))) 
         & (IData)(vlSelf->top__DOT__cpu__DOT__wen))) {
        Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem__DOT__pmem_write_TOP(vlSelf->top__DOT__cpu__DOT__alu_out, 
                                                                                ((0x1fU 
                                                                                >= 
                                                                                (0x18U 
                                                                                & (vlSelf->top__DOT__cpu__DOT__alu_out 
                                                                                << 3U)))
                                                                                 ? 
                                                                                (vlSelf->top__DOT__cpu__DOT__rs2_data 
                                                                                << 
                                                                                (0x18U 
                                                                                & (vlSelf->top__DOT__cpu__DOT__alu_out 
                                                                                << 3U)))
                                                                                 : 0U), 
                                                                                ((IData)(vlSelf->top__DOT__cpu__DOT__is_sw)
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__cpu__DOT__is_sh)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->top__DOT__cpu__DOT__alu_out)
                                                                                 ? 0xcU
                                                                                 : 3U)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__cpu__DOT__is_sb)
                                                                                 ? 
                                                                                ((0U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->top__DOT__cpu__DOT__alu_out))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->top__DOT__cpu__DOT__alu_out))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->top__DOT__cpu__DOT__alu_out))
                                                                                 ? 4U
                                                                                 : 8U)))
                                                                                 : 0U))));
    }
    if ((((IData)(vlSelf->top__DOT__cpu__DOT____VdfgTmp_hab3eb5ba__0) 
          | ((IData)(vlSelf->top__DOT__cpu__DOT__is_csrrs) 
             | (IData)(vlSelf->top__DOT__cpu__DOT__is_csrrw))) 
         & (0U != (0x1fU & (vlSelf->inst >> 7U))))) {
        __Vdlyvval__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 
            = vlSelf->top__DOT__cpu__DOT__reg_wdata;
        __Vdlyvset__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0) {
        vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[__Vdlyvdim0__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0;
    }
    vlSelf->halt_ret = vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out
        [0xaU];
    vlSelf->top__DOT__cpu__DOT__rs1_data = ((0U == 
                                             (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 0xfU)))
                                             ? 0U : 
                                            vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out
                                            [(0x1fU 
                                              & (vlSelf->inst 
                                                 >> 0xfU))]);
    vlSelf->__VdfgTmp_h05563a42__0 = vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    if ((0U == (0x1fU & (vlSelf->inst >> 0x14U)))) {
        vlSelf->top__DOT__cpu__DOT____VdfgTmp_h257cf15f__0 = 0U;
        vlSelf->top__DOT__cpu__DOT__rs2_data = 0U;
    } else {
        vlSelf->top__DOT__cpu__DOT____VdfgTmp_h257cf15f__0 
            = (0x1fU & vlSelf->__VdfgTmp_h05563a42__0);
        vlSelf->top__DOT__cpu__DOT__rs2_data = vlSelf->__VdfgTmp_h05563a42__0;
    }
    vlSelf->top__DOT__cpu__DOT____VdfgTmp_h42b8e437__0 
        = (vlSelf->top__DOT__cpu__DOT__rs1_data == vlSelf->top__DOT__cpu__DOT__rs2_data);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__csr_wdata = ((0x73U 
                                              == vlSelf->inst)
                                              ? vlSelf->top__DOT__cpu__DOT__pc_current
                                              : ((0x30200073U 
                                                  == vlSelf->inst)
                                                  ? 0U
                                                  : vlSelf->top__DOT__cpu__DOT__rs1_data));
    vlSelf->top__DOT__cpu__DOT__alu_a = ((0x17U == 
                                          (0x7fU & vlSelf->inst))
                                          ? vlSelf->top__DOT__cpu__DOT__pc_current
                                          : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->inst))
                                              ? vlSelf->top__DOT__cpu__DOT__pc_current
                                              : vlSelf->top__DOT__cpu__DOT__rs1_data));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__csr_rdata = ((0x305U 
                                              == (IData)(vlSelf->top__DOT__cpu__DOT__csr_raddr))
                                              ? vlSelf->top__DOT__cpu__DOT__csr__DOT__mtvec
                                              : ((0x341U 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__csr_raddr))
                                                  ? vlSelf->top__DOT__cpu__DOT__csr__DOT__mepc
                                                  : 
                                                 ((0x300U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__csr_raddr))
                                                   ? vlSelf->top__DOT__cpu__DOT__csr__DOT__mstatus
                                                   : 
                                                  ((0x342U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__csr_raddr))
                                                    ? vlSelf->top__DOT__cpu__DOT__csr__DOT__mcause
                                                    : 0U))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__alu_b = ((0x17U == 
                                          (0x7fU & vlSelf->inst))
                                          ? (0xfffff000U 
                                             & vlSelf->inst)
                                          : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->inst))
                                              ? vlSelf->top__DOT__cpu__DOT__rs1_data
                                              : ((IData)(vlSelf->top__DOT__cpu__DOT__is_jalr)
                                                  ? vlSelf->top__DOT__cpu__DOT__imm_i
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__cpu__DOT__is_addi)
                                                   ? vlSelf->top__DOT__cpu__DOT__imm_i
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__cpu__DOT__is_andi)
                                                    ? vlSelf->top__DOT__cpu__DOT__imm_i
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__is_ori)
                                                     ? vlSelf->top__DOT__cpu__DOT__imm_i
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__cpu__DOT__is_xori)
                                                      ? vlSelf->top__DOT__cpu__DOT__imm_i
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__cpu__DOT__is_lw)
                                                       ? vlSelf->top__DOT__cpu__DOT__imm_i
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__cpu__DOT__is_lbu)
                                                        ? vlSelf->top__DOT__cpu__DOT__imm_i
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__cpu__DOT__is_lh)
                                                         ? vlSelf->top__DOT__cpu__DOT__imm_i
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__cpu__DOT__is_lhu)
                                                          ? vlSelf->top__DOT__cpu__DOT__imm_i
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__cpu__DOT__is_lb)
                                                           ? vlSelf->top__DOT__cpu__DOT__imm_i
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__cpu__DOT__is_seqz)
                                                            ? 0U
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__cpu__DOT__is_srai)
                                                             ? 
                                                            (0x1fU 
                                                             & (vlSelf->inst 
                                                                >> 0x14U))
                                                             : 
                                                            ((IData)(vlSelf->top__DOT__cpu__DOT__is_srli)
                                                              ? 
                                                             (0x1fU 
                                                              & (vlSelf->inst 
                                                                 >> 0x14U))
                                                              : 
                                                             ((IData)(vlSelf->top__DOT__cpu__DOT__is_slli)
                                                               ? 
                                                              (0x1fU 
                                                               & (vlSelf->inst 
                                                                  >> 0x14U))
                                                               : 
                                                              ((IData)(vlSelf->top__DOT__cpu__DOT__is_add)
                                                                ? vlSelf->top__DOT__cpu__DOT__rs2_data
                                                                : 
                                                               ((IData)(vlSelf->top__DOT__cpu__DOT__is_sub)
                                                                 ? vlSelf->top__DOT__cpu__DOT__rs2_data
                                                                 : 
                                                                ((IData)(vlSelf->top__DOT__cpu__DOT__is_xor)
                                                                  ? vlSelf->top__DOT__cpu__DOT__rs2_data
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__cpu__DOT__is_or)
                                                                   ? vlSelf->top__DOT__cpu__DOT__rs2_data
                                                                   : 
                                                                  ((IData)(vlSelf->top__DOT__cpu__DOT__is_and)
                                                                    ? vlSelf->top__DOT__cpu__DOT__rs2_data
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__is_mul)
                                                                     ? vlSelf->top__DOT__cpu__DOT__rs2_data
                                                                     : 
                                                                    ((IData)(vlSelf->top__DOT__cpu__DOT__is_div)
                                                                      ? vlSelf->top__DOT__cpu__DOT__rs2_data
                                                                      : 
                                                                     ((IData)(vlSelf->top__DOT__cpu__DOT__is_divu)
                                                                       ? vlSelf->top__DOT__cpu__DOT__rs2_data
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__cpu__DOT__is_rem)
                                                                        ? vlSelf->top__DOT__cpu__DOT__rs2_data
                                                                        : 
                                                                       ((IData)(vlSelf->top__DOT__cpu__DOT__is_remu)
                                                                         ? vlSelf->top__DOT__cpu__DOT__rs2_data
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__cpu__DOT__is_sll)
                                                                          ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_h257cf15f__0
                                                                          : 
                                                                         ((IData)(vlSelf->top__DOT__cpu__DOT__is_srl)
                                                                           ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_h257cf15f__0
                                                                           : 
                                                                          ((IData)(vlSelf->top__DOT__cpu__DOT__is_sra)
                                                                            ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_h257cf15f__0
                                                                            : 
                                                                           ((IData)(vlSelf->top__DOT__cpu__DOT__is_sb)
                                                                             ? vlSelf->top__DOT__cpu__DOT__imm_s
                                                                             : 
                                                                            ((IData)(vlSelf->top__DOT__cpu__DOT__is_sh)
                                                                              ? vlSelf->top__DOT__cpu__DOT__imm_s
                                                                              : 
                                                                             ((IData)(vlSelf->top__DOT__cpu__DOT__is_sw)
                                                                               ? vlSelf->top__DOT__cpu__DOT__imm_s
                                                                               : vlSelf->top__DOT__cpu__DOT__rs2_data))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__alu_out = ((8U & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                            ? ((4U 
                                                & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                     ? 0U
                                                     : 
                                                    VL_MODDIV_III(32, vlSelf->top__DOT__cpu__DOT__alu_a, vlSelf->top__DOT__cpu__DOT__alu_b)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                     ? 
                                                    VL_MODDIVS_III(32, vlSelf->top__DOT__cpu__DOT__alu_a, vlSelf->top__DOT__cpu__DOT__alu_b)
                                                     : 
                                                    VL_DIV_III(32, vlSelf->top__DOT__cpu__DOT__alu_a, vlSelf->top__DOT__cpu__DOT__alu_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                     ? 
                                                    VL_DIVS_III(32, vlSelf->top__DOT__cpu__DOT__alu_a, vlSelf->top__DOT__cpu__DOT__alu_b)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     * vlSelf->top__DOT__cpu__DOT__alu_b))))
                                            : ((4U 
                                                & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__cpu__DOT__alu_a, 
                                                                   (0x1fU 
                                                                    & vlSelf->top__DOT__cpu__DOT__alu_b))
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__cpu__DOT__alu_b)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__cpu__DOT__alu_b))
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     ^ vlSelf->top__DOT__cpu__DOT__alu_b)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     | vlSelf->top__DOT__cpu__DOT__alu_b)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     & vlSelf->top__DOT__cpu__DOT__alu_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     - vlSelf->top__DOT__cpu__DOT__alu_b)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__alu_a 
                                                     + vlSelf->top__DOT__cpu__DOT__alu_b)))));
    vlSelf->top__DOT__cpu__DOT__pc_next = ((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->inst))
                                            ? ((((- (IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                                 << 0x14U) 
                                                | ((0xff000U 
                                                    & vlSelf->inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->inst 
                                                            >> 0x14U))))) 
                                               + vlSelf->top__DOT__cpu__DOT__pc_current)
                                            : ((IData)(vlSelf->top__DOT__cpu__DOT__is_jalr)
                                                ? (0xfffffffeU 
                                                   & vlSelf->top__DOT__cpu__DOT__alu_out)
                                                : ((IData)(vlSelf->top__DOT__cpu__DOT__is_beq)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT____VdfgTmp_h42b8e437__0)
                                                     ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->top__DOT__cpu__DOT__pc_current))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__is_bne)
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__cpu__DOT____VdfgTmp_h42b8e437__0)
                                                      ? 
                                                     ((IData)(4U) 
                                                      + vlSelf->top__DOT__cpu__DOT__pc_current)
                                                      : vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0)
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__cpu__DOT__is_blt)
                                                      ? 
                                                     (VL_LTS_III(32, vlSelf->top__DOT__cpu__DOT__rs1_data, vlSelf->top__DOT__cpu__DOT__rs2_data)
                                                       ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelf->top__DOT__cpu__DOT__pc_current))
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__cpu__DOT__is_bltu)
                                                       ? 
                                                      ((vlSelf->top__DOT__cpu__DOT__rs1_data 
                                                        < vlSelf->top__DOT__cpu__DOT__rs2_data)
                                                        ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelf->top__DOT__cpu__DOT__pc_current))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__cpu__DOT__is_bge)
                                                        ? 
                                                       (VL_GTES_III(32, vlSelf->top__DOT__cpu__DOT__rs1_data, vlSelf->top__DOT__cpu__DOT__rs2_data)
                                                         ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                                         : 
                                                        ((IData)(4U) 
                                                         + vlSelf->top__DOT__cpu__DOT__pc_current))
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__cpu__DOT__is_bgeu)
                                                         ? 
                                                        ((vlSelf->top__DOT__cpu__DOT__rs1_data 
                                                          >= vlSelf->top__DOT__cpu__DOT__rs2_data)
                                                          ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                                          : 
                                                         ((IData)(4U) 
                                                          + vlSelf->top__DOT__cpu__DOT__pc_current))
                                                         : 
                                                        ((0x73U 
                                                          == vlSelf->inst)
                                                          ? vlSelf->top__DOT__cpu__DOT__csr_rdata
                                                          : 
                                                         ((0x30200073U 
                                                           == vlSelf->inst)
                                                           ? vlSelf->top__DOT__cpu__DOT__csr_rdata
                                                           : 
                                                          ((IData)(4U) 
                                                           + vlSelf->top__DOT__cpu__DOT__pc_current)))))))))));
    if ((((IData)(vlSelf->top__DOT__cpu__DOT__is_lw) 
          | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lbu) 
             | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lhu) 
                | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lh) 
                   | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lb) 
                      | (IData)(vlSelf->top__DOT__cpu__DOT__wen)))))) 
         & (~ (IData)(vlSelf->top__DOT__cpu__DOT__wen)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem__DOT__pmem_read_TOP(vlSelf->top__DOT__cpu__DOT__alu_out, vlSelf->__Vfunc_top__DOT__cpu__DOT__mem__DOT__pmem_read__1__Vfuncout);
        vlSelf->top__DOT__cpu__DOT__rdata = vlSelf->__Vfunc_top__DOT__cpu__DOT__mem__DOT__pmem_read__1__Vfuncout;
    } else {
        vlSelf->top__DOT__cpu__DOT__rdata = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__rbyte = (0xffU & ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->top__DOT__cpu__DOT__alu_out))
                                                   ? vlSelf->top__DOT__cpu__DOT__rdata
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->top__DOT__cpu__DOT__alu_out))
                                                    ? 
                                                   (vlSelf->top__DOT__cpu__DOT__rdata 
                                                    >> 8U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->top__DOT__cpu__DOT__alu_out))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__rdata 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__rdata 
                                                     >> 0x18U)))));
    vlSelf->top__DOT__cpu__DOT__r2byte = (0xffffU & 
                                          ((2U & vlSelf->top__DOT__cpu__DOT__alu_out)
                                            ? (vlSelf->top__DOT__cpu__DOT__rdata 
                                               >> 0x10U)
                                            : vlSelf->top__DOT__cpu__DOT__rdata));
    vlSelf->top__DOT__cpu__DOT__reg_wdata = ((IData)(vlSelf->top__DOT__cpu__DOT__is_addi)
                                              ? vlSelf->top__DOT__cpu__DOT__alu_out
                                              : ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelf->inst)
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))
                                                   ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__cpu__DOT__pc_current)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__is_jalr)
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->top__DOT__cpu__DOT__pc_current)
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__cpu__DOT__is_andi)
                                                      ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__cpu__DOT__is_ori)
                                                       ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__cpu__DOT__is_xori)
                                                        ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__cpu__DOT__is_lw)
                                                         ? vlSelf->top__DOT__cpu__DOT__rdata
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__cpu__DOT__is_lbu)
                                                          ? (IData)(vlSelf->top__DOT__cpu__DOT__rbyte)
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__cpu__DOT__is_lh)
                                                           ? 
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->top__DOT__cpu__DOT__r2byte) 
                                                                           >> 0xfU)))) 
                                                            << 0x10U) 
                                                           | (IData)(vlSelf->top__DOT__cpu__DOT__r2byte))
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__cpu__DOT__is_lhu)
                                                            ? (IData)(vlSelf->top__DOT__cpu__DOT__r2byte)
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__cpu__DOT__is_lb)
                                                             ? 
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->top__DOT__cpu__DOT__rbyte) 
                                                                             >> 7U)))) 
                                                              << 8U) 
                                                             | (IData)(vlSelf->top__DOT__cpu__DOT__rbyte))
                                                             : 
                                                            ((IData)(vlSelf->top__DOT__cpu__DOT__is_seqz)
                                                              ? 
                                                             ((0U 
                                                               == vlSelf->top__DOT__cpu__DOT__alu_out)
                                                               ? 1U
                                                               : 0U)
                                                              : 
                                                             ((IData)(vlSelf->top__DOT__cpu__DOT__is_srai)
                                                               ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                               : 
                                                              ((IData)(vlSelf->top__DOT__cpu__DOT__is_srli)
                                                                ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                : 
                                                               ((IData)(vlSelf->top__DOT__cpu__DOT__is_slli)
                                                                 ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                 : 
                                                                ((IData)(vlSelf->top__DOT__cpu__DOT__is_add)
                                                                  ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__cpu__DOT__is_sub)
                                                                   ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                   : 
                                                                  ((IData)(vlSelf->top__DOT__cpu__DOT__is_xor)
                                                                    ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__is_or)
                                                                     ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                     : 
                                                                    ((IData)(vlSelf->top__DOT__cpu__DOT__is_and)
                                                                      ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                      : 
                                                                     ((IData)(vlSelf->top__DOT__cpu__DOT__is_mul)
                                                                       ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__cpu__DOT__is_div)
                                                                        ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                        : 
                                                                       ((IData)(vlSelf->top__DOT__cpu__DOT__is_divu)
                                                                         ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__cpu__DOT__is_rem)
                                                                          ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                          : 
                                                                         ((IData)(vlSelf->top__DOT__cpu__DOT__is_remu)
                                                                           ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                           : 
                                                                          ((IData)(vlSelf->top__DOT__cpu__DOT__is_slt)
                                                                            ? 
                                                                           (VL_LTS_III(32, vlSelf->top__DOT__cpu__DOT__alu_a, vlSelf->top__DOT__cpu__DOT__alu_b)
                                                                             ? 1U
                                                                             : 0U)
                                                                            : 
                                                                           ((IData)(vlSelf->top__DOT__cpu__DOT__is_sltu)
                                                                             ? 
                                                                            ((vlSelf->top__DOT__cpu__DOT__alu_a 
                                                                              < vlSelf->top__DOT__cpu__DOT__alu_b)
                                                                              ? 1U
                                                                              : 0U)
                                                                             : 
                                                                            ((IData)(vlSelf->top__DOT__cpu__DOT__is_sll)
                                                                              ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                              : 
                                                                             ((IData)(vlSelf->top__DOT__cpu__DOT__is_srl)
                                                                               ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                               : 
                                                                              ((IData)(vlSelf->top__DOT__cpu__DOT__is_sra)
                                                                                ? vlSelf->top__DOT__cpu__DOT__alu_out
                                                                                : 
                                                                               ((IData)(vlSelf->top__DOT__cpu__DOT__is_csrrs)
                                                                                 ? vlSelf->top__DOT__cpu__DOT__csr_rdata
                                                                                 : 0U)))))))))))))))))))))))))))))))));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/cangfeng_/ysyx-workbench/npc/vsrc/top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/cangfeng_/ysyx-workbench/npc/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/cangfeng_/ysyx-workbench/npc/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
