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

extern const VlUnpacked<CData/*2:0*/, 2048> Vtop__ConstPool__TABLE_h02e7d842_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14;
    top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_14;
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_14 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_18;
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_18 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11;
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_11 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12;
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_12 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13;
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20;
    top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_20 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_3;
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_3 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_13;
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_13 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_14;
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_14 = 0;
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rdata 
        = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                  | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
            ? 0U : vlSelfRef.io_master_rdata);
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_12 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__isClintWrite)) 
           & ((IData)(vlSelfRef.io_master_awvalid) 
              & (IData)(vlSelfRef.io_master_awready)));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_rready 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_resp_ready) 
                                           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending)));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy)
            ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_12) 
               & (IData)(vlSelfRef.io_master_wready))
            : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN) 
               & (IData)(vlSelfRef.io_master_wready)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0) 
              & (IData)(vlSelfRef.io_master_awready)));
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
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_10) 
           & (IData)(vlSelfRef.io_master_rlast));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_10) 
           & (IData)(vlSelfRef.io_master_rvalid));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_valid) 
                                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr)));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rlast 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7)) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint) 
              | ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                 & (IData)(vlSelfRef.io_master_rlast))));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_11) 
           & (IData)(vlSelfRef.io_master_bvalid));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7)) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint)
               ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)
               : ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                  & (IData)(vlSelfRef.io_master_rvalid))));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_rready_0 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)
               ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_rready)
               : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_rready_0)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__mergedWord 
        = (((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
            & vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data) 
           | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3);
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_21 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__r_last_fire 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_rready) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)));
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
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last 
        = ((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
           & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
               ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rlast)
               : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_5)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_8 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_resp_ready) 
           & ((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
              & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid)
                  : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_5) 
                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid)))));
    vlSelfRef.io_master_rready = vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_rready_0;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lineWordData 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg) 
            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__isTargetWord))
            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__mergedWord
            : vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data);
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
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_33 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_359 
        = ((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_8));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_357 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_8));
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
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_3 
        = ((IData)(top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_14) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead));
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_13 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_5));
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_14 = 
        ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_357) 
         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
           & (IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_14));
    top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_18 = 
        ((IData)(top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_14) 
         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last));
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
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);

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
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__ebreak_box__DOT__ebreak_TOP();

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.io_halt) {
        Vtop___024root____Vdpiimwrap_top__DOT__ebreak_box__DOT__ebreak_TOP();
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_4;
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_4 = 0;
    IData/*31:0*/ __Vdly__top__DOT__npc_cpu__DOT__stall_cnt;
    __Vdly__top__DOT__npc_cpu__DOT__stall_cnt = 0;
    IData/*31:0*/ __Vdly__top__DOT__npc_cpu__DOT__flush_cnt;
    __Vdly__top__DOT__npc_cpu__DOT__flush_cnt = 0;
    IData/*31:0*/ __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pc;
    __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pc = 0;
    IData/*31:0*/ __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pred_next_pc_reg;
    __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pred_next_pc_reg = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred;
    __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pred_valid;
    __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pred_valid = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__ifu2__DOT__waiting;
    __Vdly__top__DOT__npc_cpu__DOT__ifu2__DOT__waiting = 0;
    IData/*31:0*/ __Vdly__top__DOT__npc_cpu__DOT__ifu2__DOT__i_cnt;
    __Vdly__top__DOT__npc_cpu__DOT__ifu2__DOT__i_cnt = 0;
    IData/*31:0*/ __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_expect_valid_reg;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_expect_valid_reg = 0;
    IData/*31:0*/ __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_hit_count_reg;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_hit_count_reg = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__state;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__state = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__out_valid;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__out_valid = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__rd_en;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__rd_en = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_is_load;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_is_load = 0;
    CData/*5:0*/ __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag = 0;
    IData/*31:0*/ __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_total_count_reg;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_total_count_reg = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__mem1__DOT__req_sent;
    __Vdly__top__DOT__npc_cpu__DOT__mem1__DOT__req_sent = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__mem1__DOT__out_sent;
    __Vdly__top__DOT__npc_cpu__DOT__mem1__DOT__out_sent = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__is_load;
    __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__is_load = 0;
    IData/*31:0*/ __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__total_mem_cycles;
    __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__total_mem_cycles = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__rd_en;
    __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__rd_en = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__wb__DOT__state;
    __Vdly__top__DOT__npc_cpu__DOT__wb__DOT__state = 0;
    CData/*4:0*/ __Vdly__top__DOT__npc_cpu__DOT__wb__DOT__dbgFollowCnt;
    __Vdly__top__DOT__npc_cpu__DOT__wb__DOT__dbgFollowCnt = 0;
    SData/*9:0*/ __Vdly__top__DOT__npc_cpu__DOT__bpu__DOT__ghr;
    __Vdly__top__DOT__npc_cpu__DOT__bpu__DOT__ghr = 0;
    IData/*31:0*/ __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__hit_count;
    __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__hit_count = 0;
    IData/*31:0*/ __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__miss_count;
    __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__miss_count = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4;
    __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5;
    __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6;
    __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6 = 0;
    CData/*2:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt = 0;
    CData/*3:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state = 0;
    IData/*31:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__miss_count;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__miss_count = 0;
    IData/*31:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__hit_count;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__hit_count = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6 = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending;
    __Vdly__top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending;
    __Vdly__top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending = 0;
    IData/*31:0*/ __Vdly__top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high;
    __Vdly__top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state;
    __Vdly__top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy;
    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu;
    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write;
    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase;
    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase = 0;
    CData/*0:0*/ __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint;
    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint = 0;
    CData/*1:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory__v0;
    __VdlyVal__top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory__v0 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory__v0;
    __VdlyDim0__top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory__v0;
    __VdlySet__top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory__v0 = 0;
    QData/*32:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory__v0;
    __VdlyVal__top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory__v0 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory__v0;
    __VdlyDim0__top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory__v0;
    __VdlySet__top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory__v0 = 0;
    IData/*20:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory__v0;
    __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory__v0;
    __VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory__v0;
    __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory__v0 = 0;
    IData/*20:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory__v0;
    __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory__v0;
    __VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory__v0;
    __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory__v0 = 0;
    IData/*20:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory__v0;
    __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory__v0;
    __VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory__v0;
    __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory__v0 = 0;
    IData/*20:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory__v0;
    __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory__v0;
    __VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory__v0;
    __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v0;
    __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v0 = 0;
    SData/*8:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v0;
    __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v0;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v1;
    __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v1 = 0;
    SData/*8:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v1;
    __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v1;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v1 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v0;
    __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v0 = 0;
    SData/*8:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v0;
    __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v0;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v1;
    __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v1 = 0;
    SData/*8:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v1;
    __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v1;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v1 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v0;
    __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v0 = 0;
    SData/*8:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v0;
    __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v0;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v1;
    __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v1 = 0;
    SData/*8:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v1;
    __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v1;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v1 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v0;
    __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v0 = 0;
    SData/*8:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v0;
    __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v0;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v1;
    __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v1 = 0;
    SData/*8:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v1;
    __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v1;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v1 = 0;
    IData/*20:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory__v0;
    __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory__v0;
    __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory__v0;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory__v0 = 0;
    IData/*20:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory__v0;
    __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory__v0;
    __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory__v0;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory__v0 = 0;
    IData/*20:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory__v0;
    __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory__v0;
    __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory__v0;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory__v0 = 0;
    IData/*20:0*/ __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory__v0;
    __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory__v0;
    __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory__v0;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory__v0 = 0;
    // Body
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_total_count_reg 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_total_count_reg;
    __Vdly__top__DOT__npc_cpu__DOT__stall_cnt = vlSelfRef.top__DOT__npc_cpu__DOT__stall_cnt;
    __VdlySet__top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory__v0 = 0U;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
    __Vdly__top__DOT__npc_cpu__DOT__flush_cnt = vlSelfRef.top__DOT__npc_cpu__DOT__flush_cnt;
    __Vdly__top__DOT__npc_cpu__DOT__bpu__DOT__ghr = vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__ghr;
    __Vdly__top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high 
        = vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high;
    __Vdly__top__DOT__npc_cpu__DOT__ifu2__DOT__waiting 
        = vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__waiting;
    __Vdly__top__DOT__npc_cpu__DOT__ifu2__DOT__i_cnt 
        = vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__i_cnt;
    __Vdly__top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending 
        = vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending;
    __Vdly__top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending 
        = vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending;
    __Vdly__top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state 
        = vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__hit_count 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit_count;
    __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4;
    __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5;
    __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0;
    __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__hit_count 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit_count;
    __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__miss_count 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_count;
    vlSelfRef.__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory__v0 = 0U;
    __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory__v0 = 0U;
    __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory__v0 = 0U;
    __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory__v0 = 0U;
    __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory__v0 = 0U;
    __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__rd_en 
        = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_en;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__miss_count 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_count;
    __Vdly__top__DOT__npc_cpu__DOT__mem1__DOT__out_sent 
        = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__out_sent;
    __Vdly__top__DOT__npc_cpu__DOT__mem1__DOT__req_sent 
        = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__req_sent;
    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase 
        = vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase;
    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint 
        = vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint;
    __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__is_load 
        = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load;
    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu 
        = vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu;
    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write 
        = vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write;
    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy 
        = vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v0 = 0U;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v1 = 0U;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v0 = 0U;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v1 = 0U;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v0 = 0U;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v1 = 0U;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v0 = 0U;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v1 = 0U;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory__v0 = 0U;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory__v0 = 0U;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory__v0 = 0U;
    __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory__v0 = 0U;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62;
    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lk_pc_reg 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_pc_reg;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63;
    __VdlySet__top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory__v0 = 0U;
    __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__total_mem_cycles 
        = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__total_mem_cycles;
    __Vdly__top__DOT__npc_cpu__DOT__wb__DOT__dbgFollowCnt 
        = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__dbgFollowCnt;
    __Vdly__top__DOT__npc_cpu__DOT__wb__DOT__state 
        = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_hit_count_reg 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_hit_count_reg;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_expect_valid_reg 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_expect_valid_reg;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg;
    if (VL_UNLIKELY((1U & (((((((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                                & (1U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) 
                               & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) 
                              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit)) 
                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                            & ((((((0x20003ff6U == 
                                    (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg 
                                     >> 2U)) | (0x20003ff5U 
                                                == 
                                                (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg 
                                                 >> 2U))) 
                                  | (0x20003ff4U == 
                                     (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg 
                                      >> 2U))) | (0x20003ff0U 
                                                  == 
                                                  (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg 
                                                   >> 2U))) 
                                | (0x20003fefU == (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg 
                                                   >> 2U))) 
                               | (0x20003ff1U == (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg 
                                                  >> 2U)))) 
                           & (~ (IData)(vlSelfRef.reset)))))) {
        VL_FWRITEF_NX(0x80000002U,"[DCACHE-WATCH] path=HIT-W pc=0x%x inst=0x%x addr=0x%x word=0x%x wdata=0x%x wmask=0x%x wsize=%1#\n",0,
                      32,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_pc_reg,
                      32,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_inst_reg,
                      32,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg,
                      32,(0xfffffffcU & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg),
                      32,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg,
                      4,(IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg),
                      3,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wsize_reg);
    }
    if (VL_UNLIKELY((1U & (((((((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                                & (1U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) 
                               & ((2U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                                  & (3U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))) 
                              & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) 
                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___dbgDcacheWbHot_T)) 
                            & ((((((0x20003ff6U == 
                                    (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0 
                                     >> 2U)) | (0x20003ff5U 
                                                == 
                                                (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0 
                                                 >> 2U))) 
                                  | (0x20003ff4U == 
                                     (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0 
                                      >> 2U))) | (0x20003ff0U 
                                                  == 
                                                  (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0 
                                                   >> 2U))) 
                                | (0x20003fefU == (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0 
                                                   >> 2U))) 
                               | (0x20003ff1U == (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0 
                                                  >> 2U)))) 
                           & (~ (IData)(vlSelfRef.reset)))))) {
        VL_FWRITEF_NX(0x80000002U,"[DCACHE-WATCH] path=WB-REFILL pc=0x%x inst=0x%x addr=0x%x word=0x%x wdata=0x%x wmask=0x%x wsize=%1# beat=%1#\n",0,
                      32,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_pc_reg,
                      32,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_inst_reg,
                      32,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0,
                      32,(0xfffffffcU & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0),
                      32,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wdata_0,
                      4,(IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wmask_0),
                      3,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wsize_0,
                      3,(IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt));
    }
    if (VL_UNLIKELY((1U & ((((((((((((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                                     & (1U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) 
                                    & ((2U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                                       & (3U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))) 
                                   & (4U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) 
                                  & (5U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) 
                                 & (6U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) 
                                & (7U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) 
                               & (8U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) 
                              & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) 
                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___dbgDcacheWbHot_T)) 
                            & ((((((0x20003ff6U == 
                                    (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg 
                                     >> 2U)) | (0x20003ff5U 
                                                == 
                                                (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg 
                                                 >> 2U))) 
                                  | (0x20003ff4U == 
                                     (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg 
                                      >> 2U))) | (0x20003ff0U 
                                                  == 
                                                  (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg 
                                                   >> 2U))) 
                                | (0x20003fefU == (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg 
                                                   >> 2U))) 
                               | (0x20003ff1U == (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg 
                                                  >> 2U)))) 
                           & (~ (IData)(vlSelfRef.reset)))))) {
        VL_FWRITEF_NX(0x80000002U,"[DCACHE-WATCH] path=BYPASS-W pc=0x%x inst=0x%x addr=0x%x word=0x%x wdata=0x%x wmask=0x%x wsize=%1#\n",0,
                      32,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_pc_reg,
                      32,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_inst_reg,
                      32,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg,
                      32,(0xfffffffcU & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg),
                      32,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg,
                      4,(IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg),
                      3,vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wsize_reg);
    }
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_is_load 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_is_load;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lw 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lw;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lbu 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lbu;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lh 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lh;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lhu 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lhu;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lb 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lb;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__rd_en 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__state 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state;
    __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__out_valid 
        = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__out_valid;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__csr__DOT__mstatus 
        = vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mstatus;
    __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pc = vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc;
    vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg 
        = vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg;
    __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pred_next_pc_reg 
        = vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pred_next_pc_reg;
    __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred 
        = vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred;
    __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pred_valid 
        = vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pred_valid;
    if (vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire_s1) {
        __VdlyVal__top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT____Vcellinp__pht_ext__W0_data;
        __VdlyDim0__top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_idx_s1;
        __VdlySet__top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__out_valid 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) 
                                                     | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_1))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_0) 
                                                      | ((~ (IData)(vlSelfRef.reset)) 
                                                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__out_valid)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__req_valid 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) 
                                                     | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_0))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN) 
                                                      | ((~ (IData)(vlSelfRef.reset)) 
                                                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__req_valid)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_58 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_351)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_58)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_56 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_349)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_56)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_54 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_347)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_54)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_52 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_345)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_52)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_50 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_343)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_50)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_48 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_341)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_48)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_46 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_339)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_46)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_0 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_293)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_0)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_294)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_1)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_2 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_295)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_2)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_3 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_296)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_3)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_4 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_297)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_4)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_5 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_298)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_5)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_6 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_299)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_6)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_7 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_300)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_7)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_8 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_301)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_8)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_9 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_302)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_9)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_10 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_303)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_10)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_11 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_304)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_11)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_12 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_305)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_12)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_13 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_306)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_13)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_14 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_307)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_14)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_15 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_308)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_15)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_16 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_309)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_16)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_17 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_310)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_17)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_18 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_311)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_18)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_19 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_312)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_19)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_20 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_313)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_20)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_21 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_314)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_21)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_22 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_315)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_22)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_23 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_316)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_23)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_24 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_317)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_24)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_25 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_318)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_25)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_26 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_319)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_26)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_27 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_320)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_27)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_28 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_321)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_28)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_29 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_322)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_29)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_30 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_323)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_30)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_31 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_324)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_31)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_32 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_325)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_32)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_33 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_326)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_33)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_34 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_327)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_34)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_35 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_328)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_35)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_36 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_329)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_36)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_37 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_330)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_37)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_38 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_331)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_38)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_39 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_332)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_39)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_40 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_333)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_40)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_41 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_334)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_41)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_42 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_335)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_42)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_43 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_336)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_43)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_44 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_337)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_44)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_45 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_338)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_45)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_47 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_340)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_47)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_49 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_342)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_49)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_51 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_344)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_51)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_53 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_346)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_53)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_55 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_348)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_55)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_57 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_350)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_57)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_59 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_352)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_59)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_60 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_353)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_60)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_61 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_354)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_61)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_62 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_355)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_62)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_63 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_356)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_63)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_0 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_229)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_0)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_230)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_1)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_2 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_231)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_2)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_3 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_232)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_3)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_4 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_233)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_4)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_5 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_234)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_5)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_6 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_235)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_6)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_7 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_236)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_7)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_8 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_237)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_8)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_9 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_238)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_9)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_10 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_239)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_10)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_11 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_240)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_11)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_12 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_241)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_12)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_13 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_242)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_13)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_14 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_243)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_14)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_15 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_244)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_15)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_16 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_245)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_16)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_17 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_246)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_17)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_18 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_247)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_18)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_19 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_248)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_19)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_20 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_249)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_20)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_21 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_250)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_21)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_22 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_251)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_22)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_23 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_252)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_23)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_24 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_253)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_24)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_25 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_254)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_25)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_26 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_255)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_26)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_27 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_256)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_27)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_28 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_257)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_28)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_29 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_258)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_29)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_30 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_259)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_30)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_31 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_260)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_31)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_32 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_261)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_32)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_33 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_262)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_33)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_34 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_263)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_34)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_35 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_264)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_35)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_36 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_265)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_36)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_37 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_266)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_37)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_38 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_267)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_38)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_39 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_268)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_39)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_40 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_269)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_40)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_41 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_270)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_41)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_42 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_271)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_42)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_43 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_272)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_43)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_44 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_273)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_44)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_45 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_274)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_45)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_46 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_275)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_46)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_47 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_276)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_47)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_48 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_277)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_48)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_49 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_278)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_49)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_50 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_279)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_50)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_51 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_280)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_51)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_52 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_281)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_52)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_53 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_282)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_53)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_54 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_283)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_54)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_55 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_284)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_55)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_56 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_285)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_56)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_57 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_286)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_57)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_58 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_287)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_58)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_59 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_288)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_59)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_60 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_289)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_60)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_61 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_290)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_61)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_62 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_291)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_62)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_63 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_292)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_63)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_61 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_225)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_61)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_42 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_206)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_42)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_60 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_224)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_60)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_59 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_223)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_59)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_40 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_204)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_40)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_58 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_222)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_58)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_57 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_221)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_57)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_38 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_202)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_38)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_56 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_220)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_56)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_55 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_219)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_55)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_36 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_200)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_36)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_54 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_218)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_54)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_53 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_217)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_53)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_34 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_198)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_34)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_52 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_216)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_52)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_51 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_215)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_51)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_32 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_196)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_32)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_50 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_214)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_50)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_49 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_213)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_49)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_30 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_194)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_30)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_48 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_212)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_48)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_47 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_211)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_47)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_28 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_192)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_28)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_46 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_210)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_46)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_45 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_209)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_45)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_26 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_190)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_26)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_44 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_208)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_44)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_43 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_207)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_43)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_24 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_188)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_24)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_41 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_205)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_41)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_22 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_186)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_22)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_39 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_203)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_39)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_20 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_184)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_20)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_37 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_201)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_37)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_18 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_182)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_18)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_35 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_199)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_35)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_33 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_197)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_33)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_14 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_178)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_14)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_31 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_195)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_31)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_29 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_193)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_29)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_27 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_191)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_27)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_25 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_189)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_25)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_23 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_187)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_23)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_21 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_185)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_21)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_19 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_183)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_19)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_17 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_181)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_17)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_16 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_180)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_16)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_15 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_179)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_15)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_13 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_177)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_13)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_12 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_176)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_12)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_11 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_175)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_11)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_10 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_174)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_10)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_9 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_173)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_9)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_8 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_172)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_8)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_7 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_171)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_7)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_6 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_170)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_6)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_5 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_169)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_5)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_4 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_168)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_4)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_3 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_167)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_3)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_2 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_166)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_2)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_165)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_1)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_0 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_164)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_0)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_62 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_226)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_62)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_63 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_227)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_63)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_63 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_162)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_63)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_62 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_161)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_62)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_61 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_160)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_61)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_60 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_159)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_60)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_59 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_158)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_59)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_58 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_157)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_58)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_27 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_126)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_27)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_26 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_125)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_26)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_25 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_124)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_25)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_24 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_123)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_24)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_23 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_122)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_23)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_22 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_121)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_22)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_21 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_120)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_21)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_20 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_119)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_20)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_19 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_118)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_19)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_18 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_117)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_18)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_17 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_116)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_17)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_16 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_115)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_16)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_15 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_114)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_15)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_14 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_113)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_14)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_13 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_112)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_13)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_12 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_111)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_12)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_8 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_107)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_8)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_0 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_99)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_0)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_100)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_1)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_2 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_101)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_2)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_3 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_102)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_3)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_4 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_103)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_4)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_5 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_104)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_5)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_6 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_105)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_6)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_7 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_106)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_7)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_9 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_108)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_9)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_10 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_109)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_10)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_11 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_110)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_11)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_28 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_127)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_28)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_29 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_128)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_29)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_30 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_129)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_30)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_31 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_130)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_31)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_32 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_131)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_32)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_33 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_132)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_33)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_34 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_133)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_34)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_35 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_134)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_35)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_36 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_135)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_36)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_37 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_136)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_37)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_38 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_137)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_38)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_39 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_138)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_39)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_40 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_139)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_40)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_41 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_140)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_41)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_42 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_141)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_42)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_43 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_142)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_43)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_44 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_143)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_44)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_45 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_144)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_45)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_46 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_145)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_46)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_47 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_146)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_47)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_48 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_147)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_48)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_49 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_148)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_49)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_50 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_149)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_50)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_51 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_150)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_51)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_52 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_151)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_52)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_53 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_152)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_53)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_54 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_153)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_54)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_55 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_154)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_55)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_56 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_155)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_56)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_57 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)) 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_156)) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_57)));
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_3) 
         & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))) {
        vlSelfRef.__VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rdata;
        vlSelfRef.__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_13;
        vlSelfRef.__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_3) 
         & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))) {
        vlSelfRef.__VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rdata;
        vlSelfRef.__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_13;
        vlSelfRef.__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_3) 
         & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))) {
        vlSelfRef.__VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rdata;
        vlSelfRef.__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_13;
        vlSelfRef.__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_3) 
         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))) {
        vlSelfRef.__VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rdata;
        vlSelfRef.__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_13;
        vlSelfRef.__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_5) 
         & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg;
        __VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg;
        __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_5) 
         & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg;
        __VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg;
        __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_5) 
         & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg;
        __VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg;
        __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_5) 
         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg;
        __VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg;
        __VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__first_inst_reg 
        = ((IData)(vlSelfRef.reset) || ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_2) 
                                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__first_inst_reg)));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)) 
                                                      & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state)
                                                          ? 
                                                         (~ 
                                                          ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state)) 
                                                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__io_out_valid_0)))
                                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT___GEN)))));
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16) 
         & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lineWordData;
        __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___read_addr_T_3;
        __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_19) 
         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v1 
            = (((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
                & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_2_ext_R0_data) 
               | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3);
        __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v1 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_2;
        __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v1 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16) 
         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lineWordData;
        __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___read_addr_T_3;
        __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v0 = 1U;
    }
    if (((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_19))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v1 
            = (((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
                & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_3_ext_R0_data) 
               | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3);
        __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v1 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_2;
        __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v1 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16) 
         & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lineWordData;
        __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___read_addr_T_3;
        __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_14) 
         & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4)) 
            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v1 
            = (((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
                & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_1_ext_R0_data) 
               | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3);
        __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v1 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_2;
        __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v1 = 1U;
    }
    if (((~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))) 
         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lineWordData;
        __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___read_addr_T_3;
        __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_14) 
         & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg) 
            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v1 
            = (((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
                & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_0_ext_R0_data) 
               | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3);
        __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v1 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_2;
        __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v1 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_17) 
         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg;
        __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg;
        __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_17) 
         & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg;
        __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg;
        __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_17) 
         & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg;
        __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg;
        __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory__v0 = 1U;
    }
    if (((~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))) 
         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_17))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg;
        __VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg;
        __VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire_s1) 
         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s1))) {
        __VdlyVal__top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory__v0 
            = (0x100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_target_s1)));
        __VdlyDim0__top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory__v0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_btb_idx_s1;
        __VdlySet__top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_31 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x1fU 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_31) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_31))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_30 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x1eU 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_30) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_30))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_29 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x1dU 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_29) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_29))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_28 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x1cU 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_28) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_28))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_11 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0xbU 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_11) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_11))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_10 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0xaU 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_10) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_10))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_9 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (9U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_9) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_9))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_7 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (7U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_7) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_7))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_6 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (6U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_6) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_6))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_5 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (5U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_5) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_5))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_4 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (4U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_4) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_4))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_3 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (3U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_3) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_3))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_2 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (2U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_2) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_2))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (1U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_1) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_1))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_0 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_0) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_0))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_8 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (8U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_8) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_8))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_12 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0xcU 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_12) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_12))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_13 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0xdU 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_13) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_13))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_14 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0xeU 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_14) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_14))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_15 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0xfU 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_15) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_15))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_16 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x10U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_16) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_16))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_17 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x11U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_17) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_17))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_18 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x12U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_18) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_18))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_19 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x13U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_19) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_19))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_20 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x14U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_20) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_20))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_21 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x15U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_21) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_21))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_22 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x16U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_22) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_22))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_23 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x17U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_23) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_23))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_24 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x18U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_24) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_24))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_25 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x19U 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_25) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_25))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_26 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x1aU 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_26) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_26))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_27 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_32) 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_33)) 
                                                     & (0x1bU 
                                                        == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr)))) 
                                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_27) 
                                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_27))));
    vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_addr_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_idx_s0;
    vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_en_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT___R0_en_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__read_en;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT___R0_addr_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__read_addr;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT___R0_addr_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT___R0_addr_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT___R0_addr_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT___R0_addr_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg;
    if (vlSelfRef.reset) {
        __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_total_count_reg = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__stall_cnt = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag = 1U;
        __Vdly__top__DOT__npc_cpu__DOT__flush_cnt = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__ifu2__DOT__waiting = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__ifu2__DOT__i_cnt = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__hit_count = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0 = 1U;
        __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6 = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0 = 1U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__hit_count = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__miss_count = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__rd_en = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__miss_count = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__total_mem_cycles = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__wb__DOT__state = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__wb__DOT__dbgFollowCnt = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg = 0x80000000U;
        __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_expect_valid_reg = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_hit_count_reg = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__csr__DOT__mstatus = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pc = 0x80000000U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pred_next_pc_reg = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pred_valid = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_25 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_24 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_23 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_22 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_21 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_20 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_19 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_18 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_17 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_16 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_15 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_14 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_13 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_12 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_11 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_10 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_9 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_8 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_7 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_6 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_5 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_4 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_3 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_2 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_1 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_0 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_26 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_27 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_28 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_29 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_30 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_31 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_load = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__bpu__DOT__ghr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__line_base = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_en = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__addr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_csrrs = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_csrrw = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__load_tag = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_jalr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_offset_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__rsize_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_store = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_tag_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wmask = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wdata = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_waddr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__mem1__DOT__req_sent = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__mem1__DOT__out_sent = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__mem_data = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62 = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_data_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_addr_reg = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_data_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wb_addr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__inst = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_jal = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_0 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_31 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_30 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_29 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_28 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_11 = 0U;
    } else {
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_check_now) {
            __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_total_count_reg 
                = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_total_count_reg);
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu_io_stall) 
             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___GEN))) {
            __Vdly__top__DOT__npc_cpu__DOT__stall_cnt 
                = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__stall_cnt);
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__io_load_tag_alloc_valid_0) {
            __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag)));
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) 
             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___GEN))) {
            __Vdly__top__DOT__npc_cpu__DOT__flush_cnt 
                = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__flush_cnt);
        }
        if ((0U == ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low))) {
            __Vdly__top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high 
                = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high);
        }
        __Vdly__top__DOT__npc_cpu__DOT__ifu2__DOT__waiting 
            = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_1) 
                  | ((~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__io_inst_resp_ready_0) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_fetch_resp_valid))) 
                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__waiting))));
        if ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__waiting) 
              & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0))) 
             & ((0xa000ffffU < vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__wait_pc_reg) 
                | (8U == (vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__wait_pc_reg 
                          >> 0x1cU))))) {
            __Vdly__top__DOT__npc_cpu__DOT__ifu2__DOT__i_cnt 
                = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__i_cnt);
        }
        __Vdly__top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending 
            = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__r_last_fire)) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__ar_fire) 
                  | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending)));
        __Vdly__top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending 
            = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__r_last_fire)) 
               & ((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending)) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)) 
                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__ar_fire))) 
                  | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending)));
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1) 
                      | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_0)))))) {
            __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__hit_count 
                = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit_count);
        }
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0 
            = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_7) 
                 ^ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5)) 
                ^ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4)) 
               ^ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_3));
        __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4;
        __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5;
        __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_3;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0 
            = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_7) 
                 ^ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5)) 
                ^ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4)) 
               ^ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_3));
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_3;
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_5) 
                      | (~ ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit))))))) {
            __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__hit_count 
                = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit_count);
        }
        if ((1U & (~ (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_5) 
                       | (3U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit))))) {
            __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__miss_count 
                = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_count);
        }
        if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state))) {
            if (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4) {
                __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__rd_en 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_en;
            }
        } else {
            __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__rd_en 
                = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_4) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_en));
        }
        if ((1U & (~ (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1) 
                       | (2U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit))))) {
            __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__miss_count 
                = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_count);
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy) {
            __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy 
                = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write)
                    ? (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase) 
                        | (~ ((IData)(vlSelfRef.io_master_bvalid) 
                              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_bready_0)))) 
                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy))
                    : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint)
                        ? ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_9)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy))
                        : ((~ (((IData)(vlSelfRef.io_master_rvalid) 
                                & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_rready_0)) 
                               & (IData)(vlSelfRef.io_master_rlast))) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy))));
            __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase 
                = ((~ ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase)) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_wvalid_0)) 
                       & (IData)(vlSelfRef.io_master_wready))) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase));
            __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint 
                = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write) 
                    | (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_9)))) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint));
        } else {
            if (vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid) {
                __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy 
                    = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_12) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy));
                __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu 
                    = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_12)) 
                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu));
                __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write 
                    = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_12) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write));
                __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint 
                    = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_12)) 
                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint));
            } else if (vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_1) {
                if (vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead) {
                    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy 
                        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_10) 
                           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy));
                    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu 
                        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_10)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu));
                    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write 
                        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_10)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write));
                    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint 
                        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_10) 
                           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint));
                } else {
                    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy 
                        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_11) 
                           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy));
                    if (vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_11) {
                        __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu 
                            = vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid;
                    }
                    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write 
                        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_11)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write));
                    __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint 
                        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_11)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint));
                }
            }
            if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid) 
                 & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_12))) {
                __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase 
                    = (1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_wvalid_0) 
                                & (IData)(vlSelfRef.io_master_wready))));
            }
        }
        if ((1U & (~ ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
                      | (~ ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
                            & ((0xa000ffffU < vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__pc) 
                               | (8U == (vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__pc 
                                         >> 0x1cU))))))))) {
            __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__total_mem_cycles 
                = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__total_mem_cycles);
        }
        __Vdly__top__DOT__npc_cpu__DOT__wb__DOT__state 
            = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state)) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT___GEN) 
                  | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state)));
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state) 
             & (0x80005c18U == vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__pc))) {
            __Vdly__top__DOT__npc_cpu__DOT__wb__DOT__dbgFollowCnt = 0x10U;
        } else if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state) 
                    & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__dbgFollowCnt)))) {
            __Vdly__top__DOT__npc_cpu__DOT__wb__DOT__dbgFollowCnt 
                = (0x1fU & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__dbgFollowCnt) 
                            - (IData)(1U)));
        }
        __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_expect_valid_reg 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_2)
                ? ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_check_now)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_expect_valid_reg))
                : ((((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_beq) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bne)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_blt)) 
                     | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bltu)) 
                    | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bge)) 
                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bgeu)));
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_check_now) 
             & (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc 
                == vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg))) {
            __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_hit_count_reg 
                = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_hit_count_reg);
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_2)))) {
            __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg 
                = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jal) 
                    | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jalr))
                    ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jalr)
                        ? (0xfffffffeU & vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jalr_T)
                        : vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jal_T)
                    : (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_beq)
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
                                               >= vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs2_data)))))))
                        ? vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jal_T
                        : ((IData)(4U) + vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc)));
        }
        if ((1U & (((((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wen)) 
                      | (0x305U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr))) 
                     | (0x341U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr))) 
                    | (0x342U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr))) 
                   | (0x300U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr))))) {
            if ((0x30200073U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) {
                vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__csr__DOT__mstatus 
                    = (0x80U | ((0xffffff00U & vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mstatus) 
                                | ((0x70U & vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mstatus) 
                                   | ((8U & (vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mstatus 
                                             >> 4U)) 
                                      | (7U & vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mstatus)))));
            }
        } else {
            vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__csr__DOT__mstatus 
                = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wdata;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) {
            __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pc 
                = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__redirect_valid)
                    ? vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg
                    : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jal)
                        ? vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jal_T
                        : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jalr)
                            ? (0xfffffffeU & vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jalr_T)
                            : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_branch_bits_is_branch_taken)
                                ? vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jal_T
                                : (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_ecall) 
                                    | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_mret))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_rdata
                                    : 0U)))));
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt = 0U;
        } else {
            if (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_1) {
                __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pc 
                    = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pred_valid)
                        ? vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pred_next_pc_reg
                        : ((IData)(4U) + vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc));
            } else if (vlSelfRef.reset) {
                __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pc = 0x80000000U;
            }
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3;
        }
        if ((1U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) 
                   | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN))))) {
            if (vlSelfRef.reset) {
                vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg = 0x80000000U;
            }
        } else {
            vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg 
                = vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred) {
            __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pred_next_pc_reg 
                = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_en_d0) 
                    & ((vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory
                        [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_addr_d0] 
                        >> 0x20U) & (vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory
                                     [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R0_addr_d0] 
                                     >> 1U))) ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_en_d0)
                                                  ? (IData)(
                                                            vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory
                                                            [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_addr_d0])
                                                  : 0U)
                    : ((IData)(4U) + vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pred_pc_s1));
        } else if (vlSelfRef.reset) {
            __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pred_next_pc_reg = 0U;
        }
        __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred 
            = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN) 
                  | ((~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred) 
                         | (IData)(vlSelfRef.reset))) 
                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred))));
        __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pred_valid 
            = ((~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) 
                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN))) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred) 
                  | ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pred_valid))));
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_25) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_24) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_24 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_23) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_22) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_21) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_20) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_19) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_18) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_17) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_16) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_15) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_15 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_14) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_13) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_12) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_11) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_10) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_9) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_8) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_7) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_6) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_5) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_4) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_3) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_2) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_1) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_0) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_26) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_27) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_28) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_29) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_30) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT___GEN_31) {
            vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN) {
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_alu_op;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_alu_b;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT___GEN) {
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_load 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load;
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_en 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_en;
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__addr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__addr;
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_csrrs 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrs;
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_csrrw 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrw;
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_jalr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jalr;
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_store 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_store;
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__mem_data 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__mem_data;
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__inst 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__inst;
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_jal 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jal;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire) {
            __Vdly__top__DOT__npc_cpu__DOT__bpu__DOT__ghr 
                = ((0x3feU & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__ghr) 
                              << 1U)) | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_taken));
        }
        __Vdly__top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state 
            = (1U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)
                      ? (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state) 
                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_rready)))
                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_arvalid)));
        if (((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)) 
             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_arvalid))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg 
                = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_2)) 
                          | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_4)))
                    ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_araddr);
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_34) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg 
                = (0x1fU & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result);
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__line_base 
                = (0xffffffe0U & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result);
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__rsize_reg 
                = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lb) 
                    | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lbu))
                    ? 0U : (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lh) 
                             | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lhu))
                             ? 1U : 2U));
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__load_tag 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__load_tag;
        }
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1) 
                      | (1U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)))))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_offset_reg 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_tag_reg 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg;
        }
        if (((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
             & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0)
                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire)
                 : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_3)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wmask 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wmask_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wdata 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wdata_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_waddr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__in_ready) {
            if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) {
                vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state 
                    = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_2)
                        ? 1U : 2U);
            }
            __Vdly__top__DOT__npc_cpu__DOT__mem1__DOT__req_sent 
                = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_3)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__req_sent));
            __Vdly__top__DOT__npc_cpu__DOT__mem1__DOT__out_sent 
                = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_3)) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__out_sent));
        } else {
            if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN)
                  ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__req_sent) 
                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__out_sent))
                  : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_0) 
                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4)))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state = 0U;
            }
            __Vdly__top__DOT__npc_cpu__DOT__mem1__DOT__req_sent 
                = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN) 
                     & (~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__io_mem_req_valid_0)) 
                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__req_sent));
            __Vdly__top__DOT__npc_cpu__DOT__mem1__DOT__out_sent 
                = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4)) 
                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__out_sent));
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1)))) {
            if ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) {
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)) 
                        & (0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)) 
                        & (0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63 
                    = (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                          & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_5))) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                        & (0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63 
                    = ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                         & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_32))) 
                        & (0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63));
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass 
                    = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit)) 
                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass));
                if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_data_reg 
                        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg
                            : (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)
                                   ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_0_ext_R0_data
                                   : 0U) | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)
                                             ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_1_ext_R0_data
                                             : 0U)) 
                                | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_2_ext_R0_data
                                    : 0U)) | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit3)
                                               ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_3_ext_R0_data
                                               : 0U)));
                }
            } else {
                if ((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16)))) {
                    if ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) {
                        if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_8) {
                            __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass 
                                = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg)) 
                                         | ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last)) 
                                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass))));
                        }
                    } else {
                        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass 
                            = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))
                                ? ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_2)) 
                                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass))
                                : (((9U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_359)) 
                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass)));
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_99)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_100)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_101)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_102)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_103)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_104)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_105)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_106)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_107)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_108)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_109)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_110)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_111)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_112)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_113)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_114)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_115)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_116)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_117)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_118)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_119)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_120)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_121)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_122)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_123)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_124)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_125)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_126)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_127)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_128)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_129)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_130)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_131)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_132)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_133)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_134)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_135)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_136)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_137)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_138)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_139)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_140)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_141)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_142)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_143)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_144)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_145)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_146)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_147)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_148)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_149)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_150)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_151)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_152)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_153)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_154)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_155)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_156)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_157)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_158)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_159)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_160)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_161)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_162)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_164)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_165)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_166)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_167)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_168)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_169)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_170)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_171)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_172)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_173)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_174)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_175)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_176)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_177)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_178)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_179)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_180)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_181)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_182)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_183)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_184)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_185)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_186)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_187)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_188)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_189)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_190)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_191)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_192)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_193)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_194)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_195)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_196)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_197)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_198)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_199)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_200)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_201)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_202)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_203)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_204)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_205)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_206)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_207)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_208)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_209)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_210)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_211)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_212)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_213)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_214)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_215)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_216)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_217)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_218)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_219)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_220)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_221)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_222)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_223)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_224)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_225)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_226)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_227)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_229)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_230)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_231)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_232)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_233)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_234)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_235)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_236)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_237)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_238)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_239)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_240)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_241)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_242)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_243)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_244)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_245)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_246)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_247)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_248)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_249)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_250)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_251)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_252)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_253)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_254)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_255)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_256)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_257)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_258)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_259)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_260)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_261)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_262)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_263)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_264)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_265)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_266)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_267)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_268)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_269)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_270)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_271)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_272)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_273)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_274)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_275)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_276)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_277)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_278)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_279)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_280)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_281)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_282)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_283)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_284)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_285)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_286)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_287)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_288)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_289)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_290)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_291)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_292)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_293)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_294)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_295)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_296)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_297)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_298)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_299)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_300)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_301)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_302)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_303)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_304)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_305)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_306)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_307)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_308)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_309)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_310)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_311)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_312)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_313)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_314)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_315)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_316)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_317)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_318)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_319)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_320)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_321)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_322)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_323)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_324)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_325)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_326)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_327)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_328)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_329)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_330)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_331)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_332)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_333)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_334)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_335)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_336)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_337)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_338)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_339)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_340)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_341)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_342)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_343)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_344)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_345)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_346)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_347)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_348)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_349)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_350)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_351)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_352)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_353)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_354)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_355)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_356)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_357)))))) {
                    if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg) {
                        if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__isTargetWord) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_data_reg 
                                = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg)
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__mergedWord
                                    : vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data);
                        }
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_data_reg 
                            = vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data;
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_17)))) {
            if ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) {
                if ((1U & (~ ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_8)) 
                              | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg))))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_data_reg 
                        = vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_addr_reg 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_addr_reg;
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_31) 
                                 | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_359)))))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_data_reg 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_addr_reg 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg;
            }
        }
        if ((1U & (~ ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1) 
                        | (2U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit)) 
                      | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_98)))))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wb_addr 
                = ((((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                      ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_0_ext_R0_data
                      : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                          ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_1_ext_R0_data
                          : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_2_ext_R0_data
                              : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_3_ext_R0_data))) 
                    << 0xbU) | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg) 
                                << 5U));
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
    }
    if (vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire) {
        vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_ghr_s0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__ghr;
        vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_idx_s1 
            = vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_idx_s0;
        vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_target_s1 
            = vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_target_s0;
        vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s1 
            = vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s0;
        vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_btb_idx_s1 
            = (0x3ffU & vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_pc_s0);
        vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_target_s0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jal_T;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_10 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_6 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_9 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_4 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_7 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_2 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_5 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_3 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_1 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_8 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_12 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_13 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_14 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_15 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_16 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_17 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_18 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_19 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_20 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_21 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_22 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_23 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_24 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_25 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_26 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_27 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__state = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__out_valid = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__rd_en = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lw = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lbu = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lh = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lhu = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lb = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_addr = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_is_load = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_val_out = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_rdata = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wsize_reg = 2U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_pc_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_inst_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__wait_pc_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_en = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__pc = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs1_data = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_beq = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bne = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_blt = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bltu = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bge = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bgeu = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pred_pc_s1 = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_ecall = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_mret = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__addr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrs = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrw = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__load_tag = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jalr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_store = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state = 0U;
        __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__is_load = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__mem_data = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_addr_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__inst = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jal = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_rdata = 0U;
    } else {
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_15 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_24 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN) 
             & (0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN) {
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a 
                = (((0x17U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                    | (0x6fU == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))
                    ? vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc
                    : ((0x37U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))
                        ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs1_data));
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs1_data 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs1_data;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_beq 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_beq;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bne 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bne;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_blt 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_blt;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bltu 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bltu;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bge 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bge;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bgeu 
                = vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bgeu;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_ecall 
                = (0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst);
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_mret 
                = (0x30200073U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst);
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state) {
            __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__state 
                = (1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state) 
                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_1))));
            __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__out_valid 
                = (1U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state)
                          ? ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_1)) 
                             & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now)))
                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__out_valid)));
        } else {
            __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__state 
                = (1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN));
            __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__out_valid = 0U;
        }
        __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__rd_en 
            = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T)) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN)
                   ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_load) 
                      | ((0x37U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                         | ((0x17U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                            | ((0x33U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                  | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr) 
                                     | ((0x13U == (0x7fU 
                                                   & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                        | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_10) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                  >> 7U)))))))))))
                   : (((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state)) 
                       | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now))) 
                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en))));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lw 
            = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T)) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN)
                   ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lw)
                   : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lw)));
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now) {
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_addr = 0U;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_val_out = 0U;
        } else if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__hold_capture) {
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_addr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_val_out 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu__DOT__casez_tmp;
        } else if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_valid) {
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_addr = 0U;
            vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_val_out = 0U;
        }
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lbu 
            = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T)) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN)
                   ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lbu)
                   : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lbu)));
        __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en 
            = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now)) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__hold_capture)
                   ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en)
                   : ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_valid)) 
                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en))));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lh 
            = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T)) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN)
                   ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lh)
                   : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lh)));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lhu 
            = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T)) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN)
                   ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lhu)
                   : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lhu)));
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__exu__DOT__is_lb 
            = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T)) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN)
                   ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lb)
                   : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lb)));
        __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_is_load 
            = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now)) 
               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__hold_capture)
                   ? (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lw) 
                         | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lbu)) 
                        | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lh)) 
                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lhu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lb))
                   : ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_valid)) 
                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_is_load))));
        if (vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT___GEN) {
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_rdata 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_rdata;
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__pc 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__pc;
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_34) {
            if (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wsize_reg = 0U;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg 
                    = (0xfU & ((IData)(1U) << (3U & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result)));
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg 
                    = ((0xffU & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data) 
                       << (0x18U & (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                                    << 3U)));
            } else if (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wsize_reg = 1U;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg 
                    = (0xfU & ((2U & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result)
                                ? 0xcU : 3U));
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg 
                    = ((0xffffU & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data) 
                       << (0x10U & (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                                    << 3U)));
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wsize_reg = 2U;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg 
                    = (0xfU & (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw))));
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg 
                    = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw)
                        ? vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data
                        : 0U);
            }
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_pc_reg 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__pc;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_inst_reg 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__inst;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg 
                = (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                   >> 0xbU);
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg 
                = vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_wen;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_addr_reg 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg 
                = (((0x28U == (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                               >> 0x1aU)) | (0x20U 
                                             == (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                                                 >> 0x1aU))) 
                   & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_bypass)));
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg 
                = (0x3fU & (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                            >> 5U));
        }
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low 
            = vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT___lo_next_T;
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) 
                      | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_1)))))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__wait_pc_reg 
                = vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_en 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__load_tag 
                = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_0) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en))
                    ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag)
                    : 0U);
        }
        if ((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) {
            if ((1U & (~ (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___read_tags_3_T) 
                           | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN))) 
                          | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit))))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay;
            }
            if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___read_tags_3_T) {
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state = 2U;
            } else if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit) 
                              | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_98)))))) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt = 0U;
                }
                __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state 
                    = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit)
                        ? 8U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_98)
                                 ? 3U : 6U));
            } else {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___read_en_T_1) 
                              | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_6))))) {
                    if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_7) {
                        if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_8) {
                            __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt 
                                = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                    ? 0U : (7U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))));
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_9) 
                                         | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_357)))))) {
                        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt 
                            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_33)
                                ? 0U : (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))));
                    }
                }
                if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___read_en_T_1) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state = 4U;
                } else if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_6) {
                    if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___dbgDcacheWbHot_T) {
                        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state = 5U;
                    }
                } else if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_7) {
                    if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_8) {
                        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state 
                            = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                ? 6U : 3U);
                    }
                } else if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_9) {
                    if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___dbgDcacheWbHot_T) {
                        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state = 7U;
                    }
                } else if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_13) {
                    if (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_8) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_33))) {
                        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state = 8U;
                    }
                } else if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_19) {
                    if (vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_2) {
                        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state = 0U;
                    }
                } else if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_24) {
                    if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___dbgDcacheWbHot_T) {
                        __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state = 0xaU;
                    }
                } else if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_359) {
                    __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state = 8U;
                }
            }
        } else if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_34) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__rand_way;
            __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt = 0U;
            __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state 
                = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_bypass) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_wen))
                    ? 9U : (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_bypass) 
                             & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_wen)))
                             ? 6U : 1U));
        }
        vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pred_pc_s1 
            = vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc;
        if (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__addr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrs 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrs;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrw 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrw;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jalr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jalr;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_store 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_store;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__inst 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__inst;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jal 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jal;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_rdata 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_rdata;
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_28)))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg 
                = (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg 
                   >> 0xbU);
        }
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state 
            = vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__casez_tmp;
        if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state))) {
            if (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4) {
                __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__is_load 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_load;
            }
            if ((1U & (~ ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4)) 
                          | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_1))))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__mem_data = 0U;
            }
        } else {
            __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__is_load 
                = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_4) 
                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load));
            if (((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
                 & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_2))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__mem_data 
                    = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load)
                        ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lbu)
                            ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp)
                            : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lb)
                                ? (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp) 
                                                   >> 7U)))) 
                                    << 8U) | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp))
                                : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lhu)
                                    ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__halfData)
                                    : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lh)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__halfData) 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__halfData))
                                        : vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data))))
                        : vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data);
            }
        }
    }
    if ((1U & (~ ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) 
                    | (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                   | (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                  | (2U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_3 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT___R0_en_d0)
                ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory
               [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT___R0_addr_d0]
                : 0U);
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_2 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT___R0_en_d0)
                ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory
               [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT___R0_addr_d0]
                : 0U);
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_1 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT___R0_en_d0)
                ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory
               [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT___R0_addr_d0]
                : 0U);
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_0 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT___R0_en_d0)
                ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory
               [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT___R0_addr_d0]
                : 0U);
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT___R0_en_d0 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT___R0_en_d0 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT___R0_en_d0 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT___R0_en_d0 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_total_count_reg 
        = __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_total_count_reg;
    vlSelfRef.top__DOT__npc_cpu__DOT__stall_cnt = __Vdly__top__DOT__npc_cpu__DOT__stall_cnt;
    vlSelfRef.top__DOT__npc_cpu__DOT__flush_cnt = __Vdly__top__DOT__npc_cpu__DOT__flush_cnt;
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high 
        = __Vdly__top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high;
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__waiting 
        = __Vdly__top__DOT__npc_cpu__DOT__ifu2__DOT__waiting;
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__i_cnt 
        = __Vdly__top__DOT__npc_cpu__DOT__ifu2__DOT__i_cnt;
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending 
        = __Vdly__top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending;
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending 
        = __Vdly__top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit_count 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__hit_count;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4 
        = __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5 
        = __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit_count 
        = __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__hit_count;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_count 
        = __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__miss_count;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_count 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__miss_count;
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase 
        = __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase;
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint 
        = __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint;
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu 
        = __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu;
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write 
        = __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write;
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy 
        = __Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy;
    if (__VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v0] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v0;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v1) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v1] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_ext__DOT__Memory__v1;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v0] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v0;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v1) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v1] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_ext__DOT__Memory__v1;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v0] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v0;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v1) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v1] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_ext__DOT__Memory__v1;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v0] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v0;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v1) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v1] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_ext__DOT__Memory__v1;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory__v0] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory__v0;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory__v0] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory__v0;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory__v0] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_ext__DOT__Memory__v0;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory__v0] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_ext__DOT__Memory__v0;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__total_mem_cycles 
        = __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__total_mem_cycles;
    vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__dbgFollowCnt 
        = __Vdly__top__DOT__npc_cpu__DOT__wb__DOT__dbgFollowCnt;
    vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state 
        = __Vdly__top__DOT__npc_cpu__DOT__wb__DOT__state;
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_hit_count_reg 
        = __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_hit_count_reg;
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_expect_valid_reg 
        = __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__bp_expect_valid_reg;
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pred_next_pc_reg 
        = __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pred_next_pc_reg;
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred 
        = __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred;
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pred_valid 
        = __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pred_valid;
    if (__VdlySet__top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory__v0] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory__v0;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory__v0] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory__v0;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg 
        = __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg;
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state 
        = __Vdly__top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state;
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_en 
        = __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__rd_en;
    if (__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory__v0] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory__v0;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory__v0] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory__v0;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory__v0] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory__v0;
    }
    if (__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory[__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory__v0] 
            = __VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory__v0;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__out_sent 
        = __Vdly__top__DOT__npc_cpu__DOT__mem1__DOT__out_sent;
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__req_sent 
        = __Vdly__top__DOT__npc_cpu__DOT__mem1__DOT__req_sent;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63;
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_is_load 
        = __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_is_load;
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en 
        = __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en;
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state 
        = __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__state;
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__out_valid 
        = __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__out_valid;
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending)) 
                 & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending))));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_7 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_3 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_2));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_7 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_3 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_2));
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_4 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_11 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy) 
           & ((~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu) 
                  | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase))) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write)));
    vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire_s1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire));
    vlSelfRef.io_difftest_valid = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state;
    vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_en_d0 = 1U;
    vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_addr_d0 
        = (0x3ffU & vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc);
    vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R0_addr_d0 
        = (0x3ffU & (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc 
                     ^ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__ghr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_en_d0)
            ? vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory
           [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_addr_d0]
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
    vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_valid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_en) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state));
    vlSelfRef.io_commit_addr = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__addr;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT___R0_addr_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT___R0_en_d0 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT___R0_addr_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT___R0_en_d0 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT___R0_addr_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT___R0_en_d0 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT___R0_addr_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT___R0_en_d0 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_3_ext_R0_data 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT___R0_en_d0)
            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT__Memory
           [vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_2_ext_R0_data 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT___R0_en_d0)
            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT__Memory
           [vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_ext__DOT___R0_addr_d0]
            : 0U);
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
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__in_ready 
        = (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_0 
        = (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__io_mem_req_valid_0 
        = ((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state)) 
           & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__req_sent)) 
              & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_2 = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass)
                                                 ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_data_reg
                                                 : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_data_reg);
    vlSelfRef.io_inst = vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__inst;
    vlSelfRef.io_halt = ((0x100073U == vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__inst) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state));
    vlSelfRef.io_gpr_31 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_31;
    vlSelfRef.io_gpr_30 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_30;
    vlSelfRef.io_gpr_29 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_29;
    vlSelfRef.io_gpr_28 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_28;
    vlSelfRef.io_gpr_11 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_11;
    vlSelfRef.io_gpr_10 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_10;
    vlSelfRef.io_gpr_6 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_6;
    vlSelfRef.io_gpr_9 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_9;
    vlSelfRef.io_gpr_4 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_4;
    vlSelfRef.io_gpr_7 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_7;
    vlSelfRef.io_gpr_2 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_2;
    vlSelfRef.io_gpr_5 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_5;
    vlSelfRef.io_gpr_3 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_3;
    vlSelfRef.io_gpr_1 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_1;
    vlSelfRef.io_gpr_8 = vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_8;
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
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jalr_T 
        = (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a 
           + vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b);
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_valid 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now)) 
                                                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__hold_capture)));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__out_valid) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6 
        = __Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6;
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_5 
        = (1U & ((~ (IData)(top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_4)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_12 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
           & (IData)(top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_4));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_11) 
           & (IData)(vlSelfRef.io_master_bvalid));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state 
        = __Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__state;
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
    vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__ghr 
        = __Vdly__top__DOT__npc_cpu__DOT__bpu__DOT__ghr;
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc 
        = __Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pc;
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag 
        = __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag;
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en 
        = __Vdly__top__DOT__npc_cpu__DOT__exu__DOT__rd_en;
    vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load 
        = __Vdly__top__DOT__npc_cpu__DOT__mem2__DOT__is_load;
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_check_now 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_1) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_expect_valid_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT___lo_next_T 
        = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low);
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_2 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_1));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_2 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_1));
    vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_rd_en 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_en) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_10 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__isTargetWord 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt) 
           == (7U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg) 
                     >> 2U)));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_34 
        = ((~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__io_mem_req_valid_0));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_31 
        = ((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           | (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_15 
        = ((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           | (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_25 
        = ((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
           | (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1 
        = (1U & ((~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))) 
                 | (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))));
    vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT____Vcellinp__pht_ext__W0_data 
        = (3U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s1)
                  ? (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_en_d0) 
                      & (3U == vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory
                         [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_addr_d0]))
                      ? 3U : ((IData)(1U) + (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data)))
                  : ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data))
                      ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data) 
                              - (IData)(1U)))));
}
