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
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__inst_reg),32);
        bufp->chgBit(oldp+1,(vlSelfRef.top__DOT__cpu__DOT__busy));
        bufp->chgIData(oldp+2,(((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                 ? 0U : ((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                          ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                                   ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result
                                                   : 0U)))),32);
        bufp->chgBit(oldp+3,(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_m_AWVALID));
        bufp->chgBit(oldp+4,(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0));
        bufp->chgIData(oldp+5,(((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                 ? 0U : ((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                          ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                                   ? 
                                                  ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                                                    ? 
                                                   ((0xffU 
                                                     & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                                    << 
                                                    (0x18U 
                                                     & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                        << 3U)))
                                                    : 
                                                   ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                                     ? 
                                                    ((0xffffU 
                                                      & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                                     << 
                                                     (0x10U 
                                                      & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                         << 3U)))
                                                     : 
                                                    ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw)
                                                      ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data
                                                      : 0U)))
                                                   : 0U)))),32);
        bufp->chgCData(oldp+6,(((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                 ? 0U : ((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                          ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                                   ? 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result))
                                                       : 
                                                      ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                                        ? 
                                                       ((2U 
                                                         & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result)
                                                         ? 0xcU
                                                         : 3U)
                                                        : 
                                                       (- (IData)((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw))))))
                                                   : 0U)))),4);
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_BVALID_0));
        bufp->chgBit(oldp+8,(((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)) 
                              & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_BREADY_0))));
        bufp->chgIData(oldp+9,(((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                 ? 0U : vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARADDR)),32);
        bufp->chgBit(oldp+10,(((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)) 
                               & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARVALID))));
        bufp->chgBit(oldp+11,(vlSelfRef.top__DOT__cpu__DOT___DSRAM_io_M_bus_ARREADY));
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__rdata_reg),32);
        bufp->chgBit(oldp+13,(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_RVALID_0));
        bufp->chgBit(oldp+14,(((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)) 
                               & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_RREADY_0))));
        bufp->chgCData(oldp+15,(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state),2);
        bufp->chgBit(oldp+16,((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state))));
        bufp->chgBit(oldp+17,(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__ar_fire));
        bufp->chgBit(oldp+18,(((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)) 
                               & ((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0) 
                                  | (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__ar_fire)))));
        bufp->chgBit(oldp+19,(((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)) 
                               & (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0))));
        bufp->chgIData(oldp+20,(((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT___GEN)
                                  ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                           ? 0U : vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARADDR))),32);
        bufp->chgIData(oldp+21,(((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0)
                                  ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                      ? 0U : ((1U & 
                                               ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                               ? 0U
                                               : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                                   ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result
                                                   : 0U)))
                                  : 0U)),32);
        bufp->chgIData(oldp+22,(((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0)
                                  ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                      ? 0U : ((1U & 
                                               ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                               ? 0U
                                               : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                                   ? 
                                                  ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                                                    ? 
                                                   ((0xffU 
                                                     & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                                    << 
                                                    (0x18U 
                                                     & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                        << 3U)))
                                                    : 
                                                   ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                                     ? 
                                                    ((0xffffU 
                                                      & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                                     << 
                                                     (0x10U 
                                                      & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                         << 3U)))
                                                     : 
                                                    ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw)
                                                      ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data
                                                      : 0U)))
                                                   : 0U)))
                                  : 0U)),32);
        bufp->chgCData(oldp+23,(((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0)
                                  ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                      ? 0U : ((1U & 
                                               ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                               ? 0U
                                               : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                                   ? 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result))
                                                       : 
                                                      ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                                        ? 
                                                       ((2U 
                                                         & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result)
                                                         ? 0xcU
                                                         : 3U)
                                                        : 
                                                       (- (IData)((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw))))))
                                                   : 0U)))
                                  : 0U)),4);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT___mem_blackbox_rdata),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_i_ARADDR),32);
        bufp->chgBit(oldp+26,(((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_is_inst) 
                               & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARVALID))));
        bufp->chgBit(oldp+27,((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state))));
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__mem_inst),32);
        bufp->chgBit(oldp+29,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__io_I_bus_RVALID_0));
        bufp->chgBit(oldp+30,(((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_is_inst) 
                               & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_RREADY_0))));
        bufp->chgCData(oldp+31,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state),2);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__pc_lat),32);
        bufp->chgBit(oldp+33,(((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state)) 
                               & (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___GEN))));
        bufp->chgIData(oldp+34,(((IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___GEN)
                                  ? vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_i_ARADDR
                                  : vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__pc_lat)),32);
        bufp->chgBit(oldp+35,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___imem_inst_valid));
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___imem_inst),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_r),32);
        bufp->chgBit(oldp+38,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_valid_r));
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc),32);
        bufp->chgBit(oldp+40,(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__io_I_bus_ARVALID_0));
        bufp->chgBit(oldp+41,(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_i_master_ARREADY));
        bufp->chgIData(oldp+42,(((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                                        | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_2)))
                                  ? 0U : vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RDATA)),32);
        bufp->chgBit(oldp+43,(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_i_master_RVALID));
        bufp->chgBit(oldp+44,(vlSelfRef.top__DOT__cpu__DOT___axi_ifu_master_io_I_bus_RREADY));
        bufp->chgIData(oldp+45,(((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                  ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result
                                  : 0U)),32);
        bufp->chgBit(oldp+46,(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID));
        bufp->chgBit(oldp+47,((((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)) 
                                & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                               & (IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_AWREADY))));
        bufp->chgIData(oldp+48,(((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                  ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                                      ? ((0xffU & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                         << (0x18U 
                                             & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                << 3U)))
                                      : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                          ? ((0xffffU 
                                              & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                             << (0x10U 
                                                 & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                    << 3U)))
                                          : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw)
                                              ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data
                                              : 0U)))
                                  : 0U)),32);
        bufp->chgCData(oldp+49,(((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                  ? (0xfU & ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                                              ? ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result))
                                              : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                                  ? 
                                                 ((2U 
                                                   & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result)
                                                   ? 0xcU
                                                   : 3U)
                                                  : 
                                                 (- (IData)((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw))))))
                                  : 0U)),4);
        bufp->chgBit(oldp+50,(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_m_master_BVALID));
        bufp->chgBit(oldp+51,(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_M_bus_BREADY_0));
        bufp->chgIData(oldp+52,(((1U & ((0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
                                        | ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__io_mem_req_valid_0)) 
                                           | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT___GEN_0))))
                                  ? 0U : vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result)),32);
        bufp->chgBit(oldp+53,(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_ARVALID));
        bufp->chgBit(oldp+54,(((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_6) 
                               & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)) 
                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_ARREADY)))));
        bufp->chgIData(oldp+55,(((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_3)
                                  ? 0U : vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RDATA)),32);
        bufp->chgBit(oldp+56,(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_m_master_RVALID));
        bufp->chgBit(oldp+57,(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_M_bus_RREADY_0));
        bufp->chgIData(oldp+58,(((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                        | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                  ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                           ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result
                                           : 0U))),32);
        bufp->chgBit(oldp+59,(((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN) 
                               & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__awvalid))));
        bufp->chgBit(oldp+60,(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_AWREADY));
        bufp->chgIData(oldp+61,(((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                        | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                  ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                           ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                                               ? ((0xffU 
                                                   & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                                  << 
                                                  (0x18U 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                      << 3U)))
                                               : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                                   ? 
                                                  ((0xffffU 
                                                    & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                                   << 
                                                   (0x10U 
                                                    & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                       << 3U)))
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data
                                                    : 0U)))
                                           : 0U))),32);
        bufp->chgCData(oldp+62,(((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                        | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                  ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                           ? (0xfU 
                                              & ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                                                  ? 
                                                 ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result))
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result)
                                                    ? 0xcU
                                                    : 3U)
                                                   : 
                                                  (- (IData)((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw))))))
                                           : 0U))),4);
        bufp->chgBit(oldp+63,(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_BVALID));
        bufp->chgBit(oldp+64,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_BREADY_0));
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARADDR),32);
        bufp->chgBit(oldp+66,(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARVALID));
        bufp->chgBit(oldp+67,(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_ARREADY));
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RDATA),32);
        bufp->chgBit(oldp+69,(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RVALID));
        bufp->chgBit(oldp+70,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_RREADY_0));
        bufp->chgBit(oldp+71,(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_is_inst));
        bufp->chgBit(oldp+72,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy));
        bufp->chgBit(oldp+73,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__using_ifu));
        bufp->chgBit(oldp+74,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__is_write));
        bufp->chgBit(oldp+75,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu));
        bufp->chgBit(oldp+76,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__awvalid));
        bufp->chgBit(oldp+77,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__arvalid));
        bufp->chgBit(oldp+78,(((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__pending)) 
                               & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_i_master_ARREADY))));
        bufp->chgBit(oldp+79,(vlSelfRef.top__DOT__cpu__DOT___ifu_io_inst_req_valid));
        bufp->chgBit(oldp+80,(vlSelfRef.top__DOT__cpu__DOT___ifu_io_inst_resp_ready));
        bufp->chgBit(oldp+81,(((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending)) 
                               & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_i_master_RVALID))));
        bufp->chgBit(oldp+82,(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__io_flush_0));
        bufp->chgBit(oldp+83,(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__pending));
        bufp->chgBit(oldp+84,(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending));
        bufp->chgBit(oldp+85,(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__r_fire));
        bufp->chgBit(oldp+86,(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_mem_req_ready_0));
        bufp->chgBit(oldp+87,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__io_mem_req_valid_0));
        bufp->chgBit(oldp+88,(((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw) 
                               | ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb) 
                                  | (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)))));
        bufp->chgIData(oldp+89,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result),32);
        bufp->chgIData(oldp+90,(((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                                  ? ((0xffU & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                     << (0x18U & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                  << 3U)))
                                  : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                      ? ((0xffffU & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                         << (0x10U 
                                             & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                << 3U)))
                                      : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw)
                                          ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data
                                          : 0U)))),32);
        bufp->chgCData(oldp+91,((0xfU & ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                                          ? ((IData)(1U) 
                                             << (3U 
                                                 & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result))
                                          : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                              ? ((2U 
                                                  & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result)
                                                  ? 0xcU
                                                  : 3U)
                                              : (- (IData)((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw))))))),4);
        bufp->chgBit(oldp+92,((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))));
        bufp->chgBit(oldp+93,(((0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
                               & ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state))
                                   ? (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_m_master_RVALID)
                                   : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_m_master_BVALID))))));
        bufp->chgIData(oldp+94,(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_mem_resp_bits_rdata),32);
        bufp->chgCData(oldp+95,(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state),2);
        bufp->chgSData(oldp+96,(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr),12);
        bufp->chgIData(oldp+97,(((0x300U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                                  ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus
                                  : ((0x342U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                                      ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mcause
                                      : ((0x341U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                                          ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mepc
                                          : ((0x305U 
                                              == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                                              ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mtvec
                                              : 0U))))),32);
        bufp->chgSData(oldp+98,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_waddr),12);
        bufp->chgIData(oldp+99,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wdata),32);
        bufp->chgBit(oldp+100,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wen));
        bufp->chgBit(oldp+101,((0x73U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
        bufp->chgBit(oldp+102,((0x30200073U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
        bufp->chgIData(oldp+103,(vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mtvec),32);
        bufp->chgIData(oldp+104,(vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mepc),32);
        bufp->chgIData(oldp+105,(vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mcause),32);
        bufp->chgIData(oldp+106,(vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus),32);
        bufp->chgBit(oldp+107,((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__state)))));
        bufp->chgBit(oldp+108,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__state));
        bufp->chgIData(oldp+109,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__pc),32);
        bufp->chgCData(oldp+110,((0x1fU & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                           >> 7U))),5);
        bufp->chgBit(oldp+111,(((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_load) 
                                | ((0x37U == (0x7fU 
                                              & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                                   | ((0x17U == (0x7fU 
                                                 & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                                      | ((0x33U == 
                                          (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                                         | ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                                            | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_jalr) 
                                               | ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                                                  | (((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrw) 
                                                      | (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrs)) 
                                                     & (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                                            >> 7U)))))))))))));
        bufp->chgIData(oldp+112,((((0x17U == (0x7fU 
                                              & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)))
                                   ? vlSelfRef.top__DOT__cpu__DOT__idu__DOT__pc
                                   : ((0x37U == (0x7fU 
                                                 & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))
                                       ? 0U : vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data))),32);
        bufp->chgIData(oldp+113,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b),32);
        bufp->chgCData(oldp+114,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op),4);
        bufp->chgIData(oldp+115,(vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data),32);
        bufp->chgIData(oldp+116,(vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data),32);
        bufp->chgIData(oldp+117,(((0x73U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                                   ? vlSelfRef.top__DOT__cpu__DOT__idu__DOT__pc
                                   : ((0x30200073U 
                                       == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                                       ? 0U : vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data))),32);
        bufp->chgBit(oldp+118,(((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrw) 
                                | (0x73U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))));
        bufp->chgSData(oldp+119,(((0x73U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                                   ? 0x341U : ((0x30200073U 
                                                == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                                                ? 0x342U
                                                : (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                                   >> 0x14U)))),12);
        bufp->chgBit(oldp+120,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrw));
        bufp->chgBit(oldp+121,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrs));
        bufp->chgBit(oldp+122,((0x6fU == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+123,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_jalr));
        bufp->chgBit(oldp+124,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lw));
        bufp->chgBit(oldp+125,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sw));
        bufp->chgBit(oldp+126,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lb));
        bufp->chgBit(oldp+127,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sb));
        bufp->chgBit(oldp+128,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lh));
        bufp->chgBit(oldp+129,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sh));
        bufp->chgBit(oldp+130,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lbu));
        bufp->chgBit(oldp+131,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lhu));
        bufp->chgBit(oldp+132,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_beq));
        bufp->chgBit(oldp+133,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bne));
        bufp->chgBit(oldp+134,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_blt));
        bufp->chgBit(oldp+135,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bltu));
        bufp->chgBit(oldp+136,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bge));
        bufp->chgBit(oldp+137,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bgeu));
        bufp->chgBit(oldp+138,((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))));
        bufp->chgBit(oldp+139,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__out_valid));
        bufp->chgIData(oldp+140,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__pc),32);
        bufp->chgIData(oldp+141,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp),32);
        bufp->chgIData(oldp+142,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs2_data),32);
        bufp->chgCData(oldp+143,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rd_addr),5);
        bufp->chgBit(oldp+144,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rd_en));
        bufp->chgIData(oldp+145,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_wdata),32);
        bufp->chgBit(oldp+146,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_wen));
        bufp->chgSData(oldp+147,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_waddr),12);
        bufp->chgIData(oldp+148,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_rdata),32);
        bufp->chgBit(oldp+149,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_csrrw));
        bufp->chgBit(oldp+150,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_csrrs));
        bufp->chgBit(oldp+151,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lw));
        bufp->chgBit(oldp+152,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lbu));
        bufp->chgBit(oldp+153,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lh));
        bufp->chgBit(oldp+154,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lhu));
        bufp->chgBit(oldp+155,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lb));
        bufp->chgBit(oldp+156,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sw));
        bufp->chgBit(oldp+157,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sb));
        bufp->chgBit(oldp+158,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sh));
        bufp->chgBit(oldp+159,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_jalr));
        bufp->chgBit(oldp+160,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_jal));
        bufp->chgIData(oldp+161,(vlSelfRef.top__DOT__cpu__DOT___exu_io_branch_bits_pc_branch),32);
        bufp->chgIData(oldp+162,((0xfffffffeU & (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                 + vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b))),32);
        bufp->chgBit(oldp+163,(vlSelfRef.top__DOT__cpu__DOT___exu_io_branch_bits_is_branch_taken));
        bufp->chgBit(oldp+164,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_ecall));
        bufp->chgBit(oldp+165,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_mret));
        bufp->chgBit(oldp+166,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__state));
        bufp->chgIData(oldp+167,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a),32);
        bufp->chgIData(oldp+168,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b),32);
        bufp->chgCData(oldp+169,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op),4);
        bufp->chgIData(oldp+170,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs1_data),32);
        bufp->chgBit(oldp+171,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_beq));
        bufp->chgBit(oldp+172,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bne));
        bufp->chgBit(oldp+173,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_blt));
        bufp->chgBit(oldp+174,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bltu));
        bufp->chgBit(oldp+175,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bge));
        bufp->chgBit(oldp+176,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bgeu));
        bufp->chgBit(oldp+177,(vlSelfRef.top__DOT__cpu__DOT___idu_io_in_ready));
        bufp->chgBit(oldp+178,(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__out_valid));
        bufp->chgIData(oldp+179,(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc_reg),32);
        bufp->chgCData(oldp+180,((0x1fU & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+181,((0x1fU & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+182,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst),32);
        bufp->chgIData(oldp+183,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__imm_i),32);
        bufp->chgBit(oldp+184,((0x17U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+185,((0x37U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+186,((0x13U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+187,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_load));
        bufp->chgBit(oldp+188,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srai));
        bufp->chgBit(oldp+189,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srli));
        bufp->chgBit(oldp+190,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_slli));
        bufp->chgBit(oldp+191,((0x33U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+192,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_branch));
        bufp->chgBit(oldp+193,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_store));
        bufp->chgBit(oldp+194,((0x73U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+195,(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__state));
        bufp->chgBit(oldp+196,((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))));
        bufp->chgBit(oldp+197,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__out_valid));
        bufp->chgIData(oldp+198,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__pc),32);
        bufp->chgCData(oldp+199,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rd_addr),5);
        bufp->chgBit(oldp+200,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rd_en));
        bufp->chgIData(oldp+201,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__mem_data),32);
        bufp->chgBit(oldp+202,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_load));
        bufp->chgBit(oldp+203,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_jalr));
        bufp->chgBit(oldp+204,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_jal));
        bufp->chgIData(oldp+205,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_wdata),32);
        bufp->chgBit(oldp+206,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_wen));
        bufp->chgSData(oldp+207,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_waddr),12);
        bufp->chgIData(oldp+208,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_rdata),32);
        bufp->chgBit(oldp+209,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_csrrw));
        bufp->chgBit(oldp+210,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_csrrs));
        bufp->chgIData(oldp+211,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data),32);
        bufp->chgBit(oldp+212,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lw));
        bufp->chgBit(oldp+213,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lbu));
        bufp->chgBit(oldp+214,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lh));
        bufp->chgBit(oldp+215,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lhu));
        bufp->chgBit(oldp+216,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lb));
        bufp->chgBit(oldp+217,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw));
        bufp->chgBit(oldp+218,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb));
        bufp->chgBit(oldp+219,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh));
        bufp->chgCData(oldp+220,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state),2);
        bufp->chgCData(oldp+221,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__casez_tmp),8);
        bufp->chgCData(oldp+222,(((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
                                   ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT___GEN_0)
                                       ? (1U | (2U 
                                                & ((~ 
                                                    ((((((((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lw) 
                                                           | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lb)) 
                                                          | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lbu)) 
                                                         | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lh)) 
                                                        | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lhu)) 
                                                       | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sw)) 
                                                      | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sb)) 
                                                     | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sh))) 
                                                   << 1U)))
                                       : (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
                                   : ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
                                       ? (((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_mem_req_ready_0) 
                                           & (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__io_mem_req_valid_0))
                                           ? (2U | 
                                              (1U & 
                                               (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_load))))
                                           : (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
                                       : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
                                           ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT___GEN_1)
                                               ? 3U
                                               : (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
                                           : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT___GEN_2)
                                               ? 0U
                                               : (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state)))))),2);
        bufp->chgSData(oldp+223,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__sel_half),16);
        bufp->chgCData(oldp+224,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr),5);
        bufp->chgIData(oldp+225,(vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data),32);
        bufp->chgBit(oldp+226,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_en));
        bufp->chgIData(oldp+227,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_0),32);
        bufp->chgIData(oldp+228,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_1),32);
        bufp->chgIData(oldp+229,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_2),32);
        bufp->chgIData(oldp+230,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_3),32);
        bufp->chgIData(oldp+231,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_4),32);
        bufp->chgIData(oldp+232,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_5),32);
        bufp->chgIData(oldp+233,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_6),32);
        bufp->chgIData(oldp+234,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_7),32);
        bufp->chgIData(oldp+235,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_8),32);
        bufp->chgIData(oldp+236,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_9),32);
        bufp->chgIData(oldp+237,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_10),32);
        bufp->chgIData(oldp+238,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_11),32);
        bufp->chgIData(oldp+239,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_12),32);
        bufp->chgIData(oldp+240,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_13),32);
        bufp->chgIData(oldp+241,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_14),32);
        bufp->chgIData(oldp+242,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_15),32);
        bufp->chgIData(oldp+243,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_16),32);
        bufp->chgIData(oldp+244,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_17),32);
        bufp->chgIData(oldp+245,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_18),32);
        bufp->chgIData(oldp+246,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_19),32);
        bufp->chgIData(oldp+247,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_20),32);
        bufp->chgIData(oldp+248,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_21),32);
        bufp->chgIData(oldp+249,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_22),32);
        bufp->chgIData(oldp+250,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_23),32);
        bufp->chgIData(oldp+251,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_24),32);
        bufp->chgIData(oldp+252,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_25),32);
        bufp->chgIData(oldp+253,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_26),32);
        bufp->chgIData(oldp+254,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_27),32);
        bufp->chgIData(oldp+255,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_28),32);
        bufp->chgIData(oldp+256,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_29),32);
        bufp->chgIData(oldp+257,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_30),32);
        bufp->chgIData(oldp+258,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_31),32);
        bufp->chgIData(oldp+259,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp),32);
        bufp->chgIData(oldp+260,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp_0),32);
        bufp->chgIData(oldp+261,(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT__addr),32);
        bufp->chgBit(oldp+262,((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))));
        bufp->chgIData(oldp+263,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__pc),32);
        bufp->chgIData(oldp+264,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__alu_result),32);
        bufp->chgIData(oldp+265,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__mem_data),32);
        bufp->chgBit(oldp+266,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_load));
        bufp->chgBit(oldp+267,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_jalr));
        bufp->chgBit(oldp+268,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_jal));
        bufp->chgIData(oldp+269,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_rdata),32);
        bufp->chgBit(oldp+270,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_csrrw));
        bufp->chgBit(oldp+271,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_csrrs));
        bufp->chgCData(oldp+272,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state),2);
        bufp->chgCData(oldp+273,(((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))
                                   ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT___GEN)
                                       ? 1U : (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))
                                   : ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))
                                       ? 2U : ((2U 
                                                == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))
                                                ? 0U
                                                : (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))))),2);
        bufp->chgBit(oldp+274,(vlSelfRef.top__DOT____Vcellinp__ebreak_box__is_ebreak));
    }
    bufp->chgBit(oldp+275,(vlSelfRef.clock));
    bufp->chgBit(oldp+276,(vlSelfRef.reset));
    bufp->chgIData(oldp+277,(vlSelfRef.io_pc),32);
    bufp->chgIData(oldp+278,(vlSelfRef.io_inst),32);
    bufp->chgBit(oldp+279,(vlSelfRef.io_halt_ret));
    bufp->chgBit(oldp+280,(vlSelfRef.io_non_inst));
    bufp->chgIData(oldp+281,(vlSelfRef.io_gpr_0),32);
    bufp->chgIData(oldp+282,(vlSelfRef.io_gpr_1),32);
    bufp->chgIData(oldp+283,(vlSelfRef.io_gpr_2),32);
    bufp->chgIData(oldp+284,(vlSelfRef.io_gpr_3),32);
    bufp->chgIData(oldp+285,(vlSelfRef.io_gpr_4),32);
    bufp->chgIData(oldp+286,(vlSelfRef.io_gpr_5),32);
    bufp->chgIData(oldp+287,(vlSelfRef.io_gpr_6),32);
    bufp->chgIData(oldp+288,(vlSelfRef.io_gpr_7),32);
    bufp->chgIData(oldp+289,(vlSelfRef.io_gpr_8),32);
    bufp->chgIData(oldp+290,(vlSelfRef.io_gpr_9),32);
    bufp->chgIData(oldp+291,(vlSelfRef.io_gpr_10),32);
    bufp->chgIData(oldp+292,(vlSelfRef.io_gpr_11),32);
    bufp->chgIData(oldp+293,(vlSelfRef.io_gpr_12),32);
    bufp->chgIData(oldp+294,(vlSelfRef.io_gpr_13),32);
    bufp->chgIData(oldp+295,(vlSelfRef.io_gpr_14),32);
    bufp->chgIData(oldp+296,(vlSelfRef.io_gpr_15),32);
    bufp->chgIData(oldp+297,(vlSelfRef.io_gpr_16),32);
    bufp->chgIData(oldp+298,(vlSelfRef.io_gpr_17),32);
    bufp->chgIData(oldp+299,(vlSelfRef.io_gpr_18),32);
    bufp->chgIData(oldp+300,(vlSelfRef.io_gpr_19),32);
    bufp->chgIData(oldp+301,(vlSelfRef.io_gpr_20),32);
    bufp->chgIData(oldp+302,(vlSelfRef.io_gpr_21),32);
    bufp->chgIData(oldp+303,(vlSelfRef.io_gpr_22),32);
    bufp->chgIData(oldp+304,(vlSelfRef.io_gpr_23),32);
    bufp->chgIData(oldp+305,(vlSelfRef.io_gpr_24),32);
    bufp->chgIData(oldp+306,(vlSelfRef.io_gpr_25),32);
    bufp->chgIData(oldp+307,(vlSelfRef.io_gpr_26),32);
    bufp->chgIData(oldp+308,(vlSelfRef.io_gpr_27),32);
    bufp->chgIData(oldp+309,(vlSelfRef.io_gpr_28),32);
    bufp->chgIData(oldp+310,(vlSelfRef.io_gpr_29),32);
    bufp->chgIData(oldp+311,(vlSelfRef.io_gpr_30),32);
    bufp->chgIData(oldp+312,(vlSelfRef.io_gpr_31),32);
    bufp->chgBit(oldp+313,(vlSelfRef.io_difftest_valid));
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
}
