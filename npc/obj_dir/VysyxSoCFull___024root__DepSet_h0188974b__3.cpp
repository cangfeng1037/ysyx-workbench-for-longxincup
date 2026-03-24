// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__8(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__8\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_530))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_531))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_532))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_533))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_534))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_535))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_537))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_538))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_539))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_540))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_541))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_542))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_543))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_544))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_546))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_547))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_548))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_549))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_550))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_551))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_552))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_553))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_555))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_556))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_557))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_558))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_559))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_560))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_561))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_562))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_564))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_565))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_566))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_567))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_568))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_569))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_570))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_571))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_573))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_574))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_575))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_576))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_577))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_578))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_579))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_580))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_582))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_583))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_584))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_585))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_586))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_587))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_588))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_589))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_590))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_591))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_592))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_593))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_594))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_595))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_596))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_597))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_18))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_20))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_22))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_24))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_26))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_28))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_30))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_31))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_33))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_34))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_35))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_36))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_37))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_38))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_39))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_40))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_42))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_43))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_44))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_45))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_46))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_47))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_48))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_49))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_51))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_52))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_53))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_54))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_55))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_56))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_57))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_58))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_60))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_61))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_62))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_63))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_64))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_65))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_66))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_67))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_69))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_70))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_71))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_72))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_73))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_74))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_75))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_76))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_78))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_79))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_80))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_81))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_82))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_83))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_84))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_85))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_87))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_88))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_89))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_90))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_91))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_92))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_93))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_94))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_96))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_97))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_98))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_99))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_100))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_101))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_102))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_103))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_105))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_106))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_107))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_108))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_109))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_110))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_111))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_112))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_114))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_115))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_116))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_117))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_118))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_119))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_120))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_121))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_123))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_124))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_125))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_126))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_127))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_128))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_129))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_130))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_132))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_133))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_134))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_135))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_136))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_137))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_138))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_139))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_141))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_142))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_143))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_144))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_145))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_146))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_147))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_148))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_150))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_151))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_152))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_153))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_154))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_155))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_156))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_157))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_159))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_160))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_161))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_162))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_163))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_164))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_165))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_166))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_168))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_169))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_170))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_171))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_172))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_173))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_174))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_175))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_177))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_178))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_179))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_180))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_181))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_182))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_183))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_184))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_186))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_187))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_188))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_189))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_190))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_191))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_192))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_193))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_195))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_196))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_197))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_198))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_199))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_200))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_201))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_202))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_204))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_205))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_206))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_207))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_208))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_209))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_210))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_211))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_213))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_214))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_215))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_216))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_217))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_218))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_219))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_220))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_222))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_223))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_224))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_225))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_226))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_227))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_228))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_229))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_231))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_232))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_233))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_234))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_235))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_236))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_237))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_238))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_240))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_241))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_242))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_243))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_244))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_245))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_246))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_247))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_249))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_250))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_251))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_252))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_253))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_254))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_255))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_256))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_258))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_259))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_260))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_261))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_262))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_263))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_264))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_265))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_267))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_268))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_269))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_270))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_271))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_272))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_273))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_274))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_276))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_277))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_278))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_279))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_280))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_281))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_282))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_283))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_285))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_286))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_287))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_288))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_289))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_290))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_291))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_292))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_294))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_295))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_296))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_297))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_298))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_299))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_300))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_301))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_303))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_304))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_305))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_306))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_307))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_308))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_309))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_310))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_312))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_313))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_314))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_315))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_316))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_317))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_318))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_319))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_321))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_322))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_323))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_324))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_325))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_326))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_327))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_328))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_330))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_331))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_332))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_333))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_334))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_335))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_336))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_337))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_339))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_340))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_341))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_342))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_343))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_344))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_345))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_346))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_348))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_349))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_350))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_351))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_352))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_353))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_354))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_355))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_357))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_358))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_359))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_360))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_361))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_362))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_363))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_364))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_366))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_367))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_368))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_369))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_370))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_371))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_372))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_373))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_375))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_376))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_377))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_378))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_379))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_380))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_381))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_382))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_384))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_385))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_386))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_387))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_388))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_389))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_390))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_391))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_393))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_394))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_395))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_396))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_397))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_398))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_399))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_400))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_402))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_403))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_404))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_405))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_406))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_407))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_408))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_409))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_411))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_412))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_413))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_414))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_415))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_416))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_417))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_418))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_420))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_421))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_422))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_423))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_424))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_425))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_426))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_427))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_429))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_430))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_431))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_432))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_433))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_434))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_435))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_436))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_438))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_439))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_440))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_441))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_442))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_443))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_444))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_445))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_447))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_448))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_449))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_450))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_451))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_452))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_453))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_454))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_456))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_457))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_458))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_459))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_460))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_461))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_462))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_463))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_465))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_466))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_467))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_468))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_469))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_470))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_471))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_472))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_474))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_475))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_476))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_477))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_478))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_479))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_480))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_481))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_483))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_484))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_485))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_486))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_487))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_488))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_489))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_490))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_492))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_493))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_494))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_495))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_496))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_497))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_498))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_499))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_501))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_502))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_503))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_504))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_505))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_506))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_507))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_508))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_510))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_511))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_512))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_513))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_514))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_515))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_516))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_517))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_519))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_520))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_521))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_522))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_523))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_524))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_525))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_526))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_528))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_529))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_530))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_531))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_532))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_533))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_534))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_535))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_537))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_538))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_539))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_540))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_541))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_542))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_543))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_544))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_546))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_547))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_548))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_549))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_550))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_551))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_552))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_553))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_555))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_556))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_557))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_558))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_559))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_560))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_561))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_562))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_564))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_565))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_566))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_567))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_568))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_569))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_570))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_571))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_573))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_574))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_575))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_576))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_577))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_578))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_579))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_580))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_582))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_583))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_584))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_585))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_586))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_587))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_588))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_589))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_590))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_0 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_591))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_1 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_592))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_593))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_3 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_594))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_4 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_595))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_5 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_596))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_6 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_597))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_7 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__bypass_inst_reg = 0U;
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__bypass_pc_reg = 0U;
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_csrrs = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_csrrw = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__addr = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__rd_en = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__rd_addr = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_jalr = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_jal = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__pc = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__mem_data = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__csr_rdata = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__miss_addr_reg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__index_reg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_reg = 0U;
    } else {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass 
            = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)) 
                     & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state))
                         ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass)
                         : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state))
                             ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass))
                             : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state))
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass)
                                 : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state))
                                     ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)
                                         ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                                            | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass)))
                                         : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass))
                                     : ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_13)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass))))))));
        if ((1U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                       | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_856))) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg))))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__bypass_inst_reg 
                = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                    ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata);
            vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__bypass_pc_reg 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT___GEN_4) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_csrrs 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_csrrs;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_csrrw 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_csrrw;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__rd_en 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__rd_en;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_jalr 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_jalr;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_jal 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_jal;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__pc 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__pc;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__csr_rdata 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__csr_rdata;
        }
        if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__state))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT___GEN_4) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__addr 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__alu_result;
            }
            if ((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT___GEN_4)) 
                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT___GEN_1))))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__mem_data = 0U;
            }
        } else if (((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__state)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT___GEN_2))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__addr 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_addr;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__mem_data 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_load)
                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_lbu)
                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp)
                        : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_lb)
                            ? (((- (IData)((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp) 
                                                  >> 7U)))) 
                                << 8U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp))
                            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_lhu)
                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__halfData)
                                : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_lh)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__halfData) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__halfData))
                                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data))))
                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data);
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT___GEN) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__rd_addr 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__rd_addr;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT___GEN_76) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg 
                = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                   >> 0xbU);
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_wen;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg 
                = (0x1fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__alu_result);
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__miss_addr_reg 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__alu_result;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg 
                = ((0x28U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                              >> 0x1aU)) & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_bypass)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__alu_result;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__index_reg 
                = (0x3fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                            >> 5U));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_sb)
                    ? ((0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__rs2_data) 
                       << (0x18U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                                    << 3U))) : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_sh)
                                                 ? 
                                                ((0xffffU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__rs2_data) 
                                                 << 
                                                 (0x10U 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                                                     << 3U)))
                                                 : 
                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_sw)
                                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__rs2_data
                                                  : 0U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__casez_tmp;
        if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__state))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT___GEN_76) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__rand_way;
            }
        } else if ((1U & (~ ((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__hit))))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__allocWay;
        }
        if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) 
                      | (~ ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu1__DOT___GEN))))))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_reg 
                = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu1__DOT__pc 
                   >> 0xcU);
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__enq_ptr_value));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__enq_ptr_value));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__maybe_full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 5U)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_wdata 
        = (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
                   [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__deq_ptr_value] 
                   >> 4U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_wstrb 
        = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
                          [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__deq_ptr_value]));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__enq_ptr_value));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32 
        = ((((- (IData)((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg) 
                               >> 3U)))) << 0x18U) 
            | (0xff0000U & ((- (IData)((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg) 
                                              >> 2U)))) 
                            << 0x10U))) | ((0xff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg) 
                                                              >> 1U)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__enq_ptr_value));
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 = 7U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2 = 0U;
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask = 7U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2 = 0U;
    } else {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) 
             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                   | (6U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                            << 1U)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                   | (4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                            << 2U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
        }
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (6U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                   | (4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                            << 2U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__enq_ptr_value));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__in_ready 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT___GEN 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT___GEN_0 
        = (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__io_mem_req_valid_0 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state)) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__req_sent)) 
              & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___wb_io_rd_data 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_csrrs) 
            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_csrrw))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__csr_rdata
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_load)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__mem_data
                : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_jal) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_jalr))
                    ? ((IData)(4U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__pc)
                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__addr)));
    if ((0x20U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_63;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_63;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_63;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_63;
                        } else {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_62;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_62;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_62;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_62;
                        }
                    } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_61;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_61;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_61;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_61;
                    } else {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_60;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_60;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_60;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_60;
                    }
                } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_59;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_59;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_59;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_59;
                    } else {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_58;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_58;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_58;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_58;
                    }
                } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_57;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_57;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_57;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_57;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_56;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_56;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_56;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_56;
                }
            } else if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_55;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_55;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_55;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_55;
                    } else {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_54;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_54;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_54;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_54;
                    }
                } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_53;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_53;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_53;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_53;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_52;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_52;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_52;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_52;
                }
            } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_51;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_51;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_51;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_51;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_50;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_50;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_50;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_50;
                }
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_49;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_49;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_49;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_49;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_48;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_48;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_48;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_48;
            }
        } else if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_47;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_47;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_47;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_47;
                    } else {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_46;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_46;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_46;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_46;
                    }
                } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_45;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_45;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_45;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_45;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_44;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_44;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_44;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_44;
                }
            } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_43;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_43;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_43;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_43;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_42;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_42;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_42;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_42;
                }
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_41;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_41;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_41;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_41;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_40;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_40;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_40;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_40;
            }
        } else if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_39;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_39;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_39;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_39;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_38;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_38;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_38;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_38;
                }
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_37;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_37;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_37;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_37;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_36;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_36;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_36;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_36;
            }
        } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_35;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_35;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_35;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_35;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_34;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_34;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_34;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_34;
            }
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_33;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_33;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_33;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_33;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_32;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_32;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_32;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_32;
        }
    } else if ((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_31;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_31;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_31;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_31;
                    } else {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_30;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_30;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_30;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_30;
                    }
                } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_29;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_29;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_29;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_29;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_28;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_28;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_28;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_28;
                }
            } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_27;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_27;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_27;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_27;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_26;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_26;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_26;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_26;
                }
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_25;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_25;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_25;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_25;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_24;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_24;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_24;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_24;
            }
        } else if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_23;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_23;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_23;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_23;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_22;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_22;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_22;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_22;
                }
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_21;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_21;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_21;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_21;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_20;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_20;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_20;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_20;
            }
        } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_19;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_19;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_19;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_19;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_18;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_18;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_18;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_18;
            }
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_17;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_17;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_17;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_17;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_16;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_16;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_16;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_16;
        }
    } else if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_15;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_15;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_15;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_15;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_14;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_14;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_14;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_14;
                }
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_13;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_13;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_13;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_13;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_12;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_12;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_12;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_12;
            }
        } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_11;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_11;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_11;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_11;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_10;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_10;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_10;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_10;
            }
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_9;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_9;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_9;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_9;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_8;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_8;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_8;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_8;
        }
    } else if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_7;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_7;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_7;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_7;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_6;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_6;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_6;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_6;
            }
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_5;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_5;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_5;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_5;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_4;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_4;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_4;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_4;
        }
    } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_3;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_3;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_3;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_3;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_2;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_2;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_2;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_2;
        }
    } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_1;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_0;
    }
    if (vlSelfRef.__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__deq_ptr_value 
        = vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__deq_ptr_value;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu1__DOT__out_valid 
        = vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu1__DOT__out_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu2__DOT__io_in_ready_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__busy)) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu2__DOT__resp_valid_reg)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_in_ready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6 
        = vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6 
        = vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6;
    if (vlSelfRef.__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__deq_ptr_value 
        = vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__deq_ptr_value;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_18 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_20 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_22 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_24 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_26 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_28 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_30 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_31 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_33 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_34 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_35 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_36 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_37 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_38 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_39 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_40 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_42 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_43 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_44 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_45 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_46 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_47 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_48 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_49 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_51 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_52 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_53 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_54 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_55 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_56 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_57 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_58 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_60 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_61 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_62 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_63 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_64 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_65 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_66 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_67 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_69 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_70 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_71 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_72 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_73 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_74 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_75 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_76 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_78 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_79 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_80 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_81 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_82 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_83 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_84 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_85 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_87 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_88 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_89 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_90 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_91 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_92 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_93 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_94 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_96 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_97 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_98 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_99 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_100 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_101 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_102 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_103 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_105 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_106 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_107 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_108 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_109 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_110 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_111 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_112 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_114 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_115 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_116 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_117 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_118 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_119 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_120 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_121 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_123 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_124 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_125 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_126 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_127 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_128 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_129 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_130 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_132 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_133 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_134 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_135 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_136 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_137 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_138 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_139 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_141 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_142 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_143 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_144 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_145 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_146 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_147 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_148 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_150 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_151 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_152 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_153 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_154 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_155 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_156 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_157 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_159 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_160 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_161 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_162 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_163 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_164 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_165 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_166 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_168 
        = ((0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_169 
        = ((0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_170 
        = ((0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_171 
        = ((0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_172 
        = ((0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_173 
        = ((0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_174 
        = ((0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_175 
        = ((0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg)) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt)));
}
