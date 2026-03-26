// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0_sub_1(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
    Vtop___024root__trace_chg_0_sub_1((&vlSymsp->TOP), bufp);
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
        bufp->chgBit(oldp+4,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast));
        bufp->chgBit(oldp+5,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready));
        bufp->chgBit(oldp+6,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid));
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid));
        bufp->chgBit(oldp+8,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rlast));
        bufp->chgBit(oldp+9,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_arvalid));
        bufp->chgIData(oldp+10,(((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_2)) 
                                        | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_4)))
                                  ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_araddr)),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__rdAddr),32);
        bufp->chgBit(oldp+12,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead));
        bufp->chgBit(oldp+13,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_rready_0));
        bufp->chgBit(oldp+14,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_arready) 
                               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr))));
        bufp->chgBit(oldp+15,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending)) 
                               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid))));
        bufp->chgBit(oldp+16,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__ar_fire));
        bufp->chgBit(oldp+17,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__r_last_fire));
        bufp->chgBit(oldp+18,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                               & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0)
                                   ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire)
                                   : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_3)))));
        bufp->chgBit(oldp+19,(((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                               & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                   ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid)
                                   : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_5) 
                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid))))));
        bufp->chgIData(oldp+20,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data),32);
        bufp->chgBit(oldp+21,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last));
        bufp->chgBit(oldp+22,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire));
        bufp->chgCData(oldp+23,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
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
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__inst_reg),32);
        bufp->chgBit(oldp+26,((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state))));
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_1),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_2),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_3),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_4),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_5),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_6),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_7),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_8),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_9),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_10),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_11),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_12),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_13),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_14),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_15),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_16),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_17),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_18),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_19),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_20),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_21),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_22),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_23),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_24),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_25),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_26),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_27),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_28),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_29),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_30),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_31),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit_count),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_count),32);
        bufp->chgBit(oldp+60,(vlSelfRef.top__DOT____Vcellinp__ebreak_box__is_ebreak));
        bufp->chgBit(oldp+61,(vlSelfRef.top__DOT__npc_cpu__DOT__busy));
        bufp->chgIData(oldp+62,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst)
                                  ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__line_base
                                  : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg)),32);
        bufp->chgCData(oldp+63,((7U & (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst))))),8);
        bufp->chgCData(oldp+64,(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst),2);
        bufp->chgBit(oldp+65,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid));
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awaddr),32);
        bufp->chgCData(oldp+67,((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid) 
                                  & (3U > (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_wsize)))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_wsize)
                                  : 2U)),3);
        bufp->chgBit(oldp+68,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0));
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wdata),32);
        bufp->chgCData(oldp+70,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wstrb),4);
        bufp->chgBit(oldp+71,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_bready_0));
        bufp->chgBit(oldp+72,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_arvalid));
        bufp->chgIData(oldp+73,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_araddr),32);
        bufp->chgCData(oldp+74,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_2)
                                  ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_burst)
                                           ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3)
                                               ? 0U
                                               : (7U 
                                                  & (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13)))))
                                           : 0U))),8);
        bufp->chgCData(oldp+75,(((1U & ((~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_valid) 
                                            & (3U > (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_rsize)))) 
                                        | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_1)))
                                  ? 2U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_rsize))),3);
        bufp->chgCData(oldp+76,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_2)
                                  ? 0U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_burst))),2);
        bufp->chgBit(oldp+77,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_rready_0));
        bufp->chgBit(oldp+78,((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)))));
        bufp->chgBit(oldp+79,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_rready));
        bufp->chgBit(oldp+80,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state));
        bufp->chgIData(oldp+81,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)
                                  ? ((0x200bff8U == vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                      ? vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low
                                      : ((0x200bffcU 
                                          == vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                          ? vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high
                                          : 0U)) : 0U)),32);
        bufp->chgBit(oldp+82,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy));
        bufp->chgBit(oldp+83,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu));
        bufp->chgBit(oldp+84,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write));
        bufp->chgBit(oldp+85,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase));
        bufp->chgBit(oldp+86,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint));
        bufp->chgBit(oldp+87,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__isClintWrite));
        bufp->chgBit(oldp+88,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_wvalid_0));
        bufp->chgBit(oldp+89,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_bready_0));
        bufp->chgIData(oldp+90,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low),32);
        bufp->chgIData(oldp+91,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high),32);
        bufp->chgIData(oldp+92,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg),32);
        bufp->chgBit(oldp+93,(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_valid));
        bufp->chgBit(oldp+94,(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst));
        bufp->chgBit(oldp+95,(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_resp_ready));
        bufp->chgBit(oldp+96,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0));
        bufp->chgBit(oldp+97,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending));
        bufp->chgBit(oldp+98,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending));
        bufp->chgBit(oldp+99,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr));
        bufp->chgBit(oldp+100,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_valid));
        bufp->chgBit(oldp+101,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_10)) 
                                & ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                                   | ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_11)) 
                                      & (7U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))))));
        bufp->chgCData(oldp+102,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_rsize),3);
        bufp->chgIData(oldp+103,((((4U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3))
                                   ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg)
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__line_base
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_addr_reg))),32);
        bufp->chgCData(oldp+104,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3)
                                   ? 0U : (7U & (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_13)))))),3);
        bufp->chgIData(oldp+105,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_wdata),32);
        bufp->chgCData(oldp+106,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_wmask),4);
        bufp->chgCData(oldp+107,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_wsize),3);
        bufp->chgIData(oldp+108,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_10)
                                   ? 0U : vlSelfRef.__VdfgRegularize_hd87f99a1_0_4)),32);
        bufp->chgBit(oldp+109,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_burst));
        bufp->chgBit(oldp+110,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_resp_ready));
        bufp->chgCData(oldp+111,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state),2);
        bufp->chgIData(oldp+112,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wdata),32);
        bufp->chgCData(oldp+113,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wmask),4);
        bufp->chgSData(oldp+114,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr),12);
        bufp->chgIData(oldp+115,(((0xf12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
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
        bufp->chgSData(oldp+116,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr),12);
        bufp->chgIData(oldp+117,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wdata),32);
        bufp->chgBit(oldp+118,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wen));
        bufp->chgBit(oldp+119,((0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
        bufp->chgBit(oldp+120,((0x30200073U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
        bufp->chgIData(oldp+121,(vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mtvec),32);
        bufp->chgIData(oldp+122,(vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mepc),32);
        bufp->chgIData(oldp+123,(vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mcause),32);
        bufp->chgIData(oldp+124,(vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mstatus),32);
        bufp->chgBit(oldp+125,((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))));
        bufp->chgBit(oldp+126,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__io_mem_req_valid_0));
        bufp->chgBit(oldp+127,(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_wen));
        bufp->chgIData(oldp+128,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb)
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
        bufp->chgCData(oldp+129,((0xfU & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb)
                                           ? ((IData)(1U) 
                                              << (3U 
                                                  & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result))
                                           : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh)
                                               ? ((2U 
                                                   & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result)
                                                   ? 0xcU
                                                   : 3U)
                                               : (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw))))))),4);
        bufp->chgIData(oldp+130,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result),32);
        bufp->chgBit(oldp+131,(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_bypass));
        bufp->chgBit(oldp+132,(((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
                                & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)))));
        bufp->chgBit(oldp+133,(((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                                & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))
                                    ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit)
                                    : ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_6)) 
                                       & (6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))))));
        bufp->chgIData(oldp+134,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_addr),32);
        bufp->chgIData(oldp+135,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data),32);
        bufp->chgIData(oldp+136,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_0),32);
        bufp->chgIData(oldp+137,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_1),32);
        bufp->chgIData(oldp+138,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_2),32);
        bufp->chgIData(oldp+139,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_3),32);
        bufp->chgIData(oldp+140,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_4),32);
        bufp->chgIData(oldp+141,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_5),32);
        bufp->chgIData(oldp+142,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_6),32);
        bufp->chgIData(oldp+143,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_7),32);
        bufp->chgIData(oldp+144,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_0),32);
        bufp->chgIData(oldp+145,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_1),32);
        bufp->chgIData(oldp+146,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_2),32);
        bufp->chgIData(oldp+147,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_3),32);
        bufp->chgIData(oldp+148,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_4),32);
        bufp->chgIData(oldp+149,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_5),32);
        bufp->chgIData(oldp+150,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_6),32);
        bufp->chgIData(oldp+151,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_7),32);
        bufp->chgIData(oldp+152,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_0),32);
        bufp->chgIData(oldp+153,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_1),32);
        bufp->chgIData(oldp+154,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_2),32);
        bufp->chgIData(oldp+155,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_3),32);
        bufp->chgIData(oldp+156,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_4),32);
        bufp->chgIData(oldp+157,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_5),32);
        bufp->chgIData(oldp+158,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_6),32);
        bufp->chgIData(oldp+159,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_7),32);
        bufp->chgIData(oldp+160,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_0),32);
        bufp->chgIData(oldp+161,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_1),32);
        bufp->chgIData(oldp+162,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_2),32);
        bufp->chgIData(oldp+163,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_3),32);
        bufp->chgIData(oldp+164,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_4),32);
        bufp->chgIData(oldp+165,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_5),32);
        bufp->chgIData(oldp+166,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_6),32);
        bufp->chgIData(oldp+167,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_7),32);
        bufp->chgIData(oldp+168,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_0),32);
        bufp->chgIData(oldp+169,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_1),32);
        bufp->chgIData(oldp+170,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_2),32);
        bufp->chgIData(oldp+171,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_3),32);
        bufp->chgIData(oldp+172,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_4),32);
        bufp->chgIData(oldp+173,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_5),32);
        bufp->chgIData(oldp+174,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_6),32);
        bufp->chgIData(oldp+175,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_7),32);
        bufp->chgIData(oldp+176,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_0),32);
        bufp->chgIData(oldp+177,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_1),32);
        bufp->chgIData(oldp+178,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_2),32);
        bufp->chgIData(oldp+179,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_3),32);
        bufp->chgIData(oldp+180,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_4),32);
        bufp->chgIData(oldp+181,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_5),32);
        bufp->chgIData(oldp+182,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_6),32);
        bufp->chgIData(oldp+183,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_7),32);
        bufp->chgIData(oldp+184,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_0),32);
        bufp->chgIData(oldp+185,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_1),32);
        bufp->chgIData(oldp+186,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_2),32);
        bufp->chgIData(oldp+187,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_3),32);
        bufp->chgIData(oldp+188,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_4),32);
        bufp->chgIData(oldp+189,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_5),32);
        bufp->chgIData(oldp+190,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_6),32);
        bufp->chgIData(oldp+191,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_7),32);
        bufp->chgIData(oldp+192,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_0),32);
        bufp->chgIData(oldp+193,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_1),32);
        bufp->chgIData(oldp+194,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_2),32);
        bufp->chgIData(oldp+195,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_3),32);
        bufp->chgIData(oldp+196,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_4),32);
        bufp->chgIData(oldp+197,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_5),32);
        bufp->chgIData(oldp+198,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_6),32);
        bufp->chgIData(oldp+199,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_7),32);
        bufp->chgIData(oldp+200,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_0),32);
        bufp->chgIData(oldp+201,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_1),32);
        bufp->chgIData(oldp+202,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_2),32);
        bufp->chgIData(oldp+203,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_3),32);
        bufp->chgIData(oldp+204,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_4),32);
        bufp->chgIData(oldp+205,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_5),32);
        bufp->chgIData(oldp+206,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_6),32);
        bufp->chgIData(oldp+207,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_7),32);
        bufp->chgIData(oldp+208,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_0),32);
        bufp->chgIData(oldp+209,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_1),32);
        bufp->chgIData(oldp+210,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_2),32);
        bufp->chgIData(oldp+211,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_3),32);
        bufp->chgIData(oldp+212,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_4),32);
        bufp->chgIData(oldp+213,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_5),32);
        bufp->chgIData(oldp+214,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_6),32);
        bufp->chgIData(oldp+215,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_7),32);
        bufp->chgIData(oldp+216,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_0),32);
        bufp->chgIData(oldp+217,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_1),32);
        bufp->chgIData(oldp+218,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_2),32);
        bufp->chgIData(oldp+219,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_3),32);
        bufp->chgIData(oldp+220,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_4),32);
        bufp->chgIData(oldp+221,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_5),32);
        bufp->chgIData(oldp+222,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_6),32);
        bufp->chgIData(oldp+223,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_7),32);
        bufp->chgIData(oldp+224,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_0),32);
        bufp->chgIData(oldp+225,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_1),32);
        bufp->chgIData(oldp+226,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_2),32);
        bufp->chgIData(oldp+227,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_3),32);
        bufp->chgIData(oldp+228,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_4),32);
        bufp->chgIData(oldp+229,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_5),32);
        bufp->chgIData(oldp+230,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_6),32);
        bufp->chgIData(oldp+231,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_7),32);
        bufp->chgIData(oldp+232,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_0),32);
        bufp->chgIData(oldp+233,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_1),32);
        bufp->chgIData(oldp+234,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_2),32);
        bufp->chgIData(oldp+235,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_3),32);
        bufp->chgIData(oldp+236,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_4),32);
        bufp->chgIData(oldp+237,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_5),32);
        bufp->chgIData(oldp+238,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_6),32);
        bufp->chgIData(oldp+239,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_7),32);
        bufp->chgIData(oldp+240,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_0),32);
        bufp->chgIData(oldp+241,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_1),32);
        bufp->chgIData(oldp+242,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_2),32);
        bufp->chgIData(oldp+243,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_3),32);
        bufp->chgIData(oldp+244,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_4),32);
        bufp->chgIData(oldp+245,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_5),32);
        bufp->chgIData(oldp+246,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_6),32);
        bufp->chgIData(oldp+247,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_7),32);
        bufp->chgIData(oldp+248,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_0),32);
        bufp->chgIData(oldp+249,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_1),32);
        bufp->chgIData(oldp+250,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_2),32);
        bufp->chgIData(oldp+251,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_3),32);
        bufp->chgIData(oldp+252,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_4),32);
        bufp->chgIData(oldp+253,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_5),32);
        bufp->chgIData(oldp+254,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_6),32);
        bufp->chgIData(oldp+255,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_7),32);
        bufp->chgIData(oldp+256,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_0),32);
        bufp->chgIData(oldp+257,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_1),32);
        bufp->chgIData(oldp+258,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_2),32);
        bufp->chgIData(oldp+259,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_3),32);
        bufp->chgIData(oldp+260,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_4),32);
        bufp->chgIData(oldp+261,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_5),32);
        bufp->chgIData(oldp+262,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_6),32);
        bufp->chgIData(oldp+263,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_7),32);
        bufp->chgIData(oldp+264,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_0),32);
        bufp->chgIData(oldp+265,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_1),32);
        bufp->chgIData(oldp+266,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_2),32);
        bufp->chgIData(oldp+267,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_3),32);
        bufp->chgIData(oldp+268,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_4),32);
        bufp->chgIData(oldp+269,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_5),32);
        bufp->chgIData(oldp+270,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_6),32);
        bufp->chgIData(oldp+271,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_7),32);
        bufp->chgIData(oldp+272,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_0),32);
        bufp->chgIData(oldp+273,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_1),32);
        bufp->chgIData(oldp+274,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_2),32);
        bufp->chgIData(oldp+275,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_3),32);
        bufp->chgIData(oldp+276,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_4),32);
        bufp->chgIData(oldp+277,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_5),32);
        bufp->chgIData(oldp+278,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_6),32);
        bufp->chgIData(oldp+279,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_7),32);
        bufp->chgIData(oldp+280,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_0),32);
        bufp->chgIData(oldp+281,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_1),32);
        bufp->chgIData(oldp+282,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_2),32);
        bufp->chgIData(oldp+283,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_3),32);
        bufp->chgIData(oldp+284,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_4),32);
        bufp->chgIData(oldp+285,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_5),32);
        bufp->chgIData(oldp+286,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_6),32);
        bufp->chgIData(oldp+287,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_7),32);
        bufp->chgIData(oldp+288,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_0),32);
        bufp->chgIData(oldp+289,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_1),32);
        bufp->chgIData(oldp+290,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_2),32);
        bufp->chgIData(oldp+291,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_3),32);
        bufp->chgIData(oldp+292,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_4),32);
        bufp->chgIData(oldp+293,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_5),32);
        bufp->chgIData(oldp+294,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_6),32);
        bufp->chgIData(oldp+295,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_7),32);
        bufp->chgIData(oldp+296,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_0),32);
        bufp->chgIData(oldp+297,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_1),32);
        bufp->chgIData(oldp+298,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_2),32);
        bufp->chgIData(oldp+299,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_3),32);
        bufp->chgIData(oldp+300,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_4),32);
        bufp->chgIData(oldp+301,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_5),32);
        bufp->chgIData(oldp+302,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_6),32);
        bufp->chgIData(oldp+303,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_7),32);
        bufp->chgIData(oldp+304,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_0),32);
        bufp->chgIData(oldp+305,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_1),32);
        bufp->chgIData(oldp+306,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_2),32);
        bufp->chgIData(oldp+307,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_3),32);
        bufp->chgIData(oldp+308,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_4),32);
        bufp->chgIData(oldp+309,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_5),32);
        bufp->chgIData(oldp+310,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_6),32);
        bufp->chgIData(oldp+311,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_7),32);
        bufp->chgIData(oldp+312,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_0),32);
        bufp->chgIData(oldp+313,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_1),32);
        bufp->chgIData(oldp+314,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_2),32);
        bufp->chgIData(oldp+315,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_3),32);
        bufp->chgIData(oldp+316,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_4),32);
        bufp->chgIData(oldp+317,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_5),32);
        bufp->chgIData(oldp+318,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_6),32);
        bufp->chgIData(oldp+319,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_7),32);
        bufp->chgIData(oldp+320,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_0),32);
        bufp->chgIData(oldp+321,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_1),32);
        bufp->chgIData(oldp+322,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_2),32);
        bufp->chgIData(oldp+323,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_3),32);
        bufp->chgIData(oldp+324,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_4),32);
        bufp->chgIData(oldp+325,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_5),32);
        bufp->chgIData(oldp+326,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_6),32);
        bufp->chgIData(oldp+327,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_7),32);
        bufp->chgIData(oldp+328,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_0),32);
        bufp->chgIData(oldp+329,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_1),32);
        bufp->chgIData(oldp+330,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_2),32);
        bufp->chgIData(oldp+331,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_3),32);
        bufp->chgIData(oldp+332,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_4),32);
        bufp->chgIData(oldp+333,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_5),32);
        bufp->chgIData(oldp+334,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_6),32);
        bufp->chgIData(oldp+335,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_7),32);
        bufp->chgIData(oldp+336,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_0),32);
        bufp->chgIData(oldp+337,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_1),32);
        bufp->chgIData(oldp+338,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_2),32);
        bufp->chgIData(oldp+339,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_3),32);
        bufp->chgIData(oldp+340,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_4),32);
        bufp->chgIData(oldp+341,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_5),32);
        bufp->chgIData(oldp+342,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_6),32);
        bufp->chgIData(oldp+343,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_7),32);
        bufp->chgIData(oldp+344,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_0),32);
        bufp->chgIData(oldp+345,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_1),32);
        bufp->chgIData(oldp+346,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_2),32);
        bufp->chgIData(oldp+347,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_3),32);
        bufp->chgIData(oldp+348,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_4),32);
        bufp->chgIData(oldp+349,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_5),32);
        bufp->chgIData(oldp+350,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_6),32);
        bufp->chgIData(oldp+351,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_7),32);
        bufp->chgIData(oldp+352,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_0),32);
        bufp->chgIData(oldp+353,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_1),32);
        bufp->chgIData(oldp+354,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_2),32);
        bufp->chgIData(oldp+355,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_3),32);
        bufp->chgIData(oldp+356,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_4),32);
        bufp->chgIData(oldp+357,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_5),32);
        bufp->chgIData(oldp+358,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_6),32);
        bufp->chgIData(oldp+359,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_7),32);
        bufp->chgIData(oldp+360,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_0),32);
        bufp->chgIData(oldp+361,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_1),32);
        bufp->chgIData(oldp+362,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_2),32);
        bufp->chgIData(oldp+363,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_3),32);
        bufp->chgIData(oldp+364,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_4),32);
        bufp->chgIData(oldp+365,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_5),32);
        bufp->chgIData(oldp+366,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_6),32);
        bufp->chgIData(oldp+367,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_7),32);
        bufp->chgIData(oldp+368,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_0),32);
        bufp->chgIData(oldp+369,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_1),32);
        bufp->chgIData(oldp+370,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_2),32);
        bufp->chgIData(oldp+371,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_3),32);
        bufp->chgIData(oldp+372,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_4),32);
        bufp->chgIData(oldp+373,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_5),32);
        bufp->chgIData(oldp+374,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_6),32);
        bufp->chgIData(oldp+375,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_7),32);
        bufp->chgIData(oldp+376,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_0),32);
        bufp->chgIData(oldp+377,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_1),32);
        bufp->chgIData(oldp+378,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_2),32);
        bufp->chgIData(oldp+379,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_3),32);
        bufp->chgIData(oldp+380,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_4),32);
        bufp->chgIData(oldp+381,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_5),32);
        bufp->chgIData(oldp+382,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_6),32);
        bufp->chgIData(oldp+383,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_7),32);
        bufp->chgIData(oldp+384,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_0),32);
        bufp->chgIData(oldp+385,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_1),32);
        bufp->chgIData(oldp+386,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_2),32);
        bufp->chgIData(oldp+387,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_3),32);
        bufp->chgIData(oldp+388,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_4),32);
        bufp->chgIData(oldp+389,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_5),32);
        bufp->chgIData(oldp+390,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_6),32);
        bufp->chgIData(oldp+391,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_7),32);
        bufp->chgIData(oldp+392,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_0),32);
        bufp->chgIData(oldp+393,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_1),32);
        bufp->chgIData(oldp+394,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_2),32);
        bufp->chgIData(oldp+395,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_3),32);
        bufp->chgIData(oldp+396,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_4),32);
        bufp->chgIData(oldp+397,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_5),32);
        bufp->chgIData(oldp+398,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_6),32);
        bufp->chgIData(oldp+399,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_7),32);
        bufp->chgIData(oldp+400,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_0),32);
        bufp->chgIData(oldp+401,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_1),32);
        bufp->chgIData(oldp+402,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_2),32);
        bufp->chgIData(oldp+403,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_3),32);
        bufp->chgIData(oldp+404,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_4),32);
        bufp->chgIData(oldp+405,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_5),32);
        bufp->chgIData(oldp+406,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_6),32);
        bufp->chgIData(oldp+407,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_7),32);
        bufp->chgIData(oldp+408,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_0),32);
        bufp->chgIData(oldp+409,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_1),32);
        bufp->chgIData(oldp+410,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_2),32);
        bufp->chgIData(oldp+411,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_3),32);
        bufp->chgIData(oldp+412,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_4),32);
        bufp->chgIData(oldp+413,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_5),32);
        bufp->chgIData(oldp+414,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_6),32);
        bufp->chgIData(oldp+415,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_7),32);
        bufp->chgIData(oldp+416,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_0),32);
        bufp->chgIData(oldp+417,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_1),32);
        bufp->chgIData(oldp+418,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_2),32);
        bufp->chgIData(oldp+419,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_3),32);
        bufp->chgIData(oldp+420,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_4),32);
        bufp->chgIData(oldp+421,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_5),32);
        bufp->chgIData(oldp+422,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_6),32);
        bufp->chgIData(oldp+423,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_7),32);
        bufp->chgIData(oldp+424,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_0),32);
        bufp->chgIData(oldp+425,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_1),32);
        bufp->chgIData(oldp+426,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_2),32);
        bufp->chgIData(oldp+427,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_3),32);
        bufp->chgIData(oldp+428,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_4),32);
        bufp->chgIData(oldp+429,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_5),32);
        bufp->chgIData(oldp+430,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_6),32);
        bufp->chgIData(oldp+431,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_7),32);
        bufp->chgIData(oldp+432,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_0),32);
        bufp->chgIData(oldp+433,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_1),32);
        bufp->chgIData(oldp+434,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_2),32);
        bufp->chgIData(oldp+435,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_3),32);
        bufp->chgIData(oldp+436,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_4),32);
        bufp->chgIData(oldp+437,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_5),32);
        bufp->chgIData(oldp+438,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_6),32);
        bufp->chgIData(oldp+439,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_7),32);
        bufp->chgIData(oldp+440,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_0),32);
        bufp->chgIData(oldp+441,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_1),32);
        bufp->chgIData(oldp+442,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_2),32);
        bufp->chgIData(oldp+443,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_3),32);
        bufp->chgIData(oldp+444,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_4),32);
        bufp->chgIData(oldp+445,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_5),32);
        bufp->chgIData(oldp+446,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_6),32);
        bufp->chgIData(oldp+447,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_7),32);
        bufp->chgIData(oldp+448,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_0),32);
        bufp->chgIData(oldp+449,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_1),32);
        bufp->chgIData(oldp+450,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_2),32);
        bufp->chgIData(oldp+451,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_3),32);
        bufp->chgIData(oldp+452,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_4),32);
        bufp->chgIData(oldp+453,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_5),32);
        bufp->chgIData(oldp+454,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_6),32);
        bufp->chgIData(oldp+455,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_7),32);
        bufp->chgIData(oldp+456,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_0),32);
        bufp->chgIData(oldp+457,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_1),32);
        bufp->chgIData(oldp+458,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_2),32);
        bufp->chgIData(oldp+459,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_3),32);
        bufp->chgIData(oldp+460,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_4),32);
        bufp->chgIData(oldp+461,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_5),32);
        bufp->chgIData(oldp+462,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_6),32);
        bufp->chgIData(oldp+463,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_7),32);
        bufp->chgIData(oldp+464,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_0),32);
        bufp->chgIData(oldp+465,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_1),32);
        bufp->chgIData(oldp+466,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_2),32);
        bufp->chgIData(oldp+467,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_3),32);
        bufp->chgIData(oldp+468,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_4),32);
        bufp->chgIData(oldp+469,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_5),32);
        bufp->chgIData(oldp+470,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_6),32);
        bufp->chgIData(oldp+471,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_7),32);
        bufp->chgIData(oldp+472,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_0),32);
        bufp->chgIData(oldp+473,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_1),32);
        bufp->chgIData(oldp+474,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_2),32);
        bufp->chgIData(oldp+475,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_3),32);
        bufp->chgIData(oldp+476,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_4),32);
        bufp->chgIData(oldp+477,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_5),32);
        bufp->chgIData(oldp+478,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_6),32);
        bufp->chgIData(oldp+479,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_7),32);
        bufp->chgIData(oldp+480,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_0),32);
        bufp->chgIData(oldp+481,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_1),32);
        bufp->chgIData(oldp+482,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_2),32);
        bufp->chgIData(oldp+483,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_3),32);
        bufp->chgIData(oldp+484,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_4),32);
        bufp->chgIData(oldp+485,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_5),32);
        bufp->chgIData(oldp+486,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_6),32);
        bufp->chgIData(oldp+487,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_7),32);
        bufp->chgIData(oldp+488,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_0),32);
        bufp->chgIData(oldp+489,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_1),32);
        bufp->chgIData(oldp+490,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_2),32);
        bufp->chgIData(oldp+491,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_3),32);
        bufp->chgIData(oldp+492,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_4),32);
        bufp->chgIData(oldp+493,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_5),32);
        bufp->chgIData(oldp+494,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_6),32);
        bufp->chgIData(oldp+495,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_7),32);
        bufp->chgIData(oldp+496,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_0),32);
        bufp->chgIData(oldp+497,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_1),32);
        bufp->chgIData(oldp+498,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_2),32);
        bufp->chgIData(oldp+499,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_3),32);
        bufp->chgIData(oldp+500,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_4),32);
        bufp->chgIData(oldp+501,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_5),32);
        bufp->chgIData(oldp+502,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_6),32);
        bufp->chgIData(oldp+503,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_7),32);
        bufp->chgIData(oldp+504,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_0),32);
        bufp->chgIData(oldp+505,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_1),32);
        bufp->chgIData(oldp+506,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_2),32);
        bufp->chgIData(oldp+507,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_3),32);
        bufp->chgIData(oldp+508,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_4),32);
        bufp->chgIData(oldp+509,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_5),32);
        bufp->chgIData(oldp+510,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_6),32);
        bufp->chgIData(oldp+511,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_7),32);
        bufp->chgIData(oldp+512,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_0),32);
        bufp->chgIData(oldp+513,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_1),32);
        bufp->chgIData(oldp+514,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_2),32);
        bufp->chgIData(oldp+515,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_3),32);
        bufp->chgIData(oldp+516,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_4),32);
        bufp->chgIData(oldp+517,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_5),32);
        bufp->chgIData(oldp+518,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_6),32);
        bufp->chgIData(oldp+519,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_7),32);
        bufp->chgIData(oldp+520,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_0),32);
        bufp->chgIData(oldp+521,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_1),32);
        bufp->chgIData(oldp+522,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_2),32);
        bufp->chgIData(oldp+523,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_3),32);
        bufp->chgIData(oldp+524,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_4),32);
        bufp->chgIData(oldp+525,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_5),32);
        bufp->chgIData(oldp+526,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_6),32);
        bufp->chgIData(oldp+527,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_7),32);
        bufp->chgIData(oldp+528,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_0),32);
        bufp->chgIData(oldp+529,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_1),32);
        bufp->chgIData(oldp+530,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_2),32);
        bufp->chgIData(oldp+531,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_3),32);
        bufp->chgIData(oldp+532,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_4),32);
        bufp->chgIData(oldp+533,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_5),32);
        bufp->chgIData(oldp+534,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_6),32);
        bufp->chgIData(oldp+535,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_7),32);
        bufp->chgIData(oldp+536,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_0),32);
        bufp->chgIData(oldp+537,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_1),32);
        bufp->chgIData(oldp+538,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_2),32);
        bufp->chgIData(oldp+539,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_3),32);
        bufp->chgIData(oldp+540,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_4),32);
        bufp->chgIData(oldp+541,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_5),32);
        bufp->chgIData(oldp+542,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_6),32);
        bufp->chgIData(oldp+543,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_7),32);
        bufp->chgIData(oldp+544,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_0),32);
        bufp->chgIData(oldp+545,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_1),32);
        bufp->chgIData(oldp+546,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_2),32);
        bufp->chgIData(oldp+547,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_3),32);
        bufp->chgIData(oldp+548,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_4),32);
        bufp->chgIData(oldp+549,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_5),32);
        bufp->chgIData(oldp+550,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_6),32);
        bufp->chgIData(oldp+551,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_7),32);
        bufp->chgIData(oldp+552,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_0),32);
        bufp->chgIData(oldp+553,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_1),32);
        bufp->chgIData(oldp+554,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_2),32);
        bufp->chgIData(oldp+555,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_3),32);
        bufp->chgIData(oldp+556,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_4),32);
        bufp->chgIData(oldp+557,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_5),32);
        bufp->chgIData(oldp+558,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_6),32);
        bufp->chgIData(oldp+559,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_7),32);
        bufp->chgIData(oldp+560,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_0),32);
        bufp->chgIData(oldp+561,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_1),32);
        bufp->chgIData(oldp+562,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_2),32);
        bufp->chgIData(oldp+563,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_3),32);
        bufp->chgIData(oldp+564,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_4),32);
        bufp->chgIData(oldp+565,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_5),32);
        bufp->chgIData(oldp+566,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_6),32);
        bufp->chgIData(oldp+567,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_7),32);
        bufp->chgIData(oldp+568,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_0),32);
        bufp->chgIData(oldp+569,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_1),32);
        bufp->chgIData(oldp+570,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_2),32);
        bufp->chgIData(oldp+571,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_3),32);
        bufp->chgIData(oldp+572,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_4),32);
        bufp->chgIData(oldp+573,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_5),32);
        bufp->chgIData(oldp+574,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_6),32);
        bufp->chgIData(oldp+575,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_7),32);
        bufp->chgIData(oldp+576,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_0),32);
        bufp->chgIData(oldp+577,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_1),32);
        bufp->chgIData(oldp+578,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_2),32);
        bufp->chgIData(oldp+579,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_3),32);
        bufp->chgIData(oldp+580,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_4),32);
        bufp->chgIData(oldp+581,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_5),32);
        bufp->chgIData(oldp+582,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_6),32);
        bufp->chgIData(oldp+583,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_7),32);
        bufp->chgIData(oldp+584,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_0),32);
        bufp->chgIData(oldp+585,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_1),32);
        bufp->chgIData(oldp+586,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_2),32);
        bufp->chgIData(oldp+587,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_3),32);
        bufp->chgIData(oldp+588,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_4),32);
        bufp->chgIData(oldp+589,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_5),32);
        bufp->chgIData(oldp+590,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_6),32);
        bufp->chgIData(oldp+591,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_7),32);
        bufp->chgIData(oldp+592,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_0),32);
        bufp->chgIData(oldp+593,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_1),32);
        bufp->chgIData(oldp+594,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_2),32);
        bufp->chgIData(oldp+595,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_3),32);
        bufp->chgIData(oldp+596,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_4),32);
        bufp->chgIData(oldp+597,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_5),32);
        bufp->chgIData(oldp+598,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_6),32);
        bufp->chgIData(oldp+599,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_7),32);
        bufp->chgIData(oldp+600,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_0),32);
        bufp->chgIData(oldp+601,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_1),32);
        bufp->chgIData(oldp+602,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_2),32);
        bufp->chgIData(oldp+603,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_3),32);
        bufp->chgIData(oldp+604,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_4),32);
        bufp->chgIData(oldp+605,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_5),32);
        bufp->chgIData(oldp+606,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_6),32);
        bufp->chgIData(oldp+607,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_7),32);
        bufp->chgIData(oldp+608,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_0),32);
        bufp->chgIData(oldp+609,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_1),32);
        bufp->chgIData(oldp+610,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_2),32);
        bufp->chgIData(oldp+611,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_3),32);
        bufp->chgIData(oldp+612,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_4),32);
        bufp->chgIData(oldp+613,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_5),32);
        bufp->chgIData(oldp+614,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_6),32);
        bufp->chgIData(oldp+615,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_7),32);
        bufp->chgIData(oldp+616,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_0),32);
        bufp->chgIData(oldp+617,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_1),32);
        bufp->chgIData(oldp+618,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_2),32);
        bufp->chgIData(oldp+619,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_3),32);
        bufp->chgIData(oldp+620,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_4),32);
        bufp->chgIData(oldp+621,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_5),32);
        bufp->chgIData(oldp+622,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_6),32);
        bufp->chgIData(oldp+623,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_7),32);
        bufp->chgIData(oldp+624,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_0),32);
        bufp->chgIData(oldp+625,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_1),32);
        bufp->chgIData(oldp+626,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_2),32);
        bufp->chgIData(oldp+627,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_3),32);
        bufp->chgIData(oldp+628,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_4),32);
        bufp->chgIData(oldp+629,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_5),32);
        bufp->chgIData(oldp+630,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_6),32);
        bufp->chgIData(oldp+631,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_7),32);
        bufp->chgIData(oldp+632,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_0),32);
        bufp->chgIData(oldp+633,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_1),32);
        bufp->chgIData(oldp+634,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_2),32);
        bufp->chgIData(oldp+635,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_3),32);
        bufp->chgIData(oldp+636,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_4),32);
        bufp->chgIData(oldp+637,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_5),32);
        bufp->chgIData(oldp+638,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_6),32);
        bufp->chgIData(oldp+639,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_7),32);
        bufp->chgIData(oldp+640,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_0),32);
        bufp->chgIData(oldp+641,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_1),32);
        bufp->chgIData(oldp+642,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_2),32);
        bufp->chgIData(oldp+643,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_3),32);
        bufp->chgIData(oldp+644,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_4),32);
        bufp->chgIData(oldp+645,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_5),32);
        bufp->chgIData(oldp+646,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_6),32);
        bufp->chgIData(oldp+647,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_7),32);
        bufp->chgIData(oldp+648,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_0),32);
        bufp->chgIData(oldp+649,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_1),32);
        bufp->chgIData(oldp+650,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_2),32);
        bufp->chgIData(oldp+651,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_3),32);
        bufp->chgIData(oldp+652,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_4),32);
        bufp->chgIData(oldp+653,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_5),32);
        bufp->chgIData(oldp+654,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_6),32);
        bufp->chgIData(oldp+655,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_7),32);
        bufp->chgIData(oldp+656,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_0),32);
        bufp->chgIData(oldp+657,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_1),32);
        bufp->chgIData(oldp+658,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_2),32);
        bufp->chgIData(oldp+659,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_3),32);
        bufp->chgIData(oldp+660,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_4),32);
        bufp->chgIData(oldp+661,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_5),32);
        bufp->chgIData(oldp+662,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_6),32);
        bufp->chgIData(oldp+663,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_7),32);
        bufp->chgIData(oldp+664,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_0),32);
        bufp->chgIData(oldp+665,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_1),32);
        bufp->chgIData(oldp+666,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_2),32);
        bufp->chgIData(oldp+667,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_3),32);
        bufp->chgIData(oldp+668,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_4),32);
        bufp->chgIData(oldp+669,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_5),32);
        bufp->chgIData(oldp+670,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_6),32);
        bufp->chgIData(oldp+671,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_7),32);
        bufp->chgIData(oldp+672,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_0),32);
        bufp->chgIData(oldp+673,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_1),32);
        bufp->chgIData(oldp+674,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_2),32);
        bufp->chgIData(oldp+675,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_3),32);
        bufp->chgIData(oldp+676,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_4),32);
        bufp->chgIData(oldp+677,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_5),32);
        bufp->chgIData(oldp+678,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_6),32);
        bufp->chgIData(oldp+679,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_7),32);
        bufp->chgIData(oldp+680,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_0),32);
        bufp->chgIData(oldp+681,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_1),32);
        bufp->chgIData(oldp+682,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_2),32);
        bufp->chgIData(oldp+683,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_3),32);
        bufp->chgIData(oldp+684,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_4),32);
        bufp->chgIData(oldp+685,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_5),32);
        bufp->chgIData(oldp+686,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_6),32);
        bufp->chgIData(oldp+687,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_7),32);
        bufp->chgIData(oldp+688,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_0),32);
        bufp->chgIData(oldp+689,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_1),32);
        bufp->chgIData(oldp+690,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_2),32);
        bufp->chgIData(oldp+691,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_3),32);
        bufp->chgIData(oldp+692,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_4),32);
        bufp->chgIData(oldp+693,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_5),32);
        bufp->chgIData(oldp+694,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_6),32);
        bufp->chgIData(oldp+695,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_7),32);
        bufp->chgIData(oldp+696,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_0),32);
        bufp->chgIData(oldp+697,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_1),32);
        bufp->chgIData(oldp+698,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_2),32);
        bufp->chgIData(oldp+699,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_3),32);
        bufp->chgIData(oldp+700,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_4),32);
        bufp->chgIData(oldp+701,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_5),32);
        bufp->chgIData(oldp+702,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_6),32);
        bufp->chgIData(oldp+703,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_7),32);
        bufp->chgIData(oldp+704,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_0),32);
        bufp->chgIData(oldp+705,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_1),32);
        bufp->chgIData(oldp+706,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_2),32);
        bufp->chgIData(oldp+707,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_3),32);
        bufp->chgIData(oldp+708,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_4),32);
        bufp->chgIData(oldp+709,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_5),32);
        bufp->chgIData(oldp+710,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_6),32);
        bufp->chgIData(oldp+711,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_7),32);
        bufp->chgIData(oldp+712,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_0),32);
        bufp->chgIData(oldp+713,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_1),32);
        bufp->chgIData(oldp+714,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_2),32);
        bufp->chgIData(oldp+715,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_3),32);
        bufp->chgIData(oldp+716,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_4),32);
        bufp->chgIData(oldp+717,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_5),32);
        bufp->chgIData(oldp+718,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_6),32);
        bufp->chgIData(oldp+719,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_7),32);
        bufp->chgIData(oldp+720,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_0),32);
        bufp->chgIData(oldp+721,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_1),32);
        bufp->chgIData(oldp+722,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_2),32);
        bufp->chgIData(oldp+723,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_3),32);
        bufp->chgIData(oldp+724,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_4),32);
        bufp->chgIData(oldp+725,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_5),32);
        bufp->chgIData(oldp+726,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_6),32);
        bufp->chgIData(oldp+727,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_7),32);
        bufp->chgIData(oldp+728,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_0),32);
        bufp->chgIData(oldp+729,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_1),32);
        bufp->chgIData(oldp+730,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_2),32);
        bufp->chgIData(oldp+731,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_3),32);
        bufp->chgIData(oldp+732,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_4),32);
        bufp->chgIData(oldp+733,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_5),32);
        bufp->chgIData(oldp+734,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_6),32);
        bufp->chgIData(oldp+735,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_7),32);
        bufp->chgIData(oldp+736,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_0),32);
        bufp->chgIData(oldp+737,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_1),32);
        bufp->chgIData(oldp+738,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_2),32);
        bufp->chgIData(oldp+739,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_3),32);
        bufp->chgIData(oldp+740,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_4),32);
        bufp->chgIData(oldp+741,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_5),32);
        bufp->chgIData(oldp+742,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_6),32);
        bufp->chgIData(oldp+743,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_7),32);
        bufp->chgIData(oldp+744,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_0),32);
        bufp->chgIData(oldp+745,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_1),32);
        bufp->chgIData(oldp+746,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_2),32);
        bufp->chgIData(oldp+747,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_3),32);
        bufp->chgIData(oldp+748,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_4),32);
        bufp->chgIData(oldp+749,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_5),32);
        bufp->chgIData(oldp+750,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_6),32);
        bufp->chgIData(oldp+751,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_7),32);
        bufp->chgIData(oldp+752,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_0),32);
        bufp->chgIData(oldp+753,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_1),32);
        bufp->chgIData(oldp+754,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_2),32);
        bufp->chgIData(oldp+755,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_3),32);
        bufp->chgIData(oldp+756,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_4),32);
        bufp->chgIData(oldp+757,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_5),32);
        bufp->chgIData(oldp+758,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_6),32);
        bufp->chgIData(oldp+759,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_7),32);
        bufp->chgIData(oldp+760,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_0),32);
        bufp->chgIData(oldp+761,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_1),32);
        bufp->chgIData(oldp+762,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_2),32);
        bufp->chgIData(oldp+763,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_3),32);
        bufp->chgIData(oldp+764,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_4),32);
        bufp->chgIData(oldp+765,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_5),32);
        bufp->chgIData(oldp+766,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_6),32);
        bufp->chgIData(oldp+767,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_7),32);
        bufp->chgIData(oldp+768,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_0),32);
        bufp->chgIData(oldp+769,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_1),32);
        bufp->chgIData(oldp+770,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_2),32);
        bufp->chgIData(oldp+771,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_3),32);
        bufp->chgIData(oldp+772,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_4),32);
        bufp->chgIData(oldp+773,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_5),32);
        bufp->chgIData(oldp+774,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_6),32);
        bufp->chgIData(oldp+775,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_7),32);
        bufp->chgIData(oldp+776,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_0),32);
        bufp->chgIData(oldp+777,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_1),32);
        bufp->chgIData(oldp+778,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_2),32);
        bufp->chgIData(oldp+779,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_3),32);
        bufp->chgIData(oldp+780,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_4),32);
        bufp->chgIData(oldp+781,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_5),32);
        bufp->chgIData(oldp+782,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_6),32);
        bufp->chgIData(oldp+783,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_7),32);
        bufp->chgIData(oldp+784,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_0),32);
        bufp->chgIData(oldp+785,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_1),32);
        bufp->chgIData(oldp+786,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_2),32);
        bufp->chgIData(oldp+787,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_3),32);
        bufp->chgIData(oldp+788,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_4),32);
        bufp->chgIData(oldp+789,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_5),32);
        bufp->chgIData(oldp+790,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_6),32);
        bufp->chgIData(oldp+791,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_7),32);
        bufp->chgIData(oldp+792,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_0),32);
        bufp->chgIData(oldp+793,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_1),32);
        bufp->chgIData(oldp+794,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_2),32);
        bufp->chgIData(oldp+795,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_3),32);
        bufp->chgIData(oldp+796,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_4),32);
        bufp->chgIData(oldp+797,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_5),32);
        bufp->chgIData(oldp+798,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_6),32);
        bufp->chgIData(oldp+799,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_7),32);
        bufp->chgIData(oldp+800,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_0),32);
        bufp->chgIData(oldp+801,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_1),32);
        bufp->chgIData(oldp+802,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_2),32);
        bufp->chgIData(oldp+803,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_3),32);
        bufp->chgIData(oldp+804,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_4),32);
        bufp->chgIData(oldp+805,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_5),32);
        bufp->chgIData(oldp+806,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_6),32);
        bufp->chgIData(oldp+807,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_7),32);
        bufp->chgIData(oldp+808,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_0),32);
        bufp->chgIData(oldp+809,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_1),32);
        bufp->chgIData(oldp+810,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_2),32);
        bufp->chgIData(oldp+811,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_3),32);
        bufp->chgIData(oldp+812,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_4),32);
        bufp->chgIData(oldp+813,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_5),32);
        bufp->chgIData(oldp+814,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_6),32);
        bufp->chgIData(oldp+815,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_7),32);
        bufp->chgIData(oldp+816,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_0),32);
        bufp->chgIData(oldp+817,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_1),32);
        bufp->chgIData(oldp+818,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_2),32);
        bufp->chgIData(oldp+819,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_3),32);
        bufp->chgIData(oldp+820,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_4),32);
        bufp->chgIData(oldp+821,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_5),32);
        bufp->chgIData(oldp+822,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_6),32);
        bufp->chgIData(oldp+823,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_7),32);
        bufp->chgIData(oldp+824,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_0),32);
        bufp->chgIData(oldp+825,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_1),32);
        bufp->chgIData(oldp+826,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_2),32);
        bufp->chgIData(oldp+827,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_3),32);
        bufp->chgIData(oldp+828,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_4),32);
        bufp->chgIData(oldp+829,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_5),32);
        bufp->chgIData(oldp+830,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_6),32);
        bufp->chgIData(oldp+831,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_7),32);
        bufp->chgIData(oldp+832,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_0),32);
        bufp->chgIData(oldp+833,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_1),32);
        bufp->chgIData(oldp+834,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_2),32);
        bufp->chgIData(oldp+835,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_3),32);
        bufp->chgIData(oldp+836,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_4),32);
        bufp->chgIData(oldp+837,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_5),32);
        bufp->chgIData(oldp+838,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_6),32);
        bufp->chgIData(oldp+839,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_7),32);
        bufp->chgIData(oldp+840,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_0),32);
        bufp->chgIData(oldp+841,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_1),32);
        bufp->chgIData(oldp+842,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_2),32);
        bufp->chgIData(oldp+843,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_3),32);
        bufp->chgIData(oldp+844,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_4),32);
        bufp->chgIData(oldp+845,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_5),32);
        bufp->chgIData(oldp+846,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_6),32);
        bufp->chgIData(oldp+847,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_7),32);
        bufp->chgIData(oldp+848,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_0),32);
        bufp->chgIData(oldp+849,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_1),32);
        bufp->chgIData(oldp+850,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_2),32);
        bufp->chgIData(oldp+851,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_3),32);
        bufp->chgIData(oldp+852,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_4),32);
        bufp->chgIData(oldp+853,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_5),32);
        bufp->chgIData(oldp+854,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_6),32);
        bufp->chgIData(oldp+855,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_7),32);
        bufp->chgIData(oldp+856,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_0),32);
        bufp->chgIData(oldp+857,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_1),32);
        bufp->chgIData(oldp+858,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_2),32);
        bufp->chgIData(oldp+859,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_3),32);
        bufp->chgIData(oldp+860,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_4),32);
        bufp->chgIData(oldp+861,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_5),32);
        bufp->chgIData(oldp+862,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_6),32);
        bufp->chgIData(oldp+863,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_7),32);
        bufp->chgIData(oldp+864,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_0),32);
        bufp->chgIData(oldp+865,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_1),32);
        bufp->chgIData(oldp+866,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_2),32);
        bufp->chgIData(oldp+867,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_3),32);
        bufp->chgIData(oldp+868,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_4),32);
        bufp->chgIData(oldp+869,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_5),32);
        bufp->chgIData(oldp+870,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_6),32);
        bufp->chgIData(oldp+871,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_7),32);
        bufp->chgIData(oldp+872,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_0),32);
        bufp->chgIData(oldp+873,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_1),32);
        bufp->chgIData(oldp+874,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_2),32);
        bufp->chgIData(oldp+875,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_3),32);
        bufp->chgIData(oldp+876,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_4),32);
        bufp->chgIData(oldp+877,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_5),32);
        bufp->chgIData(oldp+878,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_6),32);
        bufp->chgIData(oldp+879,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_7),32);
        bufp->chgIData(oldp+880,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_0),32);
        bufp->chgIData(oldp+881,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_1),32);
        bufp->chgIData(oldp+882,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_2),32);
        bufp->chgIData(oldp+883,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_3),32);
        bufp->chgIData(oldp+884,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_4),32);
        bufp->chgIData(oldp+885,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_5),32);
        bufp->chgIData(oldp+886,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_6),32);
        bufp->chgIData(oldp+887,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_7),32);
        bufp->chgIData(oldp+888,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_0),32);
        bufp->chgIData(oldp+889,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_1),32);
        bufp->chgIData(oldp+890,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_2),32);
        bufp->chgIData(oldp+891,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_3),32);
        bufp->chgIData(oldp+892,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_4),32);
        bufp->chgIData(oldp+893,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_5),32);
        bufp->chgIData(oldp+894,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_6),32);
        bufp->chgIData(oldp+895,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_7),32);
        bufp->chgIData(oldp+896,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_0),32);
        bufp->chgIData(oldp+897,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_1),32);
        bufp->chgIData(oldp+898,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_2),32);
        bufp->chgIData(oldp+899,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_3),32);
        bufp->chgIData(oldp+900,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_4),32);
        bufp->chgIData(oldp+901,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_5),32);
        bufp->chgIData(oldp+902,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_6),32);
        bufp->chgIData(oldp+903,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_7),32);
        bufp->chgIData(oldp+904,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_0),32);
        bufp->chgIData(oldp+905,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_1),32);
        bufp->chgIData(oldp+906,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_2),32);
        bufp->chgIData(oldp+907,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_3),32);
        bufp->chgIData(oldp+908,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_4),32);
        bufp->chgIData(oldp+909,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_5),32);
        bufp->chgIData(oldp+910,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_6),32);
        bufp->chgIData(oldp+911,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_7),32);
        bufp->chgIData(oldp+912,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_0),32);
        bufp->chgIData(oldp+913,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_1),32);
        bufp->chgIData(oldp+914,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_2),32);
        bufp->chgIData(oldp+915,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_3),32);
        bufp->chgIData(oldp+916,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_4),32);
        bufp->chgIData(oldp+917,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_5),32);
        bufp->chgIData(oldp+918,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_6),32);
        bufp->chgIData(oldp+919,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_7),32);
        bufp->chgIData(oldp+920,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_0),32);
        bufp->chgIData(oldp+921,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_1),32);
        bufp->chgIData(oldp+922,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_2),32);
        bufp->chgIData(oldp+923,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_3),32);
        bufp->chgIData(oldp+924,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_4),32);
        bufp->chgIData(oldp+925,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_5),32);
        bufp->chgIData(oldp+926,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_6),32);
        bufp->chgIData(oldp+927,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_7),32);
        bufp->chgIData(oldp+928,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_0),32);
        bufp->chgIData(oldp+929,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_1),32);
        bufp->chgIData(oldp+930,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_2),32);
        bufp->chgIData(oldp+931,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_3),32);
        bufp->chgIData(oldp+932,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_4),32);
        bufp->chgIData(oldp+933,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_5),32);
        bufp->chgIData(oldp+934,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_6),32);
        bufp->chgIData(oldp+935,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_7),32);
        bufp->chgIData(oldp+936,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_0),32);
        bufp->chgIData(oldp+937,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_1),32);
        bufp->chgIData(oldp+938,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_2),32);
        bufp->chgIData(oldp+939,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_3),32);
        bufp->chgIData(oldp+940,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_4),32);
        bufp->chgIData(oldp+941,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_5),32);
        bufp->chgIData(oldp+942,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_6),32);
        bufp->chgIData(oldp+943,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_7),32);
        bufp->chgIData(oldp+944,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_0),32);
        bufp->chgIData(oldp+945,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_1),32);
        bufp->chgIData(oldp+946,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_2),32);
        bufp->chgIData(oldp+947,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_3),32);
        bufp->chgIData(oldp+948,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_4),32);
        bufp->chgIData(oldp+949,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_5),32);
        bufp->chgIData(oldp+950,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_6),32);
        bufp->chgIData(oldp+951,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_7),32);
        bufp->chgIData(oldp+952,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_0),32);
        bufp->chgIData(oldp+953,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_1),32);
        bufp->chgIData(oldp+954,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_2),32);
        bufp->chgIData(oldp+955,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_3),32);
        bufp->chgIData(oldp+956,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_4),32);
        bufp->chgIData(oldp+957,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_5),32);
        bufp->chgIData(oldp+958,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_6),32);
        bufp->chgIData(oldp+959,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_7),32);
        bufp->chgIData(oldp+960,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_0),32);
        bufp->chgIData(oldp+961,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_1),32);
        bufp->chgIData(oldp+962,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_2),32);
        bufp->chgIData(oldp+963,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_3),32);
        bufp->chgIData(oldp+964,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_4),32);
        bufp->chgIData(oldp+965,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_5),32);
        bufp->chgIData(oldp+966,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_6),32);
        bufp->chgIData(oldp+967,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_7),32);
        bufp->chgIData(oldp+968,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_0),32);
        bufp->chgIData(oldp+969,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_1),32);
        bufp->chgIData(oldp+970,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_2),32);
        bufp->chgIData(oldp+971,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_3),32);
        bufp->chgIData(oldp+972,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_4),32);
        bufp->chgIData(oldp+973,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_5),32);
        bufp->chgIData(oldp+974,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_6),32);
        bufp->chgIData(oldp+975,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_7),32);
        bufp->chgIData(oldp+976,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_0),32);
        bufp->chgIData(oldp+977,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_1),32);
        bufp->chgIData(oldp+978,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_2),32);
        bufp->chgIData(oldp+979,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_3),32);
        bufp->chgIData(oldp+980,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_4),32);
        bufp->chgIData(oldp+981,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_5),32);
        bufp->chgIData(oldp+982,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_6),32);
        bufp->chgIData(oldp+983,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_7),32);
        bufp->chgIData(oldp+984,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_0),32);
        bufp->chgIData(oldp+985,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_1),32);
        bufp->chgIData(oldp+986,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_2),32);
        bufp->chgIData(oldp+987,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_3),32);
        bufp->chgIData(oldp+988,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_4),32);
        bufp->chgIData(oldp+989,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_5),32);
        bufp->chgIData(oldp+990,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_6),32);
        bufp->chgIData(oldp+991,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_7),32);
        bufp->chgIData(oldp+992,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_0),32);
        bufp->chgIData(oldp+993,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_1),32);
        bufp->chgIData(oldp+994,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_2),32);
        bufp->chgIData(oldp+995,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_3),32);
        bufp->chgIData(oldp+996,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_4),32);
        bufp->chgIData(oldp+997,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_5),32);
        bufp->chgIData(oldp+998,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_6),32);
        bufp->chgIData(oldp+999,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_7),32);
        bufp->chgIData(oldp+1000,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_0),32);
        bufp->chgIData(oldp+1001,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_1),32);
        bufp->chgIData(oldp+1002,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_2),32);
        bufp->chgIData(oldp+1003,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_3),32);
        bufp->chgIData(oldp+1004,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_4),32);
        bufp->chgIData(oldp+1005,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_5),32);
        bufp->chgIData(oldp+1006,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_6),32);
        bufp->chgIData(oldp+1007,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_7),32);
        bufp->chgIData(oldp+1008,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_0),32);
        bufp->chgIData(oldp+1009,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_1),32);
        bufp->chgIData(oldp+1010,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_2),32);
        bufp->chgIData(oldp+1011,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_3),32);
        bufp->chgIData(oldp+1012,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_4),32);
        bufp->chgIData(oldp+1013,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_5),32);
        bufp->chgIData(oldp+1014,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_6),32);
        bufp->chgIData(oldp+1015,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_7),32);
        bufp->chgIData(oldp+1016,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_0),32);
        bufp->chgIData(oldp+1017,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_1),32);
        bufp->chgIData(oldp+1018,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_2),32);
        bufp->chgIData(oldp+1019,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_3),32);
        bufp->chgIData(oldp+1020,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_4),32);
        bufp->chgIData(oldp+1021,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_5),32);
        bufp->chgIData(oldp+1022,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_6),32);
        bufp->chgIData(oldp+1023,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_7),32);
        bufp->chgIData(oldp+1024,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_0),32);
        bufp->chgIData(oldp+1025,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_1),32);
        bufp->chgIData(oldp+1026,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_2),32);
        bufp->chgIData(oldp+1027,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_3),32);
        bufp->chgIData(oldp+1028,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_4),32);
        bufp->chgIData(oldp+1029,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_5),32);
        bufp->chgIData(oldp+1030,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_6),32);
        bufp->chgIData(oldp+1031,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_7),32);
        bufp->chgIData(oldp+1032,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_0),32);
        bufp->chgIData(oldp+1033,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_1),32);
        bufp->chgIData(oldp+1034,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_2),32);
        bufp->chgIData(oldp+1035,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_3),32);
        bufp->chgIData(oldp+1036,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_4),32);
        bufp->chgIData(oldp+1037,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_5),32);
        bufp->chgIData(oldp+1038,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_6),32);
        bufp->chgIData(oldp+1039,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_7),32);
        bufp->chgIData(oldp+1040,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_0),32);
        bufp->chgIData(oldp+1041,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_1),32);
        bufp->chgIData(oldp+1042,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_2),32);
        bufp->chgIData(oldp+1043,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_3),32);
        bufp->chgIData(oldp+1044,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_4),32);
        bufp->chgIData(oldp+1045,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_5),32);
        bufp->chgIData(oldp+1046,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_6),32);
        bufp->chgIData(oldp+1047,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_7),32);
        bufp->chgIData(oldp+1048,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_0),32);
        bufp->chgIData(oldp+1049,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_1),32);
        bufp->chgIData(oldp+1050,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_2),32);
        bufp->chgIData(oldp+1051,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_3),32);
        bufp->chgIData(oldp+1052,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_4),32);
        bufp->chgIData(oldp+1053,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_5),32);
        bufp->chgIData(oldp+1054,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_6),32);
        bufp->chgIData(oldp+1055,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_7),32);
        bufp->chgIData(oldp+1056,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_0),32);
        bufp->chgIData(oldp+1057,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_1),32);
        bufp->chgIData(oldp+1058,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_2),32);
        bufp->chgIData(oldp+1059,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_3),32);
        bufp->chgIData(oldp+1060,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_4),32);
        bufp->chgIData(oldp+1061,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_5),32);
        bufp->chgIData(oldp+1062,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_6),32);
        bufp->chgIData(oldp+1063,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_7),32);
        bufp->chgIData(oldp+1064,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_0),32);
        bufp->chgIData(oldp+1065,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_1),32);
        bufp->chgIData(oldp+1066,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_2),32);
        bufp->chgIData(oldp+1067,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_3),32);
        bufp->chgIData(oldp+1068,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_4),32);
        bufp->chgIData(oldp+1069,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_5),32);
        bufp->chgIData(oldp+1070,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_6),32);
        bufp->chgIData(oldp+1071,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_7),32);
        bufp->chgIData(oldp+1072,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_0),32);
        bufp->chgIData(oldp+1073,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_1),32);
        bufp->chgIData(oldp+1074,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_2),32);
        bufp->chgIData(oldp+1075,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_3),32);
        bufp->chgIData(oldp+1076,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_4),32);
        bufp->chgIData(oldp+1077,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_5),32);
        bufp->chgIData(oldp+1078,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_6),32);
        bufp->chgIData(oldp+1079,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_7),32);
        bufp->chgIData(oldp+1080,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_0),32);
        bufp->chgIData(oldp+1081,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_1),32);
        bufp->chgIData(oldp+1082,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_2),32);
        bufp->chgIData(oldp+1083,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_3),32);
        bufp->chgIData(oldp+1084,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_4),32);
        bufp->chgIData(oldp+1085,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_5),32);
        bufp->chgIData(oldp+1086,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_6),32);
        bufp->chgIData(oldp+1087,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_7),32);
        bufp->chgIData(oldp+1088,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_0),32);
        bufp->chgIData(oldp+1089,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_1),32);
        bufp->chgIData(oldp+1090,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_2),32);
        bufp->chgIData(oldp+1091,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_3),32);
        bufp->chgIData(oldp+1092,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_4),32);
        bufp->chgIData(oldp+1093,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_5),32);
        bufp->chgIData(oldp+1094,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_6),32);
        bufp->chgIData(oldp+1095,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_7),32);
        bufp->chgIData(oldp+1096,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_0),32);
        bufp->chgIData(oldp+1097,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_1),32);
        bufp->chgIData(oldp+1098,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_2),32);
        bufp->chgIData(oldp+1099,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_3),32);
        bufp->chgIData(oldp+1100,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_4),32);
        bufp->chgIData(oldp+1101,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_5),32);
        bufp->chgIData(oldp+1102,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_6),32);
        bufp->chgIData(oldp+1103,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_7),32);
        bufp->chgIData(oldp+1104,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_0),32);
        bufp->chgIData(oldp+1105,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_1),32);
        bufp->chgIData(oldp+1106,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_2),32);
        bufp->chgIData(oldp+1107,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_3),32);
        bufp->chgIData(oldp+1108,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_4),32);
        bufp->chgIData(oldp+1109,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_5),32);
        bufp->chgIData(oldp+1110,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_6),32);
        bufp->chgIData(oldp+1111,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_7),32);
        bufp->chgIData(oldp+1112,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_0),32);
        bufp->chgIData(oldp+1113,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_1),32);
        bufp->chgIData(oldp+1114,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_2),32);
        bufp->chgIData(oldp+1115,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_3),32);
        bufp->chgIData(oldp+1116,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_4),32);
        bufp->chgIData(oldp+1117,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_5),32);
        bufp->chgIData(oldp+1118,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_6),32);
        bufp->chgIData(oldp+1119,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_7),32);
        bufp->chgIData(oldp+1120,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_0),32);
        bufp->chgIData(oldp+1121,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_1),32);
        bufp->chgIData(oldp+1122,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_2),32);
        bufp->chgIData(oldp+1123,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_3),32);
        bufp->chgIData(oldp+1124,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_4),32);
        bufp->chgIData(oldp+1125,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_5),32);
        bufp->chgIData(oldp+1126,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_6),32);
        bufp->chgIData(oldp+1127,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_7),32);
        bufp->chgIData(oldp+1128,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_0),32);
        bufp->chgIData(oldp+1129,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_1),32);
        bufp->chgIData(oldp+1130,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_2),32);
        bufp->chgIData(oldp+1131,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_3),32);
        bufp->chgIData(oldp+1132,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_4),32);
        bufp->chgIData(oldp+1133,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_5),32);
        bufp->chgIData(oldp+1134,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_6),32);
        bufp->chgIData(oldp+1135,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_7),32);
        bufp->chgIData(oldp+1136,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_0),32);
        bufp->chgIData(oldp+1137,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_1),32);
        bufp->chgIData(oldp+1138,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_2),32);
        bufp->chgIData(oldp+1139,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_3),32);
        bufp->chgIData(oldp+1140,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_4),32);
        bufp->chgIData(oldp+1141,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_5),32);
        bufp->chgIData(oldp+1142,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_6),32);
        bufp->chgIData(oldp+1143,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_7),32);
        bufp->chgIData(oldp+1144,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_0),32);
        bufp->chgIData(oldp+1145,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_1),32);
        bufp->chgIData(oldp+1146,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_2),32);
        bufp->chgIData(oldp+1147,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_3),32);
        bufp->chgIData(oldp+1148,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_4),32);
        bufp->chgIData(oldp+1149,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_5),32);
        bufp->chgIData(oldp+1150,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_6),32);
        bufp->chgIData(oldp+1151,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_7),32);
        bufp->chgIData(oldp+1152,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_0),32);
        bufp->chgIData(oldp+1153,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_1),32);
        bufp->chgIData(oldp+1154,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_2),32);
        bufp->chgIData(oldp+1155,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_3),32);
        bufp->chgIData(oldp+1156,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_4),32);
        bufp->chgIData(oldp+1157,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_5),32);
        bufp->chgIData(oldp+1158,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_6),32);
        bufp->chgIData(oldp+1159,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_7),32);
        bufp->chgIData(oldp+1160,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_0),32);
        bufp->chgIData(oldp+1161,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_1),32);
        bufp->chgIData(oldp+1162,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_2),32);
        bufp->chgIData(oldp+1163,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_3),32);
        bufp->chgIData(oldp+1164,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_4),32);
        bufp->chgIData(oldp+1165,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_5),32);
        bufp->chgIData(oldp+1166,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_6),32);
        bufp->chgIData(oldp+1167,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_7),32);
        bufp->chgIData(oldp+1168,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_0),32);
        bufp->chgIData(oldp+1169,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_1),32);
        bufp->chgIData(oldp+1170,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_2),32);
        bufp->chgIData(oldp+1171,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_3),32);
        bufp->chgIData(oldp+1172,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_4),32);
        bufp->chgIData(oldp+1173,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_5),32);
        bufp->chgIData(oldp+1174,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_6),32);
        bufp->chgIData(oldp+1175,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_7),32);
        bufp->chgIData(oldp+1176,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_0),32);
        bufp->chgIData(oldp+1177,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_1),32);
        bufp->chgIData(oldp+1178,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_2),32);
        bufp->chgIData(oldp+1179,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_3),32);
        bufp->chgIData(oldp+1180,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_4),32);
        bufp->chgIData(oldp+1181,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_5),32);
        bufp->chgIData(oldp+1182,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_6),32);
        bufp->chgIData(oldp+1183,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_7),32);
        bufp->chgIData(oldp+1184,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_0),32);
        bufp->chgIData(oldp+1185,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_1),32);
        bufp->chgIData(oldp+1186,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_2),32);
        bufp->chgIData(oldp+1187,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_3),32);
        bufp->chgIData(oldp+1188,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_4),32);
        bufp->chgIData(oldp+1189,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_5),32);
        bufp->chgIData(oldp+1190,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_6),32);
        bufp->chgIData(oldp+1191,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_7),32);
        bufp->chgIData(oldp+1192,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_0),32);
        bufp->chgIData(oldp+1193,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_1),32);
        bufp->chgIData(oldp+1194,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_2),32);
        bufp->chgIData(oldp+1195,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_3),32);
        bufp->chgIData(oldp+1196,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_4),32);
        bufp->chgIData(oldp+1197,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_5),32);
        bufp->chgIData(oldp+1198,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_6),32);
        bufp->chgIData(oldp+1199,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_7),32);
        bufp->chgIData(oldp+1200,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_0),32);
        bufp->chgIData(oldp+1201,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_1),32);
        bufp->chgIData(oldp+1202,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_2),32);
        bufp->chgIData(oldp+1203,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_3),32);
        bufp->chgIData(oldp+1204,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_4),32);
        bufp->chgIData(oldp+1205,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_5),32);
        bufp->chgIData(oldp+1206,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_6),32);
        bufp->chgIData(oldp+1207,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_7),32);
        bufp->chgIData(oldp+1208,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_0),32);
        bufp->chgIData(oldp+1209,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_1),32);
        bufp->chgIData(oldp+1210,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_2),32);
        bufp->chgIData(oldp+1211,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_3),32);
        bufp->chgIData(oldp+1212,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_4),32);
        bufp->chgIData(oldp+1213,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_5),32);
        bufp->chgIData(oldp+1214,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_6),32);
        bufp->chgIData(oldp+1215,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_7),32);
        bufp->chgIData(oldp+1216,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_0),32);
        bufp->chgIData(oldp+1217,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_1),32);
        bufp->chgIData(oldp+1218,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_2),32);
        bufp->chgIData(oldp+1219,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_3),32);
        bufp->chgIData(oldp+1220,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_4),32);
        bufp->chgIData(oldp+1221,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_5),32);
        bufp->chgIData(oldp+1222,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_6),32);
        bufp->chgIData(oldp+1223,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_7),32);
        bufp->chgIData(oldp+1224,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_0),32);
        bufp->chgIData(oldp+1225,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_1),32);
        bufp->chgIData(oldp+1226,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_2),32);
        bufp->chgIData(oldp+1227,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_3),32);
        bufp->chgIData(oldp+1228,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_4),32);
        bufp->chgIData(oldp+1229,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_5),32);
        bufp->chgIData(oldp+1230,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_6),32);
        bufp->chgIData(oldp+1231,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_7),32);
        bufp->chgIData(oldp+1232,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_0),32);
        bufp->chgIData(oldp+1233,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_1),32);
        bufp->chgIData(oldp+1234,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_2),32);
        bufp->chgIData(oldp+1235,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_3),32);
        bufp->chgIData(oldp+1236,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_4),32);
        bufp->chgIData(oldp+1237,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_5),32);
        bufp->chgIData(oldp+1238,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_6),32);
        bufp->chgIData(oldp+1239,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_7),32);
        bufp->chgIData(oldp+1240,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_0),32);
        bufp->chgIData(oldp+1241,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_1),32);
        bufp->chgIData(oldp+1242,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_2),32);
        bufp->chgIData(oldp+1243,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_3),32);
        bufp->chgIData(oldp+1244,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_4),32);
        bufp->chgIData(oldp+1245,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_5),32);
        bufp->chgIData(oldp+1246,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_6),32);
        bufp->chgIData(oldp+1247,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_7),32);
        bufp->chgIData(oldp+1248,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_0),32);
        bufp->chgIData(oldp+1249,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_1),32);
        bufp->chgIData(oldp+1250,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_2),32);
        bufp->chgIData(oldp+1251,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_3),32);
        bufp->chgIData(oldp+1252,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_4),32);
        bufp->chgIData(oldp+1253,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_5),32);
        bufp->chgIData(oldp+1254,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_6),32);
        bufp->chgIData(oldp+1255,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_7),32);
        bufp->chgIData(oldp+1256,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_0),32);
        bufp->chgIData(oldp+1257,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_1),32);
        bufp->chgIData(oldp+1258,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_2),32);
        bufp->chgIData(oldp+1259,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_3),32);
        bufp->chgIData(oldp+1260,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_4),32);
        bufp->chgIData(oldp+1261,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_5),32);
        bufp->chgIData(oldp+1262,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_6),32);
        bufp->chgIData(oldp+1263,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_7),32);
        bufp->chgIData(oldp+1264,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_0),32);
        bufp->chgIData(oldp+1265,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_1),32);
        bufp->chgIData(oldp+1266,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_2),32);
        bufp->chgIData(oldp+1267,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_3),32);
        bufp->chgIData(oldp+1268,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_4),32);
        bufp->chgIData(oldp+1269,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_5),32);
        bufp->chgIData(oldp+1270,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_6),32);
        bufp->chgIData(oldp+1271,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_7),32);
        bufp->chgIData(oldp+1272,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_0),32);
        bufp->chgIData(oldp+1273,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_1),32);
        bufp->chgIData(oldp+1274,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_2),32);
        bufp->chgIData(oldp+1275,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_3),32);
        bufp->chgIData(oldp+1276,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_4),32);
        bufp->chgIData(oldp+1277,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_5),32);
        bufp->chgIData(oldp+1278,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_6),32);
        bufp->chgIData(oldp+1279,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_7),32);
        bufp->chgIData(oldp+1280,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_0),32);
        bufp->chgIData(oldp+1281,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_1),32);
        bufp->chgIData(oldp+1282,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_2),32);
        bufp->chgIData(oldp+1283,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_3),32);
        bufp->chgIData(oldp+1284,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_4),32);
        bufp->chgIData(oldp+1285,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_5),32);
        bufp->chgIData(oldp+1286,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_6),32);
        bufp->chgIData(oldp+1287,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_7),32);
        bufp->chgIData(oldp+1288,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_0),32);
        bufp->chgIData(oldp+1289,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_1),32);
        bufp->chgIData(oldp+1290,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_2),32);
        bufp->chgIData(oldp+1291,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_3),32);
        bufp->chgIData(oldp+1292,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_4),32);
        bufp->chgIData(oldp+1293,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_5),32);
        bufp->chgIData(oldp+1294,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_6),32);
        bufp->chgIData(oldp+1295,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_7),32);
        bufp->chgIData(oldp+1296,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_0),32);
        bufp->chgIData(oldp+1297,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_1),32);
        bufp->chgIData(oldp+1298,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_2),32);
        bufp->chgIData(oldp+1299,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_3),32);
        bufp->chgIData(oldp+1300,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_4),32);
        bufp->chgIData(oldp+1301,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_5),32);
        bufp->chgIData(oldp+1302,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_6),32);
        bufp->chgIData(oldp+1303,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_7),32);
        bufp->chgIData(oldp+1304,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_0),32);
        bufp->chgIData(oldp+1305,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_1),32);
        bufp->chgIData(oldp+1306,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_2),32);
        bufp->chgIData(oldp+1307,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_3),32);
        bufp->chgIData(oldp+1308,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_4),32);
        bufp->chgIData(oldp+1309,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_5),32);
        bufp->chgIData(oldp+1310,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_6),32);
        bufp->chgIData(oldp+1311,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_7),32);
        bufp->chgIData(oldp+1312,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_0),32);
        bufp->chgIData(oldp+1313,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_1),32);
        bufp->chgIData(oldp+1314,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_2),32);
        bufp->chgIData(oldp+1315,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_3),32);
        bufp->chgIData(oldp+1316,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_4),32);
        bufp->chgIData(oldp+1317,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_5),32);
        bufp->chgIData(oldp+1318,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_6),32);
        bufp->chgIData(oldp+1319,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_7),32);
        bufp->chgIData(oldp+1320,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_0),32);
        bufp->chgIData(oldp+1321,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_1),32);
        bufp->chgIData(oldp+1322,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_2),32);
        bufp->chgIData(oldp+1323,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_3),32);
        bufp->chgIData(oldp+1324,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_4),32);
        bufp->chgIData(oldp+1325,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_5),32);
        bufp->chgIData(oldp+1326,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_6),32);
        bufp->chgIData(oldp+1327,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_7),32);
        bufp->chgIData(oldp+1328,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_0),32);
        bufp->chgIData(oldp+1329,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_1),32);
        bufp->chgIData(oldp+1330,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_2),32);
        bufp->chgIData(oldp+1331,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_3),32);
        bufp->chgIData(oldp+1332,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_4),32);
        bufp->chgIData(oldp+1333,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_5),32);
        bufp->chgIData(oldp+1334,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_6),32);
        bufp->chgIData(oldp+1335,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_7),32);
        bufp->chgIData(oldp+1336,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_0),32);
        bufp->chgIData(oldp+1337,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_1),32);
        bufp->chgIData(oldp+1338,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_2),32);
        bufp->chgIData(oldp+1339,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_3),32);
        bufp->chgIData(oldp+1340,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_4),32);
        bufp->chgIData(oldp+1341,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_5),32);
        bufp->chgIData(oldp+1342,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_6),32);
        bufp->chgIData(oldp+1343,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_7),32);
        bufp->chgIData(oldp+1344,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_0),32);
        bufp->chgIData(oldp+1345,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_1),32);
        bufp->chgIData(oldp+1346,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_2),32);
        bufp->chgIData(oldp+1347,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_3),32);
        bufp->chgIData(oldp+1348,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_4),32);
        bufp->chgIData(oldp+1349,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_5),32);
        bufp->chgIData(oldp+1350,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_6),32);
        bufp->chgIData(oldp+1351,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_7),32);
        bufp->chgIData(oldp+1352,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_0),32);
        bufp->chgIData(oldp+1353,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_1),32);
        bufp->chgIData(oldp+1354,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_2),32);
        bufp->chgIData(oldp+1355,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_3),32);
        bufp->chgIData(oldp+1356,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_4),32);
        bufp->chgIData(oldp+1357,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_5),32);
        bufp->chgIData(oldp+1358,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_6),32);
        bufp->chgIData(oldp+1359,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_7),32);
        bufp->chgIData(oldp+1360,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_0),32);
        bufp->chgIData(oldp+1361,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_1),32);
        bufp->chgIData(oldp+1362,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_2),32);
        bufp->chgIData(oldp+1363,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_3),32);
        bufp->chgIData(oldp+1364,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_4),32);
        bufp->chgIData(oldp+1365,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_5),32);
        bufp->chgIData(oldp+1366,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_6),32);
        bufp->chgIData(oldp+1367,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_7),32);
        bufp->chgIData(oldp+1368,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_0),32);
        bufp->chgIData(oldp+1369,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_1),32);
        bufp->chgIData(oldp+1370,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_2),32);
        bufp->chgIData(oldp+1371,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_3),32);
        bufp->chgIData(oldp+1372,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_4),32);
        bufp->chgIData(oldp+1373,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_5),32);
        bufp->chgIData(oldp+1374,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_6),32);
        bufp->chgIData(oldp+1375,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_7),32);
        bufp->chgIData(oldp+1376,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_0),32);
        bufp->chgIData(oldp+1377,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_1),32);
        bufp->chgIData(oldp+1378,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_2),32);
        bufp->chgIData(oldp+1379,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_3),32);
        bufp->chgIData(oldp+1380,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_4),32);
        bufp->chgIData(oldp+1381,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_5),32);
        bufp->chgIData(oldp+1382,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_6),32);
        bufp->chgIData(oldp+1383,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_7),32);
        bufp->chgIData(oldp+1384,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_0),32);
        bufp->chgIData(oldp+1385,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_1),32);
        bufp->chgIData(oldp+1386,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_2),32);
        bufp->chgIData(oldp+1387,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_3),32);
        bufp->chgIData(oldp+1388,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_4),32);
        bufp->chgIData(oldp+1389,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_5),32);
        bufp->chgIData(oldp+1390,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_6),32);
        bufp->chgIData(oldp+1391,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_7),32);
        bufp->chgIData(oldp+1392,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_0),32);
        bufp->chgIData(oldp+1393,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_1),32);
        bufp->chgIData(oldp+1394,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_2),32);
        bufp->chgIData(oldp+1395,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_3),32);
        bufp->chgIData(oldp+1396,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_4),32);
        bufp->chgIData(oldp+1397,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_5),32);
        bufp->chgIData(oldp+1398,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_6),32);
        bufp->chgIData(oldp+1399,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_7),32);
        bufp->chgIData(oldp+1400,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_0),32);
        bufp->chgIData(oldp+1401,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_1),32);
        bufp->chgIData(oldp+1402,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_2),32);
        bufp->chgIData(oldp+1403,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_3),32);
        bufp->chgIData(oldp+1404,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_4),32);
        bufp->chgIData(oldp+1405,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_5),32);
        bufp->chgIData(oldp+1406,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_6),32);
        bufp->chgIData(oldp+1407,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_7),32);
        bufp->chgIData(oldp+1408,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_0),32);
        bufp->chgIData(oldp+1409,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_1),32);
        bufp->chgIData(oldp+1410,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_2),32);
        bufp->chgIData(oldp+1411,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_3),32);
        bufp->chgIData(oldp+1412,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_4),32);
        bufp->chgIData(oldp+1413,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_5),32);
        bufp->chgIData(oldp+1414,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_6),32);
        bufp->chgIData(oldp+1415,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_7),32);
        bufp->chgIData(oldp+1416,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_0),32);
        bufp->chgIData(oldp+1417,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_1),32);
        bufp->chgIData(oldp+1418,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_2),32);
        bufp->chgIData(oldp+1419,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_3),32);
        bufp->chgIData(oldp+1420,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_4),32);
        bufp->chgIData(oldp+1421,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_5),32);
        bufp->chgIData(oldp+1422,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_6),32);
        bufp->chgIData(oldp+1423,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_7),32);
        bufp->chgIData(oldp+1424,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_0),32);
        bufp->chgIData(oldp+1425,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_1),32);
        bufp->chgIData(oldp+1426,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_2),32);
        bufp->chgIData(oldp+1427,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_3),32);
        bufp->chgIData(oldp+1428,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_4),32);
        bufp->chgIData(oldp+1429,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_5),32);
        bufp->chgIData(oldp+1430,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_6),32);
        bufp->chgIData(oldp+1431,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_7),32);
        bufp->chgIData(oldp+1432,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_0),32);
        bufp->chgIData(oldp+1433,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_1),32);
        bufp->chgIData(oldp+1434,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_2),32);
        bufp->chgIData(oldp+1435,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_3),32);
        bufp->chgIData(oldp+1436,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_4),32);
        bufp->chgIData(oldp+1437,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_5),32);
        bufp->chgIData(oldp+1438,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_6),32);
        bufp->chgIData(oldp+1439,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_7),32);
        bufp->chgIData(oldp+1440,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_0),32);
        bufp->chgIData(oldp+1441,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_1),32);
        bufp->chgIData(oldp+1442,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_2),32);
        bufp->chgIData(oldp+1443,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_3),32);
        bufp->chgIData(oldp+1444,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_4),32);
        bufp->chgIData(oldp+1445,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_5),32);
        bufp->chgIData(oldp+1446,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_6),32);
        bufp->chgIData(oldp+1447,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_7),32);
        bufp->chgIData(oldp+1448,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_0),32);
        bufp->chgIData(oldp+1449,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_1),32);
        bufp->chgIData(oldp+1450,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_2),32);
        bufp->chgIData(oldp+1451,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_3),32);
        bufp->chgIData(oldp+1452,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_4),32);
        bufp->chgIData(oldp+1453,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_5),32);
        bufp->chgIData(oldp+1454,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_6),32);
        bufp->chgIData(oldp+1455,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_7),32);
        bufp->chgIData(oldp+1456,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_0),32);
        bufp->chgIData(oldp+1457,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_1),32);
        bufp->chgIData(oldp+1458,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_2),32);
        bufp->chgIData(oldp+1459,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_3),32);
        bufp->chgIData(oldp+1460,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_4),32);
        bufp->chgIData(oldp+1461,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_5),32);
        bufp->chgIData(oldp+1462,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_6),32);
        bufp->chgIData(oldp+1463,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_7),32);
        bufp->chgIData(oldp+1464,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_0),32);
        bufp->chgIData(oldp+1465,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_1),32);
        bufp->chgIData(oldp+1466,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_2),32);
        bufp->chgIData(oldp+1467,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_3),32);
        bufp->chgIData(oldp+1468,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_4),32);
        bufp->chgIData(oldp+1469,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_5),32);
        bufp->chgIData(oldp+1470,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_6),32);
        bufp->chgIData(oldp+1471,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_7),32);
        bufp->chgIData(oldp+1472,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_0),32);
        bufp->chgIData(oldp+1473,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_1),32);
        bufp->chgIData(oldp+1474,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_2),32);
        bufp->chgIData(oldp+1475,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_3),32);
        bufp->chgIData(oldp+1476,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_4),32);
        bufp->chgIData(oldp+1477,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_5),32);
        bufp->chgIData(oldp+1478,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_6),32);
        bufp->chgIData(oldp+1479,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_7),32);
        bufp->chgIData(oldp+1480,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_0),32);
        bufp->chgIData(oldp+1481,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_1),32);
        bufp->chgIData(oldp+1482,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_2),32);
        bufp->chgIData(oldp+1483,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_3),32);
        bufp->chgIData(oldp+1484,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_4),32);
        bufp->chgIData(oldp+1485,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_5),32);
        bufp->chgIData(oldp+1486,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_6),32);
        bufp->chgIData(oldp+1487,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_7),32);
        bufp->chgIData(oldp+1488,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_0),32);
        bufp->chgIData(oldp+1489,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_1),32);
        bufp->chgIData(oldp+1490,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_2),32);
        bufp->chgIData(oldp+1491,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_3),32);
        bufp->chgIData(oldp+1492,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_4),32);
        bufp->chgIData(oldp+1493,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_5),32);
        bufp->chgIData(oldp+1494,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_6),32);
        bufp->chgIData(oldp+1495,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_7),32);
        bufp->chgIData(oldp+1496,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_0),32);
        bufp->chgIData(oldp+1497,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_1),32);
        bufp->chgIData(oldp+1498,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_2),32);
        bufp->chgIData(oldp+1499,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_3),32);
        bufp->chgIData(oldp+1500,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_4),32);
        bufp->chgIData(oldp+1501,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_5),32);
        bufp->chgIData(oldp+1502,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_6),32);
        bufp->chgIData(oldp+1503,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_7),32);
        bufp->chgIData(oldp+1504,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_0),32);
        bufp->chgIData(oldp+1505,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_1),32);
        bufp->chgIData(oldp+1506,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_2),32);
        bufp->chgIData(oldp+1507,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_3),32);
        bufp->chgIData(oldp+1508,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_4),32);
        bufp->chgIData(oldp+1509,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_5),32);
        bufp->chgIData(oldp+1510,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_6),32);
        bufp->chgIData(oldp+1511,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_7),32);
        bufp->chgIData(oldp+1512,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_0),32);
        bufp->chgIData(oldp+1513,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_1),32);
        bufp->chgIData(oldp+1514,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_2),32);
        bufp->chgIData(oldp+1515,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_3),32);
        bufp->chgIData(oldp+1516,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_4),32);
        bufp->chgIData(oldp+1517,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_5),32);
        bufp->chgIData(oldp+1518,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_6),32);
        bufp->chgIData(oldp+1519,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_7),32);
        bufp->chgIData(oldp+1520,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_0),32);
        bufp->chgIData(oldp+1521,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_1),32);
        bufp->chgIData(oldp+1522,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_2),32);
        bufp->chgIData(oldp+1523,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_3),32);
        bufp->chgIData(oldp+1524,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_4),32);
        bufp->chgIData(oldp+1525,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_5),32);
        bufp->chgIData(oldp+1526,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_6),32);
        bufp->chgIData(oldp+1527,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_7),32);
        bufp->chgIData(oldp+1528,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_0),32);
        bufp->chgIData(oldp+1529,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_1),32);
        bufp->chgIData(oldp+1530,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_2),32);
        bufp->chgIData(oldp+1531,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_3),32);
        bufp->chgIData(oldp+1532,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_4),32);
        bufp->chgIData(oldp+1533,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_5),32);
        bufp->chgIData(oldp+1534,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_6),32);
        bufp->chgIData(oldp+1535,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_7),32);
        bufp->chgIData(oldp+1536,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_0),32);
        bufp->chgIData(oldp+1537,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_1),32);
        bufp->chgIData(oldp+1538,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_2),32);
        bufp->chgIData(oldp+1539,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_3),32);
        bufp->chgIData(oldp+1540,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_4),32);
        bufp->chgIData(oldp+1541,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_5),32);
        bufp->chgIData(oldp+1542,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_6),32);
        bufp->chgIData(oldp+1543,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_7),32);
        bufp->chgIData(oldp+1544,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_0),32);
        bufp->chgIData(oldp+1545,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_1),32);
        bufp->chgIData(oldp+1546,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_2),32);
        bufp->chgIData(oldp+1547,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_3),32);
        bufp->chgIData(oldp+1548,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_4),32);
        bufp->chgIData(oldp+1549,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_5),32);
        bufp->chgIData(oldp+1550,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_6),32);
        bufp->chgIData(oldp+1551,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_7),32);
        bufp->chgIData(oldp+1552,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_0),32);
        bufp->chgIData(oldp+1553,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_1),32);
        bufp->chgIData(oldp+1554,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_2),32);
        bufp->chgIData(oldp+1555,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_3),32);
        bufp->chgIData(oldp+1556,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_4),32);
        bufp->chgIData(oldp+1557,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_5),32);
        bufp->chgIData(oldp+1558,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_6),32);
        bufp->chgIData(oldp+1559,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_7),32);
        bufp->chgIData(oldp+1560,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_0),32);
        bufp->chgIData(oldp+1561,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_1),32);
        bufp->chgIData(oldp+1562,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_2),32);
        bufp->chgIData(oldp+1563,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_3),32);
        bufp->chgIData(oldp+1564,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_4),32);
        bufp->chgIData(oldp+1565,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_5),32);
        bufp->chgIData(oldp+1566,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_6),32);
        bufp->chgIData(oldp+1567,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_7),32);
        bufp->chgIData(oldp+1568,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_0),32);
        bufp->chgIData(oldp+1569,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_1),32);
        bufp->chgIData(oldp+1570,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_2),32);
        bufp->chgIData(oldp+1571,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_3),32);
        bufp->chgIData(oldp+1572,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_4),32);
        bufp->chgIData(oldp+1573,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_5),32);
        bufp->chgIData(oldp+1574,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_6),32);
        bufp->chgIData(oldp+1575,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_7),32);
        bufp->chgIData(oldp+1576,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_0),32);
        bufp->chgIData(oldp+1577,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_1),32);
        bufp->chgIData(oldp+1578,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_2),32);
        bufp->chgIData(oldp+1579,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_3),32);
        bufp->chgIData(oldp+1580,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_4),32);
        bufp->chgIData(oldp+1581,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_5),32);
        bufp->chgIData(oldp+1582,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_6),32);
        bufp->chgIData(oldp+1583,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_7),32);
        bufp->chgIData(oldp+1584,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_0),32);
        bufp->chgIData(oldp+1585,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_1),32);
        bufp->chgIData(oldp+1586,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_2),32);
        bufp->chgIData(oldp+1587,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_3),32);
        bufp->chgIData(oldp+1588,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_4),32);
        bufp->chgIData(oldp+1589,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_5),32);
        bufp->chgIData(oldp+1590,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_6),32);
        bufp->chgIData(oldp+1591,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_7),32);
        bufp->chgIData(oldp+1592,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_0),32);
        bufp->chgIData(oldp+1593,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_1),32);
        bufp->chgIData(oldp+1594,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_2),32);
        bufp->chgIData(oldp+1595,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_3),32);
        bufp->chgIData(oldp+1596,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_4),32);
        bufp->chgIData(oldp+1597,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_5),32);
        bufp->chgIData(oldp+1598,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_6),32);
        bufp->chgIData(oldp+1599,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_7),32);
        bufp->chgIData(oldp+1600,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_0),32);
        bufp->chgIData(oldp+1601,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_1),32);
        bufp->chgIData(oldp+1602,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_2),32);
        bufp->chgIData(oldp+1603,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_3),32);
        bufp->chgIData(oldp+1604,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_4),32);
        bufp->chgIData(oldp+1605,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_5),32);
        bufp->chgIData(oldp+1606,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_6),32);
        bufp->chgIData(oldp+1607,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_7),32);
        bufp->chgIData(oldp+1608,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_0),32);
        bufp->chgIData(oldp+1609,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_1),32);
        bufp->chgIData(oldp+1610,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_2),32);
        bufp->chgIData(oldp+1611,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_3),32);
        bufp->chgIData(oldp+1612,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_4),32);
        bufp->chgIData(oldp+1613,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_5),32);
        bufp->chgIData(oldp+1614,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_6),32);
        bufp->chgIData(oldp+1615,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_7),32);
        bufp->chgIData(oldp+1616,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_0),32);
        bufp->chgIData(oldp+1617,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_1),32);
        bufp->chgIData(oldp+1618,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_2),32);
        bufp->chgIData(oldp+1619,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_3),32);
        bufp->chgIData(oldp+1620,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_4),32);
        bufp->chgIData(oldp+1621,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_5),32);
        bufp->chgIData(oldp+1622,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_6),32);
        bufp->chgIData(oldp+1623,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_7),32);
        bufp->chgIData(oldp+1624,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_0),32);
        bufp->chgIData(oldp+1625,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_1),32);
        bufp->chgIData(oldp+1626,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_2),32);
        bufp->chgIData(oldp+1627,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_3),32);
        bufp->chgIData(oldp+1628,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_4),32);
        bufp->chgIData(oldp+1629,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_5),32);
        bufp->chgIData(oldp+1630,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_6),32);
        bufp->chgIData(oldp+1631,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_7),32);
        bufp->chgIData(oldp+1632,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_0),32);
        bufp->chgIData(oldp+1633,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_1),32);
        bufp->chgIData(oldp+1634,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_2),32);
        bufp->chgIData(oldp+1635,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_3),32);
        bufp->chgIData(oldp+1636,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_4),32);
        bufp->chgIData(oldp+1637,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_5),32);
        bufp->chgIData(oldp+1638,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_6),32);
        bufp->chgIData(oldp+1639,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_7),32);
        bufp->chgIData(oldp+1640,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_0),32);
        bufp->chgIData(oldp+1641,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_1),32);
        bufp->chgIData(oldp+1642,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_2),32);
        bufp->chgIData(oldp+1643,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_3),32);
        bufp->chgIData(oldp+1644,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_4),32);
        bufp->chgIData(oldp+1645,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_5),32);
        bufp->chgIData(oldp+1646,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_6),32);
        bufp->chgIData(oldp+1647,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_7),32);
        bufp->chgIData(oldp+1648,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_0),32);
        bufp->chgIData(oldp+1649,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_1),32);
        bufp->chgIData(oldp+1650,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_2),32);
        bufp->chgIData(oldp+1651,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_3),32);
        bufp->chgIData(oldp+1652,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_4),32);
        bufp->chgIData(oldp+1653,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_5),32);
        bufp->chgIData(oldp+1654,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_6),32);
        bufp->chgIData(oldp+1655,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_7),32);
        bufp->chgIData(oldp+1656,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_0),32);
        bufp->chgIData(oldp+1657,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_1),32);
        bufp->chgIData(oldp+1658,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_2),32);
        bufp->chgIData(oldp+1659,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_3),32);
        bufp->chgIData(oldp+1660,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_4),32);
        bufp->chgIData(oldp+1661,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_5),32);
        bufp->chgIData(oldp+1662,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_6),32);
        bufp->chgIData(oldp+1663,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_7),32);
        bufp->chgIData(oldp+1664,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_0),32);
        bufp->chgIData(oldp+1665,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_1),32);
        bufp->chgIData(oldp+1666,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_2),32);
        bufp->chgIData(oldp+1667,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_3),32);
        bufp->chgIData(oldp+1668,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_4),32);
        bufp->chgIData(oldp+1669,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_5),32);
        bufp->chgIData(oldp+1670,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_6),32);
        bufp->chgIData(oldp+1671,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_7),32);
        bufp->chgIData(oldp+1672,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_0),32);
        bufp->chgIData(oldp+1673,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_1),32);
        bufp->chgIData(oldp+1674,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_2),32);
        bufp->chgIData(oldp+1675,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_3),32);
        bufp->chgIData(oldp+1676,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_4),32);
        bufp->chgIData(oldp+1677,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_5),32);
        bufp->chgIData(oldp+1678,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_6),32);
        bufp->chgIData(oldp+1679,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_7),32);
        bufp->chgIData(oldp+1680,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_0),32);
        bufp->chgIData(oldp+1681,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_1),32);
        bufp->chgIData(oldp+1682,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_2),32);
        bufp->chgIData(oldp+1683,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_3),32);
        bufp->chgIData(oldp+1684,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_4),32);
        bufp->chgIData(oldp+1685,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_5),32);
        bufp->chgIData(oldp+1686,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_6),32);
        bufp->chgIData(oldp+1687,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_7),32);
        bufp->chgIData(oldp+1688,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_0),32);
        bufp->chgIData(oldp+1689,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_1),32);
        bufp->chgIData(oldp+1690,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_2),32);
        bufp->chgIData(oldp+1691,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_3),32);
        bufp->chgIData(oldp+1692,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_4),32);
        bufp->chgIData(oldp+1693,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_5),32);
        bufp->chgIData(oldp+1694,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_6),32);
        bufp->chgIData(oldp+1695,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_7),32);
        bufp->chgIData(oldp+1696,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_0),32);
        bufp->chgIData(oldp+1697,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_1),32);
        bufp->chgIData(oldp+1698,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_2),32);
        bufp->chgIData(oldp+1699,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_3),32);
        bufp->chgIData(oldp+1700,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_4),32);
        bufp->chgIData(oldp+1701,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_5),32);
        bufp->chgIData(oldp+1702,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_6),32);
        bufp->chgIData(oldp+1703,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_7),32);
        bufp->chgIData(oldp+1704,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_0),32);
        bufp->chgIData(oldp+1705,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_1),32);
        bufp->chgIData(oldp+1706,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_2),32);
        bufp->chgIData(oldp+1707,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_3),32);
        bufp->chgIData(oldp+1708,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_4),32);
        bufp->chgIData(oldp+1709,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_5),32);
        bufp->chgIData(oldp+1710,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_6),32);
        bufp->chgIData(oldp+1711,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_7),32);
        bufp->chgIData(oldp+1712,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_0),32);
        bufp->chgIData(oldp+1713,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_1),32);
        bufp->chgIData(oldp+1714,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_2),32);
        bufp->chgIData(oldp+1715,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_3),32);
        bufp->chgIData(oldp+1716,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_4),32);
        bufp->chgIData(oldp+1717,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_5),32);
        bufp->chgIData(oldp+1718,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_6),32);
        bufp->chgIData(oldp+1719,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_7),32);
        bufp->chgIData(oldp+1720,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_0),32);
        bufp->chgIData(oldp+1721,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_1),32);
        bufp->chgIData(oldp+1722,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_2),32);
        bufp->chgIData(oldp+1723,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_3),32);
        bufp->chgIData(oldp+1724,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_4),32);
        bufp->chgIData(oldp+1725,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_5),32);
        bufp->chgIData(oldp+1726,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_6),32);
        bufp->chgIData(oldp+1727,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_7),32);
        bufp->chgIData(oldp+1728,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_0),32);
        bufp->chgIData(oldp+1729,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_1),32);
        bufp->chgIData(oldp+1730,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_2),32);
        bufp->chgIData(oldp+1731,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_3),32);
        bufp->chgIData(oldp+1732,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_4),32);
        bufp->chgIData(oldp+1733,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_5),32);
        bufp->chgIData(oldp+1734,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_6),32);
        bufp->chgIData(oldp+1735,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_7),32);
        bufp->chgIData(oldp+1736,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_0),32);
        bufp->chgIData(oldp+1737,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_1),32);
        bufp->chgIData(oldp+1738,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_2),32);
        bufp->chgIData(oldp+1739,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_3),32);
        bufp->chgIData(oldp+1740,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_4),32);
        bufp->chgIData(oldp+1741,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_5),32);
        bufp->chgIData(oldp+1742,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_6),32);
        bufp->chgIData(oldp+1743,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_7),32);
        bufp->chgIData(oldp+1744,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_0),32);
        bufp->chgIData(oldp+1745,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_1),32);
        bufp->chgIData(oldp+1746,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_2),32);
        bufp->chgIData(oldp+1747,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_3),32);
        bufp->chgIData(oldp+1748,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_4),32);
        bufp->chgIData(oldp+1749,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_5),32);
        bufp->chgIData(oldp+1750,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_6),32);
        bufp->chgIData(oldp+1751,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_7),32);
        bufp->chgIData(oldp+1752,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_0),32);
        bufp->chgIData(oldp+1753,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_1),32);
        bufp->chgIData(oldp+1754,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_2),32);
        bufp->chgIData(oldp+1755,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_3),32);
        bufp->chgIData(oldp+1756,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_4),32);
        bufp->chgIData(oldp+1757,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_5),32);
        bufp->chgIData(oldp+1758,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_6),32);
        bufp->chgIData(oldp+1759,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_7),32);
        bufp->chgIData(oldp+1760,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_0),32);
        bufp->chgIData(oldp+1761,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_1),32);
        bufp->chgIData(oldp+1762,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_2),32);
        bufp->chgIData(oldp+1763,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_3),32);
        bufp->chgIData(oldp+1764,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_4),32);
        bufp->chgIData(oldp+1765,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_5),32);
        bufp->chgIData(oldp+1766,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_6),32);
        bufp->chgIData(oldp+1767,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_7),32);
        bufp->chgIData(oldp+1768,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_0),32);
        bufp->chgIData(oldp+1769,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_1),32);
        bufp->chgIData(oldp+1770,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_2),32);
        bufp->chgIData(oldp+1771,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_3),32);
        bufp->chgIData(oldp+1772,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_4),32);
        bufp->chgIData(oldp+1773,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_5),32);
        bufp->chgIData(oldp+1774,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_6),32);
        bufp->chgIData(oldp+1775,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_7),32);
        bufp->chgIData(oldp+1776,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_0),32);
        bufp->chgIData(oldp+1777,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_1),32);
        bufp->chgIData(oldp+1778,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_2),32);
        bufp->chgIData(oldp+1779,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_3),32);
        bufp->chgIData(oldp+1780,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_4),32);
        bufp->chgIData(oldp+1781,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_5),32);
        bufp->chgIData(oldp+1782,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_6),32);
        bufp->chgIData(oldp+1783,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_7),32);
        bufp->chgIData(oldp+1784,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_0),32);
        bufp->chgIData(oldp+1785,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_1),32);
        bufp->chgIData(oldp+1786,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_2),32);
        bufp->chgIData(oldp+1787,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_3),32);
        bufp->chgIData(oldp+1788,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_4),32);
        bufp->chgIData(oldp+1789,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_5),32);
        bufp->chgIData(oldp+1790,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_6),32);
        bufp->chgIData(oldp+1791,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_7),32);
        bufp->chgIData(oldp+1792,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_0),32);
        bufp->chgIData(oldp+1793,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_1),32);
        bufp->chgIData(oldp+1794,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_2),32);
        bufp->chgIData(oldp+1795,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_3),32);
        bufp->chgIData(oldp+1796,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_4),32);
        bufp->chgIData(oldp+1797,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_5),32);
        bufp->chgIData(oldp+1798,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_6),32);
        bufp->chgIData(oldp+1799,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_7),32);
        bufp->chgIData(oldp+1800,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_0),32);
        bufp->chgIData(oldp+1801,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_1),32);
        bufp->chgIData(oldp+1802,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_2),32);
        bufp->chgIData(oldp+1803,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_3),32);
        bufp->chgIData(oldp+1804,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_4),32);
        bufp->chgIData(oldp+1805,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_5),32);
        bufp->chgIData(oldp+1806,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_6),32);
        bufp->chgIData(oldp+1807,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_7),32);
        bufp->chgIData(oldp+1808,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_0),32);
        bufp->chgIData(oldp+1809,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_1),32);
        bufp->chgIData(oldp+1810,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_2),32);
        bufp->chgIData(oldp+1811,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_3),32);
        bufp->chgIData(oldp+1812,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_4),32);
        bufp->chgIData(oldp+1813,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_5),32);
        bufp->chgIData(oldp+1814,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_6),32);
        bufp->chgIData(oldp+1815,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_7),32);
        bufp->chgIData(oldp+1816,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_0),32);
        bufp->chgIData(oldp+1817,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_1),32);
        bufp->chgIData(oldp+1818,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_2),32);
        bufp->chgIData(oldp+1819,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_3),32);
        bufp->chgIData(oldp+1820,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_4),32);
        bufp->chgIData(oldp+1821,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_5),32);
        bufp->chgIData(oldp+1822,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_6),32);
        bufp->chgIData(oldp+1823,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_7),32);
        bufp->chgIData(oldp+1824,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_0),32);
        bufp->chgIData(oldp+1825,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_1),32);
        bufp->chgIData(oldp+1826,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_2),32);
        bufp->chgIData(oldp+1827,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_3),32);
        bufp->chgIData(oldp+1828,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_4),32);
        bufp->chgIData(oldp+1829,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_5),32);
        bufp->chgIData(oldp+1830,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_6),32);
        bufp->chgIData(oldp+1831,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_7),32);
        bufp->chgIData(oldp+1832,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_0),32);
        bufp->chgIData(oldp+1833,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_1),32);
        bufp->chgIData(oldp+1834,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_2),32);
        bufp->chgIData(oldp+1835,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_3),32);
        bufp->chgIData(oldp+1836,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_4),32);
        bufp->chgIData(oldp+1837,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_5),32);
        bufp->chgIData(oldp+1838,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_6),32);
        bufp->chgIData(oldp+1839,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_7),32);
        bufp->chgIData(oldp+1840,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_0),32);
        bufp->chgIData(oldp+1841,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_1),32);
        bufp->chgIData(oldp+1842,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_2),32);
        bufp->chgIData(oldp+1843,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_3),32);
        bufp->chgIData(oldp+1844,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_4),32);
        bufp->chgIData(oldp+1845,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_5),32);
        bufp->chgIData(oldp+1846,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_6),32);
        bufp->chgIData(oldp+1847,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_7),32);
        bufp->chgIData(oldp+1848,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_0),32);
        bufp->chgIData(oldp+1849,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_1),32);
        bufp->chgIData(oldp+1850,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_2),32);
        bufp->chgIData(oldp+1851,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_3),32);
        bufp->chgIData(oldp+1852,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_4),32);
        bufp->chgIData(oldp+1853,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_5),32);
        bufp->chgIData(oldp+1854,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_6),32);
        bufp->chgIData(oldp+1855,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_7),32);
        bufp->chgIData(oldp+1856,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_0),32);
        bufp->chgIData(oldp+1857,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_1),32);
        bufp->chgIData(oldp+1858,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_2),32);
        bufp->chgIData(oldp+1859,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_3),32);
        bufp->chgIData(oldp+1860,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_4),32);
        bufp->chgIData(oldp+1861,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_5),32);
        bufp->chgIData(oldp+1862,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_6),32);
        bufp->chgIData(oldp+1863,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_7),32);
        bufp->chgIData(oldp+1864,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_0),32);
        bufp->chgIData(oldp+1865,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_1),32);
        bufp->chgIData(oldp+1866,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_2),32);
        bufp->chgIData(oldp+1867,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_3),32);
        bufp->chgIData(oldp+1868,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_4),32);
        bufp->chgIData(oldp+1869,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_5),32);
        bufp->chgIData(oldp+1870,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_6),32);
        bufp->chgIData(oldp+1871,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_7),32);
        bufp->chgIData(oldp+1872,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_0),32);
        bufp->chgIData(oldp+1873,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_1),32);
        bufp->chgIData(oldp+1874,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_2),32);
        bufp->chgIData(oldp+1875,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_3),32);
        bufp->chgIData(oldp+1876,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_4),32);
        bufp->chgIData(oldp+1877,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_5),32);
        bufp->chgIData(oldp+1878,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_6),32);
        bufp->chgIData(oldp+1879,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_7),32);
        bufp->chgIData(oldp+1880,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_0),32);
        bufp->chgIData(oldp+1881,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_1),32);
        bufp->chgIData(oldp+1882,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_2),32);
        bufp->chgIData(oldp+1883,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_3),32);
        bufp->chgIData(oldp+1884,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_4),32);
        bufp->chgIData(oldp+1885,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_5),32);
        bufp->chgIData(oldp+1886,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_6),32);
        bufp->chgIData(oldp+1887,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_7),32);
        bufp->chgIData(oldp+1888,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_0),32);
        bufp->chgIData(oldp+1889,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_1),32);
        bufp->chgIData(oldp+1890,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_2),32);
        bufp->chgIData(oldp+1891,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_3),32);
        bufp->chgIData(oldp+1892,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_4),32);
        bufp->chgIData(oldp+1893,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_5),32);
        bufp->chgIData(oldp+1894,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_6),32);
        bufp->chgIData(oldp+1895,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_7),32);
        bufp->chgIData(oldp+1896,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_0),32);
        bufp->chgIData(oldp+1897,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_1),32);
        bufp->chgIData(oldp+1898,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_2),32);
        bufp->chgIData(oldp+1899,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_3),32);
        bufp->chgIData(oldp+1900,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_4),32);
        bufp->chgIData(oldp+1901,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_5),32);
        bufp->chgIData(oldp+1902,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_6),32);
        bufp->chgIData(oldp+1903,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_7),32);
        bufp->chgIData(oldp+1904,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_0),32);
        bufp->chgIData(oldp+1905,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_1),32);
        bufp->chgIData(oldp+1906,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_2),32);
        bufp->chgIData(oldp+1907,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_3),32);
        bufp->chgIData(oldp+1908,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_4),32);
        bufp->chgIData(oldp+1909,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_5),32);
        bufp->chgIData(oldp+1910,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_6),32);
        bufp->chgIData(oldp+1911,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_7),32);
        bufp->chgIData(oldp+1912,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_0),32);
        bufp->chgIData(oldp+1913,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_1),32);
        bufp->chgIData(oldp+1914,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_2),32);
        bufp->chgIData(oldp+1915,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_3),32);
        bufp->chgIData(oldp+1916,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_4),32);
        bufp->chgIData(oldp+1917,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_5),32);
        bufp->chgIData(oldp+1918,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_6),32);
        bufp->chgIData(oldp+1919,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_7),32);
        bufp->chgIData(oldp+1920,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_0),32);
        bufp->chgIData(oldp+1921,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_1),32);
        bufp->chgIData(oldp+1922,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_2),32);
        bufp->chgIData(oldp+1923,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_3),32);
        bufp->chgIData(oldp+1924,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_4),32);
        bufp->chgIData(oldp+1925,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_5),32);
        bufp->chgIData(oldp+1926,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_6),32);
        bufp->chgIData(oldp+1927,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_7),32);
        bufp->chgIData(oldp+1928,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_0),32);
        bufp->chgIData(oldp+1929,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_1),32);
        bufp->chgIData(oldp+1930,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_2),32);
        bufp->chgIData(oldp+1931,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_3),32);
        bufp->chgIData(oldp+1932,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_4),32);
        bufp->chgIData(oldp+1933,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_5),32);
        bufp->chgIData(oldp+1934,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_6),32);
        bufp->chgIData(oldp+1935,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_7),32);
        bufp->chgIData(oldp+1936,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_0),32);
        bufp->chgIData(oldp+1937,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_1),32);
        bufp->chgIData(oldp+1938,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_2),32);
        bufp->chgIData(oldp+1939,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_3),32);
        bufp->chgIData(oldp+1940,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_4),32);
        bufp->chgIData(oldp+1941,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_5),32);
        bufp->chgIData(oldp+1942,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_6),32);
        bufp->chgIData(oldp+1943,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_7),32);
        bufp->chgIData(oldp+1944,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_0),32);
        bufp->chgIData(oldp+1945,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_1),32);
        bufp->chgIData(oldp+1946,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_2),32);
        bufp->chgIData(oldp+1947,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_3),32);
        bufp->chgIData(oldp+1948,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_4),32);
        bufp->chgIData(oldp+1949,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_5),32);
        bufp->chgIData(oldp+1950,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_6),32);
        bufp->chgIData(oldp+1951,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_7),32);
        bufp->chgIData(oldp+1952,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_0),32);
        bufp->chgIData(oldp+1953,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_1),32);
        bufp->chgIData(oldp+1954,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_2),32);
        bufp->chgIData(oldp+1955,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_3),32);
        bufp->chgIData(oldp+1956,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_4),32);
        bufp->chgIData(oldp+1957,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_5),32);
        bufp->chgIData(oldp+1958,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_6),32);
        bufp->chgIData(oldp+1959,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_7),32);
        bufp->chgIData(oldp+1960,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_0),32);
        bufp->chgIData(oldp+1961,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_1),32);
        bufp->chgIData(oldp+1962,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_2),32);
        bufp->chgIData(oldp+1963,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_3),32);
        bufp->chgIData(oldp+1964,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_4),32);
        bufp->chgIData(oldp+1965,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_5),32);
        bufp->chgIData(oldp+1966,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_6),32);
        bufp->chgIData(oldp+1967,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_7),32);
        bufp->chgIData(oldp+1968,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_0),32);
        bufp->chgIData(oldp+1969,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_1),32);
        bufp->chgIData(oldp+1970,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_2),32);
        bufp->chgIData(oldp+1971,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_3),32);
        bufp->chgIData(oldp+1972,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_4),32);
        bufp->chgIData(oldp+1973,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_5),32);
        bufp->chgIData(oldp+1974,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_6),32);
        bufp->chgIData(oldp+1975,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_7),32);
        bufp->chgIData(oldp+1976,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_0),32);
        bufp->chgIData(oldp+1977,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_1),32);
        bufp->chgIData(oldp+1978,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_2),32);
        bufp->chgIData(oldp+1979,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_3),32);
        bufp->chgIData(oldp+1980,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_4),32);
        bufp->chgIData(oldp+1981,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_5),32);
        bufp->chgIData(oldp+1982,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_6),32);
        bufp->chgIData(oldp+1983,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_7),32);
        bufp->chgIData(oldp+1984,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_0),32);
        bufp->chgIData(oldp+1985,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_1),32);
        bufp->chgIData(oldp+1986,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_2),32);
        bufp->chgIData(oldp+1987,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_3),32);
        bufp->chgIData(oldp+1988,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_4),32);
        bufp->chgIData(oldp+1989,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_5),32);
        bufp->chgIData(oldp+1990,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_6),32);
        bufp->chgIData(oldp+1991,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_7),32);
        bufp->chgIData(oldp+1992,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_0),32);
        bufp->chgIData(oldp+1993,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_1),32);
        bufp->chgIData(oldp+1994,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_2),32);
        bufp->chgIData(oldp+1995,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_3),32);
        bufp->chgIData(oldp+1996,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_4),32);
        bufp->chgIData(oldp+1997,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_5),32);
        bufp->chgIData(oldp+1998,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_6),32);
        bufp->chgIData(oldp+1999,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_7),32);
        bufp->chgIData(oldp+2000,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_0),32);
        bufp->chgIData(oldp+2001,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_1),32);
        bufp->chgIData(oldp+2002,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_2),32);
        bufp->chgIData(oldp+2003,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_3),32);
        bufp->chgIData(oldp+2004,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_4),32);
        bufp->chgIData(oldp+2005,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_5),32);
        bufp->chgIData(oldp+2006,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_6),32);
        bufp->chgIData(oldp+2007,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_7),32);
        bufp->chgIData(oldp+2008,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_0),32);
        bufp->chgIData(oldp+2009,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_1),32);
        bufp->chgIData(oldp+2010,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_2),32);
        bufp->chgIData(oldp+2011,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_3),32);
        bufp->chgIData(oldp+2012,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_4),32);
        bufp->chgIData(oldp+2013,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_5),32);
        bufp->chgIData(oldp+2014,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_6),32);
        bufp->chgIData(oldp+2015,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_7),32);
        bufp->chgIData(oldp+2016,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_0),32);
        bufp->chgIData(oldp+2017,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_1),32);
        bufp->chgIData(oldp+2018,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_2),32);
        bufp->chgIData(oldp+2019,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_3),32);
        bufp->chgIData(oldp+2020,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_4),32);
        bufp->chgIData(oldp+2021,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_5),32);
        bufp->chgIData(oldp+2022,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_6),32);
        bufp->chgIData(oldp+2023,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_7),32);
        bufp->chgIData(oldp+2024,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_0),32);
        bufp->chgIData(oldp+2025,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_1),32);
        bufp->chgIData(oldp+2026,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_2),32);
        bufp->chgIData(oldp+2027,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_3),32);
        bufp->chgIData(oldp+2028,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_4),32);
        bufp->chgIData(oldp+2029,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_5),32);
        bufp->chgIData(oldp+2030,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_6),32);
        bufp->chgIData(oldp+2031,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_7),32);
        bufp->chgIData(oldp+2032,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_0),32);
        bufp->chgIData(oldp+2033,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_1),32);
        bufp->chgIData(oldp+2034,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_2),32);
        bufp->chgIData(oldp+2035,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_3),32);
        bufp->chgIData(oldp+2036,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_4),32);
        bufp->chgIData(oldp+2037,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_5),32);
        bufp->chgIData(oldp+2038,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_6),32);
        bufp->chgIData(oldp+2039,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_7),32);
        bufp->chgIData(oldp+2040,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_0),32);
        bufp->chgIData(oldp+2041,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_1),32);
        bufp->chgIData(oldp+2042,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_2),32);
        bufp->chgIData(oldp+2043,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_3),32);
        bufp->chgIData(oldp+2044,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_4),32);
        bufp->chgIData(oldp+2045,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_5),32);
        bufp->chgIData(oldp+2046,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_6),32);
        bufp->chgIData(oldp+2047,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_7),32);
        bufp->chgIData(oldp+2048,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_0),32);
        bufp->chgIData(oldp+2049,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_1),32);
        bufp->chgIData(oldp+2050,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_2),32);
        bufp->chgIData(oldp+2051,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_3),32);
        bufp->chgIData(oldp+2052,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_4),32);
        bufp->chgIData(oldp+2053,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_5),32);
        bufp->chgIData(oldp+2054,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_6),32);
        bufp->chgIData(oldp+2055,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_7),32);
        bufp->chgIData(oldp+2056,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_0),32);
        bufp->chgIData(oldp+2057,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_1),32);
        bufp->chgIData(oldp+2058,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_2),32);
        bufp->chgIData(oldp+2059,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_3),32);
        bufp->chgIData(oldp+2060,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_4),32);
        bufp->chgIData(oldp+2061,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_5),32);
        bufp->chgIData(oldp+2062,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_6),32);
        bufp->chgIData(oldp+2063,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_7),32);
        bufp->chgIData(oldp+2064,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_0),32);
        bufp->chgIData(oldp+2065,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_1),32);
        bufp->chgIData(oldp+2066,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_2),32);
        bufp->chgIData(oldp+2067,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_3),32);
        bufp->chgIData(oldp+2068,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_4),32);
        bufp->chgIData(oldp+2069,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_5),32);
        bufp->chgIData(oldp+2070,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_6),32);
        bufp->chgIData(oldp+2071,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_7),32);
        bufp->chgIData(oldp+2072,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_0),32);
        bufp->chgIData(oldp+2073,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_1),32);
        bufp->chgIData(oldp+2074,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_2),32);
        bufp->chgIData(oldp+2075,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_3),32);
        bufp->chgIData(oldp+2076,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_4),32);
        bufp->chgIData(oldp+2077,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_5),32);
        bufp->chgIData(oldp+2078,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_6),32);
        bufp->chgIData(oldp+2079,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_7),32);
        bufp->chgIData(oldp+2080,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_0),32);
        bufp->chgIData(oldp+2081,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_1),32);
        bufp->chgIData(oldp+2082,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_2),32);
        bufp->chgIData(oldp+2083,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_3),32);
        bufp->chgIData(oldp+2084,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_4),32);
        bufp->chgIData(oldp+2085,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_5),32);
        bufp->chgIData(oldp+2086,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_6),32);
        bufp->chgIData(oldp+2087,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_7),32);
        bufp->chgIData(oldp+2088,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_0),32);
        bufp->chgIData(oldp+2089,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_1),32);
        bufp->chgIData(oldp+2090,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_2),32);
        bufp->chgIData(oldp+2091,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_3),32);
        bufp->chgIData(oldp+2092,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_4),32);
        bufp->chgIData(oldp+2093,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_5),32);
        bufp->chgIData(oldp+2094,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_6),32);
        bufp->chgIData(oldp+2095,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_7),32);
        bufp->chgIData(oldp+2096,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_0),32);
        bufp->chgIData(oldp+2097,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_1),32);
        bufp->chgIData(oldp+2098,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_2),32);
        bufp->chgIData(oldp+2099,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_3),32);
        bufp->chgIData(oldp+2100,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_4),32);
        bufp->chgIData(oldp+2101,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_5),32);
        bufp->chgIData(oldp+2102,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_6),32);
        bufp->chgIData(oldp+2103,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_7),32);
        bufp->chgIData(oldp+2104,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_0),32);
        bufp->chgIData(oldp+2105,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_1),32);
        bufp->chgIData(oldp+2106,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_2),32);
        bufp->chgIData(oldp+2107,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_3),32);
        bufp->chgIData(oldp+2108,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_4),32);
        bufp->chgIData(oldp+2109,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_5),32);
        bufp->chgIData(oldp+2110,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_6),32);
        bufp->chgIData(oldp+2111,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_7),32);
        bufp->chgIData(oldp+2112,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_0),32);
        bufp->chgIData(oldp+2113,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_1),32);
        bufp->chgIData(oldp+2114,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_2),32);
        bufp->chgIData(oldp+2115,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_3),32);
        bufp->chgIData(oldp+2116,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_4),32);
        bufp->chgIData(oldp+2117,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_5),32);
        bufp->chgIData(oldp+2118,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_6),32);
        bufp->chgIData(oldp+2119,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_7),32);
        bufp->chgIData(oldp+2120,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_0),32);
        bufp->chgIData(oldp+2121,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_1),32);
        bufp->chgIData(oldp+2122,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_2),32);
        bufp->chgIData(oldp+2123,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_3),32);
        bufp->chgIData(oldp+2124,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_4),32);
        bufp->chgIData(oldp+2125,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_5),32);
        bufp->chgIData(oldp+2126,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_6),32);
        bufp->chgIData(oldp+2127,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_7),32);
        bufp->chgIData(oldp+2128,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_0),32);
        bufp->chgIData(oldp+2129,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_1),32);
        bufp->chgIData(oldp+2130,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_2),32);
        bufp->chgIData(oldp+2131,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_3),32);
        bufp->chgIData(oldp+2132,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_4),32);
        bufp->chgIData(oldp+2133,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_5),32);
        bufp->chgIData(oldp+2134,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_6),32);
        bufp->chgIData(oldp+2135,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_7),32);
        bufp->chgIData(oldp+2136,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_0),32);
        bufp->chgIData(oldp+2137,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_1),32);
        bufp->chgIData(oldp+2138,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_2),32);
        bufp->chgIData(oldp+2139,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_3),32);
        bufp->chgIData(oldp+2140,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_4),32);
        bufp->chgIData(oldp+2141,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_5),32);
        bufp->chgIData(oldp+2142,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_6),32);
        bufp->chgIData(oldp+2143,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_7),32);
        bufp->chgIData(oldp+2144,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_0),32);
        bufp->chgIData(oldp+2145,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_1),32);
        bufp->chgIData(oldp+2146,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_2),32);
        bufp->chgIData(oldp+2147,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_3),32);
        bufp->chgIData(oldp+2148,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_4),32);
        bufp->chgIData(oldp+2149,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_5),32);
        bufp->chgIData(oldp+2150,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_6),32);
        bufp->chgIData(oldp+2151,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_7),32);
        bufp->chgIData(oldp+2152,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_0),32);
        bufp->chgIData(oldp+2153,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_1),32);
        bufp->chgIData(oldp+2154,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_2),32);
        bufp->chgIData(oldp+2155,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_3),32);
        bufp->chgIData(oldp+2156,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_4),32);
        bufp->chgIData(oldp+2157,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_5),32);
        bufp->chgIData(oldp+2158,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_6),32);
        bufp->chgIData(oldp+2159,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_7),32);
        bufp->chgIData(oldp+2160,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_0),32);
        bufp->chgIData(oldp+2161,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_1),32);
        bufp->chgIData(oldp+2162,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_2),32);
        bufp->chgIData(oldp+2163,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_3),32);
        bufp->chgIData(oldp+2164,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_4),32);
        bufp->chgIData(oldp+2165,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_5),32);
        bufp->chgIData(oldp+2166,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_6),32);
        bufp->chgIData(oldp+2167,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_7),32);
        bufp->chgIData(oldp+2168,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_0),32);
        bufp->chgIData(oldp+2169,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_1),32);
        bufp->chgIData(oldp+2170,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_2),32);
        bufp->chgIData(oldp+2171,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_3),32);
        bufp->chgIData(oldp+2172,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_4),32);
        bufp->chgIData(oldp+2173,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_5),32);
        bufp->chgIData(oldp+2174,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_6),32);
        bufp->chgIData(oldp+2175,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_7),32);
        bufp->chgIData(oldp+2176,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_0),32);
        bufp->chgIData(oldp+2177,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_1),32);
        bufp->chgIData(oldp+2178,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_2),32);
        bufp->chgIData(oldp+2179,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_3),32);
        bufp->chgIData(oldp+2180,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_4),32);
        bufp->chgIData(oldp+2181,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_5),32);
        bufp->chgIData(oldp+2182,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_6),32);
        bufp->chgIData(oldp+2183,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_7),32);
        bufp->chgIData(oldp+2184,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_0),21);
        bufp->chgIData(oldp+2185,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_1),21);
        bufp->chgIData(oldp+2186,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_2),21);
        bufp->chgIData(oldp+2187,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_3),21);
        bufp->chgIData(oldp+2188,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_4),21);
        bufp->chgIData(oldp+2189,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_5),21);
        bufp->chgIData(oldp+2190,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_6),21);
        bufp->chgIData(oldp+2191,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_7),21);
        bufp->chgIData(oldp+2192,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_8),21);
        bufp->chgIData(oldp+2193,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_9),21);
        bufp->chgIData(oldp+2194,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_10),21);
        bufp->chgIData(oldp+2195,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_11),21);
        bufp->chgIData(oldp+2196,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_12),21);
        bufp->chgIData(oldp+2197,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_13),21);
        bufp->chgIData(oldp+2198,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_14),21);
        bufp->chgIData(oldp+2199,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_15),21);
        bufp->chgIData(oldp+2200,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_16),21);
        bufp->chgIData(oldp+2201,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_17),21);
        bufp->chgIData(oldp+2202,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_18),21);
        bufp->chgIData(oldp+2203,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_19),21);
        bufp->chgIData(oldp+2204,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_20),21);
        bufp->chgIData(oldp+2205,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_21),21);
        bufp->chgIData(oldp+2206,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_22),21);
        bufp->chgIData(oldp+2207,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_23),21);
        bufp->chgIData(oldp+2208,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_24),21);
        bufp->chgIData(oldp+2209,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_25),21);
        bufp->chgIData(oldp+2210,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_26),21);
        bufp->chgIData(oldp+2211,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_27),21);
        bufp->chgIData(oldp+2212,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_28),21);
        bufp->chgIData(oldp+2213,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_29),21);
        bufp->chgIData(oldp+2214,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_30),21);
        bufp->chgIData(oldp+2215,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_31),21);
        bufp->chgIData(oldp+2216,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_32),21);
        bufp->chgIData(oldp+2217,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_33),21);
        bufp->chgIData(oldp+2218,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_34),21);
        bufp->chgIData(oldp+2219,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_35),21);
        bufp->chgIData(oldp+2220,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_36),21);
        bufp->chgIData(oldp+2221,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_37),21);
        bufp->chgIData(oldp+2222,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_38),21);
        bufp->chgIData(oldp+2223,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_39),21);
        bufp->chgIData(oldp+2224,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_40),21);
        bufp->chgIData(oldp+2225,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_41),21);
        bufp->chgIData(oldp+2226,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_42),21);
        bufp->chgIData(oldp+2227,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_43),21);
        bufp->chgIData(oldp+2228,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_44),21);
        bufp->chgIData(oldp+2229,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_45),21);
        bufp->chgIData(oldp+2230,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_46),21);
        bufp->chgIData(oldp+2231,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_47),21);
        bufp->chgIData(oldp+2232,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_48),21);
        bufp->chgIData(oldp+2233,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_49),21);
        bufp->chgIData(oldp+2234,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_50),21);
        bufp->chgIData(oldp+2235,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_51),21);
        bufp->chgIData(oldp+2236,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_52),21);
        bufp->chgIData(oldp+2237,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_53),21);
        bufp->chgIData(oldp+2238,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_54),21);
        bufp->chgIData(oldp+2239,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_55),21);
        bufp->chgIData(oldp+2240,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_56),21);
        bufp->chgIData(oldp+2241,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_57),21);
        bufp->chgIData(oldp+2242,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_58),21);
        bufp->chgIData(oldp+2243,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_59),21);
        bufp->chgIData(oldp+2244,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_60),21);
        bufp->chgIData(oldp+2245,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_61),21);
        bufp->chgIData(oldp+2246,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_62),21);
        bufp->chgIData(oldp+2247,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_63),21);
        bufp->chgIData(oldp+2248,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_0),21);
        bufp->chgIData(oldp+2249,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_1),21);
        bufp->chgIData(oldp+2250,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_2),21);
        bufp->chgIData(oldp+2251,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_3),21);
        bufp->chgIData(oldp+2252,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_4),21);
        bufp->chgIData(oldp+2253,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_5),21);
        bufp->chgIData(oldp+2254,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_6),21);
        bufp->chgIData(oldp+2255,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_7),21);
        bufp->chgIData(oldp+2256,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_8),21);
        bufp->chgIData(oldp+2257,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_9),21);
        bufp->chgIData(oldp+2258,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_10),21);
        bufp->chgIData(oldp+2259,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_11),21);
        bufp->chgIData(oldp+2260,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_12),21);
        bufp->chgIData(oldp+2261,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_13),21);
        bufp->chgIData(oldp+2262,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_14),21);
        bufp->chgIData(oldp+2263,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_15),21);
        bufp->chgIData(oldp+2264,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_16),21);
        bufp->chgIData(oldp+2265,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_17),21);
        bufp->chgIData(oldp+2266,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_18),21);
        bufp->chgIData(oldp+2267,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_19),21);
        bufp->chgIData(oldp+2268,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_20),21);
        bufp->chgIData(oldp+2269,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_21),21);
        bufp->chgIData(oldp+2270,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_22),21);
        bufp->chgIData(oldp+2271,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_23),21);
        bufp->chgIData(oldp+2272,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_24),21);
        bufp->chgIData(oldp+2273,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_25),21);
        bufp->chgIData(oldp+2274,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_26),21);
        bufp->chgIData(oldp+2275,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_27),21);
        bufp->chgIData(oldp+2276,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_28),21);
        bufp->chgIData(oldp+2277,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_29),21);
        bufp->chgIData(oldp+2278,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_30),21);
        bufp->chgIData(oldp+2279,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_31),21);
        bufp->chgIData(oldp+2280,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_32),21);
        bufp->chgIData(oldp+2281,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_33),21);
        bufp->chgIData(oldp+2282,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_34),21);
        bufp->chgIData(oldp+2283,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_35),21);
        bufp->chgIData(oldp+2284,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_36),21);
        bufp->chgIData(oldp+2285,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_37),21);
        bufp->chgIData(oldp+2286,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_38),21);
        bufp->chgIData(oldp+2287,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_39),21);
        bufp->chgIData(oldp+2288,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_40),21);
        bufp->chgIData(oldp+2289,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_41),21);
        bufp->chgIData(oldp+2290,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_42),21);
        bufp->chgIData(oldp+2291,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_43),21);
        bufp->chgIData(oldp+2292,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_44),21);
        bufp->chgIData(oldp+2293,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_45),21);
        bufp->chgIData(oldp+2294,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_46),21);
        bufp->chgIData(oldp+2295,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_47),21);
        bufp->chgIData(oldp+2296,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_48),21);
        bufp->chgIData(oldp+2297,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_49),21);
        bufp->chgIData(oldp+2298,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_50),21);
        bufp->chgIData(oldp+2299,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_51),21);
        bufp->chgIData(oldp+2300,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_52),21);
        bufp->chgIData(oldp+2301,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_53),21);
        bufp->chgIData(oldp+2302,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_54),21);
        bufp->chgIData(oldp+2303,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_55),21);
        bufp->chgIData(oldp+2304,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_56),21);
        bufp->chgIData(oldp+2305,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_57),21);
        bufp->chgIData(oldp+2306,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_58),21);
        bufp->chgIData(oldp+2307,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_59),21);
        bufp->chgIData(oldp+2308,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_60),21);
        bufp->chgIData(oldp+2309,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_61),21);
        bufp->chgIData(oldp+2310,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_62),21);
        bufp->chgIData(oldp+2311,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_63),21);
        bufp->chgIData(oldp+2312,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_0),21);
        bufp->chgIData(oldp+2313,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_1),21);
        bufp->chgIData(oldp+2314,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_2),21);
        bufp->chgIData(oldp+2315,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_3),21);
        bufp->chgIData(oldp+2316,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_4),21);
        bufp->chgIData(oldp+2317,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_5),21);
        bufp->chgIData(oldp+2318,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_6),21);
        bufp->chgIData(oldp+2319,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_7),21);
        bufp->chgIData(oldp+2320,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_8),21);
        bufp->chgIData(oldp+2321,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_9),21);
        bufp->chgIData(oldp+2322,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_10),21);
        bufp->chgIData(oldp+2323,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_11),21);
        bufp->chgIData(oldp+2324,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_12),21);
        bufp->chgIData(oldp+2325,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_13),21);
        bufp->chgIData(oldp+2326,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_14),21);
        bufp->chgIData(oldp+2327,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_15),21);
        bufp->chgIData(oldp+2328,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_16),21);
        bufp->chgIData(oldp+2329,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_17),21);
        bufp->chgIData(oldp+2330,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_18),21);
        bufp->chgIData(oldp+2331,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_19),21);
        bufp->chgIData(oldp+2332,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_20),21);
        bufp->chgIData(oldp+2333,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_21),21);
        bufp->chgIData(oldp+2334,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_22),21);
        bufp->chgIData(oldp+2335,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_23),21);
        bufp->chgIData(oldp+2336,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_24),21);
        bufp->chgIData(oldp+2337,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_25),21);
        bufp->chgIData(oldp+2338,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_26),21);
        bufp->chgIData(oldp+2339,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_27),21);
        bufp->chgIData(oldp+2340,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_28),21);
        bufp->chgIData(oldp+2341,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_29),21);
        bufp->chgIData(oldp+2342,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_30),21);
        bufp->chgIData(oldp+2343,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_31),21);
        bufp->chgIData(oldp+2344,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_32),21);
        bufp->chgIData(oldp+2345,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_33),21);
        bufp->chgIData(oldp+2346,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_34),21);
        bufp->chgIData(oldp+2347,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_35),21);
        bufp->chgIData(oldp+2348,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_36),21);
        bufp->chgIData(oldp+2349,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_37),21);
        bufp->chgIData(oldp+2350,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_38),21);
        bufp->chgIData(oldp+2351,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_39),21);
        bufp->chgIData(oldp+2352,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_40),21);
        bufp->chgIData(oldp+2353,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_41),21);
        bufp->chgIData(oldp+2354,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_42),21);
        bufp->chgIData(oldp+2355,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_43),21);
        bufp->chgIData(oldp+2356,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_44),21);
        bufp->chgIData(oldp+2357,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_45),21);
        bufp->chgIData(oldp+2358,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_46),21);
        bufp->chgIData(oldp+2359,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_47),21);
        bufp->chgIData(oldp+2360,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_48),21);
        bufp->chgIData(oldp+2361,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_49),21);
        bufp->chgIData(oldp+2362,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_50),21);
        bufp->chgIData(oldp+2363,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_51),21);
        bufp->chgIData(oldp+2364,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_52),21);
        bufp->chgIData(oldp+2365,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_53),21);
        bufp->chgIData(oldp+2366,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_54),21);
        bufp->chgIData(oldp+2367,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_55),21);
        bufp->chgIData(oldp+2368,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_56),21);
        bufp->chgIData(oldp+2369,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_57),21);
        bufp->chgIData(oldp+2370,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_58),21);
        bufp->chgIData(oldp+2371,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_59),21);
        bufp->chgIData(oldp+2372,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_60),21);
        bufp->chgIData(oldp+2373,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_61),21);
        bufp->chgIData(oldp+2374,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_62),21);
        bufp->chgIData(oldp+2375,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_63),21);
        bufp->chgIData(oldp+2376,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_0),21);
        bufp->chgIData(oldp+2377,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_1),21);
        bufp->chgIData(oldp+2378,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_2),21);
        bufp->chgIData(oldp+2379,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_3),21);
        bufp->chgIData(oldp+2380,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_4),21);
        bufp->chgIData(oldp+2381,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_5),21);
        bufp->chgIData(oldp+2382,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_6),21);
        bufp->chgIData(oldp+2383,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_7),21);
        bufp->chgIData(oldp+2384,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_8),21);
        bufp->chgIData(oldp+2385,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_9),21);
        bufp->chgIData(oldp+2386,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_10),21);
        bufp->chgIData(oldp+2387,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_11),21);
        bufp->chgIData(oldp+2388,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_12),21);
        bufp->chgIData(oldp+2389,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_13),21);
        bufp->chgIData(oldp+2390,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_14),21);
        bufp->chgIData(oldp+2391,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_15),21);
        bufp->chgIData(oldp+2392,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_16),21);
        bufp->chgIData(oldp+2393,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_17),21);
        bufp->chgIData(oldp+2394,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_18),21);
        bufp->chgIData(oldp+2395,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_19),21);
        bufp->chgIData(oldp+2396,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_20),21);
        bufp->chgIData(oldp+2397,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_21),21);
        bufp->chgIData(oldp+2398,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_22),21);
        bufp->chgIData(oldp+2399,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_23),21);
        bufp->chgIData(oldp+2400,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_24),21);
        bufp->chgIData(oldp+2401,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_25),21);
        bufp->chgIData(oldp+2402,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_26),21);
        bufp->chgIData(oldp+2403,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_27),21);
        bufp->chgIData(oldp+2404,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_28),21);
        bufp->chgIData(oldp+2405,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_29),21);
        bufp->chgIData(oldp+2406,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_30),21);
        bufp->chgIData(oldp+2407,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_31),21);
        bufp->chgIData(oldp+2408,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_32),21);
        bufp->chgIData(oldp+2409,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_33),21);
        bufp->chgIData(oldp+2410,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_34),21);
        bufp->chgIData(oldp+2411,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_35),21);
        bufp->chgIData(oldp+2412,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_36),21);
        bufp->chgIData(oldp+2413,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_37),21);
        bufp->chgIData(oldp+2414,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_38),21);
        bufp->chgIData(oldp+2415,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_39),21);
        bufp->chgIData(oldp+2416,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_40),21);
        bufp->chgIData(oldp+2417,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_41),21);
        bufp->chgIData(oldp+2418,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_42),21);
        bufp->chgIData(oldp+2419,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_43),21);
        bufp->chgIData(oldp+2420,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_44),21);
        bufp->chgIData(oldp+2421,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_45),21);
        bufp->chgIData(oldp+2422,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_46),21);
        bufp->chgIData(oldp+2423,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_47),21);
        bufp->chgIData(oldp+2424,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_48),21);
        bufp->chgIData(oldp+2425,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_49),21);
        bufp->chgIData(oldp+2426,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_50),21);
        bufp->chgIData(oldp+2427,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_51),21);
        bufp->chgIData(oldp+2428,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_52),21);
        bufp->chgIData(oldp+2429,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_53),21);
        bufp->chgIData(oldp+2430,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_54),21);
        bufp->chgIData(oldp+2431,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_55),21);
        bufp->chgIData(oldp+2432,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_56),21);
        bufp->chgIData(oldp+2433,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_57),21);
        bufp->chgIData(oldp+2434,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_58),21);
        bufp->chgIData(oldp+2435,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_59),21);
        bufp->chgIData(oldp+2436,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_60),21);
        bufp->chgIData(oldp+2437,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_61),21);
        bufp->chgIData(oldp+2438,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_62),21);
        bufp->chgIData(oldp+2439,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_63),21);
        bufp->chgBit(oldp+2440,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_0));
        bufp->chgBit(oldp+2441,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_1));
        bufp->chgBit(oldp+2442,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_2));
        bufp->chgBit(oldp+2443,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_3));
        bufp->chgBit(oldp+2444,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_4));
        bufp->chgBit(oldp+2445,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_5));
        bufp->chgBit(oldp+2446,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_6));
        bufp->chgBit(oldp+2447,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_7));
        bufp->chgBit(oldp+2448,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_8));
        bufp->chgBit(oldp+2449,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_9));
        bufp->chgBit(oldp+2450,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_10));
        bufp->chgBit(oldp+2451,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_11));
        bufp->chgBit(oldp+2452,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_12));
        bufp->chgBit(oldp+2453,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_13));
        bufp->chgBit(oldp+2454,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_14));
        bufp->chgBit(oldp+2455,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_15));
        bufp->chgBit(oldp+2456,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_16));
        bufp->chgBit(oldp+2457,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_17));
        bufp->chgBit(oldp+2458,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_18));
        bufp->chgBit(oldp+2459,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_19));
        bufp->chgBit(oldp+2460,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_20));
        bufp->chgBit(oldp+2461,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_21));
        bufp->chgBit(oldp+2462,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_22));
        bufp->chgBit(oldp+2463,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_23));
        bufp->chgBit(oldp+2464,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_24));
        bufp->chgBit(oldp+2465,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_25));
        bufp->chgBit(oldp+2466,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_26));
        bufp->chgBit(oldp+2467,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_27));
        bufp->chgBit(oldp+2468,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_28));
        bufp->chgBit(oldp+2469,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_29));
        bufp->chgBit(oldp+2470,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_30));
        bufp->chgBit(oldp+2471,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_31));
        bufp->chgBit(oldp+2472,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_32));
        bufp->chgBit(oldp+2473,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_33));
        bufp->chgBit(oldp+2474,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_34));
        bufp->chgBit(oldp+2475,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_35));
        bufp->chgBit(oldp+2476,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_36));
        bufp->chgBit(oldp+2477,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_37));
        bufp->chgBit(oldp+2478,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_38));
        bufp->chgBit(oldp+2479,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_39));
        bufp->chgBit(oldp+2480,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_40));
        bufp->chgBit(oldp+2481,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_41));
        bufp->chgBit(oldp+2482,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_42));
        bufp->chgBit(oldp+2483,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_43));
        bufp->chgBit(oldp+2484,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_44));
        bufp->chgBit(oldp+2485,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_45));
        bufp->chgBit(oldp+2486,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_46));
        bufp->chgBit(oldp+2487,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_47));
        bufp->chgBit(oldp+2488,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_48));
        bufp->chgBit(oldp+2489,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_49));
        bufp->chgBit(oldp+2490,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_50));
        bufp->chgBit(oldp+2491,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_51));
        bufp->chgBit(oldp+2492,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_52));
        bufp->chgBit(oldp+2493,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_53));
        bufp->chgBit(oldp+2494,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_54));
        bufp->chgBit(oldp+2495,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_55));
        bufp->chgBit(oldp+2496,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_56));
        bufp->chgBit(oldp+2497,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_57));
        bufp->chgBit(oldp+2498,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_58));
        bufp->chgBit(oldp+2499,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_59));
        bufp->chgBit(oldp+2500,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_60));
        bufp->chgBit(oldp+2501,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_61));
        bufp->chgBit(oldp+2502,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_62));
        bufp->chgBit(oldp+2503,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_63));
        bufp->chgBit(oldp+2504,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_0));
        bufp->chgBit(oldp+2505,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_1));
        bufp->chgBit(oldp+2506,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_2));
        bufp->chgBit(oldp+2507,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_3));
        bufp->chgBit(oldp+2508,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_4));
        bufp->chgBit(oldp+2509,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_5));
        bufp->chgBit(oldp+2510,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_6));
        bufp->chgBit(oldp+2511,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_7));
        bufp->chgBit(oldp+2512,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_8));
        bufp->chgBit(oldp+2513,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_9));
        bufp->chgBit(oldp+2514,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_10));
        bufp->chgBit(oldp+2515,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_11));
        bufp->chgBit(oldp+2516,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_12));
        bufp->chgBit(oldp+2517,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_13));
        bufp->chgBit(oldp+2518,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_14));
        bufp->chgBit(oldp+2519,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_15));
        bufp->chgBit(oldp+2520,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_16));
        bufp->chgBit(oldp+2521,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_17));
        bufp->chgBit(oldp+2522,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_18));
        bufp->chgBit(oldp+2523,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_19));
        bufp->chgBit(oldp+2524,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_20));
        bufp->chgBit(oldp+2525,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_21));
        bufp->chgBit(oldp+2526,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_22));
        bufp->chgBit(oldp+2527,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_23));
        bufp->chgBit(oldp+2528,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_24));
        bufp->chgBit(oldp+2529,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_25));
        bufp->chgBit(oldp+2530,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_26));
        bufp->chgBit(oldp+2531,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_27));
        bufp->chgBit(oldp+2532,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_28));
        bufp->chgBit(oldp+2533,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_29));
        bufp->chgBit(oldp+2534,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_30));
        bufp->chgBit(oldp+2535,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_31));
        bufp->chgBit(oldp+2536,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_32));
        bufp->chgBit(oldp+2537,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_33));
        bufp->chgBit(oldp+2538,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_34));
        bufp->chgBit(oldp+2539,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_35));
        bufp->chgBit(oldp+2540,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_36));
        bufp->chgBit(oldp+2541,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_37));
        bufp->chgBit(oldp+2542,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_38));
        bufp->chgBit(oldp+2543,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_39));
        bufp->chgBit(oldp+2544,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_40));
        bufp->chgBit(oldp+2545,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_41));
        bufp->chgBit(oldp+2546,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_42));
        bufp->chgBit(oldp+2547,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_43));
        bufp->chgBit(oldp+2548,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_44));
        bufp->chgBit(oldp+2549,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_45));
        bufp->chgBit(oldp+2550,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_46));
        bufp->chgBit(oldp+2551,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_47));
        bufp->chgBit(oldp+2552,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_48));
        bufp->chgBit(oldp+2553,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_49));
        bufp->chgBit(oldp+2554,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_50));
        bufp->chgBit(oldp+2555,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_51));
        bufp->chgBit(oldp+2556,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_52));
        bufp->chgBit(oldp+2557,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_53));
        bufp->chgBit(oldp+2558,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_54));
        bufp->chgBit(oldp+2559,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_55));
        bufp->chgBit(oldp+2560,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_56));
        bufp->chgBit(oldp+2561,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_57));
        bufp->chgBit(oldp+2562,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_58));
        bufp->chgBit(oldp+2563,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_59));
        bufp->chgBit(oldp+2564,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_60));
        bufp->chgBit(oldp+2565,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_61));
        bufp->chgBit(oldp+2566,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_62));
        bufp->chgBit(oldp+2567,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_63));
        bufp->chgBit(oldp+2568,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_0));
        bufp->chgBit(oldp+2569,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_1));
        bufp->chgBit(oldp+2570,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_2));
        bufp->chgBit(oldp+2571,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_3));
        bufp->chgBit(oldp+2572,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_4));
        bufp->chgBit(oldp+2573,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_5));
        bufp->chgBit(oldp+2574,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_6));
        bufp->chgBit(oldp+2575,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_7));
        bufp->chgBit(oldp+2576,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_8));
        bufp->chgBit(oldp+2577,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_9));
        bufp->chgBit(oldp+2578,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_10));
        bufp->chgBit(oldp+2579,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_11));
        bufp->chgBit(oldp+2580,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_12));
        bufp->chgBit(oldp+2581,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_13));
        bufp->chgBit(oldp+2582,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_14));
        bufp->chgBit(oldp+2583,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_15));
        bufp->chgBit(oldp+2584,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_16));
        bufp->chgBit(oldp+2585,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_17));
        bufp->chgBit(oldp+2586,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_18));
        bufp->chgBit(oldp+2587,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_19));
        bufp->chgBit(oldp+2588,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_20));
        bufp->chgBit(oldp+2589,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_21));
        bufp->chgBit(oldp+2590,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_22));
        bufp->chgBit(oldp+2591,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_23));
        bufp->chgBit(oldp+2592,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_24));
        bufp->chgBit(oldp+2593,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_25));
        bufp->chgBit(oldp+2594,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_26));
        bufp->chgBit(oldp+2595,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_27));
        bufp->chgBit(oldp+2596,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_28));
        bufp->chgBit(oldp+2597,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_29));
        bufp->chgBit(oldp+2598,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_30));
        bufp->chgBit(oldp+2599,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_31));
        bufp->chgBit(oldp+2600,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_32));
        bufp->chgBit(oldp+2601,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_33));
        bufp->chgBit(oldp+2602,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_34));
        bufp->chgBit(oldp+2603,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_35));
        bufp->chgBit(oldp+2604,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_36));
        bufp->chgBit(oldp+2605,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_37));
        bufp->chgBit(oldp+2606,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_38));
        bufp->chgBit(oldp+2607,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_39));
        bufp->chgBit(oldp+2608,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_40));
        bufp->chgBit(oldp+2609,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_41));
        bufp->chgBit(oldp+2610,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_42));
        bufp->chgBit(oldp+2611,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_43));
        bufp->chgBit(oldp+2612,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_44));
        bufp->chgBit(oldp+2613,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_45));
        bufp->chgBit(oldp+2614,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_46));
        bufp->chgBit(oldp+2615,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_47));
        bufp->chgBit(oldp+2616,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_48));
        bufp->chgBit(oldp+2617,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_49));
        bufp->chgBit(oldp+2618,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_50));
        bufp->chgBit(oldp+2619,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_51));
        bufp->chgBit(oldp+2620,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_52));
        bufp->chgBit(oldp+2621,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_53));
        bufp->chgBit(oldp+2622,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_54));
        bufp->chgBit(oldp+2623,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_55));
        bufp->chgBit(oldp+2624,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_56));
        bufp->chgBit(oldp+2625,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_57));
        bufp->chgBit(oldp+2626,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_58));
        bufp->chgBit(oldp+2627,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_59));
        bufp->chgBit(oldp+2628,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_60));
        bufp->chgBit(oldp+2629,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_61));
        bufp->chgBit(oldp+2630,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_62));
        bufp->chgBit(oldp+2631,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_63));
        bufp->chgBit(oldp+2632,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_0));
        bufp->chgBit(oldp+2633,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_1));
        bufp->chgBit(oldp+2634,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_2));
        bufp->chgBit(oldp+2635,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_3));
        bufp->chgBit(oldp+2636,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_4));
        bufp->chgBit(oldp+2637,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_5));
        bufp->chgBit(oldp+2638,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_6));
        bufp->chgBit(oldp+2639,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_7));
        bufp->chgBit(oldp+2640,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_8));
        bufp->chgBit(oldp+2641,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_9));
        bufp->chgBit(oldp+2642,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_10));
        bufp->chgBit(oldp+2643,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_11));
        bufp->chgBit(oldp+2644,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_12));
        bufp->chgBit(oldp+2645,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_13));
        bufp->chgBit(oldp+2646,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_14));
        bufp->chgBit(oldp+2647,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_15));
        bufp->chgBit(oldp+2648,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_16));
        bufp->chgBit(oldp+2649,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_17));
        bufp->chgBit(oldp+2650,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_18));
        bufp->chgBit(oldp+2651,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_19));
        bufp->chgBit(oldp+2652,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_20));
        bufp->chgBit(oldp+2653,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_21));
        bufp->chgBit(oldp+2654,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_22));
        bufp->chgBit(oldp+2655,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_23));
        bufp->chgBit(oldp+2656,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_24));
        bufp->chgBit(oldp+2657,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_25));
        bufp->chgBit(oldp+2658,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_26));
        bufp->chgBit(oldp+2659,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_27));
        bufp->chgBit(oldp+2660,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_28));
        bufp->chgBit(oldp+2661,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_29));
        bufp->chgBit(oldp+2662,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_30));
        bufp->chgBit(oldp+2663,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_31));
        bufp->chgBit(oldp+2664,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_32));
        bufp->chgBit(oldp+2665,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_33));
        bufp->chgBit(oldp+2666,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_34));
        bufp->chgBit(oldp+2667,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_35));
        bufp->chgBit(oldp+2668,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_36));
        bufp->chgBit(oldp+2669,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_37));
        bufp->chgBit(oldp+2670,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_38));
        bufp->chgBit(oldp+2671,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_39));
        bufp->chgBit(oldp+2672,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_40));
        bufp->chgBit(oldp+2673,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_41));
        bufp->chgBit(oldp+2674,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_42));
        bufp->chgBit(oldp+2675,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_43));
        bufp->chgBit(oldp+2676,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_44));
        bufp->chgBit(oldp+2677,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_45));
        bufp->chgBit(oldp+2678,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_46));
        bufp->chgBit(oldp+2679,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_47));
        bufp->chgBit(oldp+2680,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_48));
        bufp->chgBit(oldp+2681,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_49));
        bufp->chgBit(oldp+2682,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_50));
        bufp->chgBit(oldp+2683,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_51));
        bufp->chgBit(oldp+2684,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_52));
        bufp->chgBit(oldp+2685,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_53));
        bufp->chgBit(oldp+2686,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_54));
        bufp->chgBit(oldp+2687,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_55));
        bufp->chgBit(oldp+2688,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_56));
        bufp->chgBit(oldp+2689,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_57));
        bufp->chgBit(oldp+2690,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_58));
        bufp->chgBit(oldp+2691,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_59));
        bufp->chgBit(oldp+2692,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_60));
        bufp->chgBit(oldp+2693,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_61));
        bufp->chgBit(oldp+2694,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_62));
        bufp->chgBit(oldp+2695,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_63));
        bufp->chgBit(oldp+2696,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0));
        bufp->chgBit(oldp+2697,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1));
        bufp->chgBit(oldp+2698,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2));
        bufp->chgBit(oldp+2699,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3));
        bufp->chgBit(oldp+2700,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4));
        bufp->chgBit(oldp+2701,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5));
        bufp->chgBit(oldp+2702,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6));
        bufp->chgBit(oldp+2703,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7));
        bufp->chgBit(oldp+2704,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8));
        bufp->chgBit(oldp+2705,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9));
        bufp->chgBit(oldp+2706,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10));
        bufp->chgBit(oldp+2707,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11));
        bufp->chgBit(oldp+2708,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12));
        bufp->chgBit(oldp+2709,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13));
        bufp->chgBit(oldp+2710,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14));
        bufp->chgBit(oldp+2711,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15));
        bufp->chgBit(oldp+2712,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16));
        bufp->chgBit(oldp+2713,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17));
        bufp->chgBit(oldp+2714,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18));
        bufp->chgBit(oldp+2715,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19));
        bufp->chgBit(oldp+2716,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20));
        bufp->chgBit(oldp+2717,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21));
        bufp->chgBit(oldp+2718,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22));
        bufp->chgBit(oldp+2719,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23));
        bufp->chgBit(oldp+2720,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24));
        bufp->chgBit(oldp+2721,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25));
        bufp->chgBit(oldp+2722,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26));
        bufp->chgBit(oldp+2723,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27));
        bufp->chgBit(oldp+2724,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28));
        bufp->chgBit(oldp+2725,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29));
        bufp->chgBit(oldp+2726,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30));
        bufp->chgBit(oldp+2727,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31));
        bufp->chgBit(oldp+2728,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32));
        bufp->chgBit(oldp+2729,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33));
        bufp->chgBit(oldp+2730,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34));
        bufp->chgBit(oldp+2731,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35));
        bufp->chgBit(oldp+2732,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36));
        bufp->chgBit(oldp+2733,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37));
        bufp->chgBit(oldp+2734,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38));
        bufp->chgBit(oldp+2735,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39));
        bufp->chgBit(oldp+2736,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40));
        bufp->chgBit(oldp+2737,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41));
        bufp->chgBit(oldp+2738,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42));
        bufp->chgBit(oldp+2739,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43));
        bufp->chgBit(oldp+2740,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44));
        bufp->chgBit(oldp+2741,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45));
        bufp->chgBit(oldp+2742,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46));
        bufp->chgBit(oldp+2743,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47));
        bufp->chgBit(oldp+2744,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48));
        bufp->chgBit(oldp+2745,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49));
        bufp->chgBit(oldp+2746,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50));
        bufp->chgBit(oldp+2747,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51));
        bufp->chgBit(oldp+2748,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52));
        bufp->chgBit(oldp+2749,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53));
        bufp->chgBit(oldp+2750,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54));
        bufp->chgBit(oldp+2751,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55));
        bufp->chgBit(oldp+2752,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56));
        bufp->chgBit(oldp+2753,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57));
        bufp->chgBit(oldp+2754,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58));
        bufp->chgBit(oldp+2755,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59));
        bufp->chgBit(oldp+2756,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60));
        bufp->chgBit(oldp+2757,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61));
        bufp->chgBit(oldp+2758,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62));
        bufp->chgBit(oldp+2759,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63));
        bufp->chgBit(oldp+2760,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0));
        bufp->chgBit(oldp+2761,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1));
        bufp->chgBit(oldp+2762,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2));
        bufp->chgBit(oldp+2763,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3));
        bufp->chgBit(oldp+2764,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4));
        bufp->chgBit(oldp+2765,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5));
        bufp->chgBit(oldp+2766,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6));
        bufp->chgBit(oldp+2767,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7));
        bufp->chgBit(oldp+2768,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8));
        bufp->chgBit(oldp+2769,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9));
        bufp->chgBit(oldp+2770,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10));
        bufp->chgBit(oldp+2771,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11));
        bufp->chgBit(oldp+2772,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12));
        bufp->chgBit(oldp+2773,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13));
        bufp->chgBit(oldp+2774,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14));
        bufp->chgBit(oldp+2775,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15));
        bufp->chgBit(oldp+2776,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16));
        bufp->chgBit(oldp+2777,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17));
        bufp->chgBit(oldp+2778,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18));
        bufp->chgBit(oldp+2779,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19));
        bufp->chgBit(oldp+2780,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20));
        bufp->chgBit(oldp+2781,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21));
        bufp->chgBit(oldp+2782,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22));
        bufp->chgBit(oldp+2783,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23));
        bufp->chgBit(oldp+2784,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24));
        bufp->chgBit(oldp+2785,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25));
        bufp->chgBit(oldp+2786,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26));
        bufp->chgBit(oldp+2787,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27));
        bufp->chgBit(oldp+2788,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28));
        bufp->chgBit(oldp+2789,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29));
        bufp->chgBit(oldp+2790,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30));
        bufp->chgBit(oldp+2791,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31));
        bufp->chgBit(oldp+2792,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32));
        bufp->chgBit(oldp+2793,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33));
        bufp->chgBit(oldp+2794,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34));
        bufp->chgBit(oldp+2795,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35));
        bufp->chgBit(oldp+2796,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36));
        bufp->chgBit(oldp+2797,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37));
        bufp->chgBit(oldp+2798,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38));
        bufp->chgBit(oldp+2799,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39));
        bufp->chgBit(oldp+2800,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40));
        bufp->chgBit(oldp+2801,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41));
        bufp->chgBit(oldp+2802,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42));
        bufp->chgBit(oldp+2803,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43));
        bufp->chgBit(oldp+2804,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44));
        bufp->chgBit(oldp+2805,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45));
        bufp->chgBit(oldp+2806,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46));
        bufp->chgBit(oldp+2807,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47));
        bufp->chgBit(oldp+2808,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48));
        bufp->chgBit(oldp+2809,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49));
        bufp->chgBit(oldp+2810,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50));
        bufp->chgBit(oldp+2811,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51));
        bufp->chgBit(oldp+2812,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52));
        bufp->chgBit(oldp+2813,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53));
        bufp->chgBit(oldp+2814,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54));
        bufp->chgBit(oldp+2815,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55));
        bufp->chgBit(oldp+2816,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56));
        bufp->chgBit(oldp+2817,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57));
        bufp->chgBit(oldp+2818,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58));
        bufp->chgBit(oldp+2819,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59));
        bufp->chgBit(oldp+2820,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60));
        bufp->chgBit(oldp+2821,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61));
        bufp->chgBit(oldp+2822,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62));
        bufp->chgBit(oldp+2823,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63));
        bufp->chgBit(oldp+2824,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0));
        bufp->chgBit(oldp+2825,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1));
        bufp->chgBit(oldp+2826,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2));
        bufp->chgBit(oldp+2827,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3));
        bufp->chgBit(oldp+2828,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4));
        bufp->chgBit(oldp+2829,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5));
        bufp->chgBit(oldp+2830,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6));
        bufp->chgBit(oldp+2831,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7));
        bufp->chgBit(oldp+2832,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8));
        bufp->chgBit(oldp+2833,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9));
        bufp->chgBit(oldp+2834,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10));
        bufp->chgBit(oldp+2835,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11));
        bufp->chgBit(oldp+2836,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12));
        bufp->chgBit(oldp+2837,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13));
        bufp->chgBit(oldp+2838,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14));
        bufp->chgBit(oldp+2839,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15));
        bufp->chgBit(oldp+2840,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16));
        bufp->chgBit(oldp+2841,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17));
        bufp->chgBit(oldp+2842,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18));
        bufp->chgBit(oldp+2843,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19));
        bufp->chgBit(oldp+2844,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20));
        bufp->chgBit(oldp+2845,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21));
        bufp->chgBit(oldp+2846,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22));
        bufp->chgBit(oldp+2847,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23));
        bufp->chgBit(oldp+2848,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24));
        bufp->chgBit(oldp+2849,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25));
        bufp->chgBit(oldp+2850,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26));
        bufp->chgBit(oldp+2851,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27));
        bufp->chgBit(oldp+2852,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28));
        bufp->chgBit(oldp+2853,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29));
        bufp->chgBit(oldp+2854,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30));
        bufp->chgBit(oldp+2855,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31));
        bufp->chgBit(oldp+2856,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32));
        bufp->chgBit(oldp+2857,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33));
        bufp->chgBit(oldp+2858,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34));
        bufp->chgBit(oldp+2859,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35));
        bufp->chgBit(oldp+2860,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36));
        bufp->chgBit(oldp+2861,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37));
        bufp->chgBit(oldp+2862,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38));
        bufp->chgBit(oldp+2863,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39));
        bufp->chgBit(oldp+2864,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40));
        bufp->chgBit(oldp+2865,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41));
        bufp->chgBit(oldp+2866,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42));
        bufp->chgBit(oldp+2867,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43));
        bufp->chgBit(oldp+2868,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44));
        bufp->chgBit(oldp+2869,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45));
        bufp->chgBit(oldp+2870,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46));
        bufp->chgBit(oldp+2871,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47));
        bufp->chgBit(oldp+2872,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48));
        bufp->chgBit(oldp+2873,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49));
        bufp->chgBit(oldp+2874,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50));
        bufp->chgBit(oldp+2875,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51));
        bufp->chgBit(oldp+2876,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52));
        bufp->chgBit(oldp+2877,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53));
        bufp->chgBit(oldp+2878,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54));
        bufp->chgBit(oldp+2879,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55));
        bufp->chgBit(oldp+2880,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56));
        bufp->chgBit(oldp+2881,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57));
        bufp->chgBit(oldp+2882,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58));
        bufp->chgBit(oldp+2883,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59));
        bufp->chgBit(oldp+2884,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60));
        bufp->chgBit(oldp+2885,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61));
        bufp->chgBit(oldp+2886,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62));
        bufp->chgBit(oldp+2887,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63));
        bufp->chgBit(oldp+2888,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0));
        bufp->chgBit(oldp+2889,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1));
        bufp->chgBit(oldp+2890,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2));
        bufp->chgBit(oldp+2891,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3));
        bufp->chgBit(oldp+2892,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4));
        bufp->chgBit(oldp+2893,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5));
        bufp->chgBit(oldp+2894,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6));
        bufp->chgBit(oldp+2895,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7));
        bufp->chgBit(oldp+2896,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8));
        bufp->chgBit(oldp+2897,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9));
        bufp->chgBit(oldp+2898,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10));
        bufp->chgBit(oldp+2899,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11));
        bufp->chgBit(oldp+2900,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12));
        bufp->chgBit(oldp+2901,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13));
        bufp->chgBit(oldp+2902,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14));
        bufp->chgBit(oldp+2903,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15));
        bufp->chgBit(oldp+2904,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16));
        bufp->chgBit(oldp+2905,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17));
        bufp->chgBit(oldp+2906,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18));
        bufp->chgBit(oldp+2907,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19));
        bufp->chgBit(oldp+2908,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20));
        bufp->chgBit(oldp+2909,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21));
        bufp->chgBit(oldp+2910,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22));
        bufp->chgBit(oldp+2911,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23));
        bufp->chgBit(oldp+2912,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24));
        bufp->chgBit(oldp+2913,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25));
        bufp->chgBit(oldp+2914,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26));
        bufp->chgBit(oldp+2915,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27));
        bufp->chgBit(oldp+2916,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28));
        bufp->chgBit(oldp+2917,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29));
        bufp->chgBit(oldp+2918,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30));
        bufp->chgBit(oldp+2919,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31));
        bufp->chgBit(oldp+2920,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32));
        bufp->chgBit(oldp+2921,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33));
        bufp->chgBit(oldp+2922,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34));
        bufp->chgBit(oldp+2923,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35));
        bufp->chgBit(oldp+2924,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36));
        bufp->chgBit(oldp+2925,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37));
        bufp->chgBit(oldp+2926,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38));
        bufp->chgBit(oldp+2927,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39));
        bufp->chgBit(oldp+2928,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40));
        bufp->chgBit(oldp+2929,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41));
        bufp->chgBit(oldp+2930,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42));
        bufp->chgBit(oldp+2931,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43));
        bufp->chgBit(oldp+2932,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44));
        bufp->chgBit(oldp+2933,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45));
        bufp->chgBit(oldp+2934,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46));
        bufp->chgBit(oldp+2935,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47));
        bufp->chgBit(oldp+2936,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48));
        bufp->chgBit(oldp+2937,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49));
        bufp->chgBit(oldp+2938,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50));
        bufp->chgBit(oldp+2939,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51));
        bufp->chgBit(oldp+2940,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52));
        bufp->chgBit(oldp+2941,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53));
        bufp->chgBit(oldp+2942,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54));
        bufp->chgBit(oldp+2943,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55));
        bufp->chgBit(oldp+2944,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56));
        bufp->chgBit(oldp+2945,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57));
        bufp->chgBit(oldp+2946,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58));
        bufp->chgBit(oldp+2947,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59));
        bufp->chgBit(oldp+2948,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60));
        bufp->chgBit(oldp+2949,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61));
        bufp->chgBit(oldp+2950,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62));
        bufp->chgBit(oldp+2951,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63));
        bufp->chgIData(oldp+2952,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg),21);
        bufp->chgCData(oldp+2953,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg),6);
        bufp->chgCData(oldp+2954,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg),5);
        bufp->chgIData(oldp+2955,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__line_base),32);
        bufp->chgIData(oldp+2956,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg),32);
        bufp->chgIData(oldp+2957,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_addr_reg),32);
        bufp->chgBit(oldp+2958,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg));
        bufp->chgIData(oldp+2959,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_data_reg),32);
        bufp->chgIData(oldp+2960,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_addr_reg),32);
        bufp->chgBit(oldp+2961,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass));
        bufp->chgBit(oldp+2962,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg));
        bufp->chgIData(oldp+2963,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg),32);
        bufp->chgCData(oldp+2964,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg),4);
        bufp->chgIData(oldp+2965,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wb_addr),32);
        bufp->chgCData(oldp+2966,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__rand_way),2);
        bufp->chgCData(oldp+2967,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way),2);
        bufp->chgCData(oldp+2968,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt),3);
        bufp->chgCData(oldp+2969,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state),4);
        bufp->chgIData(oldp+2970,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp),21);
        bufp->chgBit(oldp+2971,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0));
        bufp->chgBit(oldp+2972,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0));
        bufp->chgIData(oldp+2973,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1),21);
        bufp->chgBit(oldp+2974,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2));
        bufp->chgBit(oldp+2975,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1));
        bufp->chgIData(oldp+2976,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_3),21);
        bufp->chgBit(oldp+2977,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_4));
        bufp->chgBit(oldp+2978,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2));
        bufp->chgIData(oldp+2979,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_5),21);
        bufp->chgBit(oldp+2980,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_6));
        bufp->chgBit(oldp+2981,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit3));
        bufp->chgBit(oldp+2982,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit));
        bufp->chgIData(oldp+2983,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7),32);
        bufp->chgIData(oldp+2984,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8),32);
        bufp->chgIData(oldp+2985,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9),32);
        bufp->chgIData(oldp+2986,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10),32);
        bufp->chgIData(oldp+2987,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11),32);
        bufp->chgIData(oldp+2988,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12),32);
        bufp->chgIData(oldp+2989,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13),32);
        bufp->chgIData(oldp+2990,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14),32);
        bufp->chgIData(oldp+2991,(((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                    ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_14
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_13)
                                        : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_12
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_11))
                                    : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_10
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_9)
                                        : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_8
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_7)))),32);
        bufp->chgIData(oldp+2992,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16),32);
        bufp->chgIData(oldp+2993,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17),32);
        bufp->chgIData(oldp+2994,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18),32);
        bufp->chgIData(oldp+2995,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19),32);
        bufp->chgIData(oldp+2996,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20),32);
        bufp->chgIData(oldp+2997,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21),32);
        bufp->chgIData(oldp+2998,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22),32);
        bufp->chgIData(oldp+2999,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23),32);
        bufp->chgIData(oldp+3000,(((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                    ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_23
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_22)
                                        : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_21
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_20))
                                    : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_19
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_18)
                                        : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_17
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_16)))),32);
        bufp->chgIData(oldp+3001,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25),32);
        bufp->chgIData(oldp+3002,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26),32);
        bufp->chgIData(oldp+3003,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27),32);
        bufp->chgIData(oldp+3004,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28),32);
        bufp->chgIData(oldp+3005,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29),32);
        bufp->chgIData(oldp+3006,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30),32);
        bufp->chgIData(oldp+3007,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31),32);
        bufp->chgIData(oldp+3008,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32),32);
        bufp->chgIData(oldp+3009,(((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                    ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_32
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_31)
                                        : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_30
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_29))
                                    : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_28
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_27)
                                        : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_26
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_25)))),32);
        bufp->chgIData(oldp+3010,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34),32);
        bufp->chgIData(oldp+3011,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35),32);
        bufp->chgIData(oldp+3012,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36),32);
        bufp->chgIData(oldp+3013,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37),32);
        bufp->chgIData(oldp+3014,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38),32);
        bufp->chgIData(oldp+3015,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39),32);
        bufp->chgIData(oldp+3016,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40),32);
        bufp->chgIData(oldp+3017,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41),32);
        bufp->chgIData(oldp+3018,(((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                    ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_41
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_40)
                                        : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_39
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_38))
                                    : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_37
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_36)
                                        : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_35
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_34)))),32);
        bufp->chgCData(oldp+3019,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay),2);
        bufp->chgBit(oldp+3020,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_0)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_0)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_0)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_0))))));
        bufp->chgBit(oldp+3021,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_1)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_1)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_1)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_1))))));
        bufp->chgBit(oldp+3022,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_2)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_2)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_2)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_2))))));
        bufp->chgBit(oldp+3023,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_3)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_3)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_3)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_3))))));
        bufp->chgBit(oldp+3024,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_4)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_4)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_4)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_4))))));
        bufp->chgBit(oldp+3025,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_5)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_5)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_5)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_5))))));
        bufp->chgBit(oldp+3026,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_6)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_6)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_6)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_6))))));
        bufp->chgBit(oldp+3027,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_7)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_7)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_7)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_7))))));
        bufp->chgBit(oldp+3028,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_8)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_8)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_8)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_8))))));
        bufp->chgBit(oldp+3029,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_9)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_9)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_9)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_9))))));
        bufp->chgBit(oldp+3030,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_10)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_10)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_10)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_10))))));
        bufp->chgBit(oldp+3031,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_11)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_11)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_11)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_11))))));
        bufp->chgBit(oldp+3032,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_12)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_12)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_12)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_12))))));
        bufp->chgBit(oldp+3033,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_13)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_13)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_13)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_13))))));
        bufp->chgBit(oldp+3034,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_14)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_14)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_14)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_14))))));
        bufp->chgBit(oldp+3035,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_15)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_15)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_15)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_15))))));
        bufp->chgBit(oldp+3036,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_16)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_16)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_16)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_16))))));
        bufp->chgBit(oldp+3037,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_17)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_17)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_17)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_17))))));
        bufp->chgBit(oldp+3038,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_18)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_18)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_18)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_18))))));
        bufp->chgBit(oldp+3039,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_19)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_19)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_19)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_19))))));
        bufp->chgBit(oldp+3040,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_20)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_20)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_20)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_20))))));
        bufp->chgBit(oldp+3041,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_21)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_21)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_21)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_21))))));
        bufp->chgBit(oldp+3042,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_22)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_22)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_22)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_22))))));
        bufp->chgBit(oldp+3043,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_23)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_23)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_23)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_23))))));
        bufp->chgBit(oldp+3044,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_24)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_24)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_24)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_24))))));
        bufp->chgBit(oldp+3045,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_25)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_25)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_25)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_25))))));
        bufp->chgBit(oldp+3046,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_26)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_26)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_26)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_26))))));
        bufp->chgBit(oldp+3047,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_27)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_27)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_27)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_27))))));
        bufp->chgBit(oldp+3048,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_28)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_28)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_28)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_28))))));
        bufp->chgBit(oldp+3049,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_29)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_29)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_29)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_29))))));
        bufp->chgBit(oldp+3050,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_30)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_30)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_30)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_30))))));
        bufp->chgBit(oldp+3051,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_31)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_31)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_31)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_31))))));
        bufp->chgBit(oldp+3052,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_32)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_32)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_32)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_32))))));
        bufp->chgBit(oldp+3053,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_33)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_33)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_33)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_33))))));
        bufp->chgBit(oldp+3054,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_34)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_34)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_34)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_34))))));
        bufp->chgBit(oldp+3055,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_35)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_35)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_35)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_35))))));
        bufp->chgBit(oldp+3056,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_36)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_36)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_36)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_36))))));
        bufp->chgBit(oldp+3057,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_37)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_37)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_37)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_37))))));
        bufp->chgBit(oldp+3058,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_38)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_38)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_38)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_38))))));
        bufp->chgBit(oldp+3059,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_39)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_39)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_39)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_39))))));
        bufp->chgBit(oldp+3060,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_40)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_40)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_40)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_40))))));
        bufp->chgBit(oldp+3061,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_41)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_41)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_41)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_41))))));
        bufp->chgBit(oldp+3062,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_42)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_42)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_42)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_42))))));
        bufp->chgBit(oldp+3063,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_43)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_43)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_43)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_43))))));
        bufp->chgBit(oldp+3064,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_44)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_44)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_44)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_44))))));
        bufp->chgBit(oldp+3065,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_45)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_45)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_45)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_45))))));
        bufp->chgBit(oldp+3066,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_46)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_46)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_46)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_46))))));
        bufp->chgBit(oldp+3067,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_47)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_47)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_47)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_47))))));
        bufp->chgBit(oldp+3068,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_48)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_48)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_48)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_48))))));
        bufp->chgBit(oldp+3069,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_49)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_49)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_49)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_49))))));
        bufp->chgBit(oldp+3070,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_50)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_50)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_50)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_50))))));
        bufp->chgBit(oldp+3071,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_51)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_51)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_51)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_51))))));
        bufp->chgBit(oldp+3072,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_52)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_52)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_52)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_52))))));
        bufp->chgBit(oldp+3073,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_53)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_53)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_53)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_53))))));
        bufp->chgBit(oldp+3074,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_54)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_54)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_54)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_54))))));
        bufp->chgBit(oldp+3075,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_55)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_55)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_55)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_55))))));
        bufp->chgBit(oldp+3076,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_56)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_56)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_56)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_56))))));
        bufp->chgBit(oldp+3077,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_57)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_57)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_57)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_57))))));
        bufp->chgBit(oldp+3078,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_58)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_58)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_58)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_58))))));
        bufp->chgBit(oldp+3079,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_59)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_59)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_59)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_59))))));
        bufp->chgBit(oldp+3080,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_60)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_60)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_60)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_60))))));
        bufp->chgBit(oldp+3081,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_61)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_61)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_61)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_61))))));
        bufp->chgBit(oldp+3082,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_62)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_62)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_62)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_62))))));
        bufp->chgBit(oldp+3083,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_63)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_63)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_63)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_63))))));
        bufp->chgBit(oldp+3084,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_111));
        bufp->chgBit(oldp+3085,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0))))));
        bufp->chgBit(oldp+3086,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1))))));
        bufp->chgBit(oldp+3087,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2))))));
        bufp->chgBit(oldp+3088,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3))))));
        bufp->chgBit(oldp+3089,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4))))));
        bufp->chgBit(oldp+3090,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5))))));
        bufp->chgBit(oldp+3091,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6))))));
        bufp->chgBit(oldp+3092,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7))))));
        bufp->chgBit(oldp+3093,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8))))));
        bufp->chgBit(oldp+3094,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9))))));
        bufp->chgBit(oldp+3095,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10))))));
        bufp->chgBit(oldp+3096,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11))))));
        bufp->chgBit(oldp+3097,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12))))));
        bufp->chgBit(oldp+3098,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13))))));
        bufp->chgBit(oldp+3099,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14))))));
        bufp->chgBit(oldp+3100,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15))))));
        bufp->chgBit(oldp+3101,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16))))));
        bufp->chgBit(oldp+3102,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17))))));
        bufp->chgBit(oldp+3103,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18))))));
        bufp->chgBit(oldp+3104,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19))))));
        bufp->chgBit(oldp+3105,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20))))));
        bufp->chgBit(oldp+3106,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21))))));
        bufp->chgBit(oldp+3107,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22))))));
        bufp->chgBit(oldp+3108,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23))))));
        bufp->chgBit(oldp+3109,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24))))));
        bufp->chgBit(oldp+3110,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25))))));
        bufp->chgBit(oldp+3111,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26))))));
        bufp->chgBit(oldp+3112,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27))))));
        bufp->chgBit(oldp+3113,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28))))));
        bufp->chgBit(oldp+3114,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29))))));
        bufp->chgBit(oldp+3115,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30))))));
        bufp->chgBit(oldp+3116,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31))))));
        bufp->chgBit(oldp+3117,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32))))));
        bufp->chgBit(oldp+3118,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33))))));
        bufp->chgBit(oldp+3119,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34))))));
        bufp->chgBit(oldp+3120,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35))))));
        bufp->chgBit(oldp+3121,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36))))));
        bufp->chgBit(oldp+3122,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37))))));
        bufp->chgBit(oldp+3123,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38))))));
        bufp->chgBit(oldp+3124,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39))))));
        bufp->chgBit(oldp+3125,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40))))));
        bufp->chgBit(oldp+3126,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41))))));
        bufp->chgBit(oldp+3127,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42))))));
        bufp->chgBit(oldp+3128,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43))))));
        bufp->chgBit(oldp+3129,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44))))));
        bufp->chgBit(oldp+3130,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45))))));
        bufp->chgBit(oldp+3131,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46))))));
        bufp->chgBit(oldp+3132,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47))))));
        bufp->chgBit(oldp+3133,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48))))));
        bufp->chgBit(oldp+3134,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49))))));
        bufp->chgBit(oldp+3135,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50))))));
        bufp->chgBit(oldp+3136,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51))))));
        bufp->chgBit(oldp+3137,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52))))));
        bufp->chgBit(oldp+3138,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53))))));
        bufp->chgBit(oldp+3139,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54))))));
        bufp->chgBit(oldp+3140,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55))))));
        bufp->chgBit(oldp+3141,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56))))));
        bufp->chgBit(oldp+3142,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57))))));
        bufp->chgBit(oldp+3143,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58))))));
        bufp->chgBit(oldp+3144,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59))))));
        bufp->chgBit(oldp+3145,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60))))));
        bufp->chgBit(oldp+3146,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61))))));
        bufp->chgBit(oldp+3147,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62))))));
        bufp->chgBit(oldp+3148,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63)
                                  : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63)
                                      : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                          ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63)
                                          : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63))))));
        bufp->chgBit(oldp+3149,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_176));
        bufp->chgIData(oldp+3150,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_0)))),21);
        bufp->chgIData(oldp+3151,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_1)))),21);
        bufp->chgIData(oldp+3152,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_2)))),21);
        bufp->chgIData(oldp+3153,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_3)))),21);
        bufp->chgIData(oldp+3154,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_4)))),21);
        bufp->chgIData(oldp+3155,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_5)))),21);
        bufp->chgIData(oldp+3156,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_6)))),21);
        bufp->chgIData(oldp+3157,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_7)))),21);
        bufp->chgIData(oldp+3158,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_8
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_8
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_8
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_8)))),21);
        bufp->chgIData(oldp+3159,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_9
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_9
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_9
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_9)))),21);
        bufp->chgIData(oldp+3160,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_10
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_10
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_10
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_10)))),21);
        bufp->chgIData(oldp+3161,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_11
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_11
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_11
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_11)))),21);
        bufp->chgIData(oldp+3162,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_12
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_12
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_12
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_12)))),21);
        bufp->chgIData(oldp+3163,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_13
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_13
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_13
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_13)))),21);
        bufp->chgIData(oldp+3164,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_14
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_14
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_14
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_14)))),21);
        bufp->chgIData(oldp+3165,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_15
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_15
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_15
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_15)))),21);
        bufp->chgIData(oldp+3166,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_16
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_16
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_16
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_16)))),21);
        bufp->chgIData(oldp+3167,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_17
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_17
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_17
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_17)))),21);
        bufp->chgIData(oldp+3168,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_18
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_18
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_18
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_18)))),21);
        bufp->chgIData(oldp+3169,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_19
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_19
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_19
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_19)))),21);
        bufp->chgIData(oldp+3170,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_20
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_20
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_20
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_20)))),21);
        bufp->chgIData(oldp+3171,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_21
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_21
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_21
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_21)))),21);
        bufp->chgIData(oldp+3172,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_22
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_22
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_22
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_22)))),21);
        bufp->chgIData(oldp+3173,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_23
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_23
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_23
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_23)))),21);
        bufp->chgIData(oldp+3174,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_24
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_24
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_24
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_24)))),21);
        bufp->chgIData(oldp+3175,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_25
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_25
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_25
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_25)))),21);
        bufp->chgIData(oldp+3176,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_26
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_26
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_26
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_26)))),21);
        bufp->chgIData(oldp+3177,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_27
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_27
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_27
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_27)))),21);
        bufp->chgIData(oldp+3178,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_28
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_28
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_28
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_28)))),21);
        bufp->chgIData(oldp+3179,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_29
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_29
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_29
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_29)))),21);
        bufp->chgIData(oldp+3180,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_30
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_30
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_30
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_30)))),21);
        bufp->chgIData(oldp+3181,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_31
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_31
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_31
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_31)))),21);
        bufp->chgIData(oldp+3182,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_32
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_32
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_32
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_32)))),21);
        bufp->chgIData(oldp+3183,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_33
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_33
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_33
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_33)))),21);
        bufp->chgIData(oldp+3184,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_34
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_34
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_34
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_34)))),21);
        bufp->chgIData(oldp+3185,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_35
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_35
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_35
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_35)))),21);
        bufp->chgIData(oldp+3186,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_36
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_36
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_36
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_36)))),21);
        bufp->chgIData(oldp+3187,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_37
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_37
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_37
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_37)))),21);
        bufp->chgIData(oldp+3188,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_38
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_38
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_38
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_38)))),21);
        bufp->chgIData(oldp+3189,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_39
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_39
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_39
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_39)))),21);
        bufp->chgIData(oldp+3190,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_40
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_40
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_40
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_40)))),21);
        bufp->chgIData(oldp+3191,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_41
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_41
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_41
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_41)))),21);
        bufp->chgIData(oldp+3192,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_42
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_42
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_42
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_42)))),21);
        bufp->chgIData(oldp+3193,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_43
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_43
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_43
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_43)))),21);
        bufp->chgIData(oldp+3194,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_44
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_44
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_44
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_44)))),21);
        bufp->chgIData(oldp+3195,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_45
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_45
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_45
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_45)))),21);
        bufp->chgIData(oldp+3196,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_46
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_46
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_46
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_46)))),21);
        bufp->chgIData(oldp+3197,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_47
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_47
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_47
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_47)))),21);
        bufp->chgIData(oldp+3198,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_48
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_48
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_48
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_48)))),21);
        bufp->chgIData(oldp+3199,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_49
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_49
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_49
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_49)))),21);
        bufp->chgIData(oldp+3200,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_50
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_50
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_50
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_50)))),21);
        bufp->chgIData(oldp+3201,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_51
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_51
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_51
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_51)))),21);
        bufp->chgIData(oldp+3202,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_52
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_52
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_52
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_52)))),21);
        bufp->chgIData(oldp+3203,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_53
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_53
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_53
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_53)))),21);
        bufp->chgIData(oldp+3204,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_54
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_54
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_54
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_54)))),21);
        bufp->chgIData(oldp+3205,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_55
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_55
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_55
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_55)))),21);
        bufp->chgIData(oldp+3206,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_56
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_56
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_56
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_56)))),21);
        bufp->chgIData(oldp+3207,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_57
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_57
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_57
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_57)))),21);
        bufp->chgIData(oldp+3208,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_58
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_58
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_58
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_58)))),21);
        bufp->chgIData(oldp+3209,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_59
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_59
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_59
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_59)))),21);
        bufp->chgIData(oldp+3210,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_60
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_60
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_60
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_60)))),21);
        bufp->chgIData(oldp+3211,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_61
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_61
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_61
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_61)))),21);
        bufp->chgIData(oldp+3212,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_62
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_62
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_62
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_62)))),21);
        bufp->chgIData(oldp+3213,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_0_63
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_1_63
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_2_63
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_array_3_63)))),21);
        bufp->chgIData(oldp+3214,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_241),21);
        bufp->chgIData(oldp+3215,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_0)))),32);
        bufp->chgIData(oldp+3216,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_1)))),32);
        bufp->chgIData(oldp+3217,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_2)))),32);
        bufp->chgIData(oldp+3218,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_3)))),32);
        bufp->chgIData(oldp+3219,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_4)))),32);
        bufp->chgIData(oldp+3220,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_5)))),32);
        bufp->chgIData(oldp+3221,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_6)))),32);
        bufp->chgIData(oldp+3222,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_0_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_0_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_0_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_0_7)))),32);
        bufp->chgIData(oldp+3223,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_0)))),32);
        bufp->chgIData(oldp+3224,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_1)))),32);
        bufp->chgIData(oldp+3225,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_2)))),32);
        bufp->chgIData(oldp+3226,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_3)))),32);
        bufp->chgIData(oldp+3227,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_4)))),32);
        bufp->chgIData(oldp+3228,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_5)))),32);
        bufp->chgIData(oldp+3229,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_6)))),32);
        bufp->chgIData(oldp+3230,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_1_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_1_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_1_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_1_7)))),32);
        bufp->chgIData(oldp+3231,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_0)))),32);
        bufp->chgIData(oldp+3232,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_1)))),32);
        bufp->chgIData(oldp+3233,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_2)))),32);
        bufp->chgIData(oldp+3234,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_3)))),32);
        bufp->chgIData(oldp+3235,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_4)))),32);
        bufp->chgIData(oldp+3236,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_5)))),32);
        bufp->chgIData(oldp+3237,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_6)))),32);
        bufp->chgIData(oldp+3238,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_2_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_2_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_2_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_2_7)))),32);
        bufp->chgIData(oldp+3239,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_0)))),32);
        bufp->chgIData(oldp+3240,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_1)))),32);
        bufp->chgIData(oldp+3241,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_2)))),32);
        bufp->chgIData(oldp+3242,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_3)))),32);
        bufp->chgIData(oldp+3243,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_4)))),32);
        bufp->chgIData(oldp+3244,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_5)))),32);
        bufp->chgIData(oldp+3245,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_6)))),32);
        bufp->chgIData(oldp+3246,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_3_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_3_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_3_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_3_7)))),32);
        bufp->chgIData(oldp+3247,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_0)))),32);
        bufp->chgIData(oldp+3248,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_1)))),32);
        bufp->chgIData(oldp+3249,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_2)))),32);
        bufp->chgIData(oldp+3250,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_3)))),32);
        bufp->chgIData(oldp+3251,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_4)))),32);
        bufp->chgIData(oldp+3252,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_5)))),32);
        bufp->chgIData(oldp+3253,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_6)))),32);
        bufp->chgIData(oldp+3254,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_4_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_4_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_4_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_4_7)))),32);
        bufp->chgIData(oldp+3255,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_0)))),32);
        bufp->chgIData(oldp+3256,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_1)))),32);
        bufp->chgIData(oldp+3257,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_2)))),32);
        bufp->chgIData(oldp+3258,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_3)))),32);
        bufp->chgIData(oldp+3259,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_4)))),32);
        bufp->chgIData(oldp+3260,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_5)))),32);
        bufp->chgIData(oldp+3261,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_6)))),32);
        bufp->chgIData(oldp+3262,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_5_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_5_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_5_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_5_7)))),32);
        bufp->chgIData(oldp+3263,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_0)))),32);
        bufp->chgIData(oldp+3264,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_1)))),32);
        bufp->chgIData(oldp+3265,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_2)))),32);
        bufp->chgIData(oldp+3266,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_3)))),32);
        bufp->chgIData(oldp+3267,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_4)))),32);
        bufp->chgIData(oldp+3268,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_5)))),32);
        bufp->chgIData(oldp+3269,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_6)))),32);
        bufp->chgIData(oldp+3270,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_6_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_6_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_6_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_6_7)))),32);
        bufp->chgIData(oldp+3271,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_0)))),32);
        bufp->chgIData(oldp+3272,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_1)))),32);
        bufp->chgIData(oldp+3273,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_2)))),32);
        bufp->chgIData(oldp+3274,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_3)))),32);
        bufp->chgIData(oldp+3275,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_4)))),32);
        bufp->chgIData(oldp+3276,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_5)))),32);
        bufp->chgIData(oldp+3277,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_6)))),32);
        bufp->chgIData(oldp+3278,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_7_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_7_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_7_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_7_7)))),32);
        bufp->chgIData(oldp+3279,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_0)))),32);
        bufp->chgIData(oldp+3280,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_1)))),32);
        bufp->chgIData(oldp+3281,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_2)))),32);
        bufp->chgIData(oldp+3282,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_3)))),32);
        bufp->chgIData(oldp+3283,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_4)))),32);
        bufp->chgIData(oldp+3284,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_5)))),32);
        bufp->chgIData(oldp+3285,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_6)))),32);
        bufp->chgIData(oldp+3286,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_8_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_8_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_8_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_8_7)))),32);
        bufp->chgIData(oldp+3287,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_0)))),32);
        bufp->chgIData(oldp+3288,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_1)))),32);
        bufp->chgIData(oldp+3289,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_2)))),32);
        bufp->chgIData(oldp+3290,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_3)))),32);
        bufp->chgIData(oldp+3291,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_4)))),32);
        bufp->chgIData(oldp+3292,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_5)))),32);
        bufp->chgIData(oldp+3293,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_6)))),32);
        bufp->chgIData(oldp+3294,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_9_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_9_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_9_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_9_7)))),32);
        bufp->chgIData(oldp+3295,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_0)))),32);
        bufp->chgIData(oldp+3296,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_1)))),32);
        bufp->chgIData(oldp+3297,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_2)))),32);
        bufp->chgIData(oldp+3298,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_3)))),32);
        bufp->chgIData(oldp+3299,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_4)))),32);
        bufp->chgIData(oldp+3300,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_5)))),32);
        bufp->chgIData(oldp+3301,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_6)))),32);
        bufp->chgIData(oldp+3302,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_10_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_10_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_10_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_10_7)))),32);
        bufp->chgIData(oldp+3303,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_0)))),32);
        bufp->chgIData(oldp+3304,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_1)))),32);
        bufp->chgIData(oldp+3305,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_2)))),32);
        bufp->chgIData(oldp+3306,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_3)))),32);
        bufp->chgIData(oldp+3307,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_4)))),32);
        bufp->chgIData(oldp+3308,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_5)))),32);
        bufp->chgIData(oldp+3309,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_6)))),32);
        bufp->chgIData(oldp+3310,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_11_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_11_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_11_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_11_7)))),32);
        bufp->chgIData(oldp+3311,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_0)))),32);
        bufp->chgIData(oldp+3312,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_1)))),32);
        bufp->chgIData(oldp+3313,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_2)))),32);
        bufp->chgIData(oldp+3314,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_3)))),32);
        bufp->chgIData(oldp+3315,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_4)))),32);
        bufp->chgIData(oldp+3316,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_5)))),32);
        bufp->chgIData(oldp+3317,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_6)))),32);
        bufp->chgIData(oldp+3318,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_12_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_12_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_12_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_12_7)))),32);
        bufp->chgIData(oldp+3319,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_0)))),32);
        bufp->chgIData(oldp+3320,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_1)))),32);
        bufp->chgIData(oldp+3321,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_2)))),32);
        bufp->chgIData(oldp+3322,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_3)))),32);
        bufp->chgIData(oldp+3323,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_4)))),32);
        bufp->chgIData(oldp+3324,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_5)))),32);
        bufp->chgIData(oldp+3325,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_6)))),32);
        bufp->chgIData(oldp+3326,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_13_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_13_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_13_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_13_7)))),32);
        bufp->chgIData(oldp+3327,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_0)))),32);
        bufp->chgIData(oldp+3328,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_1)))),32);
        bufp->chgIData(oldp+3329,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_2)))),32);
        bufp->chgIData(oldp+3330,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_3)))),32);
        bufp->chgIData(oldp+3331,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_4)))),32);
        bufp->chgIData(oldp+3332,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_5)))),32);
        bufp->chgIData(oldp+3333,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_6)))),32);
        bufp->chgIData(oldp+3334,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_14_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_14_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_14_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_14_7)))),32);
        bufp->chgIData(oldp+3335,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_0)))),32);
        bufp->chgIData(oldp+3336,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_1)))),32);
        bufp->chgIData(oldp+3337,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_2)))),32);
        bufp->chgIData(oldp+3338,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_3)))),32);
        bufp->chgIData(oldp+3339,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_4)))),32);
        bufp->chgIData(oldp+3340,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_5)))),32);
        bufp->chgIData(oldp+3341,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_6)))),32);
        bufp->chgIData(oldp+3342,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_15_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_15_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_15_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_15_7)))),32);
        bufp->chgIData(oldp+3343,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_0)))),32);
        bufp->chgIData(oldp+3344,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_1)))),32);
        bufp->chgIData(oldp+3345,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_2)))),32);
        bufp->chgIData(oldp+3346,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_3)))),32);
        bufp->chgIData(oldp+3347,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_4)))),32);
        bufp->chgIData(oldp+3348,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_5)))),32);
        bufp->chgIData(oldp+3349,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_6)))),32);
        bufp->chgIData(oldp+3350,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_16_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_16_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_16_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_16_7)))),32);
        bufp->chgIData(oldp+3351,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_0)))),32);
        bufp->chgIData(oldp+3352,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_1)))),32);
        bufp->chgIData(oldp+3353,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_2)))),32);
        bufp->chgIData(oldp+3354,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_3)))),32);
        bufp->chgIData(oldp+3355,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_4)))),32);
        bufp->chgIData(oldp+3356,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_5)))),32);
        bufp->chgIData(oldp+3357,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_6)))),32);
        bufp->chgIData(oldp+3358,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_17_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_17_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_17_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_17_7)))),32);
        bufp->chgIData(oldp+3359,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_0)))),32);
        bufp->chgIData(oldp+3360,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_1)))),32);
        bufp->chgIData(oldp+3361,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_2)))),32);
        bufp->chgIData(oldp+3362,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_3)))),32);
        bufp->chgIData(oldp+3363,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_4)))),32);
        bufp->chgIData(oldp+3364,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_5)))),32);
        bufp->chgIData(oldp+3365,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_6)))),32);
        bufp->chgIData(oldp+3366,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_18_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_18_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_18_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_18_7)))),32);
        bufp->chgIData(oldp+3367,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_0)))),32);
        bufp->chgIData(oldp+3368,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_1)))),32);
        bufp->chgIData(oldp+3369,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_2)))),32);
        bufp->chgIData(oldp+3370,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_3)))),32);
        bufp->chgIData(oldp+3371,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_4)))),32);
        bufp->chgIData(oldp+3372,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_5)))),32);
        bufp->chgIData(oldp+3373,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_6)))),32);
        bufp->chgIData(oldp+3374,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_19_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_19_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_19_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_19_7)))),32);
        bufp->chgIData(oldp+3375,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_0)))),32);
        bufp->chgIData(oldp+3376,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_1)))),32);
        bufp->chgIData(oldp+3377,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_2)))),32);
        bufp->chgIData(oldp+3378,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_3)))),32);
        bufp->chgIData(oldp+3379,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_4)))),32);
        bufp->chgIData(oldp+3380,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_5)))),32);
        bufp->chgIData(oldp+3381,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_6)))),32);
        bufp->chgIData(oldp+3382,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_20_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_20_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_20_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_20_7)))),32);
        bufp->chgIData(oldp+3383,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_0)))),32);
        bufp->chgIData(oldp+3384,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_1)))),32);
        bufp->chgIData(oldp+3385,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_2)))),32);
        bufp->chgIData(oldp+3386,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_3)))),32);
        bufp->chgIData(oldp+3387,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_4)))),32);
        bufp->chgIData(oldp+3388,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_5)))),32);
        bufp->chgIData(oldp+3389,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_6)))),32);
        bufp->chgIData(oldp+3390,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_21_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_21_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_21_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_21_7)))),32);
        bufp->chgIData(oldp+3391,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_0)))),32);
        bufp->chgIData(oldp+3392,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_1)))),32);
        bufp->chgIData(oldp+3393,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_2)))),32);
        bufp->chgIData(oldp+3394,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_3)))),32);
        bufp->chgIData(oldp+3395,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_4)))),32);
        bufp->chgIData(oldp+3396,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_5)))),32);
        bufp->chgIData(oldp+3397,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_6)))),32);
        bufp->chgIData(oldp+3398,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_22_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_22_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_22_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_22_7)))),32);
        bufp->chgIData(oldp+3399,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_0)))),32);
        bufp->chgIData(oldp+3400,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_1)))),32);
        bufp->chgIData(oldp+3401,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_2)))),32);
        bufp->chgIData(oldp+3402,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_3)))),32);
        bufp->chgIData(oldp+3403,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_4)))),32);
        bufp->chgIData(oldp+3404,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_5)))),32);
        bufp->chgIData(oldp+3405,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_6)))),32);
        bufp->chgIData(oldp+3406,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_23_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_23_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_23_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_23_7)))),32);
        bufp->chgIData(oldp+3407,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_0)))),32);
        bufp->chgIData(oldp+3408,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_1)))),32);
        bufp->chgIData(oldp+3409,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_2)))),32);
        bufp->chgIData(oldp+3410,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_3)))),32);
        bufp->chgIData(oldp+3411,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_4)))),32);
        bufp->chgIData(oldp+3412,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_5)))),32);
        bufp->chgIData(oldp+3413,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_6)))),32);
        bufp->chgIData(oldp+3414,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_24_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_24_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_24_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_24_7)))),32);
        bufp->chgIData(oldp+3415,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_0)))),32);
        bufp->chgIData(oldp+3416,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_1)))),32);
        bufp->chgIData(oldp+3417,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_2)))),32);
        bufp->chgIData(oldp+3418,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_3)))),32);
        bufp->chgIData(oldp+3419,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_4)))),32);
        bufp->chgIData(oldp+3420,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_5)))),32);
        bufp->chgIData(oldp+3421,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_6)))),32);
        bufp->chgIData(oldp+3422,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_25_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_25_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_25_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_25_7)))),32);
        bufp->chgIData(oldp+3423,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_0)))),32);
        bufp->chgIData(oldp+3424,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_1)))),32);
        bufp->chgIData(oldp+3425,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_2)))),32);
        bufp->chgIData(oldp+3426,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_3)))),32);
        bufp->chgIData(oldp+3427,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_4)))),32);
        bufp->chgIData(oldp+3428,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_5)))),32);
        bufp->chgIData(oldp+3429,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_6)))),32);
        bufp->chgIData(oldp+3430,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_26_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_26_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_26_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_26_7)))),32);
        bufp->chgIData(oldp+3431,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_0)))),32);
        bufp->chgIData(oldp+3432,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_1)))),32);
        bufp->chgIData(oldp+3433,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_2)))),32);
        bufp->chgIData(oldp+3434,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_3)))),32);
        bufp->chgIData(oldp+3435,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_4)))),32);
        bufp->chgIData(oldp+3436,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_5)))),32);
        bufp->chgIData(oldp+3437,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_6)))),32);
        bufp->chgIData(oldp+3438,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_27_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_27_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_27_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_27_7)))),32);
        bufp->chgIData(oldp+3439,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_0)))),32);
        bufp->chgIData(oldp+3440,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_1)))),32);
        bufp->chgIData(oldp+3441,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_2)))),32);
        bufp->chgIData(oldp+3442,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_3)))),32);
        bufp->chgIData(oldp+3443,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_4)))),32);
        bufp->chgIData(oldp+3444,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_5)))),32);
        bufp->chgIData(oldp+3445,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_6)))),32);
        bufp->chgIData(oldp+3446,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_28_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_28_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_28_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_28_7)))),32);
        bufp->chgIData(oldp+3447,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_0)))),32);
        bufp->chgIData(oldp+3448,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_1)))),32);
        bufp->chgIData(oldp+3449,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_2)))),32);
        bufp->chgIData(oldp+3450,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_3)))),32);
        bufp->chgIData(oldp+3451,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_4)))),32);
        bufp->chgIData(oldp+3452,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_5)))),32);
        bufp->chgIData(oldp+3453,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_6)))),32);
        bufp->chgIData(oldp+3454,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_29_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_29_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_29_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_29_7)))),32);
        bufp->chgIData(oldp+3455,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_0)))),32);
        bufp->chgIData(oldp+3456,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_1)))),32);
        bufp->chgIData(oldp+3457,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_2)))),32);
        bufp->chgIData(oldp+3458,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_3)))),32);
        bufp->chgIData(oldp+3459,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_4)))),32);
        bufp->chgIData(oldp+3460,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_5)))),32);
        bufp->chgIData(oldp+3461,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_6)))),32);
        bufp->chgIData(oldp+3462,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_30_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_30_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_30_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_30_7)))),32);
        bufp->chgIData(oldp+3463,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_0)))),32);
        bufp->chgIData(oldp+3464,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_1)))),32);
        bufp->chgIData(oldp+3465,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_2)))),32);
        bufp->chgIData(oldp+3466,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_3)))),32);
        bufp->chgIData(oldp+3467,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_4)))),32);
        bufp->chgIData(oldp+3468,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_5)))),32);
        bufp->chgIData(oldp+3469,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_6)))),32);
        bufp->chgIData(oldp+3470,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_31_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_31_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_31_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_31_7)))),32);
        bufp->chgIData(oldp+3471,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_0)))),32);
        bufp->chgIData(oldp+3472,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_1)))),32);
        bufp->chgIData(oldp+3473,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_2)))),32);
        bufp->chgIData(oldp+3474,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_3)))),32);
        bufp->chgIData(oldp+3475,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_4)))),32);
        bufp->chgIData(oldp+3476,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_5)))),32);
        bufp->chgIData(oldp+3477,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_6)))),32);
        bufp->chgIData(oldp+3478,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_32_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_32_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_32_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_32_7)))),32);
        bufp->chgIData(oldp+3479,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_0)))),32);
        bufp->chgIData(oldp+3480,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_1)))),32);
        bufp->chgIData(oldp+3481,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_2)))),32);
        bufp->chgIData(oldp+3482,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_3)))),32);
        bufp->chgIData(oldp+3483,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_4)))),32);
        bufp->chgIData(oldp+3484,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_5)))),32);
        bufp->chgIData(oldp+3485,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_6)))),32);
        bufp->chgIData(oldp+3486,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_33_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_33_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_33_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_33_7)))),32);
        bufp->chgIData(oldp+3487,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_0)))),32);
        bufp->chgIData(oldp+3488,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_1)))),32);
        bufp->chgIData(oldp+3489,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_2)))),32);
        bufp->chgIData(oldp+3490,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_3)))),32);
        bufp->chgIData(oldp+3491,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_4)))),32);
        bufp->chgIData(oldp+3492,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_5)))),32);
        bufp->chgIData(oldp+3493,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_6)))),32);
        bufp->chgIData(oldp+3494,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_34_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_34_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_34_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_34_7)))),32);
        bufp->chgIData(oldp+3495,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_0)))),32);
        bufp->chgIData(oldp+3496,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_1)))),32);
        bufp->chgIData(oldp+3497,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_2)))),32);
        bufp->chgIData(oldp+3498,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_3)))),32);
        bufp->chgIData(oldp+3499,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_4)))),32);
        bufp->chgIData(oldp+3500,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_5)))),32);
        bufp->chgIData(oldp+3501,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_6)))),32);
        bufp->chgIData(oldp+3502,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_35_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_35_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_35_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_35_7)))),32);
        bufp->chgIData(oldp+3503,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_0)))),32);
        bufp->chgIData(oldp+3504,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_1)))),32);
        bufp->chgIData(oldp+3505,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_2)))),32);
        bufp->chgIData(oldp+3506,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_3)))),32);
        bufp->chgIData(oldp+3507,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_4)))),32);
        bufp->chgIData(oldp+3508,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_5)))),32);
        bufp->chgIData(oldp+3509,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_6)))),32);
        bufp->chgIData(oldp+3510,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_36_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_36_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_36_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_36_7)))),32);
        bufp->chgIData(oldp+3511,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_0)))),32);
        bufp->chgIData(oldp+3512,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_1)))),32);
        bufp->chgIData(oldp+3513,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_2)))),32);
        bufp->chgIData(oldp+3514,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_3)))),32);
        bufp->chgIData(oldp+3515,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_4)))),32);
        bufp->chgIData(oldp+3516,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_5)))),32);
        bufp->chgIData(oldp+3517,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_6)))),32);
        bufp->chgIData(oldp+3518,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_37_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_37_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_37_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_37_7)))),32);
        bufp->chgIData(oldp+3519,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_0)))),32);
        bufp->chgIData(oldp+3520,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_1)))),32);
        bufp->chgIData(oldp+3521,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_2)))),32);
        bufp->chgIData(oldp+3522,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_3)))),32);
        bufp->chgIData(oldp+3523,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_4)))),32);
        bufp->chgIData(oldp+3524,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_5)))),32);
        bufp->chgIData(oldp+3525,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_6)))),32);
        bufp->chgIData(oldp+3526,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_38_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_38_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_38_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_38_7)))),32);
        bufp->chgIData(oldp+3527,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_0)))),32);
        bufp->chgIData(oldp+3528,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_1)))),32);
        bufp->chgIData(oldp+3529,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_2)))),32);
        bufp->chgIData(oldp+3530,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_3)))),32);
        bufp->chgIData(oldp+3531,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_4)))),32);
        bufp->chgIData(oldp+3532,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_5)))),32);
        bufp->chgIData(oldp+3533,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_6)))),32);
        bufp->chgIData(oldp+3534,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_39_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_39_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_39_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_39_7)))),32);
        bufp->chgIData(oldp+3535,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_0)))),32);
        bufp->chgIData(oldp+3536,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_1)))),32);
        bufp->chgIData(oldp+3537,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_2)))),32);
        bufp->chgIData(oldp+3538,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_3)))),32);
        bufp->chgIData(oldp+3539,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_4)))),32);
        bufp->chgIData(oldp+3540,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_5)))),32);
        bufp->chgIData(oldp+3541,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_6)))),32);
        bufp->chgIData(oldp+3542,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_40_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_40_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_40_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_40_7)))),32);
        bufp->chgIData(oldp+3543,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_0)))),32);
        bufp->chgIData(oldp+3544,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_1)))),32);
        bufp->chgIData(oldp+3545,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_2)))),32);
        bufp->chgIData(oldp+3546,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_3)))),32);
        bufp->chgIData(oldp+3547,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_4)))),32);
        bufp->chgIData(oldp+3548,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_5)))),32);
        bufp->chgIData(oldp+3549,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_6)))),32);
        bufp->chgIData(oldp+3550,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_41_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_41_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_41_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_41_7)))),32);
        bufp->chgIData(oldp+3551,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_0)))),32);
        bufp->chgIData(oldp+3552,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_1)))),32);
        bufp->chgIData(oldp+3553,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_2)))),32);
        bufp->chgIData(oldp+3554,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_3)))),32);
        bufp->chgIData(oldp+3555,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_4)))),32);
        bufp->chgIData(oldp+3556,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_5)))),32);
        bufp->chgIData(oldp+3557,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_6)))),32);
        bufp->chgIData(oldp+3558,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_42_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_42_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_42_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_42_7)))),32);
        bufp->chgIData(oldp+3559,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_0)))),32);
        bufp->chgIData(oldp+3560,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_1)))),32);
        bufp->chgIData(oldp+3561,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_2)))),32);
        bufp->chgIData(oldp+3562,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_3)))),32);
        bufp->chgIData(oldp+3563,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_4)))),32);
        bufp->chgIData(oldp+3564,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_5)))),32);
        bufp->chgIData(oldp+3565,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_6)))),32);
        bufp->chgIData(oldp+3566,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_43_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_43_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_43_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_43_7)))),32);
        bufp->chgIData(oldp+3567,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_0)))),32);
        bufp->chgIData(oldp+3568,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_1)))),32);
        bufp->chgIData(oldp+3569,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_2)))),32);
        bufp->chgIData(oldp+3570,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_3)))),32);
        bufp->chgIData(oldp+3571,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_4)))),32);
        bufp->chgIData(oldp+3572,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_5)))),32);
        bufp->chgIData(oldp+3573,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_6)))),32);
        bufp->chgIData(oldp+3574,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_44_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_44_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_44_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_44_7)))),32);
        bufp->chgIData(oldp+3575,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_0)))),32);
        bufp->chgIData(oldp+3576,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_1)))),32);
        bufp->chgIData(oldp+3577,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_2)))),32);
        bufp->chgIData(oldp+3578,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_3)))),32);
        bufp->chgIData(oldp+3579,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_4)))),32);
        bufp->chgIData(oldp+3580,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_5)))),32);
        bufp->chgIData(oldp+3581,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_6)))),32);
        bufp->chgIData(oldp+3582,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_45_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_45_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_45_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_45_7)))),32);
        bufp->chgIData(oldp+3583,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_0)))),32);
        bufp->chgIData(oldp+3584,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_1)))),32);
        bufp->chgIData(oldp+3585,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_2)))),32);
        bufp->chgIData(oldp+3586,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_3)))),32);
        bufp->chgIData(oldp+3587,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_4)))),32);
        bufp->chgIData(oldp+3588,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_5)))),32);
        bufp->chgIData(oldp+3589,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_6)))),32);
        bufp->chgIData(oldp+3590,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_46_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_46_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_46_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_46_7)))),32);
        bufp->chgIData(oldp+3591,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_0)))),32);
        bufp->chgIData(oldp+3592,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_1)))),32);
        bufp->chgIData(oldp+3593,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_2)))),32);
        bufp->chgIData(oldp+3594,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_3)))),32);
        bufp->chgIData(oldp+3595,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_4)))),32);
        bufp->chgIData(oldp+3596,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_5)))),32);
        bufp->chgIData(oldp+3597,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_6)))),32);
        bufp->chgIData(oldp+3598,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_47_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_47_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_47_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_47_7)))),32);
        bufp->chgIData(oldp+3599,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_0)))),32);
        bufp->chgIData(oldp+3600,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_1)))),32);
        bufp->chgIData(oldp+3601,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_2)))),32);
        bufp->chgIData(oldp+3602,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_3)))),32);
        bufp->chgIData(oldp+3603,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_4)))),32);
        bufp->chgIData(oldp+3604,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_5)))),32);
        bufp->chgIData(oldp+3605,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_6)))),32);
        bufp->chgIData(oldp+3606,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_48_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_48_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_48_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_48_7)))),32);
        bufp->chgIData(oldp+3607,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_0)))),32);
        bufp->chgIData(oldp+3608,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_1)))),32);
        bufp->chgIData(oldp+3609,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_2)))),32);
        bufp->chgIData(oldp+3610,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_3)))),32);
        bufp->chgIData(oldp+3611,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_4)))),32);
        bufp->chgIData(oldp+3612,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_5)))),32);
        bufp->chgIData(oldp+3613,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_6)))),32);
        bufp->chgIData(oldp+3614,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_49_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_49_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_49_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_49_7)))),32);
        bufp->chgIData(oldp+3615,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_0)))),32);
        bufp->chgIData(oldp+3616,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_1)))),32);
        bufp->chgIData(oldp+3617,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_2)))),32);
        bufp->chgIData(oldp+3618,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_3)))),32);
        bufp->chgIData(oldp+3619,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_4)))),32);
        bufp->chgIData(oldp+3620,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_5)))),32);
        bufp->chgIData(oldp+3621,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_6)))),32);
        bufp->chgIData(oldp+3622,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_50_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_50_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_50_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_50_7)))),32);
        bufp->chgIData(oldp+3623,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_0)))),32);
        bufp->chgIData(oldp+3624,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_1)))),32);
        bufp->chgIData(oldp+3625,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_2)))),32);
        bufp->chgIData(oldp+3626,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_3)))),32);
        bufp->chgIData(oldp+3627,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_4)))),32);
        bufp->chgIData(oldp+3628,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_5)))),32);
        bufp->chgIData(oldp+3629,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_6)))),32);
        bufp->chgIData(oldp+3630,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_51_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_51_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_51_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_51_7)))),32);
        bufp->chgIData(oldp+3631,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_0)))),32);
        bufp->chgIData(oldp+3632,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_1)))),32);
        bufp->chgIData(oldp+3633,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_2)))),32);
        bufp->chgIData(oldp+3634,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_3)))),32);
        bufp->chgIData(oldp+3635,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_4)))),32);
        bufp->chgIData(oldp+3636,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_5)))),32);
        bufp->chgIData(oldp+3637,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_6)))),32);
        bufp->chgIData(oldp+3638,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_52_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_52_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_52_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_52_7)))),32);
        bufp->chgIData(oldp+3639,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_0)))),32);
        bufp->chgIData(oldp+3640,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_1)))),32);
        bufp->chgIData(oldp+3641,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_2)))),32);
        bufp->chgIData(oldp+3642,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_3)))),32);
        bufp->chgIData(oldp+3643,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_4)))),32);
        bufp->chgIData(oldp+3644,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_5)))),32);
        bufp->chgIData(oldp+3645,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_6)))),32);
        bufp->chgIData(oldp+3646,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_53_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_53_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_53_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_53_7)))),32);
        bufp->chgIData(oldp+3647,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_0)))),32);
        bufp->chgIData(oldp+3648,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_1)))),32);
        bufp->chgIData(oldp+3649,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_2)))),32);
        bufp->chgIData(oldp+3650,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_3)))),32);
        bufp->chgIData(oldp+3651,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_4)))),32);
        bufp->chgIData(oldp+3652,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_5)))),32);
        bufp->chgIData(oldp+3653,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_6)))),32);
        bufp->chgIData(oldp+3654,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_54_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_54_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_54_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_54_7)))),32);
        bufp->chgIData(oldp+3655,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_0)))),32);
        bufp->chgIData(oldp+3656,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_1)))),32);
        bufp->chgIData(oldp+3657,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_2)))),32);
        bufp->chgIData(oldp+3658,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_3)))),32);
        bufp->chgIData(oldp+3659,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_4)))),32);
        bufp->chgIData(oldp+3660,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_5)))),32);
        bufp->chgIData(oldp+3661,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_6)))),32);
        bufp->chgIData(oldp+3662,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_55_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_55_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_55_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_55_7)))),32);
        bufp->chgIData(oldp+3663,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_0)))),32);
        bufp->chgIData(oldp+3664,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_1)))),32);
        bufp->chgIData(oldp+3665,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_2)))),32);
        bufp->chgIData(oldp+3666,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_3)))),32);
        bufp->chgIData(oldp+3667,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_4)))),32);
        bufp->chgIData(oldp+3668,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_5)))),32);
        bufp->chgIData(oldp+3669,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_6)))),32);
        bufp->chgIData(oldp+3670,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_56_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_56_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_56_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_56_7)))),32);
        bufp->chgIData(oldp+3671,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_0)))),32);
        bufp->chgIData(oldp+3672,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_1)))),32);
        bufp->chgIData(oldp+3673,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_2)))),32);
        bufp->chgIData(oldp+3674,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_3)))),32);
        bufp->chgIData(oldp+3675,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_4)))),32);
        bufp->chgIData(oldp+3676,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_5)))),32);
        bufp->chgIData(oldp+3677,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_6)))),32);
        bufp->chgIData(oldp+3678,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_57_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_57_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_57_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_57_7)))),32);
        bufp->chgIData(oldp+3679,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_0)))),32);
        bufp->chgIData(oldp+3680,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_1)))),32);
        bufp->chgIData(oldp+3681,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_2)))),32);
        bufp->chgIData(oldp+3682,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_3)))),32);
        bufp->chgIData(oldp+3683,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_4)))),32);
        bufp->chgIData(oldp+3684,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_5)))),32);
        bufp->chgIData(oldp+3685,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_6)))),32);
        bufp->chgIData(oldp+3686,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_58_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_58_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_58_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_58_7)))),32);
        bufp->chgIData(oldp+3687,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_0)))),32);
        bufp->chgIData(oldp+3688,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_1)))),32);
        bufp->chgIData(oldp+3689,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_2)))),32);
        bufp->chgIData(oldp+3690,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_3)))),32);
        bufp->chgIData(oldp+3691,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_4)))),32);
        bufp->chgIData(oldp+3692,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_5)))),32);
        bufp->chgIData(oldp+3693,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_6)))),32);
        bufp->chgIData(oldp+3694,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_59_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_59_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_59_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_59_7)))),32);
        bufp->chgIData(oldp+3695,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_0)))),32);
        bufp->chgIData(oldp+3696,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_1)))),32);
        bufp->chgIData(oldp+3697,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_2)))),32);
        bufp->chgIData(oldp+3698,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_3)))),32);
        bufp->chgIData(oldp+3699,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_4)))),32);
        bufp->chgIData(oldp+3700,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_5)))),32);
        bufp->chgIData(oldp+3701,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_6)))),32);
        bufp->chgIData(oldp+3702,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_60_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_60_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_60_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_60_7)))),32);
        bufp->chgIData(oldp+3703,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_0)))),32);
        bufp->chgIData(oldp+3704,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_1)))),32);
        bufp->chgIData(oldp+3705,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_2)))),32);
        bufp->chgIData(oldp+3706,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_3)))),32);
        bufp->chgIData(oldp+3707,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_4)))),32);
        bufp->chgIData(oldp+3708,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_5)))),32);
        bufp->chgIData(oldp+3709,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_6)))),32);
        bufp->chgIData(oldp+3710,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_61_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_61_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_61_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_61_7)))),32);
        bufp->chgIData(oldp+3711,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_0)))),32);
        bufp->chgIData(oldp+3712,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_1)))),32);
        bufp->chgIData(oldp+3713,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_2)))),32);
        bufp->chgIData(oldp+3714,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_3)))),32);
        bufp->chgIData(oldp+3715,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_4)))),32);
        bufp->chgIData(oldp+3716,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_5)))),32);
        bufp->chgIData(oldp+3717,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_6)))),32);
        bufp->chgIData(oldp+3718,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_7)))),32);
        bufp->chgIData(oldp+3719,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_0
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_0
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_0
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_0)))),32);
        bufp->chgIData(oldp+3720,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_1
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_1
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_1
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_1)))),32);
        bufp->chgIData(oldp+3721,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_2
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_2
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_2
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_2)))),32);
        bufp->chgIData(oldp+3722,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_3
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_3
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_3
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_3)))),32);
        bufp->chgIData(oldp+3723,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_4
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_4
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_4
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_4)))),32);
        bufp->chgIData(oldp+3724,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_5
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_5
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_5
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_5)))),32);
        bufp->chgIData(oldp+3725,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_6
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_6
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_6
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_6)))),32);
        bufp->chgIData(oldp+3726,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_7
                                    : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_7
                                        : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_7
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_7)))),32);
        bufp->chgIData(oldp+3727,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_754),32);
        bufp->chgIData(oldp+3728,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_755),32);
        bufp->chgIData(oldp+3729,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_756),32);
        bufp->chgIData(oldp+3730,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_757),32);
        bufp->chgIData(oldp+3731,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_758),32);
        bufp->chgIData(oldp+3732,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_759),32);
        bufp->chgIData(oldp+3733,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_760),32);
        bufp->chgIData(oldp+3734,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_761),32);
        bufp->chgIData(oldp+3735,(((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                    ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_761
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_760)
                                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_759
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_758))
                                    : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                        ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_757
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_756)
                                        : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_755
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_754)))),32);
        bufp->chgIData(oldp+3736,(((0x10U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                    ? ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_761
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_760)
                                        : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_759
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_758))
                                    : ((8U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_757
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_756)
                                        : ((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_755
                                            : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_754)))),32);
        bufp->chgIData(oldp+3737,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32),32);
        bufp->chgBit(oldp+3738,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0));
        bufp->chgBit(oldp+3739,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_1));
        bufp->chgBit(oldp+3740,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_2));
        bufp->chgBit(oldp+3741,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_3));
        bufp->chgBit(oldp+3742,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4));
        bufp->chgBit(oldp+3743,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5));
        bufp->chgBit(oldp+3744,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6));
        bufp->chgBit(oldp+3745,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_7));
        bufp->chgBit(oldp+3746,((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state)))));
        bufp->chgBit(oldp+3747,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state));
        bufp->chgIData(oldp+3748,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc),32);
        bufp->chgCData(oldp+3749,((0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                            >> 7U))),5);
        bufp->chgBit(oldp+3750,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_load) 
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
                                                   | (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw) 
                                                       | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrs)) 
                                                      & (0U 
                                                         != 
                                                         (0x1fU 
                                                          & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                             >> 7U)))))))))))));
        bufp->chgIData(oldp+3751,((((0x17U == (0x7fU 
                                               & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc
                                    : ((0x37U == (0x7fU 
                                                  & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))
                                        ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT___regfile_io_rs1_data))),32);
        bufp->chgIData(oldp+3752,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_alu_b),32);
        bufp->chgCData(oldp+3753,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_alu_op),4);
        bufp->chgIData(oldp+3754,(vlSelfRef.top__DOT__npc_cpu__DOT___regfile_io_rs1_data),32);
        bufp->chgIData(oldp+3755,(vlSelfRef.top__DOT__npc_cpu__DOT___regfile_io_rs2_data),32);
        bufp->chgIData(oldp+3756,(((0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc
                                    : ((0x30200073U 
                                        == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                                        ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT___regfile_io_rs1_data))),32);
        bufp->chgBit(oldp+3757,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw) 
                                 | (0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgSData(oldp+3758,(((0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                                    ? 0x341U : ((0x30200073U 
                                                 == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                                                 ? 0x342U
                                                 : 
                                                (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                 >> 0x14U)))),12);
        bufp->chgBit(oldp+3759,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw));
        bufp->chgBit(oldp+3760,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrs));
        bufp->chgBit(oldp+3761,((0x6fU == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+3762,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr));
        bufp->chgBit(oldp+3763,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lw));
        bufp->chgBit(oldp+3764,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sw));
        bufp->chgBit(oldp+3765,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lb));
        bufp->chgBit(oldp+3766,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sb));
        bufp->chgBit(oldp+3767,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lh));
        bufp->chgBit(oldp+3768,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sh));
        bufp->chgBit(oldp+3769,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lbu));
        bufp->chgBit(oldp+3770,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lhu));
        bufp->chgBit(oldp+3771,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_beq));
        bufp->chgBit(oldp+3772,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bne));
        bufp->chgBit(oldp+3773,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_blt));
        bufp->chgBit(oldp+3774,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bltu));
        bufp->chgBit(oldp+3775,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bge));
        bufp->chgBit(oldp+3776,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bgeu));
        bufp->chgBit(oldp+3777,((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state))));
        bufp->chgBit(oldp+3778,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__out_valid));
        bufp->chgIData(oldp+3779,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc),32);
        bufp->chgIData(oldp+3780,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu__DOT__casez_tmp),32);
        bufp->chgIData(oldp+3781,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs2_data),32);
        bufp->chgCData(oldp+3782,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr),5);
        bufp->chgBit(oldp+3783,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en));
        bufp->chgIData(oldp+3784,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_wdata),32);
        bufp->chgBit(oldp+3785,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_wen));
        bufp->chgSData(oldp+3786,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_waddr),12);
        bufp->chgIData(oldp+3787,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_rdata),32);
        bufp->chgBit(oldp+3788,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_csrrw));
        bufp->chgBit(oldp+3789,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_csrrs));
        bufp->chgBit(oldp+3790,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lw));
        bufp->chgBit(oldp+3791,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lbu));
        bufp->chgBit(oldp+3792,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lh));
        bufp->chgBit(oldp+3793,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lhu));
        bufp->chgBit(oldp+3794,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lb));
        bufp->chgBit(oldp+3795,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sw));
        bufp->chgBit(oldp+3796,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sb));
        bufp->chgBit(oldp+3797,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sh));
        bufp->chgBit(oldp+3798,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jalr));
        bufp->chgBit(oldp+3799,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jal));
        bufp->chgIData(oldp+3800,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_branch_bits_pc_branch),32);
        bufp->chgIData(oldp+3801,((0xfffffffeU & (vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a 
                                                  + vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b))),32);
        bufp->chgBit(oldp+3802,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_branch_bits_is_branch_taken));
        bufp->chgBit(oldp+3803,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_ecall));
        bufp->chgBit(oldp+3804,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_mret));
        bufp->chgBit(oldp+3805,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state));
        bufp->chgIData(oldp+3806,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a),32);
        bufp->chgIData(oldp+3807,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b),32);
        bufp->chgCData(oldp+3808,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op),4);
        bufp->chgIData(oldp+3809,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs1_data),32);
        bufp->chgBit(oldp+3810,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_beq));
        bufp->chgBit(oldp+3811,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bne));
        bufp->chgBit(oldp+3812,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_blt));
        bufp->chgBit(oldp+3813,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bltu));
        bufp->chgBit(oldp+3814,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bge));
        bufp->chgBit(oldp+3815,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bgeu));
        bufp->chgBit(oldp+3816,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1));
        bufp->chgBit(oldp+3817,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__state));
        bufp->chgIData(oldp+3818,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc),32);
        bufp->chgBit(oldp+3819,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__io_in_ready_0));
        bufp->chgBit(oldp+3820,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1)) 
                                 & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                                     ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit)
                                     : ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_8)) 
                                        & (4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)))))));
        bufp->chgIData(oldp+3821,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1)
                                    ? 0U : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                                             ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit)
                                                 ? 
                                                (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit0)
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                      ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14
                                                      : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                      ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12
                                                      : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                      ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10
                                                      : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                      ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8
                                                      : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7)))
                                                   : 0U) 
                                                 | (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit1)
                                                      ? 
                                                     ((0x10U 
                                                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                         ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23
                                                         : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22)
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                         ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21
                                                         : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20))
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                         ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19
                                                         : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18)
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                         ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17
                                                         : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16)))
                                                      : 0U) 
                                                    | (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit2)
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                          ? 
                                                         ((8U 
                                                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32
                                                            : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31)
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30
                                                            : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29))
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28
                                                            : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27)
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                            ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26
                                                            : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25)))
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit3)
                                                           ? 
                                                          ((0x10U 
                                                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                            ? 
                                                           ((8U 
                                                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                             ? 
                                                            ((4U 
                                                              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                              ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41
                                                              : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40)
                                                             : 
                                                            ((4U 
                                                              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                              ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39
                                                              : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38))
                                                            : 
                                                           ((8U 
                                                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                             ? 
                                                            ((4U 
                                                              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                              ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37
                                                              : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36)
                                                             : 
                                                            ((4U 
                                                              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                              ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35
                                                              : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34)))
                                                           : 0U))))
                                                 : 0U)
                                             : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_9)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass)
                                                  ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__bypass_inst_reg
                                                  : 
                                                 (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit0)
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                       ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14
                                                       : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13)
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                       ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12
                                                       : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                       ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10
                                                       : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9)
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                       ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8
                                                       : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7)))
                                                    : 0U) 
                                                  | (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit1)
                                                       ? 
                                                      ((0x10U 
                                                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                        ? 
                                                       ((8U 
                                                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                          ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23
                                                          : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22)
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                          ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21
                                                          : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20))
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                          ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19
                                                          : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18)
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                          ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17
                                                          : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16)))
                                                       : 0U) 
                                                     | (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit2)
                                                          ? 
                                                         ((0x10U 
                                                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                           ? 
                                                          ((8U 
                                                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                            ? 
                                                           ((4U 
                                                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                             ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32
                                                             : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31)
                                                            : 
                                                           ((4U 
                                                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                             ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30
                                                             : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29))
                                                           : 
                                                          ((8U 
                                                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                            ? 
                                                           ((4U 
                                                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                             ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28
                                                             : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27)
                                                            : 
                                                           ((4U 
                                                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                             ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26
                                                             : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25)))
                                                          : 0U) 
                                                        | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit3)
                                                            ? 
                                                           ((0x10U 
                                                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                             ? 
                                                            ((8U 
                                                              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                              ? 
                                                             ((4U 
                                                               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                               ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41
                                                               : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40)
                                                              : 
                                                             ((4U 
                                                               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                               ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39
                                                               : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38))
                                                             : 
                                                            ((8U 
                                                              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                              ? 
                                                             ((4U 
                                                               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                               ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37
                                                               : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36)
                                                              : 
                                                             ((4U 
                                                               & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                               ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35
                                                               : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34)))
                                                            : 0U))))))))),32);
        bufp->chgIData(oldp+3822,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1)
                                    ? 0U : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                                             ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit)
                                                 ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_7
                                                 : 0U)
                                             : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_9)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass)
                                                  ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__bypass_pc_reg
                                                  : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_7))))),32);
        bufp->chgIData(oldp+3823,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_0),32);
        bufp->chgIData(oldp+3824,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_1),32);
        bufp->chgIData(oldp+3825,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_2),32);
        bufp->chgIData(oldp+3826,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_3),32);
        bufp->chgIData(oldp+3827,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_4),32);
        bufp->chgIData(oldp+3828,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_5),32);
        bufp->chgIData(oldp+3829,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_6),32);
        bufp->chgIData(oldp+3830,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_7),32);
        bufp->chgIData(oldp+3831,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_0),32);
        bufp->chgIData(oldp+3832,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_1),32);
        bufp->chgIData(oldp+3833,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_2),32);
        bufp->chgIData(oldp+3834,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_3),32);
        bufp->chgIData(oldp+3835,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_4),32);
        bufp->chgIData(oldp+3836,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_5),32);
        bufp->chgIData(oldp+3837,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_6),32);
        bufp->chgIData(oldp+3838,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_7),32);
        bufp->chgIData(oldp+3839,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_0),32);
        bufp->chgIData(oldp+3840,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_1),32);
        bufp->chgIData(oldp+3841,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_2),32);
        bufp->chgIData(oldp+3842,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_3),32);
        bufp->chgIData(oldp+3843,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_4),32);
        bufp->chgIData(oldp+3844,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_5),32);
        bufp->chgIData(oldp+3845,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_6),32);
        bufp->chgIData(oldp+3846,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_7),32);
        bufp->chgIData(oldp+3847,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_0),32);
        bufp->chgIData(oldp+3848,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_1),32);
        bufp->chgIData(oldp+3849,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_2),32);
        bufp->chgIData(oldp+3850,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_3),32);
        bufp->chgIData(oldp+3851,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_4),32);
        bufp->chgIData(oldp+3852,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_5),32);
        bufp->chgIData(oldp+3853,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_6),32);
        bufp->chgIData(oldp+3854,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_7),32);
        bufp->chgIData(oldp+3855,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_0),32);
        bufp->chgIData(oldp+3856,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_1),32);
        bufp->chgIData(oldp+3857,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_2),32);
        bufp->chgIData(oldp+3858,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_3),32);
        bufp->chgIData(oldp+3859,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_4),32);
        bufp->chgIData(oldp+3860,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_5),32);
        bufp->chgIData(oldp+3861,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_6),32);
        bufp->chgIData(oldp+3862,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_7),32);
        bufp->chgIData(oldp+3863,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_0),32);
        bufp->chgIData(oldp+3864,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_1),32);
        bufp->chgIData(oldp+3865,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_2),32);
        bufp->chgIData(oldp+3866,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_3),32);
        bufp->chgIData(oldp+3867,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_4),32);
        bufp->chgIData(oldp+3868,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_5),32);
        bufp->chgIData(oldp+3869,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_6),32);
        bufp->chgIData(oldp+3870,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_7),32);
        bufp->chgIData(oldp+3871,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_0),32);
        bufp->chgIData(oldp+3872,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_1),32);
        bufp->chgIData(oldp+3873,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_2),32);
        bufp->chgIData(oldp+3874,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_3),32);
        bufp->chgIData(oldp+3875,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_4),32);
        bufp->chgIData(oldp+3876,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_5),32);
        bufp->chgIData(oldp+3877,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_6),32);
        bufp->chgIData(oldp+3878,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_7),32);
        bufp->chgIData(oldp+3879,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_0),32);
        bufp->chgIData(oldp+3880,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_1),32);
        bufp->chgIData(oldp+3881,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_2),32);
        bufp->chgIData(oldp+3882,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_3),32);
        bufp->chgIData(oldp+3883,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_4),32);
        bufp->chgIData(oldp+3884,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_5),32);
        bufp->chgIData(oldp+3885,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_6),32);
        bufp->chgIData(oldp+3886,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_7),32);
        bufp->chgIData(oldp+3887,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_0),32);
        bufp->chgIData(oldp+3888,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_1),32);
        bufp->chgIData(oldp+3889,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_2),32);
        bufp->chgIData(oldp+3890,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_3),32);
        bufp->chgIData(oldp+3891,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_4),32);
        bufp->chgIData(oldp+3892,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_5),32);
        bufp->chgIData(oldp+3893,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_6),32);
        bufp->chgIData(oldp+3894,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_7),32);
        bufp->chgIData(oldp+3895,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_0),32);
        bufp->chgIData(oldp+3896,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_1),32);
        bufp->chgIData(oldp+3897,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_2),32);
        bufp->chgIData(oldp+3898,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_3),32);
        bufp->chgIData(oldp+3899,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_4),32);
        bufp->chgIData(oldp+3900,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_5),32);
        bufp->chgIData(oldp+3901,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_6),32);
        bufp->chgIData(oldp+3902,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_7),32);
        bufp->chgIData(oldp+3903,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_0),32);
        bufp->chgIData(oldp+3904,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_1),32);
        bufp->chgIData(oldp+3905,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_2),32);
        bufp->chgIData(oldp+3906,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_3),32);
        bufp->chgIData(oldp+3907,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_4),32);
        bufp->chgIData(oldp+3908,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_5),32);
        bufp->chgIData(oldp+3909,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_6),32);
        bufp->chgIData(oldp+3910,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_7),32);
        bufp->chgIData(oldp+3911,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_0),32);
        bufp->chgIData(oldp+3912,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_1),32);
        bufp->chgIData(oldp+3913,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_2),32);
        bufp->chgIData(oldp+3914,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_3),32);
        bufp->chgIData(oldp+3915,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_4),32);
        bufp->chgIData(oldp+3916,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_5),32);
        bufp->chgIData(oldp+3917,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_6),32);
        bufp->chgIData(oldp+3918,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_7),32);
        bufp->chgIData(oldp+3919,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_0),32);
        bufp->chgIData(oldp+3920,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_1),32);
        bufp->chgIData(oldp+3921,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_2),32);
        bufp->chgIData(oldp+3922,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_3),32);
        bufp->chgIData(oldp+3923,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_4),32);
        bufp->chgIData(oldp+3924,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_5),32);
        bufp->chgIData(oldp+3925,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_6),32);
        bufp->chgIData(oldp+3926,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_7),32);
        bufp->chgIData(oldp+3927,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_0),32);
        bufp->chgIData(oldp+3928,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_1),32);
        bufp->chgIData(oldp+3929,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_2),32);
        bufp->chgIData(oldp+3930,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_3),32);
        bufp->chgIData(oldp+3931,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_4),32);
        bufp->chgIData(oldp+3932,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_5),32);
        bufp->chgIData(oldp+3933,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_6),32);
        bufp->chgIData(oldp+3934,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_7),32);
        bufp->chgIData(oldp+3935,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_0),32);
        bufp->chgIData(oldp+3936,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_1),32);
        bufp->chgIData(oldp+3937,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_2),32);
        bufp->chgIData(oldp+3938,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_3),32);
        bufp->chgIData(oldp+3939,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_4),32);
        bufp->chgIData(oldp+3940,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_5),32);
        bufp->chgIData(oldp+3941,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_6),32);
        bufp->chgIData(oldp+3942,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_7),32);
        bufp->chgIData(oldp+3943,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_0),32);
        bufp->chgIData(oldp+3944,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_1),32);
        bufp->chgIData(oldp+3945,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_2),32);
        bufp->chgIData(oldp+3946,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_3),32);
        bufp->chgIData(oldp+3947,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_4),32);
        bufp->chgIData(oldp+3948,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_5),32);
        bufp->chgIData(oldp+3949,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_6),32);
        bufp->chgIData(oldp+3950,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_7),32);
        bufp->chgIData(oldp+3951,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_0),32);
        bufp->chgIData(oldp+3952,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_1),32);
        bufp->chgIData(oldp+3953,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_2),32);
        bufp->chgIData(oldp+3954,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_3),32);
        bufp->chgIData(oldp+3955,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_4),32);
        bufp->chgIData(oldp+3956,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_5),32);
        bufp->chgIData(oldp+3957,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_6),32);
        bufp->chgIData(oldp+3958,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_7),32);
        bufp->chgIData(oldp+3959,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_0),32);
        bufp->chgIData(oldp+3960,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_1),32);
        bufp->chgIData(oldp+3961,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_2),32);
        bufp->chgIData(oldp+3962,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_3),32);
        bufp->chgIData(oldp+3963,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_4),32);
        bufp->chgIData(oldp+3964,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_5),32);
        bufp->chgIData(oldp+3965,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_6),32);
        bufp->chgIData(oldp+3966,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_7),32);
        bufp->chgIData(oldp+3967,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_0),32);
        bufp->chgIData(oldp+3968,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_1),32);
        bufp->chgIData(oldp+3969,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_2),32);
        bufp->chgIData(oldp+3970,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_3),32);
        bufp->chgIData(oldp+3971,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_4),32);
        bufp->chgIData(oldp+3972,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_5),32);
        bufp->chgIData(oldp+3973,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_6),32);
        bufp->chgIData(oldp+3974,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_7),32);
        bufp->chgIData(oldp+3975,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_0),32);
        bufp->chgIData(oldp+3976,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_1),32);
        bufp->chgIData(oldp+3977,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_2),32);
        bufp->chgIData(oldp+3978,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_3),32);
        bufp->chgIData(oldp+3979,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_4),32);
        bufp->chgIData(oldp+3980,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_5),32);
        bufp->chgIData(oldp+3981,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_6),32);
        bufp->chgIData(oldp+3982,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_7),32);
        bufp->chgIData(oldp+3983,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_0),32);
        bufp->chgIData(oldp+3984,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_1),32);
        bufp->chgIData(oldp+3985,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_2),32);
        bufp->chgIData(oldp+3986,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_3),32);
        bufp->chgIData(oldp+3987,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_4),32);
        bufp->chgIData(oldp+3988,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_5),32);
        bufp->chgIData(oldp+3989,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_6),32);
        bufp->chgIData(oldp+3990,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_7),32);
        bufp->chgIData(oldp+3991,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_0),32);
        bufp->chgIData(oldp+3992,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_1),32);
        bufp->chgIData(oldp+3993,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_2),32);
        bufp->chgIData(oldp+3994,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_3),32);
        bufp->chgIData(oldp+3995,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_4),32);
        bufp->chgIData(oldp+3996,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_5),32);
        bufp->chgIData(oldp+3997,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_6),32);
        bufp->chgIData(oldp+3998,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_7),32);
        bufp->chgIData(oldp+3999,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_0),32);
        bufp->chgIData(oldp+4000,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_1),32);
        bufp->chgIData(oldp+4001,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_2),32);
        bufp->chgIData(oldp+4002,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_3),32);
        bufp->chgIData(oldp+4003,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_4),32);
        bufp->chgIData(oldp+4004,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_5),32);
        bufp->chgIData(oldp+4005,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_6),32);
        bufp->chgIData(oldp+4006,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_7),32);
        bufp->chgIData(oldp+4007,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_0),32);
        bufp->chgIData(oldp+4008,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_1),32);
        bufp->chgIData(oldp+4009,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_2),32);
        bufp->chgIData(oldp+4010,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_3),32);
        bufp->chgIData(oldp+4011,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_4),32);
        bufp->chgIData(oldp+4012,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_5),32);
        bufp->chgIData(oldp+4013,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_6),32);
        bufp->chgIData(oldp+4014,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_7),32);
        bufp->chgIData(oldp+4015,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_0),32);
        bufp->chgIData(oldp+4016,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_1),32);
        bufp->chgIData(oldp+4017,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_2),32);
        bufp->chgIData(oldp+4018,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_3),32);
        bufp->chgIData(oldp+4019,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_4),32);
        bufp->chgIData(oldp+4020,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_5),32);
        bufp->chgIData(oldp+4021,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_6),32);
        bufp->chgIData(oldp+4022,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_7),32);
        bufp->chgIData(oldp+4023,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_0),32);
        bufp->chgIData(oldp+4024,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_1),32);
        bufp->chgIData(oldp+4025,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_2),32);
        bufp->chgIData(oldp+4026,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_3),32);
        bufp->chgIData(oldp+4027,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_4),32);
        bufp->chgIData(oldp+4028,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_5),32);
        bufp->chgIData(oldp+4029,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_6),32);
        bufp->chgIData(oldp+4030,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_7),32);
        bufp->chgIData(oldp+4031,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_0),32);
        bufp->chgIData(oldp+4032,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_1),32);
        bufp->chgIData(oldp+4033,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_2),32);
        bufp->chgIData(oldp+4034,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_3),32);
        bufp->chgIData(oldp+4035,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_4),32);
        bufp->chgIData(oldp+4036,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_5),32);
        bufp->chgIData(oldp+4037,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_6),32);
        bufp->chgIData(oldp+4038,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_7),32);
        bufp->chgIData(oldp+4039,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_0),32);
        bufp->chgIData(oldp+4040,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_1),32);
        bufp->chgIData(oldp+4041,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_2),32);
        bufp->chgIData(oldp+4042,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_3),32);
        bufp->chgIData(oldp+4043,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_4),32);
        bufp->chgIData(oldp+4044,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_5),32);
        bufp->chgIData(oldp+4045,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_6),32);
        bufp->chgIData(oldp+4046,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_7),32);
        bufp->chgIData(oldp+4047,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_0),32);
        bufp->chgIData(oldp+4048,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_1),32);
        bufp->chgIData(oldp+4049,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_2),32);
        bufp->chgIData(oldp+4050,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_3),32);
        bufp->chgIData(oldp+4051,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_4),32);
        bufp->chgIData(oldp+4052,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_5),32);
        bufp->chgIData(oldp+4053,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_6),32);
        bufp->chgIData(oldp+4054,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_7),32);
        bufp->chgIData(oldp+4055,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_0),32);
        bufp->chgIData(oldp+4056,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_1),32);
        bufp->chgIData(oldp+4057,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_2),32);
        bufp->chgIData(oldp+4058,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_3),32);
        bufp->chgIData(oldp+4059,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_4),32);
        bufp->chgIData(oldp+4060,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_5),32);
        bufp->chgIData(oldp+4061,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_6),32);
        bufp->chgIData(oldp+4062,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_7),32);
        bufp->chgIData(oldp+4063,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_0),32);
        bufp->chgIData(oldp+4064,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_1),32);
        bufp->chgIData(oldp+4065,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_2),32);
        bufp->chgIData(oldp+4066,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_3),32);
        bufp->chgIData(oldp+4067,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_4),32);
        bufp->chgIData(oldp+4068,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_5),32);
        bufp->chgIData(oldp+4069,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_6),32);
        bufp->chgIData(oldp+4070,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_7),32);
        bufp->chgIData(oldp+4071,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_0),32);
        bufp->chgIData(oldp+4072,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_1),32);
        bufp->chgIData(oldp+4073,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_2),32);
        bufp->chgIData(oldp+4074,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_3),32);
        bufp->chgIData(oldp+4075,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_4),32);
        bufp->chgIData(oldp+4076,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_5),32);
        bufp->chgIData(oldp+4077,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_6),32);
        bufp->chgIData(oldp+4078,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_7),32);
        bufp->chgIData(oldp+4079,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_0),32);
        bufp->chgIData(oldp+4080,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_1),32);
        bufp->chgIData(oldp+4081,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_2),32);
        bufp->chgIData(oldp+4082,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_3),32);
        bufp->chgIData(oldp+4083,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_4),32);
        bufp->chgIData(oldp+4084,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_5),32);
        bufp->chgIData(oldp+4085,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_6),32);
        bufp->chgIData(oldp+4086,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_7),32);
        bufp->chgIData(oldp+4087,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_0),32);
        bufp->chgIData(oldp+4088,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_1),32);
        bufp->chgIData(oldp+4089,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_2),32);
        bufp->chgIData(oldp+4090,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_3),32);
        bufp->chgIData(oldp+4091,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_4),32);
        bufp->chgIData(oldp+4092,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_5),32);
        bufp->chgIData(oldp+4093,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_6),32);
        bufp->chgIData(oldp+4094,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_7),32);
        bufp->chgIData(oldp+4095,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_0),32);
        bufp->chgIData(oldp+4096,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_1),32);
        bufp->chgIData(oldp+4097,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_2),32);
        bufp->chgIData(oldp+4098,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_3),32);
        bufp->chgIData(oldp+4099,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_4),32);
        bufp->chgIData(oldp+4100,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_5),32);
        bufp->chgIData(oldp+4101,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_6),32);
        bufp->chgIData(oldp+4102,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_7),32);
        bufp->chgIData(oldp+4103,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_0),32);
        bufp->chgIData(oldp+4104,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_1),32);
        bufp->chgIData(oldp+4105,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_2),32);
        bufp->chgIData(oldp+4106,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_3),32);
        bufp->chgIData(oldp+4107,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_4),32);
        bufp->chgIData(oldp+4108,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_5),32);
        bufp->chgIData(oldp+4109,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_6),32);
        bufp->chgIData(oldp+4110,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_7),32);
        bufp->chgIData(oldp+4111,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_0),32);
        bufp->chgIData(oldp+4112,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_1),32);
        bufp->chgIData(oldp+4113,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_2),32);
        bufp->chgIData(oldp+4114,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_3),32);
        bufp->chgIData(oldp+4115,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_4),32);
        bufp->chgIData(oldp+4116,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_5),32);
        bufp->chgIData(oldp+4117,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_6),32);
        bufp->chgIData(oldp+4118,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_7),32);
        bufp->chgIData(oldp+4119,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_0),32);
        bufp->chgIData(oldp+4120,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_1),32);
        bufp->chgIData(oldp+4121,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_2),32);
        bufp->chgIData(oldp+4122,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_3),32);
        bufp->chgIData(oldp+4123,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_4),32);
        bufp->chgIData(oldp+4124,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_5),32);
        bufp->chgIData(oldp+4125,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_6),32);
        bufp->chgIData(oldp+4126,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_7),32);
        bufp->chgIData(oldp+4127,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_0),32);
        bufp->chgIData(oldp+4128,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_1),32);
        bufp->chgIData(oldp+4129,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_2),32);
        bufp->chgIData(oldp+4130,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_3),32);
        bufp->chgIData(oldp+4131,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_4),32);
        bufp->chgIData(oldp+4132,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_5),32);
        bufp->chgIData(oldp+4133,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_6),32);
        bufp->chgIData(oldp+4134,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_7),32);
        bufp->chgIData(oldp+4135,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_0),32);
        bufp->chgIData(oldp+4136,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_1),32);
        bufp->chgIData(oldp+4137,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_2),32);
        bufp->chgIData(oldp+4138,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_3),32);
        bufp->chgIData(oldp+4139,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_4),32);
        bufp->chgIData(oldp+4140,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_5),32);
        bufp->chgIData(oldp+4141,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_6),32);
        bufp->chgIData(oldp+4142,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_7),32);
        bufp->chgIData(oldp+4143,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_0),32);
        bufp->chgIData(oldp+4144,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_1),32);
        bufp->chgIData(oldp+4145,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_2),32);
        bufp->chgIData(oldp+4146,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_3),32);
        bufp->chgIData(oldp+4147,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_4),32);
        bufp->chgIData(oldp+4148,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_5),32);
        bufp->chgIData(oldp+4149,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_6),32);
        bufp->chgIData(oldp+4150,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_7),32);
        bufp->chgIData(oldp+4151,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_0),32);
        bufp->chgIData(oldp+4152,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_1),32);
        bufp->chgIData(oldp+4153,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_2),32);
        bufp->chgIData(oldp+4154,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_3),32);
        bufp->chgIData(oldp+4155,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_4),32);
        bufp->chgIData(oldp+4156,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_5),32);
        bufp->chgIData(oldp+4157,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_6),32);
        bufp->chgIData(oldp+4158,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_7),32);
        bufp->chgIData(oldp+4159,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_0),32);
        bufp->chgIData(oldp+4160,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_1),32);
        bufp->chgIData(oldp+4161,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_2),32);
        bufp->chgIData(oldp+4162,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_3),32);
        bufp->chgIData(oldp+4163,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_4),32);
        bufp->chgIData(oldp+4164,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_5),32);
        bufp->chgIData(oldp+4165,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_6),32);
        bufp->chgIData(oldp+4166,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_7),32);
        bufp->chgIData(oldp+4167,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_0),32);
        bufp->chgIData(oldp+4168,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_1),32);
        bufp->chgIData(oldp+4169,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_2),32);
        bufp->chgIData(oldp+4170,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_3),32);
        bufp->chgIData(oldp+4171,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_4),32);
        bufp->chgIData(oldp+4172,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_5),32);
        bufp->chgIData(oldp+4173,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_6),32);
        bufp->chgIData(oldp+4174,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_7),32);
        bufp->chgIData(oldp+4175,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_0),32);
        bufp->chgIData(oldp+4176,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_1),32);
        bufp->chgIData(oldp+4177,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_2),32);
        bufp->chgIData(oldp+4178,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_3),32);
        bufp->chgIData(oldp+4179,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_4),32);
        bufp->chgIData(oldp+4180,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_5),32);
        bufp->chgIData(oldp+4181,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_6),32);
        bufp->chgIData(oldp+4182,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_7),32);
        bufp->chgIData(oldp+4183,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_0),32);
        bufp->chgIData(oldp+4184,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_1),32);
        bufp->chgIData(oldp+4185,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_2),32);
        bufp->chgIData(oldp+4186,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_3),32);
    }
}
