// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem_blackbox__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT____Vcellinp__ebreak_box__is_ebreak 
        = (0x100073U == vlSelfRef.io_inst);
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

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
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
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__ebreak_box__DOT__ebreak_TOP();

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.top__DOT____Vcellinp__ebreak_box__is_ebreak) {
        Vtop___024root____Vdpiimwrap_top__DOT__ebreak_box__DOT__ebreak_TOP();
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem_blackbox__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__csr__DOT__mstatus;
    __Vdly__top__DOT__cpu__DOT__csr__DOT__mstatus = 0;
    // Body
    __Vdly__top__DOT__cpu__DOT__csr__DOT__mstatus = vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus;
    if ((((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_load) 
          | (IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_mem_wen)) 
         & (IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_mem_wen))) {
        Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__mem_blackbox__DOT__pmem_write_TOP(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp, 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sb)
                                                                                 ? 
                                                                                (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelfRef.io_inst 
                                                                                >> 0x14U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xffU 
                                                                                & vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp_0)) 
                                                                                << 
                                                                                (0x18U 
                                                                                & (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp 
                                                                                << 3U)))
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sh)
                                                                                 ? 
                                                                                (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelfRef.io_inst 
                                                                                >> 0x14U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xffffU 
                                                                                & vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp_0)) 
                                                                                << 
                                                                                (0x10U 
                                                                                & (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp 
                                                                                << 3U)))
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sw)
                                                                                 ? vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data
                                                                                 : 0U))), 
                                                                                (0xfU 
                                                                                & ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sb)
                                                                                 ? 
                                                                                ((IData)(1U) 
                                                                                << 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp))
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sh)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp)
                                                                                 ? 0xcU
                                                                                 : 3U)
                                                                                 : 
                                                                                (- (IData)((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sw)))))));
    }
    if (vlSelfRef.reset) {
        __Vdly__top__DOT__cpu__DOT__csr__DOT__mstatus = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc = 0x80000000U;
        vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mtvec = 0U;
        vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mepc = 0U;
        vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mcause = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_0 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_31 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_30 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_29 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_28 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_11 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_10 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_6 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_9 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_4 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_7 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_2 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_5 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_3 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_1 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_8 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_12 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_13 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_14 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_15 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_16 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_17 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_18 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_19 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_20 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_21 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_22 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_23 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_24 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_25 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_26 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_27 = 0U;
    } else {
        if ((1U & (((((~ (IData)(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_wen)) 
                      | (0x305U == (IData)(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_waddr))) 
                     | (0x341U == (IData)(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_waddr))) 
                    | (0x342U == (IData)(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_waddr))) 
                   | (0x300U != (IData)(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_waddr))))) {
            if ((0x30200073U == vlSelfRef.io_inst)) {
                __Vdly__top__DOT__cpu__DOT__csr__DOT__mstatus 
                    = (0x80U | ((0xffffff00U & vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus) 
                                | ((0x70U & vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus) 
                                   | ((8U & (vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus 
                                             >> 4U)) 
                                      | (7U & vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus)))));
            }
        } else {
            __Vdly__top__DOT__cpu__DOT__csr__DOT__mstatus 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_wdata;
        }
        vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc 
            = ((0x6fU == (0x7fU & vlSelfRef.io_inst))
                ? vlSelfRef.top__DOT__cpu__DOT___exu_io_branch_pc_branch
                : ((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_jalr)
                    ? (0xfffffffeU & (vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a 
                                      + vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b))
                    : (((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_beq)
                         ? (vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data 
                            == vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data)
                         : ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bne)
                             ? (vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data 
                                != vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data)
                             : ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_blt)
                                 ? VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data, vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data)
                                 : ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bltu)
                                     ? (vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data 
                                        < vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data)
                                     : ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bge)
                                         ? VL_GTES_III(32, vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data, vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data)
                                         : ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bgeu) 
                                            & (vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data 
                                               >= vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data)))))))
                        ? vlSelfRef.top__DOT__cpu__DOT___exu_io_branch_pc_branch
                        : (((0x73U == vlSelfRef.io_inst) 
                            | (0x30200073U == vlSelfRef.io_inst))
                            ? vlSelfRef.top__DOT__cpu__DOT___csr_io_csr_rdata
                            : ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc)))));
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_wen) 
             & (0x305U == (IData)(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_waddr)))) {
            vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mtvec 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_wdata;
        }
        if ((1U & (~ (((~ (IData)(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_wen)) 
                       | (0x305U == (IData)(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_waddr))) 
                      | (0x341U != (IData)(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_waddr)))))) {
            vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mepc 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_wdata;
        }
        if ((1U & ((((~ (IData)(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_wen)) 
                     | (0x305U == (IData)(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_waddr))) 
                    | (0x341U == (IData)(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_waddr))) 
                   | (0x342U != (IData)(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_waddr))))) {
            if ((0x73U == vlSelfRef.io_inst)) {
                vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mcause = 0xbU;
            }
        } else {
            vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mcause 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_wdata;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (~ (IData)((0U != (0x1fU & (vlSelfRef.io_inst 
                                           >> 7U))))))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_0 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xf80U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_31 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xf00U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_30 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xe80U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_29 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xe00U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_28 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x580U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_11 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x500U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_10 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x300U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_6 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x480U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_9 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x200U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_4 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x380U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_7 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x100U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_2 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x280U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_5 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x180U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_3 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x80U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_1 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x400U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_8 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x600U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_12 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x680U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_13 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x700U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_14 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x780U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_15 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x800U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_16 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x880U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_17 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x900U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_18 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x980U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_19 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xa00U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_20 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xa80U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_21 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xb00U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_22 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xb80U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_23 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xc00U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_24 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xc80U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_25 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xd00U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_26 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xd80U == (0xf80U & vlSelfRef.io_inst)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_27 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus 
        = __Vdly__top__DOT__cpu__DOT__csr__DOT__mstatus;
    vlSelfRef.io_pc = vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc;
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
    vlSelfRef.io_gpr_31 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_31;
    vlSelfRef.io_gpr_30 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_30;
    vlSelfRef.io_gpr_29 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_29;
    vlSelfRef.io_gpr_28 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_28;
    vlSelfRef.io_gpr_11 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_11;
    vlSelfRef.io_gpr_10 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_10;
    vlSelfRef.io_gpr_6 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_6;
    vlSelfRef.io_gpr_9 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_9;
    vlSelfRef.io_gpr_4 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_4;
    vlSelfRef.io_gpr_7 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_7;
    vlSelfRef.io_gpr_2 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_2;
    vlSelfRef.io_gpr_5 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_5;
    vlSelfRef.io_gpr_3 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_3;
    vlSelfRef.io_gpr_1 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_1;
    vlSelfRef.io_gpr_8 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_8;
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
    vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data 
        = ((0U == (0x1fU & (vlSelfRef.io_inst >> 0xfU)))
            ? 0U : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp);
    vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data 
        = ((0U == (0x1fU & (vlSelfRef.io_inst >> 0x14U)))
            ? 0U : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp_0);
    vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_wdata 
        = ((0x73U == vlSelfRef.io_inst) ? vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc
            : ((0x30200073U == vlSelfRef.io_inst) ? 0U
                : vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a 
        = (((0x17U == (0x7fU & vlSelfRef.io_inst)) 
            | (0x6fU == (0x7fU & vlSelfRef.io_inst)))
            ? vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc
            : ((0x37U == (0x7fU & vlSelfRef.io_inst))
                ? 0U : vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data));
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

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
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
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
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
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
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
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("verilog/top.sv", 1328, "", "Input combinational region did not converge.");
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
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("verilog/top.sv", 1328, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("verilog/top.sv", 1328, "", "Active region did not converge.");
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
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
