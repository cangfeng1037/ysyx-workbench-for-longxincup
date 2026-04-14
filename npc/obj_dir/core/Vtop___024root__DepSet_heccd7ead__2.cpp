// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

extern const VlUnpacked<CData/*2:0*/, 2048> Vtop__ConstPool__TABLE_h02e7d842_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14;
    top__DOT__npc_cpu__DOT__icache1__DOT___GEN_14 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_2;
    top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_2 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_3;
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_3 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_13;
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_13 = 0;
    CData/*0:0*/ top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_14;
    top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_14 = 0;
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if ((1U & (~ ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) 
                    | (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                   | (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                  | (2U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)))))) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_0 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT___R0_en_d0)
                ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory
               [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT___R0_addr_d0]
                : 0U);
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_1 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT___R0_en_d0)
                ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory
               [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT___R0_addr_d0]
                : 0U);
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_2 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT___R0_en_d0)
                ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory
               [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT___R0_addr_d0]
                : 0U);
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_3 
            = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT___R0_en_d0)
                ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory
               [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT___R0_addr_d0]
                : 0U);
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs1));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs2));
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg 
        = vlSelfRef.__Vdly__top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit0 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_tag_reg 
              == vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_0));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_tag_reg 
              == vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_1));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit2 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_tag_reg 
              == vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_2));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit3 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2) 
           & (vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_tag_reg 
              == vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_3));
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)))) {
        if ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) {
            if (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_0) {
                vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way 
                    = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rand_way;
            }
        } else if ((1U & (~ (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_4) 
                              | (3U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))) 
                             | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit))))) {
            vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way 
                = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rand_way;
        }
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rand_way 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_1) 
            << 1U) | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0));
    if (vlSelfRef.__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory[vlSelfRef.__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory__v0;
    }
    if (vlSelfRef.__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory[vlSelfRef.__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory__v0;
    }
    if (vlSelfRef.__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory[vlSelfRef.__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory__v0;
    }
    if (vlSelfRef.__VdlySet__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory__v0) {
        vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory[vlSelfRef.__VdlyDim0__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory__v0;
    }
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__exuHasRd) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_10)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem2_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem2HasRd) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_7)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem1_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem1HasRd) 
              & (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1) 
                  == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_addr)) 
                 & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_0))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_wb_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__wbHasRd) 
              & (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1) 
                  == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_rd_addr)) 
                 & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_0))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__exuHasRd) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_8)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem2_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem2HasRd) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_5)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem1_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem1HasRd) 
              & (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2) 
                  == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_addr)) 
                 & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_2))));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_wb_dep 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__wbHasRd) 
              & (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2) 
                  == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_rd_addr)) 
                 & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_2))));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_27 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt) 
           == (7U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg) 
                     >> 2U)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_13 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg) 
            << 3U) | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_21 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg)) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit0) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit1) 
              | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit2) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit3))));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT___R0_addr_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lookup_word_addr;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT___R0_en_d0 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT___R0_addr_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lookup_word_addr;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT___R0_en_d0 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT___R0_addr_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lookup_word_addr;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT___R0_en_d0 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT___R0_addr_d0 
        = vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lookup_word_addr;
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT___R0_en_d0 
        = (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state 
        = ((IData)(vlSelfRef.reset) ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)
                                             ? 0U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_ready 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_is_load)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_dep));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_6 = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem1_dep) 
                                                | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem2_dep) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_wb_dep)));
    vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_ready 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_is_load)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_dep));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_5 = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem1_dep) 
                                                | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem2_dep) 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_wb_dep)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lookup_word_addr 
        = (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg) 
            << 3U) | (7U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg) 
                            >> 2U)));
    vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs1_fwd_en 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_ready) 
           | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_6));
    vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs2_fwd_en 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_ready) 
           | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_5));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs1_data 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs1_fwd_en)
            ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_ready)
                ? vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_val_out
                : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem1_dep)
                    ? vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_val_out
                    : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem2_dep)
                        ? vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_val_out
                        : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_wb_dep)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out
                            : 0U)))) : ((0U == (0x1fU 
                                                & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                   >> 0xfU)))
                                         ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs2_data 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs2_fwd_en)
            ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_ready)
                ? vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_val_out
                : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem1_dep)
                    ? vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_val_out
                    : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem2_dep)
                        ? vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_val_out
                        : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_wb_dep)
                            ? vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out
                            : 0U)))) : ((0U == (0x1fU 
                                                & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                   >> 0x14U)))
                                         ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp_0));
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__redirect_valid) 
           | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_1) 
              & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jal) 
                 | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_branch_bits_is_branch_taken) 
                    | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jalr) 
                       | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_ecall) 
                          | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_mret)))))));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_alu_b 
        = (((0x13U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
            | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_load) 
               | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_store) 
                  | ((0x6fU == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                     | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr) 
                        | ((0x17U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                           | ((0x37U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                              | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_branch))))))))
            ? (((0x37U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                | (0x17U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))
                ? (0xfffff000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                : ((0x6fU == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))
                    ? (((- (IData)((vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                    >> 0x1fU))) << 0x14U) 
                       | (((0xff000U & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst) 
                           | (0x800U & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                        >> 9U))) | 
                          (0x7feU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                     >> 0x14U)))) : 
                   ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr)
                     ? vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__imm_i
                     : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_store)
                         ? (((- (IData)((vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                         >> 0x1fU))) 
                             << 0xcU) | ((0xfe0U & 
                                          (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                           >> 0x14U)) 
                                         | (0x1fU & 
                                            (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                             >> 7U))))
                         : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_branch)
                             ? (((- (IData)((vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                      >> 7U)))))
                             : (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_slli) 
                                 | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_srli) 
                                    | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_srai)))
                                 ? (0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                             >> 0x14U))
                                 : vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__imm_i))))))
            : vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs2_data);
    vlSelfRef.top__DOT__npc_cpu__DOT__idu_io_stall 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)) 
           & (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state) 
               & (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs1) 
                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_0) 
                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_1))) 
                  | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs2) 
                     & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_2) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_2))))) 
              | (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use) 
                    & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_9) 
                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_10))) 
                   | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use) 
                      & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_9) 
                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_8)))) 
                  & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_is_load) 
                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_valid))) 
                 | (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use) 
                       & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6) 
                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_7))) 
                      | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use) 
                         & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6) 
                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_5)))) 
                     & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_valid)) 
                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load))) 
                    | (((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs1_fwd_en)) 
                        & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_dep) 
                           | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_6))) 
                       | ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs2_fwd_en)) 
                          & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_dep) 
                             | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_5))))))));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_4 
        = ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
           | (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0) 
           | (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__req_valid)) 
                 & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__out_valid)) 
                    & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu_io_stall)))));
    vlSelfRef.top__DOT__npc_cpu__DOT___ifu2_io_in_ready 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu_io_stall)) 
                 & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0))));
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_0 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__req_valid) 
              & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu_io_stall)) 
                 & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__redirect_valid)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_5 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1) 
           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_4));
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_1 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___ifu2_io_in_ready) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__out_valid));
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__io_out_valid_0 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___ifu2_io_in_ready));
    vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_in_ready 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___ifu2_io_in_ready));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_28 
        = (1U & ((~ ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_0))) 
                 | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_5) 
           | ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
              | (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))));
    vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_5) 
           | ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
               ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit) 
                  | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg))
               : ((4U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                  | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg))));
    vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_valid 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_5)) 
                 & ((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                     ? (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit))
                     : (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)))));
    vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__io_out_valid_0));
    vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__io_inst_resp_ready_0 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_in_ready) 
           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___ifu2_io_in_ready));
    top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_2 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15) 
           | (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_resp_ready 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_15)) 
           & (5U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_valid) 
                                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr)));
    vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_24 
        = ((6U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
           | (IData)(top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_2));
    vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_fetch_resp_valid 
        = ((~ (IData)(top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_2)) 
           & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)));
    vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_rready 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_resp_ready) 
                                           | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending)));
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
    vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT___GEN 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_in_ready) 
           & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_fetch_resp_valid)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__r_last_fire 
        = ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_rready) 
              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast)));
    vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_rready_0 
        = ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)) 
           & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)
               ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_rready)
               : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_rready_0)));
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
    vlSelfRef.io_master_rready = vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_rready_0;
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
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
void Vtop___024root___eval_act(Vtop___024root* vlSelf);

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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf);

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
bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf);
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
            VL_FATAL_MT("verilog/core/top.sv", 12671, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("verilog/core/top.sv", 12671, "", "NBA region did not converge.");
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
                VL_FATAL_MT("verilog/core/top.sv", 12671, "", "Active region did not converge.");
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
    if (VL_UNLIKELY((vlSelfRef.io_interrupt & 0xfeU))) {
        Verilated::overWidthError("io_interrupt");}
    if (VL_UNLIKELY((vlSelfRef.io_master_awready & 0xfeU))) {
        Verilated::overWidthError("io_master_awready");}
    if (VL_UNLIKELY((vlSelfRef.io_master_wready & 0xfeU))) {
        Verilated::overWidthError("io_master_wready");}
    if (VL_UNLIKELY((vlSelfRef.io_master_bvalid & 0xfeU))) {
        Verilated::overWidthError("io_master_bvalid");}
    if (VL_UNLIKELY((vlSelfRef.io_master_bresp & 0xfcU))) {
        Verilated::overWidthError("io_master_bresp");}
    if (VL_UNLIKELY((vlSelfRef.io_master_bid & 0xf0U))) {
        Verilated::overWidthError("io_master_bid");}
    if (VL_UNLIKELY((vlSelfRef.io_master_arready & 0xfeU))) {
        Verilated::overWidthError("io_master_arready");}
    if (VL_UNLIKELY((vlSelfRef.io_master_rvalid & 0xfeU))) {
        Verilated::overWidthError("io_master_rvalid");}
    if (VL_UNLIKELY((vlSelfRef.io_master_rresp & 0xfcU))) {
        Verilated::overWidthError("io_master_rresp");}
    if (VL_UNLIKELY((vlSelfRef.io_master_rlast & 0xfeU))) {
        Verilated::overWidthError("io_master_rlast");}
    if (VL_UNLIKELY((vlSelfRef.io_master_rid & 0xf0U))) {
        Verilated::overWidthError("io_master_rid");}
    if (VL_UNLIKELY((vlSelfRef.io_slave_awvalid & 0xfeU))) {
        Verilated::overWidthError("io_slave_awvalid");}
    if (VL_UNLIKELY((vlSelfRef.io_slave_awid & 0xf0U))) {
        Verilated::overWidthError("io_slave_awid");}
    if (VL_UNLIKELY((vlSelfRef.io_slave_awsize & 0xf8U))) {
        Verilated::overWidthError("io_slave_awsize");}
    if (VL_UNLIKELY((vlSelfRef.io_slave_awburst & 0xfcU))) {
        Verilated::overWidthError("io_slave_awburst");}
    if (VL_UNLIKELY((vlSelfRef.io_slave_wvalid & 0xfeU))) {
        Verilated::overWidthError("io_slave_wvalid");}
    if (VL_UNLIKELY((vlSelfRef.io_slave_wstrb & 0xf0U))) {
        Verilated::overWidthError("io_slave_wstrb");}
    if (VL_UNLIKELY((vlSelfRef.io_slave_wlast & 0xfeU))) {
        Verilated::overWidthError("io_slave_wlast");}
    if (VL_UNLIKELY((vlSelfRef.io_slave_bready & 0xfeU))) {
        Verilated::overWidthError("io_slave_bready");}
    if (VL_UNLIKELY((vlSelfRef.io_slave_arvalid & 0xfeU))) {
        Verilated::overWidthError("io_slave_arvalid");}
    if (VL_UNLIKELY((vlSelfRef.io_slave_arid & 0xf0U))) {
        Verilated::overWidthError("io_slave_arid");}
    if (VL_UNLIKELY((vlSelfRef.io_slave_arsize & 0xf8U))) {
        Verilated::overWidthError("io_slave_arsize");}
    if (VL_UNLIKELY((vlSelfRef.io_slave_arburst & 0xfcU))) {
        Verilated::overWidthError("io_slave_arburst");}
    if (VL_UNLIKELY((vlSelfRef.io_slave_rready & 0xfeU))) {
        Verilated::overWidthError("io_slave_rready");}
}
#endif  // VL_DEBUG
