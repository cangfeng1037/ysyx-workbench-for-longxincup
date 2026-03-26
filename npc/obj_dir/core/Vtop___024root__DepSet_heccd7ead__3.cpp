// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_91))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_92))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_93))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_94))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_96))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_97))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_98))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_99))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_100))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_101))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_102))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_103))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_105))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_106))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_107))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_108))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_109))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_110))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_111))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_112))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_114))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_115))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_116))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_117))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_118))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_119))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_120))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_121))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_123))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_124))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_125))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_126))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_127))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_128))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_129))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_130))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_132))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_133))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_134))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_135))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_136))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_137))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_138))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_139))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_141))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_142))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_143))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_144))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_145))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_146))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_147))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_148))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_150))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_151))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_152))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_153))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_154))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_155))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_156))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_157))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_159))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_160))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_161))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_162))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_163))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_164))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_165))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_166))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_168))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_169))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_170))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_171))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_172))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_173))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_174))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_175))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_177))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_178))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_179))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_180))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_181))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_182))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_183))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_184))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_186))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_187))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_188))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_189))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_190))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_191))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_192))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_193))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_195))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_196))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_197))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_198))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_199))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_200))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_201))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_202))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_204))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_205))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_206))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_207))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_208))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_209))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_210))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_211))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_213))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_214))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_215))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_216))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_217))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_218))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_219))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_220))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_222))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_223))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_224))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_225))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_226))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_227))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_228))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_229))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_231))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_232))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_233))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_234))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_235))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_236))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_237))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_238))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_240))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_241))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_242))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_243))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_244))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_245))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_246))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_247))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_249))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_250))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_251))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_252))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_253))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_254))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_255))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_256))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_258))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_259))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_260))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_261))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_262))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_263))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_264))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_265))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_267))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_268))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_269))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_270))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_271))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_272))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_273))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_274))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_276))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_277))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_278))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_279))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_280))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_281))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_282))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_283))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_285))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_286))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_287))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_288))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_289))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_290))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_291))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_292))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_294))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_295))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_296))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_297))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_298))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_299))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_300))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_301))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_303))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_304))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_305))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_306))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_307))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_308))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_309))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_310))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_312))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_313))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_314))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_315))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_316))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_317))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_318))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_319))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_321))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_322))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_323))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_324))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_325))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_326))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_327))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_328))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_330))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_331))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_332))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_333))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_334))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_335))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_336))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_337))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_339))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_340))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_341))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_342))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_343))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_344))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_345))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_346))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_348))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_349))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_350))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_351))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_352))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_353))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_354))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_355))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_357))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_358))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_359))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_360))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_361))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_362))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_363))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_364))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_366))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_367))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_368))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_369))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_370))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_371))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_372))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_373))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_375))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_376))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_377))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_378))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_379))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_380))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_381))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_382))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_384))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_385))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_386))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_387))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_388))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_389))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_390))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_391))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_393))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_394))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_395))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_396))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_397))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_398))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_399))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_400))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_402))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_403))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_404))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_405))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_406))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_407))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_408))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_409))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_411))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_412))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_413))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_414))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_415))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_416))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_417))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_418))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_420))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_421))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_422))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_423))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_424))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_425))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_426))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_427))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_429))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_430))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_431))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_432))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_433))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_434))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_435))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_436))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_438))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_439))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_440))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_441))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_442))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_443))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_444))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_445))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_447))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_448))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_449))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_450))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_451))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_452))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_453))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_454))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_456))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_457))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_458))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_459))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_460))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_461))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_462))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_463))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_465))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_466))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_467))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_468))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_469))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_470))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_471))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_472))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_474))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_475))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_476))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_477))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_478))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_479))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_480))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_481))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_483))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_484))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_485))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_486))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_487))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_488))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_489))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_490))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_492))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_493))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_494))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_495))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_496))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_497))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_498))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_499))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_501))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_502))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_503))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_504))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_505))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_506))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_507))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_508))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_510))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_511))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_512))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_513))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_514))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_515))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_516))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_517))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_519))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_520))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_521))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_522))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_523))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_524))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_525))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_526))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_528))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_529))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_530))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_531))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_532))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_533))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_534))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_535))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_537))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_538))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_539))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_540))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_541))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_542))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_543))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_544))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_546))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_547))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_548))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_549))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_550))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_551))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_552))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_553))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_555))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_556))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_557))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_558))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_559))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_560))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_561))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_562))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_564))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_565))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_566))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_567))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_568))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_569))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_570))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_571))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_573))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_574))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_575))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_576))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_577))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_578))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_579))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_580))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_582))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_583))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_584))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_585))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_586))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_587))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_588))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_589))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_590))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_0 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_591))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_1 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_592))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_2 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_593))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_3 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_594))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_4 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_595))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_5 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_596))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_6 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                  | (~ (((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                         & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way))) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_597))))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_7 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                ? 0U : vlSelfRef.io_master_rdata);
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__bypass_inst_reg = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__bypass_pc_reg = 0U;
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrs = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrw = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__addr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_en = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jalr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jal = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__pc = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__mem_data = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_rdata = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_addr_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way = 0U;
    } else {
        vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass 
            = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)) 
                     & ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass)
                         : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                             ? ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit)) 
                                & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass))
                             : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass)
                                 : ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                                     ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14)
                                         ? ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                                            | ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)) 
                                               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass)))
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass))
                                     : ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_13)) 
                                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass))))))));
        if ((1U & (~ (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_6) 
                       | (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_856))) 
                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg))))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__bypass_inst_reg 
                = ((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                          | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                    ? 0U : vlSelfRef.io_master_rdata);
            vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__bypass_pc_reg 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrs 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrs;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrw 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrw;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_en 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_en;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jalr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jalr;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jal 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jal;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__pc 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__pc;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_rdata 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_rdata;
        }
        if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state))) {
            if (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4) {
                vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__addr 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result;
            }
            if ((1U & (~ ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4)) 
                          | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_1))))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__mem_data = 0U;
            }
        } else if (((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_2))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__addr 
                = vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_addr;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__mem_data 
                = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load)
                    ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lbu)
                        ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp)
                        : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lb)
                            ? (((- (IData)((1U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp) 
                                                  >> 7U)))) 
                                << 8U) | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp))
                            : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lhu)
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__halfData)
                                : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lh)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__halfData) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__halfData))
                                    : vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data))))
                    : vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data);
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT___GEN) {
            vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr;
        }
        vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state 
            = vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__casez_tmp;
        if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_76) {
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
                = ((0x28U == (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                              >> 0x1aU)) & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_bypass)));
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg 
                = (0x1fU & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result);
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg 
                = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb)
                    ? ((0xffU & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data) 
                       << (0x18U & (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                                    << 3U))) : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh)
                                                 ? 
                                                ((0xffffU 
                                                  & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data) 
                                                 << 
                                                 (0x10U 
                                                  & (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                                                     << 3U)))
                                                 : 
                                                ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw)
                                                  ? vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data
                                                  : 0U)));
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg 
                = (0x3fU & (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                            >> 5U));
        }
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) 
                      | (~ ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN))))))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg 
                = (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc 
                   >> 0xcU);
        }
        if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))) {
            if (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_76) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__rand_way;
            }
        } else if ((1U & (~ ((1U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                             | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit))))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay;
        }
    }
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
    vlSelfRef.io_pc = vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg;
    if ((0x20U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_63;
                        } else {
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_62;
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_61;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_60;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_59;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_58;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_57;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_56;
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_55;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_54;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_53;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_52;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_51;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_50;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_49;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_48;
            }
        } else if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_47;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_46;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_45;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_44;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_43;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_42;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_41;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_40;
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_39;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_38;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_37;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_36;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_35;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_34;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_33;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_32;
        }
    } else if ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_31;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_30;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_29;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_28;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_27;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_26;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_25;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_24;
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_23;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_22;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_21;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_20;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_19;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_18;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_17;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_16;
        }
    } else if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_15;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_14;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_13;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_12;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_11;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_10;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_9;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_8;
        }
    } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_7;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_6;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_5;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_4;
        }
    } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_3;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_2;
        }
    } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_1;
    } else {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_0;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__out_valid 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__out_valid;
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__io_in_ready_0 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__busy)) 
                 & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__resp_valid_reg)) 
                    | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_in_ready))));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6;
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6;
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
}
