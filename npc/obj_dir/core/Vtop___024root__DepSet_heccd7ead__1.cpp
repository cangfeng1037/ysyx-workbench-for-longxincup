// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
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
    IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_1;
    __VdfgRegularize_hd87f99a1_0_1 = 0;
    IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_3;
    __VdfgRegularize_hd87f99a1_0_3 = 0;
    // Body
    if (vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire) {
        vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s0 
            = vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_taken;
        vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_pc_s0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc;
    }
    vlSelfRef.io_pc = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__pc;
    vlSelfRef.top__DOT__npc_cpu__DOT___GEN = ((0xa000ffffU 
                                               < vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__pc) 
                                              | (8U 
                                                 == 
                                                 (vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__pc 
                                                  >> 0x1cU)));
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
    vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_is_branch 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_beq) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bne) 
              | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_blt) 
                 | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bltu) 
                    | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bge) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bgeu))))));
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
    top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_6 
        = ((2U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
           | (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_5 
        = ((2U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)));
    __VdfgRegularize_hd87f99a1_0_1 = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass)
                                       ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_addr_reg
                                       : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg);
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_18 
        = ((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___read_addr_T_3 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg) 
            << 3U) | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_2 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg) 
            << 3U) | (7U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg) 
                            >> 2U)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__read_addr 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg) 
            << 3U) | (7U & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))
                             ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg) 
                                >> 2U) : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3 
        = (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg 
           & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32);
    vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_en) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)));
    if (vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_valid) {
        vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_rd_addr 
            = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr;
        vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out 
            = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__wbHasRd 
            = (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr));
    } else {
        vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_rd_addr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__wbHasRd = 0U;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_10) 
           & (IData)(vlSelfRef.io_master_rvalid));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16 
        = ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           | ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
              | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_15)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_6 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_15) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_25));
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_2 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1) 
           | (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last 
        = ((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
           & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
               ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rlast)
               : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_5)));
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__pc = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrs = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrw = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jalr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_store = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lbu = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lb = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lhu = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lh = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_load = 0U;
    } else {
        if (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__pc 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__pc;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lbu 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lbu;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lb 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lb;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lhu 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lhu;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lh 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lh;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrs 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_csrrs;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrw 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_csrrw;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jalr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jalr;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_store 
                = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sw) 
                    | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sb)) 
                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sh));
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_load 
                = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lw) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lb)) 
                     | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lbu)) 
                    | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lh)) 
                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lhu));
        }
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lw 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lw;
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
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__mergedWord 
        = (((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
            & vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data) 
           | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3);
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result = 0U;
    } else if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) {
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu__DOT__casez_tmp;
    }
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
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0));
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_26 = 
        ((9U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
         | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_6));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_2) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_20 
        = ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_2) 
           | (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_idx_s0 
        = (0x3ffU & (vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_pc_s0 
                     ^ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_ghr_s0)));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_33 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1) 
              | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit3))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lineWordData 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg) 
            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__isTargetWord))
            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__mergedWord
            : vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data);
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh = 0U;
    } else if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) {
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sw;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sb;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sh;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_wen 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb) 
              | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh)));
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__inst = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jal = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr = 0U;
    } else {
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs2_data;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__inst 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__inst;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jal 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jal;
        }
        if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state))) {
            if (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4) {
                vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_addr;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_4)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr = 0U;
        }
    }
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
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_en) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0;
    __VdfgRegularize_hd87f99a1_0_3 = ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))
                                       ? (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wb_addr 
                                          + ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt) 
                                             << 2U))
                                       : ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_26)
                                           ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg));
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
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_rdata = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__pc = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_csrrs = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_csrrw = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jalr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lbu = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lbu 
            = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lbu;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lb = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lb 
            = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lb;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lhu = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lhu 
            = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lhu;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lh = 0U;
    } else {
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_rdata 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_rdata;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__pc 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lbu 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lbu;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lb 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lb;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lhu 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lhu;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lh 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lh;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN) {
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_csrrs 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrs;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_csrrw 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jalr 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr;
        }
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lbu 
            = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lbu;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lb 
            = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lb;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lhu 
            = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lhu;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lh 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lh;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_0 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp) 
              == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__load_tag)));
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sw = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sb = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sh = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs2_data = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__inst = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jal = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state = 0U;
    } else {
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN) {
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sw 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sw;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sb 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sb;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sh 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sh;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs2_data 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs2_data;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__inst 
                = vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jal 
                = (0x6fU == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst));
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__io_in_ready_0) {
            if (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4) {
                vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state 
                    = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_1)
                        ? 1U : 2U);
            }
        } else if (vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN) {
            if (vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_2) {
                vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state = 2U;
            }
        } else if (vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_3) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state = 0U;
        }
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_load) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_store));
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_addr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_rdata = 0U;
    } else {
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_addr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN) {
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_rdata 
                = ((0xf12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                    ? 0x25080212U : ((0xf11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                      ? 0x79737978U
                                      : ((0x300U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                          ? vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mstatus
                                          : ((0x342U 
                                              == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                              ? vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mcause
                                              : ((0x341U 
                                                  == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                                  ? vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mepc
                                                  : 
                                                 ((0x305U 
                                                   == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                                   ? vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mtvec
                                                   : 0U))))));
        }
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mstatus 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__csr__DOT__mstatus;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__rand_way 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_1) 
            << 1U) | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0));
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
    vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_val_out 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrs) 
            | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrw))
            ? vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_rdata
            : (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jal) 
                | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jalr))
                ? ((IData)(4U) + vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__pc)
                : vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_0 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lbu) 
            | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lw)) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lh) 
              | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lb) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lhu))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_14 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_0));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_2 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lb) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lw) 
              | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lbu) 
                 | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lh) 
                    | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lhu) 
                       | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sw) 
                          | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sb) 
                             | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sh))))))));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__io_in_ready_0 
        = (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_out_valid 
        = ((~ ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
               | (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)))) 
           & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem1HasRd 
        = (((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_load)) 
            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_rd_en)) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_addr)));
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
    if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))) {
        if (vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0) {
            vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wdata 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wdata_0;
            vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wstrb 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wmask_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0 = 1U;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wdata = 0U;
            vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wstrb = 0U;
            vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0 = 0U;
        }
    } else {
        if (top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_6) {
            vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wdata = 0U;
            vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wstrb = 0U;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wdata 
                = vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wdata;
            vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wstrb 
                = vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wmask;
        }
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0 
            = ((1U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
               & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)));
    }
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
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_19 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_14));
    vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_branch_bits_is_branch_taken 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_taken) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_is_branch));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32 
        = (((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state)) 
            & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_out_valid) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6)))) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_valid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_en) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_out_valid));
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
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc = 0U;
    } else if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN) {
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc 
            = vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jal_T 
        = (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b 
           + vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc);
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now 
        = ((~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__first_inst_reg) 
               | (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg 
                  == vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc))) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_1));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem2HasRd 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_valid) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_98 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67));
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
    vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_out_valid 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__out_valid));
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mepc = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mtvec = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mcause = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wen = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wdata = 0U;
    } else {
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) {
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr = 0U;
        } else if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN) {
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr 
                = (0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                            >> 7U));
        }
        if ((1U & (~ (((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wen)) 
                       | (0x305U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr))) 
                      | (0x341U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr)))))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mepc 
                = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wdata;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wen) 
             & (0x305U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mtvec 
                = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wdata;
        }
        if ((1U & ((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wen)) 
                     | (0x305U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr))) 
                    | (0x341U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr))) 
                   | (0x342U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr))))) {
            if ((0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) {
                vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mcause = 0xbU;
            }
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mcause 
                = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wdata;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT___GEN) {
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_waddr;
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wen 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_wen;
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wdata 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_wdata;
        }
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT___GEN 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_out_valid));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__exu_fwd_live_valid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_out_valid)));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_3 
        = ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT___GEN));
    if (vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy) {
        vlSelfRef.io_master_wlast = vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_12;
        if (vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_5) {
            vlSelfRef.io_master_wdata = 0U;
            vlSelfRef.io_master_wstrb = 0U;
        } else {
            vlSelfRef.io_master_wdata = vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wdata;
            vlSelfRef.io_master_wstrb = vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wstrb;
        }
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_wvalid_0 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_12) 
               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0));
        vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_12) 
               & (IData)(vlSelfRef.io_master_wready));
    } else if (vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN) {
        vlSelfRef.io_master_wlast = 1U;
        vlSelfRef.io_master_wdata = vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wdata;
        vlSelfRef.io_master_wstrb = vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wstrb;
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_wvalid_0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0;
        vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready 
            = vlSelfRef.io_master_wready;
    } else {
        vlSelfRef.io_master_wlast = 0U;
        vlSelfRef.io_master_wdata = 0U;
        vlSelfRef.io_master_wstrb = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_wvalid_0 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready = 0U;
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
    if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__exu_fwd_live_valid) {
        vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_val_out 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu__DOT__casez_tmp;
        vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_is_load 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_addr 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr;
    } else {
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
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_4 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_3)) 
                 | (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state))));
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_waddr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_wen = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_wdata = 0U;
    } else if (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4) {
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_waddr 
            = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_waddr;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_wen 
            = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_wen;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_wdata 
            = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_wdata;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
           & ((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state)) 
              & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state))
                  ? ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__out_sent)) 
                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__req_sent))
                  : (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state)))));
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
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_waddr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_wen = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_wdata = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_waddr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_wen = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_wdata = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lk_pc_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_inst_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_pc_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__line_base = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg = 0U;
    } else {
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_waddr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_waddr;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_wen 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_wen;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_wdata 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_wdata;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN) {
            if ((0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) {
                vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_waddr = 0x341U;
                vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_wdata 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc;
            } else if ((0x30200073U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) {
                vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_waddr = 0x342U;
                vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_wdata = 0U;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_waddr 
                    = (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                       >> 0x14U);
                vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_wdata 
                    = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs1_data;
            }
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_wen 
                = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw) 
                   | (0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst));
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) {
            vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc = 0U;
            vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst = 0U;
        } else if (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT___GEN) {
            if (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_24) {
                vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc = 0U;
                vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst = 0U;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_pc_reg;
                vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_inst_reg;
            }
        }
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63 
            = ((((((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
                     & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                  & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                 & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                & (0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) 
               | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63));
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_5)))) {
            if ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) {
                if (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_inst_reg 
                        = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit0)
                               ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_0
                               : 0U) | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit1)
                                         ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_1
                                         : 0U)) | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit2)
                                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_2
                                                    : 0U)) 
                           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit3)
                               ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_3
                               : 0U));
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_pc_reg 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_pc_reg;
                }
            } else {
                if ((1U & (~ ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                              | (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_19) 
                                    & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_27)))))))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_inst_reg 
                        = vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rdata;
                }
                if ((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_20)))) {
                    if (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg) {
                        if (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_27) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_pc_reg 
                                = (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__line_base 
                                   + (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg));
                        }
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_pc_reg 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg;
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1) 
                      | (1U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)))))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg;
            vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lk_pc_reg 
                = (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__line_base 
                   + (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg));
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_28)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg 
                = (0x1fU & vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg);
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg 
                = (0x3fU & (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg 
                            >> 5U));
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__line_base 
                = (0xffffffe0U & vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg);
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg 
                = vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg 
                = ((0x28U == (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg 
                              >> 0x1aU)) | (0x20U == 
                                            (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg 
                                             >> 0x1aU)));
        }
    }
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
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_9 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__exu_fwd_live_valid)
             ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en)
             : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en)) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_12 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__isClintWrite)) 
           & ((IData)(vlSelfRef.io_master_awvalid) 
              & (IData)(vlSelfRef.io_master_awready)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__exuHasRd 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_valid) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_9));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T 
        = ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_out_valid));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__hold_capture 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__exu_fwd_live_valid));
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
    top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__io_load_tag_alloc_valid_0) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__redirect_valid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_1));
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
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr 
        = ((0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
            ? 0x305U : ((0x30200073U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                         ? 0x341U : (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                     >> 0x14U)));
    top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_11 
        = (IData)((0x33U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_12 
        = (IData)((0x7033U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_14 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__imm_i 
        = (((- (IData)((vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                        >> 0x1fU))) << 0xcU) | (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                >> 0x14U));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_slli 
        = (IData)((0x1013U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
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
    top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_5 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_srli 
        = ((~ (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
               >> 0x1eU)) & (IData)(top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_5));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_srai 
        = ((IData)(top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_5) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
              >> 0x1eU));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_10 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_addr) 
            == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_0));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_8 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_addr) 
            == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_2));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_5 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2) 
            == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_2));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_pc_reg 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lk_pc_reg;
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rdata 
        = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                  | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
            ? 0U : vlSelfRef.io_master_rdata);
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_10) 
           & (IData)(vlSelfRef.io_master_rlast));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63;
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
}
