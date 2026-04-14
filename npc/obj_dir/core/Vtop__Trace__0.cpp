// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_arready));
        bufp->chgBit(oldp+1,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid));
        bufp->chgBit(oldp+2,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_rready));
        bufp->chgBit(oldp+3,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid));
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rdata),32);
        bufp->chgBit(oldp+5,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast));
        bufp->chgBit(oldp+6,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready));
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid));
        bufp->chgBit(oldp+8,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid));
        bufp->chgBit(oldp+9,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rlast));
        bufp->chgBit(oldp+10,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_arvalid));
        bufp->chgIData(oldp+11,(((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_2)) 
                                        | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_4)))
                                  ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_araddr)),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__rdAddr),32);
        bufp->chgBit(oldp+13,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead));
        bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_rready_0));
        bufp->chgBit(oldp+15,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_arready) 
                               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr))));
        bufp->chgBit(oldp+16,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending)) 
                               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid))));
        bufp->chgBit(oldp+17,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__ar_fire));
        bufp->chgBit(oldp+18,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__r_last_fire));
        bufp->chgBit(oldp+19,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0)
                                   ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire)
                                   : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_3)))));
        bufp->chgBit(oldp+20,(((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                               & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                   ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid)
                                   : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_5) 
                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid))))));
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data),32);
        bufp->chgBit(oldp+22,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last));
        bufp->chgBit(oldp+23,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire));
        bufp->chgCData(oldp+24,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
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
                                          : ((((3U 
                                                == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                                               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid)) 
                                              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_bready_0))
                                              ? 0U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)))))),2);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__mergedWord),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lineWordData),32);
        bufp->chgBit(oldp+27,(((~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))) 
                               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16))));
        bufp->chgBit(oldp+28,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16) 
                               & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))));
        bufp->chgBit(oldp+29,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16) 
                               & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))));
        bufp->chgBit(oldp+30,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16) 
                               & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))));
        bufp->chgBit(oldp+31,(((~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))) 
                               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_17))));
        bufp->chgBit(oldp+32,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_17) 
                               & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))));
        bufp->chgBit(oldp+33,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_17) 
                               & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))));
        bufp->chgBit(oldp+34,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_17) 
                               & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))));
        bufp->chgCData(oldp+35,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3),3);
        bufp->chgCData(oldp+36,(((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
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
                                              ? 6U : 
                                             (4U | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_25)))
                                          : 3U) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_0)
                                                     ? 1U
                                                     : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)))))),3);
        bufp->chgBit(oldp+37,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_3) 
                               & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
        bufp->chgBit(oldp+38,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_3) 
                               & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
        bufp->chgBit(oldp+39,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_3) 
                               & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
        bufp->chgBit(oldp+40,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_3) 
                               & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
        bufp->chgBit(oldp+41,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_5) 
                               & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
        bufp->chgBit(oldp+42,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_5) 
                               & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
        bufp->chgBit(oldp+43,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_5) 
                               & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
        bufp->chgBit(oldp+44,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_5) 
                               & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__pc),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__inst),32);
        bufp->chgBit(oldp+47,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state));
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_1),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_2),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_3),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_4),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_5),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_6),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_7),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_8),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_9),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_10),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_11),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_12),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_13),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_14),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_15),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_16),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_17),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_18),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_19),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_20),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_21),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_22),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_23),32);
        bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_24),32);
        bufp->chgIData(oldp+72,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_25),32);
        bufp->chgIData(oldp+73,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_26),32);
        bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_27),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_28),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_29),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_30),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_31),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit_count),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_count),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit_count),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_count),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__i_cnt),32);
        bufp->chgIData(oldp+84,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__total_mem_cycles),32);
        bufp->chgIData(oldp+85,(vlSelfRef.top__DOT__npc_cpu__DOT__stall_cnt),32);
        bufp->chgIData(oldp+86,(vlSelfRef.top__DOT__npc_cpu__DOT__flush_cnt),32);
        bufp->chgIData(oldp+87,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_total_count_reg),32);
        bufp->chgIData(oldp+88,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_hit_count_reg),32);
        bufp->chgBit(oldp+89,(vlSelfRef.top__DOT__npc_cpu__DOT__idu_io_stall));
        bufp->chgIData(oldp+90,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst)
                                  ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__line_base
                                  : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg)),32);
        bufp->chgCData(oldp+91,((7U & (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst))))),8);
        bufp->chgCData(oldp+92,(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst),2);
        bufp->chgBit(oldp+93,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid));
        bufp->chgIData(oldp+94,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awaddr),32);
        bufp->chgCData(oldp+95,((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid) 
                                  & (3U > (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wsize_0)))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wsize_0)
                                  : 2U)),3);
        bufp->chgBit(oldp+96,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0));
        bufp->chgIData(oldp+97,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wdata),32);
        bufp->chgCData(oldp+98,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wstrb),4);
        bufp->chgBit(oldp+99,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_bready_0));
        bufp->chgBit(oldp+100,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_arvalid));
        bufp->chgIData(oldp+101,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_araddr),32);
        bufp->chgCData(oldp+102,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_2)
                                   ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_burst)
                                            ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_10)
                                                ? 0U
                                                : (7U 
                                                   & (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_18)))))
                                            : 0U))),8);
        bufp->chgCData(oldp+103,(((1U & ((~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_valid) 
                                             & (3U 
                                                > (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_rsize)))) 
                                         | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_1)))
                                   ? 2U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_rsize))),3);
        bufp->chgCData(oldp+104,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_2)
                                   ? 0U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_burst))),2);
        bufp->chgBit(oldp+105,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_rready_0));
        bufp->chgBit(oldp+106,((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)))));
        bufp->chgBit(oldp+107,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_rready));
        bufp->chgBit(oldp+108,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state));
        bufp->chgIData(oldp+109,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)
                                   ? ((0x200bff8U == vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                       ? vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low
                                       : ((0x200bffcU 
                                           == vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                           ? vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high
                                           : 0U)) : 0U)),32);
        bufp->chgBit(oldp+110,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy));
        bufp->chgBit(oldp+111,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu));
        bufp->chgBit(oldp+112,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write));
        bufp->chgBit(oldp+113,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase));
        bufp->chgBit(oldp+114,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint));
        bufp->chgBit(oldp+115,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__isClintWrite));
        bufp->chgBit(oldp+116,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_wvalid_0));
        bufp->chgBit(oldp+117,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_bready_0));
        bufp->chgIData(oldp+118,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low),32);
        bufp->chgIData(oldp+119,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high),32);
        bufp->chgIData(oldp+120,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg),32);
        bufp->chgBit(oldp+121,(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_valid));
        bufp->chgBit(oldp+122,(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst));
        bufp->chgBit(oldp+123,(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_resp_ready));
        bufp->chgBit(oldp+124,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0));
        bufp->chgBit(oldp+125,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending));
        bufp->chgBit(oldp+126,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending));
        bufp->chgBit(oldp+127,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr));
        bufp->chgBit(oldp+128,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_valid));
        bufp->chgBit(oldp+129,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_20)) 
                                & ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                                   | ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_6)) 
                                      & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))))));
        bufp->chgCData(oldp+130,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_rsize),3);
        bufp->chgIData(oldp+131,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_11)
                                   ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg)
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__line_base
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_addr_reg))),32);
        bufp->chgCData(oldp+132,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_10)
                                   ? 0U : (7U & (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_18)))))),3);
        bufp->chgIData(oldp+133,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wdata_0),32);
        bufp->chgCData(oldp+134,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wmask_0),4);
        bufp->chgCData(oldp+135,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wsize_0),3);
        bufp->chgIData(oldp+136,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0),32);
        bufp->chgBit(oldp+137,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_burst));
        bufp->chgBit(oldp+138,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_resp_ready));
        bufp->chgCData(oldp+139,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state),2);
        bufp->chgIData(oldp+140,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wdata),32);
        bufp->chgCData(oldp+141,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wmask),4);
        bufp->chgIData(oldp+142,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_waddr),32);
        bufp->chgIData(oldp+143,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc),32);
        bufp->chgIData(oldp+144,((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_en_d0) 
                                   & ((vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory
                                       [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_addr_d0] 
                                       >> 0x20U) & 
                                      (vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory
                                       [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R0_addr_d0] 
                                       >> 1U))) ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_en_d0)
                                                    ? (IData)(
                                                              vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory
                                                              [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_addr_d0])
                                                    : 0U)
                                   : ((IData)(4U) + vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pred_pc_s1))),32);
        bufp->chgBit(oldp+145,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) 
                                & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_is_branch))));
        bufp->chgIData(oldp+146,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc),32);
        bufp->chgBit(oldp+147,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_taken));
        bufp->chgIData(oldp+148,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jal_T),32);
        bufp->chgBit(oldp+149,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_is_branch));
        bufp->chgSData(oldp+150,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__ghr),10);
        bufp->chgIData(oldp+151,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pred_pc_s1),32);
        bufp->chgBit(oldp+152,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire));
        bufp->chgIData(oldp+153,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_pc_s0),32);
        bufp->chgBit(oldp+154,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s0));
        bufp->chgIData(oldp+155,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_target_s0),32);
        bufp->chgSData(oldp+156,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_ghr_s0),10);
        bufp->chgSData(oldp+157,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_idx_s0),10);
        bufp->chgBit(oldp+158,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire_s1));
        bufp->chgSData(oldp+159,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_idx_s1),10);
        bufp->chgSData(oldp+160,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_btb_idx_s1),10);
        bufp->chgBit(oldp+161,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s1));
        bufp->chgIData(oldp+162,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_target_s1),32);
        bufp->chgSData(oldp+163,((0x3ffU & vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc)),10);
        bufp->chgQData(oldp+164,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_en_d0)
                                   ? vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory
                                  [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_addr_d0]
                                   : 0ULL)),33);
        bufp->chgBit(oldp+166,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire_s1) 
                                & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s1))));
        bufp->chgQData(oldp+167,((0x100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_target_s1)))),33);
        bufp->chgSData(oldp+169,((0x3ffU & (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc 
                                            ^ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__ghr)))),10);
        bufp->chgCData(oldp+170,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_en_d0)
                                   ? vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory
                                  [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R0_addr_d0]
                                   : 0U)),2);
        bufp->chgCData(oldp+171,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data),2);
        bufp->chgCData(oldp+172,((3U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s1)
                                         ? (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_en_d0) 
                                             & (3U 
                                                == 
                                                vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory
                                                [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_addr_d0]))
                                             ? 3U : 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data)))
                                         : ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data))
                                             ? 0U : 
                                            ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data) 
                                             - (IData)(1U)))))),2);
        bufp->chgSData(oldp+173,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr),12);
        bufp->chgIData(oldp+174,(((0xf12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                   ? 0x25080212U : 
                                  ((0xf11U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                    ? 0x79737978U : 
                                   ((0x300U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                     ? vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mstatus
                                     : ((0x342U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                         ? vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mcause
                                         : ((0x341U 
                                             == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                             ? vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mepc
                                             : ((0x305U 
                                                 == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                                 ? vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mtvec
                                                 : 0U))))))),32);
        bufp->chgSData(oldp+175,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr),12);
        bufp->chgIData(oldp+176,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wdata),32);
        bufp->chgBit(oldp+177,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wen));
        bufp->chgBit(oldp+178,((0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
        bufp->chgBit(oldp+179,((0x30200073U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
        bufp->chgIData(oldp+180,(vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mtvec),32);
        bufp->chgIData(oldp+181,(vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mepc),32);
        bufp->chgIData(oldp+182,(vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mcause),32);
        bufp->chgIData(oldp+183,(vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mstatus),32);
        bufp->chgBit(oldp+184,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))))));
        bufp->chgBit(oldp+185,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__io_mem_req_valid_0));
        bufp->chgIData(oldp+186,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__pc),32);
        bufp->chgIData(oldp+187,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__inst),32);
        bufp->chgBit(oldp+188,(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_wen));
        bufp->chgCData(oldp+189,((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lb) 
                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lbu))
                                   ? 0U : (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lh) 
                                            | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lhu))
                                            ? 1U : 2U))),3);
        bufp->chgIData(oldp+190,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb)
                                   ? ((0xffU & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data) 
                                      << (0x18U & (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                                                   << 3U)))
                                   : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh)
                                       ? ((0xffffU 
                                           & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data) 
                                          << (0x10U 
                                              & (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                                                 << 3U)))
                                       : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw)
                                           ? vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data
                                           : 0U)))),32);
        bufp->chgCData(oldp+191,((0xfU & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb)
                                           ? ((IData)(1U) 
                                              << (3U 
                                                  & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result))
                                           : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh)
                                               ? ((2U 
                                                   & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result)
                                                   ? 0xcU
                                                   : 3U)
                                               : (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw))))))),4);
        bufp->chgIData(oldp+192,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result),32);
        bufp->chgCData(oldp+193,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb)
                                   ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh)
                                            ? 1U : 2U))),3);
        bufp->chgBit(oldp+194,(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_bypass));
        bufp->chgBit(oldp+195,(((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
                                & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)))));
        bufp->chgBit(oldp+196,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_21)) 
                                & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))));
        bufp->chgIData(oldp+197,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_addr),32);
        bufp->chgIData(oldp+198,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data),32);
        bufp->chgBit(oldp+199,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_0));
        bufp->chgBit(oldp+200,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_1));
        bufp->chgBit(oldp+201,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_2));
        bufp->chgBit(oldp+202,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_3));
        bufp->chgBit(oldp+203,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_4));
        bufp->chgBit(oldp+204,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_5));
        bufp->chgBit(oldp+205,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_6));
        bufp->chgBit(oldp+206,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_7));
        bufp->chgBit(oldp+207,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_8));
        bufp->chgBit(oldp+208,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_9));
        bufp->chgBit(oldp+209,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_10));
        bufp->chgBit(oldp+210,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_11));
        bufp->chgBit(oldp+211,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_12));
        bufp->chgBit(oldp+212,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_13));
        bufp->chgBit(oldp+213,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_14));
        bufp->chgBit(oldp+214,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_15));
        bufp->chgBit(oldp+215,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_16));
        bufp->chgBit(oldp+216,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_17));
        bufp->chgBit(oldp+217,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_18));
        bufp->chgBit(oldp+218,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_19));
        bufp->chgBit(oldp+219,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_20));
        bufp->chgBit(oldp+220,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_21));
        bufp->chgBit(oldp+221,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_22));
        bufp->chgBit(oldp+222,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_23));
        bufp->chgBit(oldp+223,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_24));
        bufp->chgBit(oldp+224,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_25));
        bufp->chgBit(oldp+225,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_26));
        bufp->chgBit(oldp+226,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_27));
        bufp->chgBit(oldp+227,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_28));
        bufp->chgBit(oldp+228,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_29));
        bufp->chgBit(oldp+229,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_30));
        bufp->chgBit(oldp+230,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_31));
        bufp->chgBit(oldp+231,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_32));
        bufp->chgBit(oldp+232,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_33));
        bufp->chgBit(oldp+233,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_34));
        bufp->chgBit(oldp+234,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_35));
        bufp->chgBit(oldp+235,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_36));
        bufp->chgBit(oldp+236,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_37));
        bufp->chgBit(oldp+237,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_38));
        bufp->chgBit(oldp+238,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_39));
        bufp->chgBit(oldp+239,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_40));
        bufp->chgBit(oldp+240,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_41));
        bufp->chgBit(oldp+241,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_42));
        bufp->chgBit(oldp+242,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_43));
        bufp->chgBit(oldp+243,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_44));
        bufp->chgBit(oldp+244,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_45));
        bufp->chgBit(oldp+245,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_46));
        bufp->chgBit(oldp+246,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_47));
        bufp->chgBit(oldp+247,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_48));
        bufp->chgBit(oldp+248,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_49));
        bufp->chgBit(oldp+249,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_50));
        bufp->chgBit(oldp+250,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_51));
        bufp->chgBit(oldp+251,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_52));
        bufp->chgBit(oldp+252,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_53));
        bufp->chgBit(oldp+253,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_54));
        bufp->chgBit(oldp+254,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_55));
        bufp->chgBit(oldp+255,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_56));
        bufp->chgBit(oldp+256,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_57));
        bufp->chgBit(oldp+257,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_58));
        bufp->chgBit(oldp+258,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_59));
        bufp->chgBit(oldp+259,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_60));
        bufp->chgBit(oldp+260,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_61));
        bufp->chgBit(oldp+261,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_62));
        bufp->chgBit(oldp+262,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_63));
        bufp->chgBit(oldp+263,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_0));
        bufp->chgBit(oldp+264,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_1));
        bufp->chgBit(oldp+265,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_2));
        bufp->chgBit(oldp+266,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_3));
        bufp->chgBit(oldp+267,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_4));
        bufp->chgBit(oldp+268,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_5));
        bufp->chgBit(oldp+269,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_6));
        bufp->chgBit(oldp+270,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_7));
        bufp->chgBit(oldp+271,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_8));
        bufp->chgBit(oldp+272,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_9));
        bufp->chgBit(oldp+273,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_10));
        bufp->chgBit(oldp+274,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_11));
        bufp->chgBit(oldp+275,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_12));
        bufp->chgBit(oldp+276,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_13));
        bufp->chgBit(oldp+277,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_14));
        bufp->chgBit(oldp+278,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_15));
        bufp->chgBit(oldp+279,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_16));
        bufp->chgBit(oldp+280,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_17));
        bufp->chgBit(oldp+281,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_18));
        bufp->chgBit(oldp+282,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_19));
        bufp->chgBit(oldp+283,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_20));
        bufp->chgBit(oldp+284,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_21));
        bufp->chgBit(oldp+285,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_22));
        bufp->chgBit(oldp+286,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_23));
        bufp->chgBit(oldp+287,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_24));
        bufp->chgBit(oldp+288,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_25));
        bufp->chgBit(oldp+289,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_26));
        bufp->chgBit(oldp+290,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_27));
        bufp->chgBit(oldp+291,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_28));
        bufp->chgBit(oldp+292,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_29));
        bufp->chgBit(oldp+293,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_30));
        bufp->chgBit(oldp+294,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_31));
        bufp->chgBit(oldp+295,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_32));
        bufp->chgBit(oldp+296,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_33));
        bufp->chgBit(oldp+297,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_34));
        bufp->chgBit(oldp+298,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_35));
        bufp->chgBit(oldp+299,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_36));
        bufp->chgBit(oldp+300,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_37));
        bufp->chgBit(oldp+301,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_38));
        bufp->chgBit(oldp+302,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_39));
        bufp->chgBit(oldp+303,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_40));
        bufp->chgBit(oldp+304,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_41));
        bufp->chgBit(oldp+305,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_42));
        bufp->chgBit(oldp+306,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_43));
        bufp->chgBit(oldp+307,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_44));
        bufp->chgBit(oldp+308,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_45));
        bufp->chgBit(oldp+309,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_46));
        bufp->chgBit(oldp+310,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_47));
        bufp->chgBit(oldp+311,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_48));
        bufp->chgBit(oldp+312,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_49));
        bufp->chgBit(oldp+313,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_50));
        bufp->chgBit(oldp+314,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_51));
        bufp->chgBit(oldp+315,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_52));
        bufp->chgBit(oldp+316,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_53));
        bufp->chgBit(oldp+317,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_54));
        bufp->chgBit(oldp+318,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_55));
        bufp->chgBit(oldp+319,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_56));
        bufp->chgBit(oldp+320,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_57));
        bufp->chgBit(oldp+321,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_58));
        bufp->chgBit(oldp+322,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_59));
        bufp->chgBit(oldp+323,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_60));
        bufp->chgBit(oldp+324,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_61));
        bufp->chgBit(oldp+325,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_62));
        bufp->chgBit(oldp+326,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_63));
        bufp->chgBit(oldp+327,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_0));
        bufp->chgBit(oldp+328,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_1));
        bufp->chgBit(oldp+329,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_2));
        bufp->chgBit(oldp+330,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_3));
        bufp->chgBit(oldp+331,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_4));
        bufp->chgBit(oldp+332,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_5));
        bufp->chgBit(oldp+333,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_6));
        bufp->chgBit(oldp+334,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_7));
        bufp->chgBit(oldp+335,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_8));
        bufp->chgBit(oldp+336,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_9));
        bufp->chgBit(oldp+337,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_10));
        bufp->chgBit(oldp+338,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_11));
        bufp->chgBit(oldp+339,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_12));
        bufp->chgBit(oldp+340,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_13));
        bufp->chgBit(oldp+341,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_14));
        bufp->chgBit(oldp+342,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_15));
        bufp->chgBit(oldp+343,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_16));
        bufp->chgBit(oldp+344,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_17));
        bufp->chgBit(oldp+345,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_18));
        bufp->chgBit(oldp+346,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_19));
        bufp->chgBit(oldp+347,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_20));
        bufp->chgBit(oldp+348,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_21));
        bufp->chgBit(oldp+349,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_22));
        bufp->chgBit(oldp+350,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_23));
        bufp->chgBit(oldp+351,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_24));
        bufp->chgBit(oldp+352,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_25));
        bufp->chgBit(oldp+353,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_26));
        bufp->chgBit(oldp+354,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_27));
        bufp->chgBit(oldp+355,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_28));
        bufp->chgBit(oldp+356,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_29));
        bufp->chgBit(oldp+357,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_30));
        bufp->chgBit(oldp+358,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_31));
        bufp->chgBit(oldp+359,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_32));
        bufp->chgBit(oldp+360,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_33));
        bufp->chgBit(oldp+361,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_34));
        bufp->chgBit(oldp+362,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_35));
        bufp->chgBit(oldp+363,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_36));
        bufp->chgBit(oldp+364,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_37));
        bufp->chgBit(oldp+365,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_38));
        bufp->chgBit(oldp+366,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_39));
        bufp->chgBit(oldp+367,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_40));
        bufp->chgBit(oldp+368,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_41));
        bufp->chgBit(oldp+369,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_42));
        bufp->chgBit(oldp+370,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_43));
        bufp->chgBit(oldp+371,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_44));
        bufp->chgBit(oldp+372,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_45));
        bufp->chgBit(oldp+373,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_46));
        bufp->chgBit(oldp+374,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_47));
        bufp->chgBit(oldp+375,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_48));
        bufp->chgBit(oldp+376,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_49));
        bufp->chgBit(oldp+377,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_50));
        bufp->chgBit(oldp+378,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_51));
        bufp->chgBit(oldp+379,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_52));
        bufp->chgBit(oldp+380,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_53));
        bufp->chgBit(oldp+381,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_54));
        bufp->chgBit(oldp+382,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_55));
        bufp->chgBit(oldp+383,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_56));
        bufp->chgBit(oldp+384,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_57));
        bufp->chgBit(oldp+385,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_58));
        bufp->chgBit(oldp+386,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_59));
        bufp->chgBit(oldp+387,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_60));
        bufp->chgBit(oldp+388,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_61));
        bufp->chgBit(oldp+389,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_62));
        bufp->chgBit(oldp+390,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_63));
        bufp->chgBit(oldp+391,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_0));
        bufp->chgBit(oldp+392,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_1));
        bufp->chgBit(oldp+393,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_2));
        bufp->chgBit(oldp+394,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_3));
        bufp->chgBit(oldp+395,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_4));
        bufp->chgBit(oldp+396,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_5));
        bufp->chgBit(oldp+397,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_6));
        bufp->chgBit(oldp+398,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_7));
        bufp->chgBit(oldp+399,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_8));
        bufp->chgBit(oldp+400,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_9));
        bufp->chgBit(oldp+401,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_10));
        bufp->chgBit(oldp+402,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_11));
        bufp->chgBit(oldp+403,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_12));
        bufp->chgBit(oldp+404,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_13));
        bufp->chgBit(oldp+405,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_14));
        bufp->chgBit(oldp+406,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_15));
        bufp->chgBit(oldp+407,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_16));
        bufp->chgBit(oldp+408,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_17));
        bufp->chgBit(oldp+409,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_18));
        bufp->chgBit(oldp+410,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_19));
        bufp->chgBit(oldp+411,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_20));
        bufp->chgBit(oldp+412,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_21));
        bufp->chgBit(oldp+413,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_22));
        bufp->chgBit(oldp+414,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_23));
        bufp->chgBit(oldp+415,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_24));
        bufp->chgBit(oldp+416,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_25));
        bufp->chgBit(oldp+417,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_26));
        bufp->chgBit(oldp+418,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_27));
        bufp->chgBit(oldp+419,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_28));
        bufp->chgBit(oldp+420,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_29));
        bufp->chgBit(oldp+421,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_30));
        bufp->chgBit(oldp+422,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_31));
        bufp->chgBit(oldp+423,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_32));
        bufp->chgBit(oldp+424,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_33));
        bufp->chgBit(oldp+425,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_34));
        bufp->chgBit(oldp+426,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_35));
        bufp->chgBit(oldp+427,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_36));
        bufp->chgBit(oldp+428,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_37));
        bufp->chgBit(oldp+429,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_38));
        bufp->chgBit(oldp+430,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_39));
        bufp->chgBit(oldp+431,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_40));
        bufp->chgBit(oldp+432,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_41));
        bufp->chgBit(oldp+433,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_42));
        bufp->chgBit(oldp+434,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_43));
        bufp->chgBit(oldp+435,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_44));
        bufp->chgBit(oldp+436,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_45));
        bufp->chgBit(oldp+437,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_46));
        bufp->chgBit(oldp+438,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_47));
        bufp->chgBit(oldp+439,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_48));
        bufp->chgBit(oldp+440,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_49));
        bufp->chgBit(oldp+441,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_50));
        bufp->chgBit(oldp+442,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_51));
        bufp->chgBit(oldp+443,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_52));
        bufp->chgBit(oldp+444,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_53));
        bufp->chgBit(oldp+445,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_54));
        bufp->chgBit(oldp+446,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_55));
        bufp->chgBit(oldp+447,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_56));
        bufp->chgBit(oldp+448,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_57));
        bufp->chgBit(oldp+449,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_58));
        bufp->chgBit(oldp+450,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_59));
        bufp->chgBit(oldp+451,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_60));
        bufp->chgBit(oldp+452,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_61));
        bufp->chgBit(oldp+453,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_62));
        bufp->chgBit(oldp+454,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_63));
        bufp->chgBit(oldp+455,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0));
        bufp->chgBit(oldp+456,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1));
        bufp->chgBit(oldp+457,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2));
        bufp->chgBit(oldp+458,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3));
        bufp->chgBit(oldp+459,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4));
        bufp->chgBit(oldp+460,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5));
        bufp->chgBit(oldp+461,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6));
        bufp->chgBit(oldp+462,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7));
        bufp->chgBit(oldp+463,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8));
        bufp->chgBit(oldp+464,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9));
        bufp->chgBit(oldp+465,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10));
        bufp->chgBit(oldp+466,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11));
        bufp->chgBit(oldp+467,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12));
        bufp->chgBit(oldp+468,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13));
        bufp->chgBit(oldp+469,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14));
        bufp->chgBit(oldp+470,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15));
        bufp->chgBit(oldp+471,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16));
        bufp->chgBit(oldp+472,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17));
        bufp->chgBit(oldp+473,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18));
        bufp->chgBit(oldp+474,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19));
        bufp->chgBit(oldp+475,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20));
        bufp->chgBit(oldp+476,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21));
        bufp->chgBit(oldp+477,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22));
        bufp->chgBit(oldp+478,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23));
        bufp->chgBit(oldp+479,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24));
        bufp->chgBit(oldp+480,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25));
        bufp->chgBit(oldp+481,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26));
        bufp->chgBit(oldp+482,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27));
        bufp->chgBit(oldp+483,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28));
        bufp->chgBit(oldp+484,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29));
        bufp->chgBit(oldp+485,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30));
        bufp->chgBit(oldp+486,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31));
        bufp->chgBit(oldp+487,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32));
        bufp->chgBit(oldp+488,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33));
        bufp->chgBit(oldp+489,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34));
        bufp->chgBit(oldp+490,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35));
        bufp->chgBit(oldp+491,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36));
        bufp->chgBit(oldp+492,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37));
        bufp->chgBit(oldp+493,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38));
        bufp->chgBit(oldp+494,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39));
        bufp->chgBit(oldp+495,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40));
        bufp->chgBit(oldp+496,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41));
        bufp->chgBit(oldp+497,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42));
        bufp->chgBit(oldp+498,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43));
        bufp->chgBit(oldp+499,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44));
        bufp->chgBit(oldp+500,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45));
        bufp->chgBit(oldp+501,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46));
        bufp->chgBit(oldp+502,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47));
        bufp->chgBit(oldp+503,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48));
        bufp->chgBit(oldp+504,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49));
        bufp->chgBit(oldp+505,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50));
        bufp->chgBit(oldp+506,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51));
        bufp->chgBit(oldp+507,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52));
        bufp->chgBit(oldp+508,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53));
        bufp->chgBit(oldp+509,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54));
        bufp->chgBit(oldp+510,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55));
        bufp->chgBit(oldp+511,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56));
        bufp->chgBit(oldp+512,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57));
        bufp->chgBit(oldp+513,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58));
        bufp->chgBit(oldp+514,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59));
        bufp->chgBit(oldp+515,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60));
        bufp->chgBit(oldp+516,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61));
        bufp->chgBit(oldp+517,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62));
        bufp->chgBit(oldp+518,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63));
        bufp->chgBit(oldp+519,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0));
        bufp->chgBit(oldp+520,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1));
        bufp->chgBit(oldp+521,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2));
        bufp->chgBit(oldp+522,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3));
        bufp->chgBit(oldp+523,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4));
        bufp->chgBit(oldp+524,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5));
        bufp->chgBit(oldp+525,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6));
        bufp->chgBit(oldp+526,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7));
        bufp->chgBit(oldp+527,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8));
        bufp->chgBit(oldp+528,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9));
        bufp->chgBit(oldp+529,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10));
        bufp->chgBit(oldp+530,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11));
        bufp->chgBit(oldp+531,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12));
        bufp->chgBit(oldp+532,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13));
        bufp->chgBit(oldp+533,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14));
        bufp->chgBit(oldp+534,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15));
        bufp->chgBit(oldp+535,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16));
        bufp->chgBit(oldp+536,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17));
        bufp->chgBit(oldp+537,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18));
        bufp->chgBit(oldp+538,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19));
        bufp->chgBit(oldp+539,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20));
        bufp->chgBit(oldp+540,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21));
        bufp->chgBit(oldp+541,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22));
        bufp->chgBit(oldp+542,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23));
        bufp->chgBit(oldp+543,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24));
        bufp->chgBit(oldp+544,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25));
        bufp->chgBit(oldp+545,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26));
        bufp->chgBit(oldp+546,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27));
        bufp->chgBit(oldp+547,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28));
        bufp->chgBit(oldp+548,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29));
        bufp->chgBit(oldp+549,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30));
        bufp->chgBit(oldp+550,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31));
        bufp->chgBit(oldp+551,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32));
        bufp->chgBit(oldp+552,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33));
        bufp->chgBit(oldp+553,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34));
        bufp->chgBit(oldp+554,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35));
        bufp->chgBit(oldp+555,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36));
        bufp->chgBit(oldp+556,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37));
        bufp->chgBit(oldp+557,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38));
        bufp->chgBit(oldp+558,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39));
        bufp->chgBit(oldp+559,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40));
        bufp->chgBit(oldp+560,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41));
        bufp->chgBit(oldp+561,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42));
        bufp->chgBit(oldp+562,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43));
        bufp->chgBit(oldp+563,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44));
        bufp->chgBit(oldp+564,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45));
        bufp->chgBit(oldp+565,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46));
        bufp->chgBit(oldp+566,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47));
        bufp->chgBit(oldp+567,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48));
        bufp->chgBit(oldp+568,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49));
        bufp->chgBit(oldp+569,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50));
        bufp->chgBit(oldp+570,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51));
        bufp->chgBit(oldp+571,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52));
        bufp->chgBit(oldp+572,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53));
        bufp->chgBit(oldp+573,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54));
        bufp->chgBit(oldp+574,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55));
        bufp->chgBit(oldp+575,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56));
        bufp->chgBit(oldp+576,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57));
        bufp->chgBit(oldp+577,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58));
        bufp->chgBit(oldp+578,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59));
        bufp->chgBit(oldp+579,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60));
        bufp->chgBit(oldp+580,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61));
        bufp->chgBit(oldp+581,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62));
        bufp->chgBit(oldp+582,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63));
        bufp->chgBit(oldp+583,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0));
        bufp->chgBit(oldp+584,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1));
        bufp->chgBit(oldp+585,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2));
        bufp->chgBit(oldp+586,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3));
        bufp->chgBit(oldp+587,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4));
        bufp->chgBit(oldp+588,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5));
        bufp->chgBit(oldp+589,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6));
        bufp->chgBit(oldp+590,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7));
        bufp->chgBit(oldp+591,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8));
        bufp->chgBit(oldp+592,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9));
        bufp->chgBit(oldp+593,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10));
        bufp->chgBit(oldp+594,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11));
        bufp->chgBit(oldp+595,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12));
        bufp->chgBit(oldp+596,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13));
        bufp->chgBit(oldp+597,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14));
        bufp->chgBit(oldp+598,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15));
        bufp->chgBit(oldp+599,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16));
        bufp->chgBit(oldp+600,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17));
        bufp->chgBit(oldp+601,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18));
        bufp->chgBit(oldp+602,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19));
        bufp->chgBit(oldp+603,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20));
        bufp->chgBit(oldp+604,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21));
        bufp->chgBit(oldp+605,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22));
        bufp->chgBit(oldp+606,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23));
        bufp->chgBit(oldp+607,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24));
        bufp->chgBit(oldp+608,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25));
        bufp->chgBit(oldp+609,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26));
        bufp->chgBit(oldp+610,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27));
        bufp->chgBit(oldp+611,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28));
        bufp->chgBit(oldp+612,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29));
        bufp->chgBit(oldp+613,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30));
        bufp->chgBit(oldp+614,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31));
        bufp->chgBit(oldp+615,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32));
        bufp->chgBit(oldp+616,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33));
        bufp->chgBit(oldp+617,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34));
        bufp->chgBit(oldp+618,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35));
        bufp->chgBit(oldp+619,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36));
        bufp->chgBit(oldp+620,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37));
        bufp->chgBit(oldp+621,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38));
        bufp->chgBit(oldp+622,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39));
        bufp->chgBit(oldp+623,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40));
        bufp->chgBit(oldp+624,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41));
        bufp->chgBit(oldp+625,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42));
        bufp->chgBit(oldp+626,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43));
        bufp->chgBit(oldp+627,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44));
        bufp->chgBit(oldp+628,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45));
        bufp->chgBit(oldp+629,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46));
        bufp->chgBit(oldp+630,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47));
        bufp->chgBit(oldp+631,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48));
        bufp->chgBit(oldp+632,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49));
        bufp->chgBit(oldp+633,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50));
        bufp->chgBit(oldp+634,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51));
        bufp->chgBit(oldp+635,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52));
        bufp->chgBit(oldp+636,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53));
        bufp->chgBit(oldp+637,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54));
        bufp->chgBit(oldp+638,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55));
        bufp->chgBit(oldp+639,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56));
        bufp->chgBit(oldp+640,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57));
        bufp->chgBit(oldp+641,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58));
        bufp->chgBit(oldp+642,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59));
        bufp->chgBit(oldp+643,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60));
        bufp->chgBit(oldp+644,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61));
        bufp->chgBit(oldp+645,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62));
        bufp->chgBit(oldp+646,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63));
        bufp->chgBit(oldp+647,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0));
        bufp->chgBit(oldp+648,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1));
        bufp->chgBit(oldp+649,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2));
        bufp->chgBit(oldp+650,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3));
        bufp->chgBit(oldp+651,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4));
        bufp->chgBit(oldp+652,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5));
        bufp->chgBit(oldp+653,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6));
        bufp->chgBit(oldp+654,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7));
        bufp->chgBit(oldp+655,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8));
        bufp->chgBit(oldp+656,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9));
        bufp->chgBit(oldp+657,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10));
        bufp->chgBit(oldp+658,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11));
        bufp->chgBit(oldp+659,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12));
        bufp->chgBit(oldp+660,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13));
        bufp->chgBit(oldp+661,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14));
        bufp->chgBit(oldp+662,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15));
        bufp->chgBit(oldp+663,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16));
        bufp->chgBit(oldp+664,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17));
        bufp->chgBit(oldp+665,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18));
        bufp->chgBit(oldp+666,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19));
        bufp->chgBit(oldp+667,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20));
        bufp->chgBit(oldp+668,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21));
        bufp->chgBit(oldp+669,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22));
        bufp->chgBit(oldp+670,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23));
        bufp->chgBit(oldp+671,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24));
        bufp->chgBit(oldp+672,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25));
        bufp->chgBit(oldp+673,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26));
        bufp->chgBit(oldp+674,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27));
        bufp->chgBit(oldp+675,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28));
        bufp->chgBit(oldp+676,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29));
        bufp->chgBit(oldp+677,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30));
        bufp->chgBit(oldp+678,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31));
        bufp->chgBit(oldp+679,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32));
        bufp->chgBit(oldp+680,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33));
        bufp->chgBit(oldp+681,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34));
        bufp->chgBit(oldp+682,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35));
        bufp->chgBit(oldp+683,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36));
        bufp->chgBit(oldp+684,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37));
        bufp->chgBit(oldp+685,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38));
        bufp->chgBit(oldp+686,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39));
        bufp->chgBit(oldp+687,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40));
        bufp->chgBit(oldp+688,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41));
        bufp->chgBit(oldp+689,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42));
        bufp->chgBit(oldp+690,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43));
        bufp->chgBit(oldp+691,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44));
        bufp->chgBit(oldp+692,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45));
        bufp->chgBit(oldp+693,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46));
        bufp->chgBit(oldp+694,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47));
        bufp->chgBit(oldp+695,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48));
        bufp->chgBit(oldp+696,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49));
        bufp->chgBit(oldp+697,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50));
        bufp->chgBit(oldp+698,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51));
        bufp->chgBit(oldp+699,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52));
        bufp->chgBit(oldp+700,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53));
        bufp->chgBit(oldp+701,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54));
        bufp->chgBit(oldp+702,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55));
        bufp->chgBit(oldp+703,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56));
        bufp->chgBit(oldp+704,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57));
        bufp->chgBit(oldp+705,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58));
        bufp->chgBit(oldp+706,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59));
        bufp->chgBit(oldp+707,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60));
        bufp->chgBit(oldp+708,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61));
        bufp->chgBit(oldp+709,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62));
        bufp->chgBit(oldp+710,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63));
        bufp->chgIData(oldp+711,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg),21);
        bufp->chgCData(oldp+712,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg),6);
        bufp->chgCData(oldp+713,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg),5);
        bufp->chgIData(oldp+714,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__line_base),32);
        bufp->chgIData(oldp+715,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg),32);
        bufp->chgIData(oldp+716,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_addr_reg),32);
        bufp->chgBit(oldp+717,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg));
        bufp->chgIData(oldp+718,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_data_reg),32);
        bufp->chgIData(oldp+719,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_addr_reg),32);
        bufp->chgBit(oldp+720,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass));
        bufp->chgIData(oldp+721,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_data_reg),32);
        bufp->chgBit(oldp+722,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg));
        bufp->chgIData(oldp+723,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg),32);
        bufp->chgCData(oldp+724,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg),4);
        bufp->chgCData(oldp+725,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wsize_reg),3);
        bufp->chgIData(oldp+726,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wb_addr),32);
        bufp->chgCData(oldp+727,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__rsize_reg),3);
        bufp->chgIData(oldp+728,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_pc_reg),32);
        bufp->chgIData(oldp+729,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_inst_reg),32);
        bufp->chgCData(oldp+730,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__rand_way),2);
        bufp->chgCData(oldp+731,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way),2);
        bufp->chgCData(oldp+732,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt),3);
        bufp->chgCData(oldp+733,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state),4);
        bufp->chgBit(oldp+734,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__read_en));
        bufp->chgSData(oldp+735,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__read_addr),9);
        bufp->chgBit(oldp+736,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp));
        bufp->chgBit(oldp+737,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0));
        bufp->chgBit(oldp+738,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0));
        bufp->chgBit(oldp+739,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1));
        bufp->chgBit(oldp+740,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1));
        bufp->chgBit(oldp+741,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2));
        bufp->chgBit(oldp+742,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2));
        bufp->chgBit(oldp+743,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit3));
        bufp->chgBit(oldp+744,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit));
        bufp->chgIData(oldp+745,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32),32);
        bufp->chgCData(oldp+746,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay),2);
        bufp->chgBit(oldp+747,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_0)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_0)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_0)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_0))))));
        bufp->chgBit(oldp+748,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_1)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_1)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_1)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_1))))));
        bufp->chgBit(oldp+749,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_2)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_2)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_2)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_2))))));
        bufp->chgBit(oldp+750,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_3)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_3)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_3)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_3))))));
        bufp->chgBit(oldp+751,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_4)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_4)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_4)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_4))))));
        bufp->chgBit(oldp+752,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_5)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_5)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_5)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_5))))));
        bufp->chgBit(oldp+753,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_6)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_6)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_6)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_6))))));
        bufp->chgBit(oldp+754,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_7)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_7)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_7)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_7))))));
        bufp->chgBit(oldp+755,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_8)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_8)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_8)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_8))))));
        bufp->chgBit(oldp+756,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_9)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_9)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_9)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_9))))));
        bufp->chgBit(oldp+757,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_10)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_10)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_10)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_10))))));
        bufp->chgBit(oldp+758,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_11)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_11)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_11)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_11))))));
        bufp->chgBit(oldp+759,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_12)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_12)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_12)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_12))))));
        bufp->chgBit(oldp+760,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_13)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_13)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_13)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_13))))));
        bufp->chgBit(oldp+761,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_14)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_14)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_14)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_14))))));
        bufp->chgBit(oldp+762,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_15)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_15)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_15)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_15))))));
        bufp->chgBit(oldp+763,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_16)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_16)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_16)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_16))))));
        bufp->chgBit(oldp+764,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_17)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_17)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_17)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_17))))));
        bufp->chgBit(oldp+765,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_18)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_18)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_18)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_18))))));
        bufp->chgBit(oldp+766,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_19)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_19)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_19)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_19))))));
        bufp->chgBit(oldp+767,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_20)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_20)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_20)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_20))))));
        bufp->chgBit(oldp+768,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_21)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_21)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_21)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_21))))));
        bufp->chgBit(oldp+769,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_22)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_22)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_22)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_22))))));
        bufp->chgBit(oldp+770,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_23)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_23)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_23)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_23))))));
        bufp->chgBit(oldp+771,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_24)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_24)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_24)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_24))))));
        bufp->chgBit(oldp+772,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_25)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_25)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_25)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_25))))));
        bufp->chgBit(oldp+773,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_26)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_26)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_26)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_26))))));
        bufp->chgBit(oldp+774,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_27)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_27)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_27)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_27))))));
        bufp->chgBit(oldp+775,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_28)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_28)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_28)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_28))))));
        bufp->chgBit(oldp+776,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_29)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_29)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_29)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_29))))));
        bufp->chgBit(oldp+777,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_30)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_30)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_30)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_30))))));
        bufp->chgBit(oldp+778,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_31)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_31)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_31)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_31))))));
        bufp->chgBit(oldp+779,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_32)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_32)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_32)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_32))))));
        bufp->chgBit(oldp+780,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_33)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_33)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_33)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_33))))));
        bufp->chgBit(oldp+781,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_34)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_34)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_34)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_34))))));
        bufp->chgBit(oldp+782,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_35)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_35)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_35)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_35))))));
        bufp->chgBit(oldp+783,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_36)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_36)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_36)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_36))))));
        bufp->chgBit(oldp+784,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_37)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_37)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_37)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_37))))));
        bufp->chgBit(oldp+785,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_38)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_38)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_38)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_38))))));
        bufp->chgBit(oldp+786,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_39)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_39)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_39)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_39))))));
        bufp->chgBit(oldp+787,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_40)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_40)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_40)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_40))))));
        bufp->chgBit(oldp+788,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_41)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_41)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_41)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_41))))));
        bufp->chgBit(oldp+789,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_42)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_42)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_42)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_42))))));
        bufp->chgBit(oldp+790,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_43)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_43)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_43)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_43))))));
        bufp->chgBit(oldp+791,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_44)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_44)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_44)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_44))))));
        bufp->chgBit(oldp+792,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_45)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_45)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_45)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_45))))));
        bufp->chgBit(oldp+793,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_46)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_46)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_46)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_46))))));
        bufp->chgBit(oldp+794,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_47)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_47)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_47)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_47))))));
        bufp->chgBit(oldp+795,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_48)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_48)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_48)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_48))))));
        bufp->chgBit(oldp+796,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_49)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_49)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_49)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_49))))));
        bufp->chgBit(oldp+797,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_50)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_50)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_50)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_50))))));
        bufp->chgBit(oldp+798,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_51)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_51)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_51)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_51))))));
        bufp->chgBit(oldp+799,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_52)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_52)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_52)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_52))))));
        bufp->chgBit(oldp+800,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_53)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_53)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_53)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_53))))));
        bufp->chgBit(oldp+801,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_54)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_54)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_54)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_54))))));
        bufp->chgBit(oldp+802,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_55)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_55)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_55)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_55))))));
        bufp->chgBit(oldp+803,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_56)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_56)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_56)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_56))))));
        bufp->chgBit(oldp+804,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_57)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_57)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_57)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_57))))));
        bufp->chgBit(oldp+805,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_58)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_58)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_58)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_58))))));
        bufp->chgBit(oldp+806,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_59)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_59)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_59)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_59))))));
        bufp->chgBit(oldp+807,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_60)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_60)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_60)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_60))))));
        bufp->chgBit(oldp+808,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_61)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_61)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_61)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_61))))));
        bufp->chgBit(oldp+809,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_62)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_62)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_62)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_62))))));
        bufp->chgBit(oldp+810,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_63)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_63)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_63)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_63))))));
        bufp->chgBit(oldp+811,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67));
        bufp->chgBit(oldp+812,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0))))));
        bufp->chgBit(oldp+813,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1))))));
        bufp->chgBit(oldp+814,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2))))));
        bufp->chgBit(oldp+815,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3))))));
        bufp->chgBit(oldp+816,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4))))));
        bufp->chgBit(oldp+817,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5))))));
        bufp->chgBit(oldp+818,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6))))));
        bufp->chgBit(oldp+819,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7))))));
        bufp->chgBit(oldp+820,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8))))));
        bufp->chgBit(oldp+821,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9))))));
        bufp->chgBit(oldp+822,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10))))));
        bufp->chgBit(oldp+823,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11))))));
        bufp->chgBit(oldp+824,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12))))));
        bufp->chgBit(oldp+825,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13))))));
        bufp->chgBit(oldp+826,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14))))));
        bufp->chgBit(oldp+827,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15))))));
        bufp->chgBit(oldp+828,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16))))));
        bufp->chgBit(oldp+829,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17))))));
        bufp->chgBit(oldp+830,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18))))));
        bufp->chgBit(oldp+831,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19))))));
        bufp->chgBit(oldp+832,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20))))));
        bufp->chgBit(oldp+833,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21))))));
        bufp->chgBit(oldp+834,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22))))));
        bufp->chgBit(oldp+835,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23))))));
        bufp->chgBit(oldp+836,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24))))));
        bufp->chgBit(oldp+837,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25))))));
        bufp->chgBit(oldp+838,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26))))));
        bufp->chgBit(oldp+839,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27))))));
        bufp->chgBit(oldp+840,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28))))));
        bufp->chgBit(oldp+841,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29))))));
        bufp->chgBit(oldp+842,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30))))));
        bufp->chgBit(oldp+843,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31))))));
        bufp->chgBit(oldp+844,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32))))));
        bufp->chgBit(oldp+845,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33))))));
        bufp->chgBit(oldp+846,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34))))));
        bufp->chgBit(oldp+847,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35))))));
        bufp->chgBit(oldp+848,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36))))));
        bufp->chgBit(oldp+849,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37))))));
        bufp->chgBit(oldp+850,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38))))));
        bufp->chgBit(oldp+851,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39))))));
        bufp->chgBit(oldp+852,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40))))));
        bufp->chgBit(oldp+853,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41))))));
        bufp->chgBit(oldp+854,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42))))));
        bufp->chgBit(oldp+855,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43))))));
        bufp->chgBit(oldp+856,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44))))));
        bufp->chgBit(oldp+857,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45))))));
        bufp->chgBit(oldp+858,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46))))));
        bufp->chgBit(oldp+859,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47))))));
        bufp->chgBit(oldp+860,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48))))));
        bufp->chgBit(oldp+861,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49))))));
        bufp->chgBit(oldp+862,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50))))));
        bufp->chgBit(oldp+863,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51))))));
        bufp->chgBit(oldp+864,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52))))));
        bufp->chgBit(oldp+865,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53))))));
        bufp->chgBit(oldp+866,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54))))));
        bufp->chgBit(oldp+867,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55))))));
        bufp->chgBit(oldp+868,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56))))));
        bufp->chgBit(oldp+869,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57))))));
        bufp->chgBit(oldp+870,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58))))));
        bufp->chgBit(oldp+871,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59))))));
        bufp->chgBit(oldp+872,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60))))));
        bufp->chgBit(oldp+873,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61))))));
        bufp->chgBit(oldp+874,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62))))));
        bufp->chgBit(oldp+875,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63)
                                 : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63)
                                     : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                         ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63)
                                         : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63))))));
        bufp->chgBit(oldp+876,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132));
        bufp->chgIData(oldp+877,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                   ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_0_ext_R0_data
                                   : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                       ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_1_ext_R0_data
                                       : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                           ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_2_ext_R0_data
                                           : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_3_ext_R0_data)))),21);
        bufp->chgBit(oldp+878,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__isTargetWord));
        bufp->chgIData(oldp+879,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_0_ext_R0_data),32);
        bufp->chgSData(oldp+880,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___read_addr_T_3),9);
        bufp->chgSData(oldp+881,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_2),9);
        bufp->chgBit(oldp+882,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_14) 
                                & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg) 
                                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)))));
        bufp->chgIData(oldp+883,((((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
                                   & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_0_ext_R0_data) 
                                  | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3)),32);
        bufp->chgIData(oldp+884,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_1_ext_R0_data),32);
        bufp->chgBit(oldp+885,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_14) 
                                & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4)) 
                                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)))));
        bufp->chgIData(oldp+886,((((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
                                   & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_1_ext_R0_data) 
                                  | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3)),32);
        bufp->chgIData(oldp+887,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_2_ext_R0_data),32);
        bufp->chgBit(oldp+888,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_19) 
                                & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2))));
        bufp->chgIData(oldp+889,((((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
                                   & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_2_ext_R0_data) 
                                  | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3)),32);
        bufp->chgIData(oldp+890,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_3_ext_R0_data),32);
        bufp->chgBit(oldp+891,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                                & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_19))));
        bufp->chgIData(oldp+892,((((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
                                   & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_3_ext_R0_data) 
                                  | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3)),32);
        bufp->chgBit(oldp+893,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0));
        bufp->chgBit(oldp+894,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_1));
        bufp->chgBit(oldp+895,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_2));
        bufp->chgBit(oldp+896,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_3));
        bufp->chgBit(oldp+897,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4));
        bufp->chgBit(oldp+898,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5));
        bufp->chgBit(oldp+899,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6));
        bufp->chgBit(oldp+900,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_7));
        bufp->chgBit(oldp+901,((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))));
        bufp->chgIData(oldp+902,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_0_ext_R0_data),21);
        bufp->chgIData(oldp+903,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_1_ext_R0_data),21);
        bufp->chgIData(oldp+904,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_2_ext_R0_data),21);
        bufp->chgIData(oldp+905,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_3_ext_R0_data),21);
        bufp->chgBit(oldp+906,((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state)))));
        bufp->chgBit(oldp+907,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__io_out_valid_0));
        bufp->chgIData(oldp+908,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc),32);
        bufp->chgIData(oldp+909,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst),32);
        bufp->chgCData(oldp+910,((0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                           >> 7U))),5);
        bufp->chgBit(oldp+911,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_load) 
                                | ((0x37U == (0x7fU 
                                              & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                   | ((0x17U == (0x7fU 
                                                 & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                      | ((0x33U == 
                                          (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                         | ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                            | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr) 
                                               | ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                                  | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_10) 
                                                     & (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                            >> 7U)))))))))))));
        bufp->chgIData(oldp+912,((((0x17U == (0x7fU 
                                              & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))
                                   ? vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc
                                   : ((0x37U == (0x7fU 
                                                 & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))
                                       ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs1_data))),32);
        bufp->chgIData(oldp+913,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_alu_b),32);
        bufp->chgCData(oldp+914,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_alu_op),4);
        bufp->chgIData(oldp+915,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs1_data),32);
        bufp->chgIData(oldp+916,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs2_data),32);
        bufp->chgIData(oldp+917,(((0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                                   ? vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc
                                   : ((0x30200073U 
                                       == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                                       ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs1_data))),32);
        bufp->chgBit(oldp+918,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw) 
                                | (0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgSData(oldp+919,(((0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                                   ? 0x341U : ((0x30200073U 
                                                == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                                                ? 0x342U
                                                : (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                   >> 0x14U)))),12);
        bufp->chgBit(oldp+920,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw));
        bufp->chgBit(oldp+921,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrs));
        bufp->chgBit(oldp+922,((0x6fU == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+923,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr));
        bufp->chgBit(oldp+924,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lw));
        bufp->chgBit(oldp+925,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sw));
        bufp->chgBit(oldp+926,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lb));
        bufp->chgBit(oldp+927,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sb));
        bufp->chgBit(oldp+928,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lh));
        bufp->chgBit(oldp+929,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sh));
        bufp->chgBit(oldp+930,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lbu));
        bufp->chgBit(oldp+931,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lhu));
        bufp->chgBit(oldp+932,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_beq));
        bufp->chgBit(oldp+933,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bne));
        bufp->chgBit(oldp+934,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_blt));
        bufp->chgBit(oldp+935,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bltu));
        bufp->chgBit(oldp+936,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bge));
        bufp->chgBit(oldp+937,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bgeu));
        bufp->chgBit(oldp+938,((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state))));
        bufp->chgBit(oldp+939,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_out_valid));
        bufp->chgIData(oldp+940,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__inst),32);
        bufp->chgIData(oldp+941,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu__DOT__casez_tmp),32);
        bufp->chgIData(oldp+942,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs2_data),32);
        bufp->chgCData(oldp+943,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr),5);
        bufp->chgBit(oldp+944,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en));
        bufp->chgCData(oldp+945,((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_0) 
                                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en))
                                   ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag)
                                   : 0U)),6);
        bufp->chgIData(oldp+946,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_wdata),32);
        bufp->chgBit(oldp+947,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_wen));
        bufp->chgSData(oldp+948,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_waddr),12);
        bufp->chgIData(oldp+949,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_rdata),32);
        bufp->chgBit(oldp+950,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_csrrw));
        bufp->chgBit(oldp+951,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_csrrs));
        bufp->chgBit(oldp+952,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lw));
        bufp->chgBit(oldp+953,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lbu));
        bufp->chgBit(oldp+954,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lh));
        bufp->chgBit(oldp+955,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lhu));
        bufp->chgBit(oldp+956,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lb));
        bufp->chgBit(oldp+957,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sw));
        bufp->chgBit(oldp+958,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sb));
        bufp->chgBit(oldp+959,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sh));
        bufp->chgBit(oldp+960,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jalr));
        bufp->chgBit(oldp+961,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jal));
        bufp->chgBit(oldp+962,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_1));
        bufp->chgIData(oldp+963,((0xfffffffeU & vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jalr_T)),32);
        bufp->chgBit(oldp+964,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_branch_bits_is_branch_taken));
        bufp->chgBit(oldp+965,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_ecall));
        bufp->chgBit(oldp+966,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_mret));
        bufp->chgBit(oldp+967,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now));
        bufp->chgIData(oldp+968,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg),32);
        bufp->chgBit(oldp+969,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_valid));
        bufp->chgCData(oldp+970,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_addr),5);
        bufp->chgBit(oldp+971,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__exu_fwd_live_valid)
                                 ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en)
                                 : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en))));
        bufp->chgBit(oldp+972,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_is_load));
        bufp->chgIData(oldp+973,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_val_out),32);
        bufp->chgBit(oldp+974,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__io_load_tag_alloc_valid_0));
        bufp->chgCData(oldp+975,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag),6);
        bufp->chgBit(oldp+976,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state));
        bufp->chgBit(oldp+977,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__out_valid));
        bufp->chgIData(oldp+978,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a),32);
        bufp->chgIData(oldp+979,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b),32);
        bufp->chgCData(oldp+980,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op),4);
        bufp->chgIData(oldp+981,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs1_data),32);
        bufp->chgBit(oldp+982,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_beq));
        bufp->chgBit(oldp+983,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bne));
        bufp->chgBit(oldp+984,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_blt));
        bufp->chgBit(oldp+985,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bltu));
        bufp->chgBit(oldp+986,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bge));
        bufp->chgBit(oldp+987,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bgeu));
        bufp->chgBit(oldp+988,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_valid));
        bufp->chgCData(oldp+989,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_addr),5);
        bufp->chgBit(oldp+990,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en));
        bufp->chgBit(oldp+991,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_is_load));
        bufp->chgIData(oldp+992,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_val_out),32);
        bufp->chgBit(oldp+993,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__first_inst_reg));
        bufp->chgBit(oldp+994,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_expect_valid_reg));
        bufp->chgBit(oldp+995,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__exu_fwd_live_valid));
        bufp->chgBit(oldp+996,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_check_now));
        bufp->chgBit(oldp+997,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__hold_capture));
        bufp->chgBit(oldp+998,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_load)) 
                                & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_rd_en))));
        bufp->chgCData(oldp+999,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_addr),5);
        bufp->chgBit(oldp+1000,(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_rd_en));
        bufp->chgIData(oldp+1001,(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_val_out),32);
        bufp->chgBit(oldp+1002,(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_valid));
        bufp->chgCData(oldp+1003,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr),5);
        bufp->chgBit(oldp+1004,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_en));
        bufp->chgBit(oldp+1005,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load));
        bufp->chgIData(oldp+1006,(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_val_out),32);
        bufp->chgBit(oldp+1007,(vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_valid));
        bufp->chgCData(oldp+1008,(vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_rd_addr),5);
        bufp->chgIData(oldp+1009,(vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out),32);
        bufp->chgBit(oldp+1010,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state)) 
                                 & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_out_valid) 
                                    & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load) 
                                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6))))));
        bufp->chgCData(oldp+1011,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__load_tag),6);
        bufp->chgCData(oldp+1012,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1),5);
        bufp->chgCData(oldp+1013,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2),5);
        bufp->chgBit(oldp+1014,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs1));
        bufp->chgBit(oldp+1015,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs2));
        bufp->chgBit(oldp+1016,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state));
        bufp->chgBit(oldp+1017,(vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs1_fwd_en));
        bufp->chgIData(oldp+1018,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_ready)
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_val_out
                                    : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem1_dep)
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_val_out
                                        : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem2_dep)
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_val_out
                                            : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_wb_dep)
                                                ? vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out
                                                : 0U))))),32);
        bufp->chgBit(oldp+1019,(vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs2_fwd_en));
        bufp->chgIData(oldp+1020,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_ready)
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_val_out
                                    : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem1_dep)
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_val_out
                                        : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem2_dep)
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_val_out
                                            : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_wb_dep)
                                                ? vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out
                                                : 0U))))),32);
        bufp->chgBit(oldp+1021,((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state) 
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
                                                | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_5)))))))));
        bufp->chgBit(oldp+1022,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_0));
        bufp->chgBit(oldp+1023,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_1));
        bufp->chgBit(oldp+1024,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_2));
        bufp->chgBit(oldp+1025,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_3));
        bufp->chgBit(oldp+1026,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_4));
        bufp->chgBit(oldp+1027,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_5));
        bufp->chgBit(oldp+1028,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_6));
        bufp->chgBit(oldp+1029,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_7));
        bufp->chgBit(oldp+1030,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_8));
        bufp->chgBit(oldp+1031,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_9));
        bufp->chgBit(oldp+1032,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_10));
        bufp->chgBit(oldp+1033,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_11));
        bufp->chgBit(oldp+1034,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_12));
        bufp->chgBit(oldp+1035,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_13));
        bufp->chgBit(oldp+1036,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_14));
        bufp->chgBit(oldp+1037,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_15));
        bufp->chgBit(oldp+1038,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_16));
        bufp->chgBit(oldp+1039,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_17));
        bufp->chgBit(oldp+1040,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_18));
        bufp->chgBit(oldp+1041,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_19));
        bufp->chgBit(oldp+1042,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_20));
        bufp->chgBit(oldp+1043,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_21));
        bufp->chgBit(oldp+1044,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_22));
        bufp->chgBit(oldp+1045,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_23));
        bufp->chgBit(oldp+1046,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_24));
        bufp->chgBit(oldp+1047,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_25));
        bufp->chgBit(oldp+1048,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_26));
        bufp->chgBit(oldp+1049,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_27));
        bufp->chgBit(oldp+1050,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_28));
        bufp->chgBit(oldp+1051,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_29));
        bufp->chgBit(oldp+1052,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_30));
        bufp->chgBit(oldp+1053,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_31));
        bufp->chgCData(oldp+1054,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_0),6);
        bufp->chgCData(oldp+1055,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_1),6);
        bufp->chgCData(oldp+1056,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_2),6);
        bufp->chgCData(oldp+1057,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_3),6);
        bufp->chgCData(oldp+1058,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_4),6);
        bufp->chgCData(oldp+1059,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_5),6);
        bufp->chgCData(oldp+1060,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_6),6);
        bufp->chgCData(oldp+1061,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_7),6);
        bufp->chgCData(oldp+1062,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_8),6);
        bufp->chgCData(oldp+1063,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_9),6);
        bufp->chgCData(oldp+1064,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_10),6);
        bufp->chgCData(oldp+1065,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_11),6);
        bufp->chgCData(oldp+1066,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_12),6);
        bufp->chgCData(oldp+1067,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_13),6);
        bufp->chgCData(oldp+1068,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_14),6);
        bufp->chgCData(oldp+1069,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_15),6);
        bufp->chgCData(oldp+1070,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_16),6);
        bufp->chgCData(oldp+1071,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_17),6);
        bufp->chgCData(oldp+1072,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_18),6);
        bufp->chgCData(oldp+1073,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_19),6);
        bufp->chgCData(oldp+1074,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_20),6);
        bufp->chgCData(oldp+1075,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_21),6);
        bufp->chgCData(oldp+1076,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_22),6);
        bufp->chgCData(oldp+1077,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_23),6);
        bufp->chgCData(oldp+1078,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_24),6);
        bufp->chgCData(oldp+1079,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_25),6);
        bufp->chgCData(oldp+1080,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_26),6);
        bufp->chgCData(oldp+1081,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_27),6);
        bufp->chgCData(oldp+1082,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_28),6);
        bufp->chgCData(oldp+1083,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_29),6);
        bufp->chgCData(oldp+1084,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_30),6);
        bufp->chgCData(oldp+1085,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_31),6);
        bufp->chgCData(oldp+1086,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp),6);
        bufp->chgBit(oldp+1087,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0));
        bufp->chgBit(oldp+1088,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use));
        bufp->chgBit(oldp+1089,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use));
        bufp->chgBit(oldp+1090,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__exuHasRd));
        bufp->chgBit(oldp+1091,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem1HasRd));
        bufp->chgBit(oldp+1092,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem2HasRd));
        bufp->chgBit(oldp+1093,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__wbHasRd));
        bufp->chgBit(oldp+1094,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_dep));
        bufp->chgBit(oldp+1095,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem1_dep));
        bufp->chgBit(oldp+1096,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem2_dep));
        bufp->chgBit(oldp+1097,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_wb_dep));
        bufp->chgBit(oldp+1098,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_ready));
        bufp->chgBit(oldp+1099,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_dep));
        bufp->chgBit(oldp+1100,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem1_dep));
        bufp->chgBit(oldp+1101,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem2_dep));
        bufp->chgBit(oldp+1102,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_wb_dep));
        bufp->chgBit(oldp+1103,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_ready));
        bufp->chgBit(oldp+1104,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_1));
        bufp->chgBit(oldp+1105,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_2));
        bufp->chgBit(oldp+1106,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1));
        bufp->chgBit(oldp+1107,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__req_valid) 
                                 & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu_io_stall)) 
                                    & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__redirect_valid))))));
        bufp->chgIData(oldp+1108,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg),32);
        bufp->chgBit(oldp+1109,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__io_inst_resp_ready_0));
        bufp->chgBit(oldp+1110,(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_fetch_resp_valid));
        bufp->chgIData(oldp+1111,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_24)
                                    ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_inst_reg)),32);
        bufp->chgIData(oldp+1112,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_24)
                                    ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_pc_reg)),32);
        bufp->chgBit(oldp+1113,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0));
        bufp->chgBit(oldp+1114,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1));
        bufp->chgBit(oldp+1115,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2));
        bufp->chgBit(oldp+1116,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3));
        bufp->chgBit(oldp+1117,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4));
        bufp->chgBit(oldp+1118,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5));
        bufp->chgBit(oldp+1119,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6));
        bufp->chgBit(oldp+1120,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7));
        bufp->chgBit(oldp+1121,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8));
        bufp->chgBit(oldp+1122,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9));
        bufp->chgBit(oldp+1123,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10));
        bufp->chgBit(oldp+1124,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11));
        bufp->chgBit(oldp+1125,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12));
        bufp->chgBit(oldp+1126,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13));
        bufp->chgBit(oldp+1127,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14));
        bufp->chgBit(oldp+1128,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15));
        bufp->chgBit(oldp+1129,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16));
        bufp->chgBit(oldp+1130,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17));
        bufp->chgBit(oldp+1131,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18));
        bufp->chgBit(oldp+1132,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19));
        bufp->chgBit(oldp+1133,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20));
        bufp->chgBit(oldp+1134,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21));
        bufp->chgBit(oldp+1135,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22));
        bufp->chgBit(oldp+1136,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23));
        bufp->chgBit(oldp+1137,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24));
        bufp->chgBit(oldp+1138,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25));
        bufp->chgBit(oldp+1139,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26));
        bufp->chgBit(oldp+1140,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27));
        bufp->chgBit(oldp+1141,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28));
        bufp->chgBit(oldp+1142,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29));
        bufp->chgBit(oldp+1143,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30));
        bufp->chgBit(oldp+1144,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31));
        bufp->chgBit(oldp+1145,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32));
        bufp->chgBit(oldp+1146,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33));
        bufp->chgBit(oldp+1147,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34));
        bufp->chgBit(oldp+1148,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35));
        bufp->chgBit(oldp+1149,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36));
        bufp->chgBit(oldp+1150,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37));
        bufp->chgBit(oldp+1151,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38));
        bufp->chgBit(oldp+1152,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39));
        bufp->chgBit(oldp+1153,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40));
        bufp->chgBit(oldp+1154,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41));
        bufp->chgBit(oldp+1155,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42));
        bufp->chgBit(oldp+1156,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43));
        bufp->chgBit(oldp+1157,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44));
        bufp->chgBit(oldp+1158,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45));
        bufp->chgBit(oldp+1159,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46));
        bufp->chgBit(oldp+1160,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47));
        bufp->chgBit(oldp+1161,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48));
        bufp->chgBit(oldp+1162,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49));
        bufp->chgBit(oldp+1163,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50));
        bufp->chgBit(oldp+1164,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51));
        bufp->chgBit(oldp+1165,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52));
        bufp->chgBit(oldp+1166,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53));
        bufp->chgBit(oldp+1167,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54));
        bufp->chgBit(oldp+1168,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55));
        bufp->chgBit(oldp+1169,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56));
        bufp->chgBit(oldp+1170,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57));
        bufp->chgBit(oldp+1171,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58));
        bufp->chgBit(oldp+1172,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59));
        bufp->chgBit(oldp+1173,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60));
        bufp->chgBit(oldp+1174,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61));
        bufp->chgBit(oldp+1175,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62));
        bufp->chgBit(oldp+1176,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63));
        bufp->chgBit(oldp+1177,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0));
        bufp->chgBit(oldp+1178,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1));
        bufp->chgBit(oldp+1179,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2));
        bufp->chgBit(oldp+1180,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3));
        bufp->chgBit(oldp+1181,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4));
        bufp->chgBit(oldp+1182,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5));
        bufp->chgBit(oldp+1183,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6));
        bufp->chgBit(oldp+1184,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7));
        bufp->chgBit(oldp+1185,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8));
        bufp->chgBit(oldp+1186,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9));
        bufp->chgBit(oldp+1187,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10));
        bufp->chgBit(oldp+1188,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11));
        bufp->chgBit(oldp+1189,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12));
        bufp->chgBit(oldp+1190,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13));
        bufp->chgBit(oldp+1191,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14));
        bufp->chgBit(oldp+1192,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15));
        bufp->chgBit(oldp+1193,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16));
        bufp->chgBit(oldp+1194,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17));
        bufp->chgBit(oldp+1195,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18));
        bufp->chgBit(oldp+1196,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19));
        bufp->chgBit(oldp+1197,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20));
        bufp->chgBit(oldp+1198,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21));
        bufp->chgBit(oldp+1199,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22));
        bufp->chgBit(oldp+1200,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23));
        bufp->chgBit(oldp+1201,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24));
        bufp->chgBit(oldp+1202,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25));
        bufp->chgBit(oldp+1203,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26));
        bufp->chgBit(oldp+1204,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27));
        bufp->chgBit(oldp+1205,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28));
        bufp->chgBit(oldp+1206,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29));
        bufp->chgBit(oldp+1207,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30));
        bufp->chgBit(oldp+1208,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31));
        bufp->chgBit(oldp+1209,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32));
        bufp->chgBit(oldp+1210,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33));
        bufp->chgBit(oldp+1211,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34));
        bufp->chgBit(oldp+1212,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35));
        bufp->chgBit(oldp+1213,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36));
        bufp->chgBit(oldp+1214,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37));
        bufp->chgBit(oldp+1215,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38));
        bufp->chgBit(oldp+1216,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39));
        bufp->chgBit(oldp+1217,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40));
        bufp->chgBit(oldp+1218,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41));
        bufp->chgBit(oldp+1219,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42));
        bufp->chgBit(oldp+1220,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43));
        bufp->chgBit(oldp+1221,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44));
        bufp->chgBit(oldp+1222,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45));
        bufp->chgBit(oldp+1223,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46));
        bufp->chgBit(oldp+1224,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47));
        bufp->chgBit(oldp+1225,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48));
        bufp->chgBit(oldp+1226,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49));
        bufp->chgBit(oldp+1227,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50));
        bufp->chgBit(oldp+1228,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51));
        bufp->chgBit(oldp+1229,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52));
        bufp->chgBit(oldp+1230,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53));
        bufp->chgBit(oldp+1231,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54));
        bufp->chgBit(oldp+1232,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55));
        bufp->chgBit(oldp+1233,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56));
        bufp->chgBit(oldp+1234,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57));
        bufp->chgBit(oldp+1235,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58));
        bufp->chgBit(oldp+1236,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59));
        bufp->chgBit(oldp+1237,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60));
        bufp->chgBit(oldp+1238,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61));
        bufp->chgBit(oldp+1239,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62));
        bufp->chgBit(oldp+1240,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63));
        bufp->chgBit(oldp+1241,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0));
        bufp->chgBit(oldp+1242,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1));
        bufp->chgBit(oldp+1243,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2));
        bufp->chgBit(oldp+1244,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3));
        bufp->chgBit(oldp+1245,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4));
        bufp->chgBit(oldp+1246,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5));
        bufp->chgBit(oldp+1247,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6));
        bufp->chgBit(oldp+1248,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7));
        bufp->chgBit(oldp+1249,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8));
        bufp->chgBit(oldp+1250,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9));
        bufp->chgBit(oldp+1251,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10));
        bufp->chgBit(oldp+1252,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11));
        bufp->chgBit(oldp+1253,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12));
        bufp->chgBit(oldp+1254,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13));
        bufp->chgBit(oldp+1255,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14));
        bufp->chgBit(oldp+1256,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15));
        bufp->chgBit(oldp+1257,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16));
        bufp->chgBit(oldp+1258,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17));
        bufp->chgBit(oldp+1259,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18));
        bufp->chgBit(oldp+1260,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19));
        bufp->chgBit(oldp+1261,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20));
        bufp->chgBit(oldp+1262,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21));
        bufp->chgBit(oldp+1263,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22));
        bufp->chgBit(oldp+1264,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23));
        bufp->chgBit(oldp+1265,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24));
        bufp->chgBit(oldp+1266,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25));
        bufp->chgBit(oldp+1267,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26));
        bufp->chgBit(oldp+1268,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27));
        bufp->chgBit(oldp+1269,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28));
        bufp->chgBit(oldp+1270,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29));
        bufp->chgBit(oldp+1271,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30));
        bufp->chgBit(oldp+1272,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31));
        bufp->chgBit(oldp+1273,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32));
        bufp->chgBit(oldp+1274,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33));
        bufp->chgBit(oldp+1275,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34));
        bufp->chgBit(oldp+1276,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35));
        bufp->chgBit(oldp+1277,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36));
        bufp->chgBit(oldp+1278,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37));
        bufp->chgBit(oldp+1279,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38));
        bufp->chgBit(oldp+1280,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39));
        bufp->chgBit(oldp+1281,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40));
        bufp->chgBit(oldp+1282,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41));
        bufp->chgBit(oldp+1283,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42));
        bufp->chgBit(oldp+1284,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43));
        bufp->chgBit(oldp+1285,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44));
        bufp->chgBit(oldp+1286,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45));
        bufp->chgBit(oldp+1287,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46));
        bufp->chgBit(oldp+1288,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47));
        bufp->chgBit(oldp+1289,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48));
        bufp->chgBit(oldp+1290,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49));
        bufp->chgBit(oldp+1291,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50));
        bufp->chgBit(oldp+1292,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51));
        bufp->chgBit(oldp+1293,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52));
        bufp->chgBit(oldp+1294,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53));
        bufp->chgBit(oldp+1295,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54));
        bufp->chgBit(oldp+1296,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55));
        bufp->chgBit(oldp+1297,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56));
        bufp->chgBit(oldp+1298,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57));
        bufp->chgBit(oldp+1299,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58));
        bufp->chgBit(oldp+1300,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59));
        bufp->chgBit(oldp+1301,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60));
        bufp->chgBit(oldp+1302,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61));
        bufp->chgBit(oldp+1303,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62));
        bufp->chgBit(oldp+1304,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63));
        bufp->chgBit(oldp+1305,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0));
        bufp->chgBit(oldp+1306,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1));
        bufp->chgBit(oldp+1307,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2));
        bufp->chgBit(oldp+1308,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3));
        bufp->chgBit(oldp+1309,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4));
        bufp->chgBit(oldp+1310,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5));
        bufp->chgBit(oldp+1311,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6));
        bufp->chgBit(oldp+1312,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7));
        bufp->chgBit(oldp+1313,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8));
        bufp->chgBit(oldp+1314,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9));
        bufp->chgBit(oldp+1315,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10));
        bufp->chgBit(oldp+1316,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11));
        bufp->chgBit(oldp+1317,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12));
        bufp->chgBit(oldp+1318,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13));
        bufp->chgBit(oldp+1319,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14));
        bufp->chgBit(oldp+1320,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15));
        bufp->chgBit(oldp+1321,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16));
        bufp->chgBit(oldp+1322,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17));
        bufp->chgBit(oldp+1323,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18));
        bufp->chgBit(oldp+1324,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19));
        bufp->chgBit(oldp+1325,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20));
        bufp->chgBit(oldp+1326,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21));
        bufp->chgBit(oldp+1327,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22));
        bufp->chgBit(oldp+1328,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23));
        bufp->chgBit(oldp+1329,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24));
        bufp->chgBit(oldp+1330,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25));
        bufp->chgBit(oldp+1331,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26));
        bufp->chgBit(oldp+1332,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27));
        bufp->chgBit(oldp+1333,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28));
        bufp->chgBit(oldp+1334,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29));
        bufp->chgBit(oldp+1335,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30));
        bufp->chgBit(oldp+1336,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31));
        bufp->chgBit(oldp+1337,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32));
        bufp->chgBit(oldp+1338,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33));
        bufp->chgBit(oldp+1339,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34));
        bufp->chgBit(oldp+1340,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35));
        bufp->chgBit(oldp+1341,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36));
        bufp->chgBit(oldp+1342,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37));
        bufp->chgBit(oldp+1343,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38));
        bufp->chgBit(oldp+1344,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39));
        bufp->chgBit(oldp+1345,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40));
        bufp->chgBit(oldp+1346,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41));
        bufp->chgBit(oldp+1347,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42));
        bufp->chgBit(oldp+1348,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43));
        bufp->chgBit(oldp+1349,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44));
        bufp->chgBit(oldp+1350,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45));
        bufp->chgBit(oldp+1351,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46));
        bufp->chgBit(oldp+1352,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47));
        bufp->chgBit(oldp+1353,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48));
        bufp->chgBit(oldp+1354,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49));
        bufp->chgBit(oldp+1355,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50));
        bufp->chgBit(oldp+1356,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51));
        bufp->chgBit(oldp+1357,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52));
        bufp->chgBit(oldp+1358,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53));
        bufp->chgBit(oldp+1359,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54));
        bufp->chgBit(oldp+1360,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55));
        bufp->chgBit(oldp+1361,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56));
        bufp->chgBit(oldp+1362,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57));
        bufp->chgBit(oldp+1363,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58));
        bufp->chgBit(oldp+1364,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59));
        bufp->chgBit(oldp+1365,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60));
        bufp->chgBit(oldp+1366,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61));
        bufp->chgBit(oldp+1367,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62));
        bufp->chgBit(oldp+1368,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63));
        bufp->chgIData(oldp+1369,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg),21);
        bufp->chgCData(oldp+1370,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg),6);
        bufp->chgCData(oldp+1371,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg),5);
        bufp->chgIData(oldp+1372,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_tag_reg),21);
        bufp->chgCData(oldp+1373,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg),6);
        bufp->chgCData(oldp+1374,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_offset_reg),5);
        bufp->chgIData(oldp+1375,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_pc_reg),32);
        bufp->chgIData(oldp+1376,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_0),21);
        bufp->chgIData(oldp+1377,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_1),21);
        bufp->chgIData(oldp+1378,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_2),21);
        bufp->chgIData(oldp+1379,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_3),21);
        bufp->chgIData(oldp+1380,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_0),32);
        bufp->chgIData(oldp+1381,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_1),32);
        bufp->chgIData(oldp+1382,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_2),32);
        bufp->chgIData(oldp+1383,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_3),32);
        bufp->chgIData(oldp+1384,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__line_base),32);
        bufp->chgIData(oldp+1385,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg),32);
        bufp->chgBit(oldp+1386,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg));
        bufp->chgIData(oldp+1387,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_inst_reg),32);
        bufp->chgIData(oldp+1388,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_pc_reg),32);
        bufp->chgCData(oldp+1389,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way),2);
        bufp->chgCData(oldp+1390,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt),3);
        bufp->chgCData(oldp+1391,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state),3);
        bufp->chgBit(oldp+1392,((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))));
        bufp->chgSData(oldp+1393,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lookup_word_addr),9);
        bufp->chgBit(oldp+1394,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp));
        bufp->chgBit(oldp+1395,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit0));
        bufp->chgBit(oldp+1396,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0));
        bufp->chgBit(oldp+1397,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit1));
        bufp->chgBit(oldp+1398,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1));
        bufp->chgBit(oldp+1399,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit2));
        bufp->chgBit(oldp+1400,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2));
        bufp->chgBit(oldp+1401,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit3));
        bufp->chgBit(oldp+1402,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit));
        bufp->chgCData(oldp+1403,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rand_way),2);
        bufp->chgIData(oldp+1404,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT___R0_en_d0)
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory
                                   [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT___R0_addr_d0]
                                    : 0U)),32);
        bufp->chgSData(oldp+1405,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_13),9);
        bufp->chgIData(oldp+1406,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT___R0_en_d0)
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory
                                   [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT___R0_addr_d0]
                                    : 0U)),32);
        bufp->chgIData(oldp+1407,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT___R0_en_d0)
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory
                                   [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT___R0_addr_d0]
                                    : 0U)),32);
        bufp->chgIData(oldp+1408,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT___R0_en_d0)
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory
                                   [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT___R0_addr_d0]
                                    : 0U)),32);
        bufp->chgBit(oldp+1409,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0));
        bufp->chgBit(oldp+1410,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_1));
        bufp->chgBit(oldp+1411,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_2));
        bufp->chgBit(oldp+1412,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_3));
        bufp->chgBit(oldp+1413,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4));
        bufp->chgBit(oldp+1414,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5));
        bufp->chgBit(oldp+1415,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6));
        bufp->chgBit(oldp+1416,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_7));
        bufp->chgIData(oldp+1417,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT___R0_en_d0)
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory
                                   [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT___R0_addr_d0]
                                    : 0U)),21);
        bufp->chgIData(oldp+1418,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT___R0_en_d0)
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory
                                   [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT___R0_addr_d0]
                                    : 0U)),21);
        bufp->chgIData(oldp+1419,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT___R0_en_d0)
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory
                                   [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT___R0_addr_d0]
                                    : 0U)),21);
        bufp->chgIData(oldp+1420,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT___R0_en_d0)
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory
                                   [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT___R0_addr_d0]
                                    : 0U)),21);
        bufp->chgBit(oldp+1421,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_in_ready));
        bufp->chgBit(oldp+1422,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)) 
                                 & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_fetch_resp_valid))));
        bufp->chgCData(oldp+1423,((0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1424,((0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                            >> 0x14U))),5);
        bufp->chgIData(oldp+1425,(((0U == (0x1fU & 
                                           (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                            >> 0xfU)))
                                    ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp)),32);
        bufp->chgIData(oldp+1426,(((0U == (0x1fU & 
                                           (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                            >> 0x14U)))
                                    ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp_0)),32);
        bufp->chgIData(oldp+1427,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__imm_i),32);
        bufp->chgBit(oldp+1428,((0x17U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+1429,((0x37U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+1430,((0x13U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+1431,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_load));
        bufp->chgBit(oldp+1432,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_srai));
        bufp->chgBit(oldp+1433,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_srli));
        bufp->chgBit(oldp+1434,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_slli));
        bufp->chgBit(oldp+1435,((0x33U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+1436,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_branch));
        bufp->chgBit(oldp+1437,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_store));
        bufp->chgBit(oldp+1438,((0x73U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+1439,(vlSelfRef.top__DOT__npc_cpu__DOT___ifu2_io_in_ready));
        bufp->chgBit(oldp+1440,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__out_valid));
        bufp->chgBit(oldp+1441,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__req_valid));
        bufp->chgIData(oldp+1442,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pred_next_pc_reg),32);
        bufp->chgBit(oldp+1443,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred));
        bufp->chgBit(oldp+1444,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pred_valid));
        bufp->chgBit(oldp+1445,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__redirect_valid));
        bufp->chgBit(oldp+1446,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__waiting));
        bufp->chgIData(oldp+1447,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__wait_pc_reg),32);
        bufp->chgBit(oldp+1448,((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state))));
        bufp->chgBit(oldp+1449,(((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state)) 
                                 & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state))
                                     ? ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__out_sent)) 
                                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__req_sent))
                                     : (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state))))));
        bufp->chgBit(oldp+1450,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_en));
        bufp->chgCData(oldp+1451,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__load_tag),6);
        bufp->chgIData(oldp+1452,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_wdata),32);
        bufp->chgBit(oldp+1453,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_wen));
        bufp->chgSData(oldp+1454,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_waddr),12);
        bufp->chgIData(oldp+1455,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_rdata),32);
        bufp->chgBit(oldp+1456,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrw));
        bufp->chgBit(oldp+1457,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrs));
        bufp->chgBit(oldp+1458,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_load));
        bufp->chgBit(oldp+1459,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_store));
        bufp->chgBit(oldp+1460,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lb));
        bufp->chgBit(oldp+1461,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lbu));
        bufp->chgBit(oldp+1462,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lh));
        bufp->chgBit(oldp+1463,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lhu));
        bufp->chgBit(oldp+1464,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jalr));
        bufp->chgBit(oldp+1465,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jal));
        bufp->chgIData(oldp+1466,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data),32);
        bufp->chgBit(oldp+1467,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw));
        bufp->chgBit(oldp+1468,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb));
        bufp->chgBit(oldp+1469,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh));
        bufp->chgCData(oldp+1470,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state),2);
        bufp->chgBit(oldp+1471,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__req_sent));
        bufp->chgBit(oldp+1472,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__out_sent));
        bufp->chgBit(oldp+1473,((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state)))));
        bufp->chgBit(oldp+1474,(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_out_valid));
        bufp->chgIData(oldp+1475,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__pc),32);
        bufp->chgIData(oldp+1476,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__inst),32);
        bufp->chgIData(oldp+1477,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__addr),32);
        bufp->chgIData(oldp+1478,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__mem_data),32);
        bufp->chgBit(oldp+1479,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_store));
        bufp->chgBit(oldp+1480,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jalr));
        bufp->chgBit(oldp+1481,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jal));
        bufp->chgIData(oldp+1482,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_wdata),32);
        bufp->chgBit(oldp+1483,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_wen));
        bufp->chgSData(oldp+1484,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_waddr),12);
        bufp->chgIData(oldp+1485,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_rdata),32);
        bufp->chgBit(oldp+1486,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrw));
        bufp->chgBit(oldp+1487,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrs));
        bufp->chgCData(oldp+1488,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state),2);
        bufp->chgBit(oldp+1489,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lb));
        bufp->chgBit(oldp+1490,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lbu));
        bufp->chgBit(oldp+1491,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lh));
        bufp->chgBit(oldp+1492,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lhu));
        bufp->chgCData(oldp+1493,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp),8);
        bufp->chgSData(oldp+1494,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__halfData),16);
        bufp->chgCData(oldp+1495,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr),5);
        bufp->chgIData(oldp+1496,(vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data),32);
        bufp->chgBit(oldp+1497,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_en));
        bufp->chgIData(oldp+1498,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_0),32);
        bufp->chgIData(oldp+1499,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp),32);
        bufp->chgIData(oldp+1500,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp_0),32);
        bufp->chgIData(oldp+1501,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__addr),32);
        bufp->chgIData(oldp+1502,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__mem_data),32);
        bufp->chgBit(oldp+1503,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_load));
        bufp->chgBit(oldp+1504,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_store));
        bufp->chgBit(oldp+1505,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_jalr));
        bufp->chgBit(oldp+1506,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_jal));
        bufp->chgIData(oldp+1507,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_rdata),32);
        bufp->chgBit(oldp+1508,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_csrrw));
        bufp->chgBit(oldp+1509,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_csrrs));
        bufp->chgCData(oldp+1510,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__dbgFollowCnt),5);
    }
    bufp->chgBit(oldp+1511,(vlSelfRef.clock));
    bufp->chgBit(oldp+1512,(vlSelfRef.reset));
    bufp->chgIData(oldp+1513,(vlSelfRef.io_pc),32);
    bufp->chgIData(oldp+1514,(vlSelfRef.io_inst),32);
    bufp->chgIData(oldp+1515,(vlSelfRef.io_commit_addr),32);
    bufp->chgBit(oldp+1516,(vlSelfRef.io_halt_ret));
    bufp->chgBit(oldp+1517,(vlSelfRef.io_non_inst));
    bufp->chgBit(oldp+1518,(vlSelfRef.io_interrupt));
    bufp->chgBit(oldp+1519,(vlSelfRef.io_master_awready));
    bufp->chgBit(oldp+1520,(vlSelfRef.io_master_awvalid));
    bufp->chgIData(oldp+1521,(vlSelfRef.io_master_awaddr),32);
    bufp->chgCData(oldp+1522,(vlSelfRef.io_master_awid),4);
    bufp->chgCData(oldp+1523,(vlSelfRef.io_master_awlen),8);
    bufp->chgCData(oldp+1524,(vlSelfRef.io_master_awsize),3);
    bufp->chgCData(oldp+1525,(vlSelfRef.io_master_awburst),2);
    bufp->chgBit(oldp+1526,(vlSelfRef.io_master_wready));
    bufp->chgBit(oldp+1527,(vlSelfRef.io_master_wvalid));
    bufp->chgIData(oldp+1528,(vlSelfRef.io_master_wdata),32);
    bufp->chgCData(oldp+1529,(vlSelfRef.io_master_wstrb),4);
    bufp->chgBit(oldp+1530,(vlSelfRef.io_master_wlast));
    bufp->chgBit(oldp+1531,(vlSelfRef.io_master_bready));
    bufp->chgBit(oldp+1532,(vlSelfRef.io_master_bvalid));
    bufp->chgCData(oldp+1533,(vlSelfRef.io_master_bresp),2);
    bufp->chgCData(oldp+1534,(vlSelfRef.io_master_bid),4);
    bufp->chgBit(oldp+1535,(vlSelfRef.io_master_arready));
    bufp->chgBit(oldp+1536,(vlSelfRef.io_master_arvalid));
    bufp->chgIData(oldp+1537,(vlSelfRef.io_master_araddr),32);
    bufp->chgCData(oldp+1538,(vlSelfRef.io_master_arid),4);
    bufp->chgCData(oldp+1539,(vlSelfRef.io_master_arlen),8);
    bufp->chgCData(oldp+1540,(vlSelfRef.io_master_arsize),3);
    bufp->chgCData(oldp+1541,(vlSelfRef.io_master_arburst),2);
    bufp->chgBit(oldp+1542,(vlSelfRef.io_master_rready));
    bufp->chgBit(oldp+1543,(vlSelfRef.io_master_rvalid));
    bufp->chgCData(oldp+1544,(vlSelfRef.io_master_rresp),2);
    bufp->chgIData(oldp+1545,(vlSelfRef.io_master_rdata),32);
    bufp->chgBit(oldp+1546,(vlSelfRef.io_master_rlast));
    bufp->chgCData(oldp+1547,(vlSelfRef.io_master_rid),4);
    bufp->chgBit(oldp+1548,(vlSelfRef.io_slave_awready));
    bufp->chgBit(oldp+1549,(vlSelfRef.io_slave_awvalid));
    bufp->chgIData(oldp+1550,(vlSelfRef.io_slave_awaddr),32);
    bufp->chgCData(oldp+1551,(vlSelfRef.io_slave_awid),4);
    bufp->chgCData(oldp+1552,(vlSelfRef.io_slave_awlen),8);
    bufp->chgCData(oldp+1553,(vlSelfRef.io_slave_awsize),3);
    bufp->chgCData(oldp+1554,(vlSelfRef.io_slave_awburst),2);
    bufp->chgBit(oldp+1555,(vlSelfRef.io_slave_wready));
    bufp->chgBit(oldp+1556,(vlSelfRef.io_slave_wvalid));
    bufp->chgIData(oldp+1557,(vlSelfRef.io_slave_wdata),32);
    bufp->chgCData(oldp+1558,(vlSelfRef.io_slave_wstrb),4);
    bufp->chgBit(oldp+1559,(vlSelfRef.io_slave_wlast));
    bufp->chgBit(oldp+1560,(vlSelfRef.io_slave_bready));
    bufp->chgBit(oldp+1561,(vlSelfRef.io_slave_bvalid));
    bufp->chgCData(oldp+1562,(vlSelfRef.io_slave_bresp),2);
    bufp->chgCData(oldp+1563,(vlSelfRef.io_slave_bid),4);
    bufp->chgBit(oldp+1564,(vlSelfRef.io_slave_arready));
    bufp->chgBit(oldp+1565,(vlSelfRef.io_slave_arvalid));
    bufp->chgIData(oldp+1566,(vlSelfRef.io_slave_araddr),32);
    bufp->chgCData(oldp+1567,(vlSelfRef.io_slave_arid),4);
    bufp->chgCData(oldp+1568,(vlSelfRef.io_slave_arlen),8);
    bufp->chgCData(oldp+1569,(vlSelfRef.io_slave_arsize),3);
    bufp->chgCData(oldp+1570,(vlSelfRef.io_slave_arburst),2);
    bufp->chgBit(oldp+1571,(vlSelfRef.io_slave_rready));
    bufp->chgBit(oldp+1572,(vlSelfRef.io_slave_rvalid));
    bufp->chgCData(oldp+1573,(vlSelfRef.io_slave_rresp),2);
    bufp->chgIData(oldp+1574,(vlSelfRef.io_slave_rdata),32);
    bufp->chgBit(oldp+1575,(vlSelfRef.io_slave_rlast));
    bufp->chgCData(oldp+1576,(vlSelfRef.io_slave_rid),4);
    bufp->chgBit(oldp+1577,(vlSelfRef.io_halt));
    bufp->chgIData(oldp+1578,(vlSelfRef.io_gpr_0),32);
    bufp->chgIData(oldp+1579,(vlSelfRef.io_gpr_1),32);
    bufp->chgIData(oldp+1580,(vlSelfRef.io_gpr_2),32);
    bufp->chgIData(oldp+1581,(vlSelfRef.io_gpr_3),32);
    bufp->chgIData(oldp+1582,(vlSelfRef.io_gpr_4),32);
    bufp->chgIData(oldp+1583,(vlSelfRef.io_gpr_5),32);
    bufp->chgIData(oldp+1584,(vlSelfRef.io_gpr_6),32);
    bufp->chgIData(oldp+1585,(vlSelfRef.io_gpr_7),32);
    bufp->chgIData(oldp+1586,(vlSelfRef.io_gpr_8),32);
    bufp->chgIData(oldp+1587,(vlSelfRef.io_gpr_9),32);
    bufp->chgIData(oldp+1588,(vlSelfRef.io_gpr_10),32);
    bufp->chgIData(oldp+1589,(vlSelfRef.io_gpr_11),32);
    bufp->chgIData(oldp+1590,(vlSelfRef.io_gpr_12),32);
    bufp->chgIData(oldp+1591,(vlSelfRef.io_gpr_13),32);
    bufp->chgIData(oldp+1592,(vlSelfRef.io_gpr_14),32);
    bufp->chgIData(oldp+1593,(vlSelfRef.io_gpr_15),32);
    bufp->chgIData(oldp+1594,(vlSelfRef.io_gpr_16),32);
    bufp->chgIData(oldp+1595,(vlSelfRef.io_gpr_17),32);
    bufp->chgIData(oldp+1596,(vlSelfRef.io_gpr_18),32);
    bufp->chgIData(oldp+1597,(vlSelfRef.io_gpr_19),32);
    bufp->chgIData(oldp+1598,(vlSelfRef.io_gpr_20),32);
    bufp->chgIData(oldp+1599,(vlSelfRef.io_gpr_21),32);
    bufp->chgIData(oldp+1600,(vlSelfRef.io_gpr_22),32);
    bufp->chgIData(oldp+1601,(vlSelfRef.io_gpr_23),32);
    bufp->chgIData(oldp+1602,(vlSelfRef.io_gpr_24),32);
    bufp->chgIData(oldp+1603,(vlSelfRef.io_gpr_25),32);
    bufp->chgIData(oldp+1604,(vlSelfRef.io_gpr_26),32);
    bufp->chgIData(oldp+1605,(vlSelfRef.io_gpr_27),32);
    bufp->chgIData(oldp+1606,(vlSelfRef.io_gpr_28),32);
    bufp->chgIData(oldp+1607,(vlSelfRef.io_gpr_29),32);
    bufp->chgIData(oldp+1608,(vlSelfRef.io_gpr_30),32);
    bufp->chgIData(oldp+1609,(vlSelfRef.io_gpr_31),32);
    bufp->chgBit(oldp+1610,(vlSelfRef.io_difftest_valid));
    bufp->chgBit(oldp+1611,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0) 
                             & (IData)(vlSelfRef.io_master_awready))));
    bufp->chgBit(oldp+1612,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_5) 
                             & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead)
                                 ? (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state))
                                 : ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid)) 
                                    & (IData)(vlSelfRef.io_master_arready))))));
    bufp->chgIData(oldp+1613,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7)
                                ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint)
                                         ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)
                                             ? ((0x200bff8U 
                                                 == vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                                 ? vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low
                                                 : 
                                                ((0x200bffcU 
                                                  == vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                                  ? vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high
                                                  : 0U))
                                             : 0U) : 
                                        ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)
                                          ? 0U : vlSelfRef.io_master_rdata)))),32);
    bufp->chgBit(oldp+1614,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_arvalid) 
                             & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_5) 
                                & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead)
                                    ? (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state))
                                    : ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid)) 
                                       & (IData)(vlSelfRef.io_master_arready)))))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
