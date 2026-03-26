// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu;
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT___lo_next_T 
        = ((IData)(1U) + vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low);
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_2 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_1));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_2 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_1));
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
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_7;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_1;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_7;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_1;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_7;
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
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_7;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_1;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_7;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_1;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_7;
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
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_7;
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
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_7;
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
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_7;
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
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_7;
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
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_7;
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
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_7;
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
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_7;
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
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_7;
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
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_7;
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
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_7;
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
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_7;
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
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_7;
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
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_7;
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
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_7;
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
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_7;
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
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_7;
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
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_7;
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
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_7;
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
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_7;
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
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_7;
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
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_7;
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
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_7;
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
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_7;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_7;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_7;
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
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_7;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_7;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41 
            = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_7;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_5 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_4)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_12 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_4));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_11 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy) 
           & ((~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu) 
                  | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase))) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_10 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu));
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrs = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrw = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_en = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jalr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jal = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__pc = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lbu = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lb = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lhu = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lh = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_rdata = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data = 0U;
        vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)))) {
            if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) {
                if (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rand_way;
                }
            } else if ((1U & (~ ((1U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit))))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rand_way;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) 
                      | (~ ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN))))))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg 
                = vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc;
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg 
                = (0x28U == (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc 
                             >> 0x1aU));
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_0) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrs 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_csrrs;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrw 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_csrrw;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_en 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jalr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jalr;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jal 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jal;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__pc 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_rdata 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_rdata;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sb;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sh;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sw;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs2_data;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                = vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu__DOT__casez_tmp;
        }
        if (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT___GEN_4) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_addr;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lbu 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lbu;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lb 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lb;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lhu 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lhu;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lh 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lh;
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load 
                = vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_load;
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
        } else if ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT___GEN_0) 
                     & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state))) 
                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__io_out_valid_0))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state = 0U;
        }
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT___GEN 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_en) 
           & (0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr)));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_6 
        = ((2U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
           | (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_5 
        = ((2U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
           & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit0 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp 
              == vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1 
              == vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit2 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3 
              == vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit3 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5 
              == vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_4 
        = (vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg 
           & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32);
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_910 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_911 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_912 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_913 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_914 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_915 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_916 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_917 
        = (IData)(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_918 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_919 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_920 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_921 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_922 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_923 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_924 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_925 
        = (IData)(((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_926 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_927 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_928 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_929 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_930 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_931 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_932 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_933 
        = (IData)(((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_934 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_935 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_936 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_937 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_938 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_939 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_940 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_941 
        = (IData)(((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_942 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_943 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_944 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_945 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_946 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_947 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_948 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_949 
        = (IData)(((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_950 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_951 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_952 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_953 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_954 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_955 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_956 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_957 
        = (IData)(((5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_958 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_959 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_960 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_961 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_962 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_963 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_964 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_965 
        = (IData)(((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_966 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_967 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_968 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_969 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_970 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_971 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_972 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_973 
        = (IData)(((7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_974 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_975 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_976 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_977 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_978 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_979 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_980 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_981 
        = (IData)(((8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_982 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_983 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_984 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_985 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_986 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_987 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_988 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_989 
        = (IData)(((9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_990 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_991 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_992 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_993 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_994 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_995 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_996 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_997 
        = (IData)(((0xaU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_998 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_999 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1000 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1001 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1002 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1003 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1004 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1005 
        = (IData)(((0xbU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1006 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1007 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1008 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1009 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1010 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1011 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1012 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1013 
        = (IData)(((0xcU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1014 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1015 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1016 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1017 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1018 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1019 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1020 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1021 
        = (IData)(((0xdU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1022 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1023 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1024 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1025 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1026 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1027 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1028 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1029 
        = (IData)(((0xeU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1030 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1031 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1032 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1033 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1034 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1035 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1036 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1037 
        = (IData)(((0xfU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1038 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1039 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1040 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1041 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1042 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1043 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1044 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1045 
        = (IData)(((0x10U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1046 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1047 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1048 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1049 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1050 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1051 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1052 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1053 
        = (IData)(((0x11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1054 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1055 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1056 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1057 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1058 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1059 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1060 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1061 
        = (IData)(((0x12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1062 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1063 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1064 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1065 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1066 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1067 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1068 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1069 
        = (IData)(((0x13U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1070 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1071 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1072 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1073 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1074 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1075 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1076 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1077 
        = (IData)(((0x14U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1078 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1079 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1080 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1081 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1082 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1083 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1084 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1085 
        = (IData)(((0x15U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1086 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1087 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1088 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1089 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1090 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1091 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1092 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1093 
        = (IData)(((0x16U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1094 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1095 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1096 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1097 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1098 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1099 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1100 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1101 
        = (IData)(((0x17U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1102 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1103 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1104 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1105 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1106 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1107 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1108 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1109 
        = (IData)(((0x18U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1110 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1111 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1112 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1113 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1114 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1115 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1116 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1117 
        = (IData)(((0x19U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1118 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1119 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1120 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1121 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1122 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1123 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1124 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1125 
        = (IData)(((0x1aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1126 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1127 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1128 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1129 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1130 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1131 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1132 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1133 
        = (IData)(((0x1bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1134 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1135 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1136 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1137 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1138 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1139 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1140 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1141 
        = (IData)(((0x1cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1142 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1143 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1144 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1145 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1146 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1147 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1148 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1149 
        = (IData)(((0x1dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1150 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1151 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1152 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1153 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1154 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1155 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1156 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1157 
        = (IData)(((0x1eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1158 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1159 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1160 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1161 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1162 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1163 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1164 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1165 
        = (IData)(((0x1fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1166 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1167 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1168 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1169 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1170 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1171 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1172 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1173 
        = (IData)(((0x20U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1174 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1175 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1176 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1177 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1178 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1179 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1180 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1181 
        = (IData)(((0x21U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1182 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1183 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1184 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1185 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1186 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1187 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1188 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1189 
        = (IData)(((0x22U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1190 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1191 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1192 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1193 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1194 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1195 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1196 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1197 
        = (IData)(((0x23U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1198 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1199 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1200 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1201 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1202 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1203 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1204 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1205 
        = (IData)(((0x24U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1206 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1207 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1208 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1209 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1210 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1211 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1212 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1213 
        = (IData)(((0x25U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1214 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1215 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1216 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1217 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1218 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1219 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1220 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1221 
        = (IData)(((0x26U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1222 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1223 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1224 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1225 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1226 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1227 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1228 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1229 
        = (IData)(((0x27U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1230 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1231 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1232 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1233 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1234 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1235 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1236 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1237 
        = (IData)(((0x28U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1238 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1239 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1240 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1241 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1242 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1243 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1244 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1245 
        = (IData)(((0x29U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1246 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1247 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1248 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1249 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1250 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1251 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1252 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1253 
        = (IData)(((0x2aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1254 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1255 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1256 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1257 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1258 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1259 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1260 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1261 
        = (IData)(((0x2bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1262 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1263 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1264 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1265 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1266 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1267 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1268 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1269 
        = (IData)(((0x2cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1270 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1271 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1272 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1273 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1274 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1275 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1276 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1277 
        = (IData)(((0x2dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1278 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1279 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1280 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1281 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1282 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1283 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1284 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1285 
        = (IData)(((0x2eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1286 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1287 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1288 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1289 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1290 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1291 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1292 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1293 
        = (IData)(((0x2fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1294 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1295 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1296 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1297 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1298 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1299 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1300 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1301 
        = (IData)(((0x30U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1302 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1303 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1304 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1305 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1306 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1307 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1308 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1309 
        = (IData)(((0x31U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1310 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1311 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1312 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1313 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1314 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1315 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1316 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1317 
        = (IData)(((0x32U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1318 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1319 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1320 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1321 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1322 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1323 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1324 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1325 
        = (IData)(((0x33U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1326 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1327 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1328 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1329 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1330 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1331 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1332 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1333 
        = (IData)(((0x34U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1334 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1335 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1336 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1337 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1338 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1339 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1340 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1341 
        = (IData)(((0x35U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1342 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1343 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1344 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1345 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1346 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1347 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1348 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1349 
        = (IData)(((0x36U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1350 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1351 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1352 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1353 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1354 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1355 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1356 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1357 
        = (IData)(((0x37U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1358 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1359 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1360 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1361 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1362 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1363 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1364 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1365 
        = (IData)(((0x38U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1366 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1367 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1368 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1369 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1370 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1371 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1372 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1373 
        = (IData)(((0x39U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1374 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1375 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1376 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1377 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1378 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1379 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1380 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1381 
        = (IData)(((0x3aU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1382 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1383 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1384 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1385 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1386 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1387 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1388 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1389 
        = (IData)(((0x3bU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1390 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1391 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1392 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1393 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1394 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1395 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1396 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1397 
        = (IData)(((0x3cU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1398 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1399 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1400 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1401 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1402 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1403 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1404 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1405 
        = (IData)(((0x3dU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1406 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1407 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1408 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1409 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1410 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1411 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1412 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_1413 
        = (IData)(((0x3eU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_65 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_66 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (4U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_67 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (8U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_68 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0xcU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_69 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x10U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_70 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x14U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_71 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x18U == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_72 
        = (IData)(((0x3fU == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg)) 
                   & (0x1cU == (0x1cU & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg)))));
    if ((0x20U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
        if ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_1;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_7;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_1;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_7;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_1;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_7;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_1;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_7;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_63;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_63;
                        } else {
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_1;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_7;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_1;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_7;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_1;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_7;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_0;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_1;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_2;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_3;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_4;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_5;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_6;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_7;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_62;
                            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_62;
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_61;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_61;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_60;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_60;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_59;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_59;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_58;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_58;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_57;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_57;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_56;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_56;
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_55;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_55;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_54;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_54;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_53;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_53;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_52;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_52;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_51;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_51;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_50;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_50;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_49;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_49;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_48;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_48;
            }
        } else if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_47;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_47;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_46;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_46;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_45;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_45;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_44;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_44;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_43;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_43;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_42;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_42;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_41;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_41;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_40;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_40;
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_39;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_39;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_38;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_38;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_37;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_37;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_36;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_36;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_35;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_35;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_34;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_34;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_33;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_33;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_32;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_32;
        }
    } else if ((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
        if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_31;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_31;
                    } else {
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_0;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_1;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_2;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_3;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_4;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_5;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_6;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_7;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_30;
                        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_30;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_29;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_29;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_28;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_28;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_27;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_27;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_26;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_26;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_25;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_25;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_24;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_24;
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_23;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_23;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_22;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_22;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_21;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_21;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_20;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_20;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_19;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_19;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_18;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_18;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_17;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_17;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_16;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_16;
        }
    } else if ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_15;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_15;
                } else {
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_0;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_1;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_2;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_3;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_4;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_5;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_6;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_7;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_14;
                    vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                        = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_14;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_13;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_13;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_12;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_12;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_11;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_11;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_10;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_10;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_9;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_9;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_8;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_8;
        }
    } else if ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
        if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_7;
            } else {
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_0;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_1;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_2;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_3;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_4;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_5;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_7;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_6;
                vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_6;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_5;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_4;
        }
    } else if ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_3;
        } else {
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_0;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_1;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_3;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_4;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_5;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_6;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_7;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_2;
            vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
                = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_2;
        }
    } else if ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_7;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_7;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_7;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_7;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_1;
    } else {
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_7;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_7;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_7;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_1;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_2;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_3;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_4;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_5;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_6;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_7;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_0;
        vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0 
            = vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_0;
    }
}
