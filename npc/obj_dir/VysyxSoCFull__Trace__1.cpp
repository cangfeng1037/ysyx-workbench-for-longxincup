// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_0_sub_1(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0_sub_1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 4275);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+0,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_2
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_2
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_2
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_2)))),32);
        bufp->chgIData(oldp+1,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_3
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_3
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_3
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_3)))),32);
        bufp->chgIData(oldp+2,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_4
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_4
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_4
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_4)))),32);
        bufp->chgIData(oldp+3,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_5
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_5
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_5
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_5)))),32);
        bufp->chgIData(oldp+4,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_6
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_6
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_6
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_6)))),32);
        bufp->chgIData(oldp+5,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_7
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_7
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_7
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_7)))),32);
        bufp->chgIData(oldp+6,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_0
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_0
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_0
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_0)))),32);
        bufp->chgIData(oldp+7,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_1
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_1
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_1
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_1)))),32);
        bufp->chgIData(oldp+8,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_2
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_2
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_2
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_2)))),32);
        bufp->chgIData(oldp+9,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_3
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_3
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_3
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_3)))),32);
        bufp->chgIData(oldp+10,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_4
                                  : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_4
                                      : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_4
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_4)))),32);
        bufp->chgIData(oldp+11,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_5
                                  : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_5
                                      : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_5
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_5)))),32);
        bufp->chgIData(oldp+12,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_6
                                  : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_6
                                      : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_6
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_6)))),32);
        bufp->chgIData(oldp+13,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_7
                                  : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_7
                                      : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_7
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_7)))),32);
        bufp->chgIData(oldp+14,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_754),32);
        bufp->chgIData(oldp+15,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_755),32);
        bufp->chgIData(oldp+16,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_756),32);
        bufp->chgIData(oldp+17,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_757),32);
        bufp->chgIData(oldp+18,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_758),32);
        bufp->chgIData(oldp+19,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_759),32);
        bufp->chgIData(oldp+20,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_760),32);
        bufp->chgIData(oldp+21,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_761),32);
        bufp->chgIData(oldp+22,(((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                  ? ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                      ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_761
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_760)
                                      : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_759
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_758))
                                  : ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                      ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_757
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_756)
                                      : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_755
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_754)))),32);
        bufp->chgIData(oldp+23,(((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                  ? ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                      ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_761
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_760)
                                      : ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_759
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_758))
                                  : ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                      ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_757
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_756)
                                      : ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_755
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_754)))),32);
        bufp->chgIData(oldp+24,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32),32);
        bufp->chgBit(oldp+25,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0));
        bufp->chgBit(oldp+26,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_1));
        bufp->chgBit(oldp+27,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_2));
        bufp->chgBit(oldp+28,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_3));
        bufp->chgBit(oldp+29,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4));
        bufp->chgBit(oldp+30,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5));
        bufp->chgBit(oldp+31,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6));
        bufp->chgBit(oldp+32,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_7));
        bufp->chgBit(oldp+33,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__state)))));
        bufp->chgBit(oldp+34,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__state));
        bufp->chgIData(oldp+35,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__pc),32);
        bufp->chgCData(oldp+36,((0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst 
                                          >> 7U))),5);
        bufp->chgBit(oldp+37,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__is_load) 
                               | ((0x37U == (0x7fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                  | ((0x17U == (0x7fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                     | ((0x33U == (0x7fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                        | ((0x6fU == 
                                            (0x7fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr) 
                                              | ((0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrs)) 
                                                    & (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                           >> 7U)))))))))))));
        bufp->chgIData(oldp+38,((((0x17U == (0x7fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)))
                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__pc
                                  : ((0x37U == (0x7fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))
                                      ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___regfile_io_rs1_data))),32);
        bufp->chgIData(oldp+39,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_alu_b),32);
        bufp->chgCData(oldp+40,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_alu_op),4);
        bufp->chgIData(oldp+41,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___regfile_io_rs1_data),32);
        bufp->chgIData(oldp+42,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___regfile_io_rs2_data),32);
        bufp->chgIData(oldp+43,(((0x73U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)
                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__pc
                                  : ((0x30200073U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)
                                      ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___regfile_io_rs1_data))),32);
        bufp->chgBit(oldp+44,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw) 
                               | (0x73U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgSData(oldp+45,(((0x73U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)
                                  ? 0x341U : ((0x30200073U 
                                               == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)
                                               ? 0x342U
                                               : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                  >> 0x14U)))),12);
        bufp->chgBit(oldp+46,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw));
        bufp->chgBit(oldp+47,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrs));
        bufp->chgBit(oldp+48,((0x6fU == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+49,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr));
        bufp->chgBit(oldp+50,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_lw));
        bufp->chgBit(oldp+51,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_sw));
        bufp->chgBit(oldp+52,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_lb));
        bufp->chgBit(oldp+53,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_sb));
        bufp->chgBit(oldp+54,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_lh));
        bufp->chgBit(oldp+55,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_sh));
        bufp->chgBit(oldp+56,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_lbu));
        bufp->chgBit(oldp+57,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_lhu));
        bufp->chgBit(oldp+58,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_beq));
        bufp->chgBit(oldp+59,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_bne));
        bufp->chgBit(oldp+60,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_blt));
        bufp->chgBit(oldp+61,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_bltu));
        bufp->chgBit(oldp+62,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_bge));
        bufp->chgBit(oldp+63,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_bgeu));
        bufp->chgBit(oldp+64,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state))));
        bufp->chgBit(oldp+65,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__out_valid));
        bufp->chgIData(oldp+66,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__pc),32);
        bufp->chgIData(oldp+67,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__alu__DOT__casez_tmp),32);
        bufp->chgIData(oldp+68,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__rs2_data),32);
        bufp->chgCData(oldp+69,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__rd_addr),5);
        bufp->chgBit(oldp+70,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__rd_en));
        bufp->chgIData(oldp+71,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__csr_wdata),32);
        bufp->chgBit(oldp+72,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__csr_wen));
        bufp->chgSData(oldp+73,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__csr_waddr),12);
        bufp->chgIData(oldp+74,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__csr_rdata),32);
        bufp->chgBit(oldp+75,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_csrrw));
        bufp->chgBit(oldp+76,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_csrrs));
        bufp->chgBit(oldp+77,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_lw));
        bufp->chgBit(oldp+78,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_lbu));
        bufp->chgBit(oldp+79,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_lh));
        bufp->chgBit(oldp+80,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_lhu));
        bufp->chgBit(oldp+81,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_lb));
        bufp->chgBit(oldp+82,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_sw));
        bufp->chgBit(oldp+83,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_sb));
        bufp->chgBit(oldp+84,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_sh));
        bufp->chgBit(oldp+85,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_jalr));
        bufp->chgBit(oldp+86,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_jal));
        bufp->chgIData(oldp+87,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___exu_io_branch_bits_pc_branch),32);
        bufp->chgIData(oldp+88,((0xfffffffeU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__alu_a 
                                                + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__alu_b))),32);
        bufp->chgBit(oldp+89,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___exu_io_branch_bits_is_branch_taken));
        bufp->chgBit(oldp+90,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_ecall));
        bufp->chgBit(oldp+91,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_mret));
        bufp->chgBit(oldp+92,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__state));
        bufp->chgIData(oldp+93,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__alu_a),32);
        bufp->chgIData(oldp+94,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__alu_b),32);
        bufp->chgCData(oldp+95,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__alu_op),4);
        bufp->chgIData(oldp+96,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__rs1_data),32);
        bufp->chgBit(oldp+97,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_beq));
        bufp->chgBit(oldp+98,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_bne));
        bufp->chgBit(oldp+99,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_blt));
        bufp->chgBit(oldp+100,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_bltu));
        bufp->chgBit(oldp+101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_bge));
        bufp->chgBit(oldp+102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_bgeu));
        bufp->chgBit(oldp+103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_1));
        bufp->chgBit(oldp+104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu1__DOT__state));
        bufp->chgIData(oldp+105,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu1__DOT__pc),32);
        bufp->chgBit(oldp+106,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu2__DOT__io_in_ready_0));
        bufp->chgBit(oldp+107,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_1)) 
                                & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state))
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit)
                                    : ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_8)) 
                                       & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)))))));
        bufp->chgIData(oldp+108,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_1)
                                   ? 0U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state))
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit)
                                                ? (
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit0)
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14
                                                        : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12
                                                        : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10
                                                        : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8
                                                        : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7)))
                                                     : 0U) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit1)
                                                        ? 
                                                       ((0x10U 
                                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                         ? 
                                                        ((8U 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                          ? 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23
                                                           : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22)
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21
                                                           : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20))
                                                         : 
                                                        ((8U 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                          ? 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19
                                                           : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18)
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17
                                                           : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16)))
                                                        : 0U) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit2)
                                                           ? 
                                                          ((0x10U 
                                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                            ? 
                                                           ((8U 
                                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                             ? 
                                                            ((4U 
                                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                              ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32
                                                              : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31)
                                                             : 
                                                            ((4U 
                                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                              ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30
                                                              : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29))
                                                            : 
                                                           ((8U 
                                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                             ? 
                                                            ((4U 
                                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                              ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28
                                                              : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27)
                                                             : 
                                                            ((4U 
                                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                              ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26
                                                              : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25)))
                                                           : 0U) 
                                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit3)
                                                             ? 
                                                            ((0x10U 
                                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                              ? 
                                                             ((8U 
                                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                               ? 
                                                              ((4U 
                                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41
                                                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40)
                                                               : 
                                                              ((4U 
                                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39
                                                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38))
                                                              : 
                                                             ((8U 
                                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                               ? 
                                                              ((4U 
                                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37
                                                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36)
                                                               : 
                                                              ((4U 
                                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35
                                                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34)))
                                                             : 0U))))
                                                : 0U)
                                            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_9)
                                                ? 0U
                                                : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass)
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__bypass_inst_reg
                                                    : 
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit0)
                                                      ? 
                                                     ((0x10U 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14
                                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13)
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12
                                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11))
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10
                                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9)
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8
                                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7)))
                                                      : 0U) 
                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit1)
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                          ? 
                                                         ((8U 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23
                                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22)
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21
                                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20))
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19
                                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18)
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17
                                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16)))
                                                         : 0U) 
                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit2)
                                                            ? 
                                                           ((0x10U 
                                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                             ? 
                                                            ((8U 
                                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                              ? 
                                                             ((4U 
                                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32
                                                               : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31)
                                                              : 
                                                             ((4U 
                                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30
                                                               : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29))
                                                             : 
                                                            ((8U 
                                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                              ? 
                                                             ((4U 
                                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28
                                                               : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27)
                                                              : 
                                                             ((4U 
                                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26
                                                               : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25)))
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit3)
                                                              ? 
                                                             ((0x10U 
                                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                               ? 
                                                              ((8U 
                                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                                ? 
                                                               ((4U 
                                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41
                                                                 : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40)
                                                                : 
                                                               ((4U 
                                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39
                                                                 : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38))
                                                               : 
                                                              ((8U 
                                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                                ? 
                                                               ((4U 
                                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37
                                                                 : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36)
                                                                : 
                                                               ((4U 
                                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35
                                                                 : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34)))
                                                              : 0U))))))))),32);
        bufp->chgIData(oldp+109,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_1)
                                   ? 0U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state))
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit)
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_7
                                                : 0U)
                                            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_9)
                                                ? 0U
                                                : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass)
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__bypass_pc_reg
                                                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_7))))),32);
        bufp->chgIData(oldp+110,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_0),32);
        bufp->chgIData(oldp+111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_1),32);
        bufp->chgIData(oldp+112,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_2),32);
        bufp->chgIData(oldp+113,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_3),32);
        bufp->chgIData(oldp+114,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_4),32);
        bufp->chgIData(oldp+115,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_5),32);
        bufp->chgIData(oldp+116,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_6),32);
        bufp->chgIData(oldp+117,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_7),32);
        bufp->chgIData(oldp+118,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_0),32);
        bufp->chgIData(oldp+119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_1),32);
        bufp->chgIData(oldp+120,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_2),32);
        bufp->chgIData(oldp+121,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_3),32);
        bufp->chgIData(oldp+122,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_4),32);
        bufp->chgIData(oldp+123,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_5),32);
        bufp->chgIData(oldp+124,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_6),32);
        bufp->chgIData(oldp+125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_7),32);
        bufp->chgIData(oldp+126,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_0),32);
        bufp->chgIData(oldp+127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_1),32);
        bufp->chgIData(oldp+128,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_2),32);
        bufp->chgIData(oldp+129,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_3),32);
        bufp->chgIData(oldp+130,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_4),32);
        bufp->chgIData(oldp+131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_5),32);
        bufp->chgIData(oldp+132,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_6),32);
        bufp->chgIData(oldp+133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_7),32);
        bufp->chgIData(oldp+134,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_0),32);
        bufp->chgIData(oldp+135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_1),32);
        bufp->chgIData(oldp+136,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_2),32);
        bufp->chgIData(oldp+137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_3),32);
        bufp->chgIData(oldp+138,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_4),32);
        bufp->chgIData(oldp+139,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_5),32);
        bufp->chgIData(oldp+140,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_6),32);
        bufp->chgIData(oldp+141,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_7),32);
        bufp->chgIData(oldp+142,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_0),32);
        bufp->chgIData(oldp+143,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_1),32);
        bufp->chgIData(oldp+144,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_2),32);
        bufp->chgIData(oldp+145,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_3),32);
        bufp->chgIData(oldp+146,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_4),32);
        bufp->chgIData(oldp+147,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_5),32);
        bufp->chgIData(oldp+148,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_6),32);
        bufp->chgIData(oldp+149,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_7),32);
        bufp->chgIData(oldp+150,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_0),32);
        bufp->chgIData(oldp+151,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_1),32);
        bufp->chgIData(oldp+152,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_2),32);
        bufp->chgIData(oldp+153,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_3),32);
        bufp->chgIData(oldp+154,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_4),32);
        bufp->chgIData(oldp+155,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_5),32);
        bufp->chgIData(oldp+156,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_6),32);
        bufp->chgIData(oldp+157,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_7),32);
        bufp->chgIData(oldp+158,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_0),32);
        bufp->chgIData(oldp+159,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_1),32);
        bufp->chgIData(oldp+160,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_2),32);
        bufp->chgIData(oldp+161,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_3),32);
        bufp->chgIData(oldp+162,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_4),32);
        bufp->chgIData(oldp+163,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_5),32);
        bufp->chgIData(oldp+164,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_6),32);
        bufp->chgIData(oldp+165,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_7),32);
        bufp->chgIData(oldp+166,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_0),32);
        bufp->chgIData(oldp+167,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_1),32);
        bufp->chgIData(oldp+168,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_2),32);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_3),32);
        bufp->chgIData(oldp+170,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_4),32);
        bufp->chgIData(oldp+171,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_5),32);
        bufp->chgIData(oldp+172,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_6),32);
        bufp->chgIData(oldp+173,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_7),32);
        bufp->chgIData(oldp+174,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_0),32);
        bufp->chgIData(oldp+175,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_1),32);
        bufp->chgIData(oldp+176,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_2),32);
        bufp->chgIData(oldp+177,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_3),32);
        bufp->chgIData(oldp+178,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_4),32);
        bufp->chgIData(oldp+179,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_5),32);
        bufp->chgIData(oldp+180,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_6),32);
        bufp->chgIData(oldp+181,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_7),32);
        bufp->chgIData(oldp+182,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_0),32);
        bufp->chgIData(oldp+183,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_1),32);
        bufp->chgIData(oldp+184,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_2),32);
        bufp->chgIData(oldp+185,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_3),32);
        bufp->chgIData(oldp+186,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_4),32);
        bufp->chgIData(oldp+187,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_5),32);
        bufp->chgIData(oldp+188,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_6),32);
        bufp->chgIData(oldp+189,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_7),32);
        bufp->chgIData(oldp+190,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_0),32);
        bufp->chgIData(oldp+191,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_1),32);
        bufp->chgIData(oldp+192,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_2),32);
        bufp->chgIData(oldp+193,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_3),32);
        bufp->chgIData(oldp+194,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_4),32);
        bufp->chgIData(oldp+195,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_5),32);
        bufp->chgIData(oldp+196,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_6),32);
        bufp->chgIData(oldp+197,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_7),32);
        bufp->chgIData(oldp+198,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_0),32);
        bufp->chgIData(oldp+199,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_1),32);
        bufp->chgIData(oldp+200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_2),32);
        bufp->chgIData(oldp+201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_3),32);
        bufp->chgIData(oldp+202,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_4),32);
        bufp->chgIData(oldp+203,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_5),32);
        bufp->chgIData(oldp+204,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_6),32);
        bufp->chgIData(oldp+205,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_7),32);
        bufp->chgIData(oldp+206,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_0),32);
        bufp->chgIData(oldp+207,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_1),32);
        bufp->chgIData(oldp+208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_2),32);
        bufp->chgIData(oldp+209,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_3),32);
        bufp->chgIData(oldp+210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_4),32);
        bufp->chgIData(oldp+211,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_5),32);
        bufp->chgIData(oldp+212,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_6),32);
        bufp->chgIData(oldp+213,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_7),32);
        bufp->chgIData(oldp+214,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_0),32);
        bufp->chgIData(oldp+215,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_1),32);
        bufp->chgIData(oldp+216,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_2),32);
        bufp->chgIData(oldp+217,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_3),32);
        bufp->chgIData(oldp+218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_4),32);
        bufp->chgIData(oldp+219,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_5),32);
        bufp->chgIData(oldp+220,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_6),32);
        bufp->chgIData(oldp+221,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_7),32);
        bufp->chgIData(oldp+222,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_0),32);
        bufp->chgIData(oldp+223,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_1),32);
        bufp->chgIData(oldp+224,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_2),32);
        bufp->chgIData(oldp+225,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_3),32);
        bufp->chgIData(oldp+226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_4),32);
        bufp->chgIData(oldp+227,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_5),32);
        bufp->chgIData(oldp+228,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_6),32);
        bufp->chgIData(oldp+229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_7),32);
        bufp->chgIData(oldp+230,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_0),32);
        bufp->chgIData(oldp+231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_1),32);
        bufp->chgIData(oldp+232,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_2),32);
        bufp->chgIData(oldp+233,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_3),32);
        bufp->chgIData(oldp+234,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_4),32);
        bufp->chgIData(oldp+235,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_5),32);
        bufp->chgIData(oldp+236,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_6),32);
        bufp->chgIData(oldp+237,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_7),32);
        bufp->chgIData(oldp+238,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_0),32);
        bufp->chgIData(oldp+239,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_1),32);
        bufp->chgIData(oldp+240,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_2),32);
        bufp->chgIData(oldp+241,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_3),32);
        bufp->chgIData(oldp+242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_4),32);
        bufp->chgIData(oldp+243,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_5),32);
        bufp->chgIData(oldp+244,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_6),32);
        bufp->chgIData(oldp+245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_7),32);
        bufp->chgIData(oldp+246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_0),32);
        bufp->chgIData(oldp+247,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_1),32);
        bufp->chgIData(oldp+248,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_2),32);
        bufp->chgIData(oldp+249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_3),32);
        bufp->chgIData(oldp+250,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_4),32);
        bufp->chgIData(oldp+251,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_5),32);
        bufp->chgIData(oldp+252,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_6),32);
        bufp->chgIData(oldp+253,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_7),32);
        bufp->chgIData(oldp+254,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_0),32);
        bufp->chgIData(oldp+255,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_1),32);
        bufp->chgIData(oldp+256,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_2),32);
        bufp->chgIData(oldp+257,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_3),32);
        bufp->chgIData(oldp+258,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_4),32);
        bufp->chgIData(oldp+259,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_5),32);
        bufp->chgIData(oldp+260,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_6),32);
        bufp->chgIData(oldp+261,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_7),32);
        bufp->chgIData(oldp+262,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_0),32);
        bufp->chgIData(oldp+263,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_1),32);
        bufp->chgIData(oldp+264,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_2),32);
        bufp->chgIData(oldp+265,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_3),32);
        bufp->chgIData(oldp+266,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_4),32);
        bufp->chgIData(oldp+267,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_5),32);
        bufp->chgIData(oldp+268,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_6),32);
        bufp->chgIData(oldp+269,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_7),32);
        bufp->chgIData(oldp+270,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_0),32);
        bufp->chgIData(oldp+271,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_1),32);
        bufp->chgIData(oldp+272,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_2),32);
        bufp->chgIData(oldp+273,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_3),32);
        bufp->chgIData(oldp+274,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_4),32);
        bufp->chgIData(oldp+275,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_5),32);
        bufp->chgIData(oldp+276,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_6),32);
        bufp->chgIData(oldp+277,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_7),32);
        bufp->chgIData(oldp+278,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_0),32);
        bufp->chgIData(oldp+279,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_1),32);
        bufp->chgIData(oldp+280,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_2),32);
        bufp->chgIData(oldp+281,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_3),32);
        bufp->chgIData(oldp+282,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_4),32);
        bufp->chgIData(oldp+283,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_5),32);
        bufp->chgIData(oldp+284,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_6),32);
        bufp->chgIData(oldp+285,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_7),32);
        bufp->chgIData(oldp+286,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_0),32);
        bufp->chgIData(oldp+287,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_1),32);
        bufp->chgIData(oldp+288,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_2),32);
        bufp->chgIData(oldp+289,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_3),32);
        bufp->chgIData(oldp+290,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_4),32);
        bufp->chgIData(oldp+291,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_5),32);
        bufp->chgIData(oldp+292,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_6),32);
        bufp->chgIData(oldp+293,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_7),32);
        bufp->chgIData(oldp+294,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_0),32);
        bufp->chgIData(oldp+295,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_1),32);
        bufp->chgIData(oldp+296,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_2),32);
        bufp->chgIData(oldp+297,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_3),32);
        bufp->chgIData(oldp+298,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_4),32);
        bufp->chgIData(oldp+299,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_5),32);
        bufp->chgIData(oldp+300,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_6),32);
        bufp->chgIData(oldp+301,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_7),32);
        bufp->chgIData(oldp+302,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_0),32);
        bufp->chgIData(oldp+303,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_1),32);
        bufp->chgIData(oldp+304,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_2),32);
        bufp->chgIData(oldp+305,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_3),32);
        bufp->chgIData(oldp+306,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_4),32);
        bufp->chgIData(oldp+307,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_5),32);
        bufp->chgIData(oldp+308,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_6),32);
        bufp->chgIData(oldp+309,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_7),32);
        bufp->chgIData(oldp+310,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_0),32);
        bufp->chgIData(oldp+311,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_1),32);
        bufp->chgIData(oldp+312,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_2),32);
        bufp->chgIData(oldp+313,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_3),32);
        bufp->chgIData(oldp+314,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_4),32);
        bufp->chgIData(oldp+315,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_5),32);
        bufp->chgIData(oldp+316,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_6),32);
        bufp->chgIData(oldp+317,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_7),32);
        bufp->chgIData(oldp+318,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_0),32);
        bufp->chgIData(oldp+319,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_1),32);
        bufp->chgIData(oldp+320,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_2),32);
        bufp->chgIData(oldp+321,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_3),32);
        bufp->chgIData(oldp+322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_4),32);
        bufp->chgIData(oldp+323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_5),32);
        bufp->chgIData(oldp+324,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_6),32);
        bufp->chgIData(oldp+325,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_7),32);
        bufp->chgIData(oldp+326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_0),32);
        bufp->chgIData(oldp+327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_1),32);
        bufp->chgIData(oldp+328,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_2),32);
        bufp->chgIData(oldp+329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_3),32);
        bufp->chgIData(oldp+330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_4),32);
        bufp->chgIData(oldp+331,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_5),32);
        bufp->chgIData(oldp+332,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_6),32);
        bufp->chgIData(oldp+333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_7),32);
        bufp->chgIData(oldp+334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_0),32);
        bufp->chgIData(oldp+335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_1),32);
        bufp->chgIData(oldp+336,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_2),32);
        bufp->chgIData(oldp+337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_3),32);
        bufp->chgIData(oldp+338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_4),32);
        bufp->chgIData(oldp+339,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_5),32);
        bufp->chgIData(oldp+340,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_6),32);
        bufp->chgIData(oldp+341,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_7),32);
        bufp->chgIData(oldp+342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_0),32);
        bufp->chgIData(oldp+343,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_1),32);
        bufp->chgIData(oldp+344,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_2),32);
        bufp->chgIData(oldp+345,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_3),32);
        bufp->chgIData(oldp+346,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_4),32);
        bufp->chgIData(oldp+347,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_5),32);
        bufp->chgIData(oldp+348,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_6),32);
        bufp->chgIData(oldp+349,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_7),32);
        bufp->chgIData(oldp+350,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_0),32);
        bufp->chgIData(oldp+351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_1),32);
        bufp->chgIData(oldp+352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_2),32);
        bufp->chgIData(oldp+353,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_3),32);
        bufp->chgIData(oldp+354,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_4),32);
        bufp->chgIData(oldp+355,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_5),32);
        bufp->chgIData(oldp+356,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_6),32);
        bufp->chgIData(oldp+357,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_7),32);
        bufp->chgIData(oldp+358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_0),32);
        bufp->chgIData(oldp+359,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_1),32);
        bufp->chgIData(oldp+360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_2),32);
        bufp->chgIData(oldp+361,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_3),32);
        bufp->chgIData(oldp+362,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_4),32);
        bufp->chgIData(oldp+363,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_5),32);
        bufp->chgIData(oldp+364,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_6),32);
        bufp->chgIData(oldp+365,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_7),32);
        bufp->chgIData(oldp+366,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_0),32);
        bufp->chgIData(oldp+367,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_1),32);
        bufp->chgIData(oldp+368,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_2),32);
        bufp->chgIData(oldp+369,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_3),32);
        bufp->chgIData(oldp+370,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_4),32);
        bufp->chgIData(oldp+371,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_5),32);
        bufp->chgIData(oldp+372,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_6),32);
        bufp->chgIData(oldp+373,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_7),32);
        bufp->chgIData(oldp+374,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_0),32);
        bufp->chgIData(oldp+375,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_1),32);
        bufp->chgIData(oldp+376,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_2),32);
        bufp->chgIData(oldp+377,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_3),32);
        bufp->chgIData(oldp+378,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_4),32);
        bufp->chgIData(oldp+379,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_5),32);
        bufp->chgIData(oldp+380,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_6),32);
        bufp->chgIData(oldp+381,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_7),32);
        bufp->chgIData(oldp+382,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_0),32);
        bufp->chgIData(oldp+383,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_1),32);
        bufp->chgIData(oldp+384,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_2),32);
        bufp->chgIData(oldp+385,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_3),32);
        bufp->chgIData(oldp+386,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_4),32);
        bufp->chgIData(oldp+387,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_5),32);
        bufp->chgIData(oldp+388,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_6),32);
        bufp->chgIData(oldp+389,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_7),32);
        bufp->chgIData(oldp+390,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_0),32);
        bufp->chgIData(oldp+391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_1),32);
        bufp->chgIData(oldp+392,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_2),32);
        bufp->chgIData(oldp+393,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_3),32);
        bufp->chgIData(oldp+394,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_4),32);
        bufp->chgIData(oldp+395,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_5),32);
        bufp->chgIData(oldp+396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_6),32);
        bufp->chgIData(oldp+397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_7),32);
        bufp->chgIData(oldp+398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_0),32);
        bufp->chgIData(oldp+399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_1),32);
        bufp->chgIData(oldp+400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_2),32);
        bufp->chgIData(oldp+401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_3),32);
        bufp->chgIData(oldp+402,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_4),32);
        bufp->chgIData(oldp+403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_5),32);
        bufp->chgIData(oldp+404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_6),32);
        bufp->chgIData(oldp+405,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_7),32);
        bufp->chgIData(oldp+406,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_0),32);
        bufp->chgIData(oldp+407,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_1),32);
        bufp->chgIData(oldp+408,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_2),32);
        bufp->chgIData(oldp+409,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_3),32);
        bufp->chgIData(oldp+410,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_4),32);
        bufp->chgIData(oldp+411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_5),32);
        bufp->chgIData(oldp+412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_6),32);
        bufp->chgIData(oldp+413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_7),32);
        bufp->chgIData(oldp+414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_0),32);
        bufp->chgIData(oldp+415,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_1),32);
        bufp->chgIData(oldp+416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_2),32);
        bufp->chgIData(oldp+417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_3),32);
        bufp->chgIData(oldp+418,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_4),32);
        bufp->chgIData(oldp+419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_5),32);
        bufp->chgIData(oldp+420,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_6),32);
        bufp->chgIData(oldp+421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_7),32);
        bufp->chgIData(oldp+422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_0),32);
        bufp->chgIData(oldp+423,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_1),32);
        bufp->chgIData(oldp+424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_2),32);
        bufp->chgIData(oldp+425,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_3),32);
        bufp->chgIData(oldp+426,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_4),32);
        bufp->chgIData(oldp+427,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_5),32);
        bufp->chgIData(oldp+428,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_6),32);
        bufp->chgIData(oldp+429,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_7),32);
        bufp->chgIData(oldp+430,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_0),32);
        bufp->chgIData(oldp+431,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_1),32);
        bufp->chgIData(oldp+432,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_2),32);
        bufp->chgIData(oldp+433,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_3),32);
        bufp->chgIData(oldp+434,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_4),32);
        bufp->chgIData(oldp+435,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_5),32);
        bufp->chgIData(oldp+436,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_6),32);
        bufp->chgIData(oldp+437,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_7),32);
        bufp->chgIData(oldp+438,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_0),32);
        bufp->chgIData(oldp+439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_1),32);
        bufp->chgIData(oldp+440,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_2),32);
        bufp->chgIData(oldp+441,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_3),32);
        bufp->chgIData(oldp+442,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_4),32);
        bufp->chgIData(oldp+443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_5),32);
        bufp->chgIData(oldp+444,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_6),32);
        bufp->chgIData(oldp+445,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_7),32);
        bufp->chgIData(oldp+446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_0),32);
        bufp->chgIData(oldp+447,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_1),32);
        bufp->chgIData(oldp+448,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_2),32);
        bufp->chgIData(oldp+449,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_3),32);
        bufp->chgIData(oldp+450,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_4),32);
        bufp->chgIData(oldp+451,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_5),32);
        bufp->chgIData(oldp+452,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_6),32);
        bufp->chgIData(oldp+453,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_7),32);
        bufp->chgIData(oldp+454,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_0),32);
        bufp->chgIData(oldp+455,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_1),32);
        bufp->chgIData(oldp+456,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_2),32);
        bufp->chgIData(oldp+457,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_3),32);
        bufp->chgIData(oldp+458,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_4),32);
        bufp->chgIData(oldp+459,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_5),32);
        bufp->chgIData(oldp+460,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_6),32);
        bufp->chgIData(oldp+461,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_7),32);
        bufp->chgIData(oldp+462,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_0),32);
        bufp->chgIData(oldp+463,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_1),32);
        bufp->chgIData(oldp+464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_2),32);
        bufp->chgIData(oldp+465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_3),32);
        bufp->chgIData(oldp+466,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_4),32);
        bufp->chgIData(oldp+467,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_5),32);
        bufp->chgIData(oldp+468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_6),32);
        bufp->chgIData(oldp+469,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_7),32);
        bufp->chgIData(oldp+470,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_0),32);
        bufp->chgIData(oldp+471,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_1),32);
        bufp->chgIData(oldp+472,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_2),32);
        bufp->chgIData(oldp+473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_3),32);
        bufp->chgIData(oldp+474,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_4),32);
        bufp->chgIData(oldp+475,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_5),32);
        bufp->chgIData(oldp+476,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_6),32);
        bufp->chgIData(oldp+477,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_7),32);
        bufp->chgIData(oldp+478,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_0),32);
        bufp->chgIData(oldp+479,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_1),32);
        bufp->chgIData(oldp+480,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_2),32);
        bufp->chgIData(oldp+481,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_3),32);
        bufp->chgIData(oldp+482,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_4),32);
        bufp->chgIData(oldp+483,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_5),32);
        bufp->chgIData(oldp+484,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_6),32);
        bufp->chgIData(oldp+485,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_7),32);
        bufp->chgIData(oldp+486,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_0),32);
        bufp->chgIData(oldp+487,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_1),32);
        bufp->chgIData(oldp+488,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_2),32);
        bufp->chgIData(oldp+489,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_3),32);
        bufp->chgIData(oldp+490,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_4),32);
        bufp->chgIData(oldp+491,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_5),32);
        bufp->chgIData(oldp+492,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_6),32);
        bufp->chgIData(oldp+493,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_7),32);
        bufp->chgIData(oldp+494,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_0),32);
        bufp->chgIData(oldp+495,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_1),32);
        bufp->chgIData(oldp+496,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_2),32);
        bufp->chgIData(oldp+497,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_3),32);
        bufp->chgIData(oldp+498,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_4),32);
        bufp->chgIData(oldp+499,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_5),32);
        bufp->chgIData(oldp+500,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_6),32);
        bufp->chgIData(oldp+501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_7),32);
        bufp->chgIData(oldp+502,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_0),32);
        bufp->chgIData(oldp+503,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_1),32);
        bufp->chgIData(oldp+504,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_2),32);
        bufp->chgIData(oldp+505,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_3),32);
        bufp->chgIData(oldp+506,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_4),32);
        bufp->chgIData(oldp+507,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_5),32);
        bufp->chgIData(oldp+508,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_6),32);
        bufp->chgIData(oldp+509,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_7),32);
        bufp->chgIData(oldp+510,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_0),32);
        bufp->chgIData(oldp+511,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_1),32);
        bufp->chgIData(oldp+512,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_2),32);
        bufp->chgIData(oldp+513,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_3),32);
        bufp->chgIData(oldp+514,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_4),32);
        bufp->chgIData(oldp+515,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_5),32);
        bufp->chgIData(oldp+516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_6),32);
        bufp->chgIData(oldp+517,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_7),32);
        bufp->chgIData(oldp+518,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_0),32);
        bufp->chgIData(oldp+519,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_1),32);
        bufp->chgIData(oldp+520,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_2),32);
        bufp->chgIData(oldp+521,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_3),32);
        bufp->chgIData(oldp+522,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_4),32);
        bufp->chgIData(oldp+523,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_5),32);
        bufp->chgIData(oldp+524,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_6),32);
        bufp->chgIData(oldp+525,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_7),32);
        bufp->chgIData(oldp+526,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_0),32);
        bufp->chgIData(oldp+527,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_1),32);
        bufp->chgIData(oldp+528,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_2),32);
        bufp->chgIData(oldp+529,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_3),32);
        bufp->chgIData(oldp+530,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_4),32);
        bufp->chgIData(oldp+531,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_5),32);
        bufp->chgIData(oldp+532,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_6),32);
        bufp->chgIData(oldp+533,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_7),32);
        bufp->chgIData(oldp+534,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_0),32);
        bufp->chgIData(oldp+535,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_1),32);
        bufp->chgIData(oldp+536,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_2),32);
        bufp->chgIData(oldp+537,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_3),32);
        bufp->chgIData(oldp+538,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_4),32);
        bufp->chgIData(oldp+539,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_5),32);
        bufp->chgIData(oldp+540,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_6),32);
        bufp->chgIData(oldp+541,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_7),32);
        bufp->chgIData(oldp+542,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_0),32);
        bufp->chgIData(oldp+543,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_1),32);
        bufp->chgIData(oldp+544,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_2),32);
        bufp->chgIData(oldp+545,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_3),32);
        bufp->chgIData(oldp+546,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_4),32);
        bufp->chgIData(oldp+547,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_5),32);
        bufp->chgIData(oldp+548,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_6),32);
        bufp->chgIData(oldp+549,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_7),32);
        bufp->chgIData(oldp+550,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_0),32);
        bufp->chgIData(oldp+551,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_1),32);
        bufp->chgIData(oldp+552,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_2),32);
        bufp->chgIData(oldp+553,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_3),32);
        bufp->chgIData(oldp+554,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_4),32);
        bufp->chgIData(oldp+555,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_5),32);
        bufp->chgIData(oldp+556,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_6),32);
        bufp->chgIData(oldp+557,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_7),32);
        bufp->chgIData(oldp+558,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_0),32);
        bufp->chgIData(oldp+559,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_1),32);
        bufp->chgIData(oldp+560,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_2),32);
        bufp->chgIData(oldp+561,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_3),32);
        bufp->chgIData(oldp+562,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_4),32);
        bufp->chgIData(oldp+563,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_5),32);
        bufp->chgIData(oldp+564,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_6),32);
        bufp->chgIData(oldp+565,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_7),32);
        bufp->chgIData(oldp+566,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_0),32);
        bufp->chgIData(oldp+567,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_1),32);
        bufp->chgIData(oldp+568,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_2),32);
        bufp->chgIData(oldp+569,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_3),32);
        bufp->chgIData(oldp+570,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_4),32);
        bufp->chgIData(oldp+571,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_5),32);
        bufp->chgIData(oldp+572,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_6),32);
        bufp->chgIData(oldp+573,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_7),32);
        bufp->chgIData(oldp+574,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_0),32);
        bufp->chgIData(oldp+575,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_1),32);
        bufp->chgIData(oldp+576,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_2),32);
        bufp->chgIData(oldp+577,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_3),32);
        bufp->chgIData(oldp+578,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_4),32);
        bufp->chgIData(oldp+579,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_5),32);
        bufp->chgIData(oldp+580,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_6),32);
        bufp->chgIData(oldp+581,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_7),32);
        bufp->chgIData(oldp+582,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_0),32);
        bufp->chgIData(oldp+583,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_1),32);
        bufp->chgIData(oldp+584,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_2),32);
        bufp->chgIData(oldp+585,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_3),32);
        bufp->chgIData(oldp+586,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_4),32);
        bufp->chgIData(oldp+587,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_5),32);
        bufp->chgIData(oldp+588,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_6),32);
        bufp->chgIData(oldp+589,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_7),32);
        bufp->chgIData(oldp+590,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_0),32);
        bufp->chgIData(oldp+591,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_1),32);
        bufp->chgIData(oldp+592,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_2),32);
        bufp->chgIData(oldp+593,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_3),32);
        bufp->chgIData(oldp+594,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_4),32);
        bufp->chgIData(oldp+595,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_5),32);
        bufp->chgIData(oldp+596,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_6),32);
        bufp->chgIData(oldp+597,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_7),32);
        bufp->chgIData(oldp+598,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_0),32);
        bufp->chgIData(oldp+599,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_1),32);
        bufp->chgIData(oldp+600,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_2),32);
        bufp->chgIData(oldp+601,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_3),32);
        bufp->chgIData(oldp+602,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_4),32);
        bufp->chgIData(oldp+603,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_5),32);
        bufp->chgIData(oldp+604,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_6),32);
        bufp->chgIData(oldp+605,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_7),32);
        bufp->chgIData(oldp+606,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_0),32);
        bufp->chgIData(oldp+607,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_1),32);
        bufp->chgIData(oldp+608,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_2),32);
        bufp->chgIData(oldp+609,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_3),32);
        bufp->chgIData(oldp+610,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_4),32);
        bufp->chgIData(oldp+611,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_5),32);
        bufp->chgIData(oldp+612,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_6),32);
        bufp->chgIData(oldp+613,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_7),32);
        bufp->chgIData(oldp+614,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_0),32);
        bufp->chgIData(oldp+615,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_1),32);
        bufp->chgIData(oldp+616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_2),32);
        bufp->chgIData(oldp+617,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_3),32);
        bufp->chgIData(oldp+618,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_4),32);
        bufp->chgIData(oldp+619,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_5),32);
        bufp->chgIData(oldp+620,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_6),32);
        bufp->chgIData(oldp+621,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_7),32);
        bufp->chgIData(oldp+622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_0),32);
        bufp->chgIData(oldp+623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_1),32);
        bufp->chgIData(oldp+624,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_2),32);
        bufp->chgIData(oldp+625,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_3),32);
        bufp->chgIData(oldp+626,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_4),32);
        bufp->chgIData(oldp+627,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_5),32);
        bufp->chgIData(oldp+628,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_6),32);
        bufp->chgIData(oldp+629,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_7),32);
        bufp->chgIData(oldp+630,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_0),32);
        bufp->chgIData(oldp+631,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_1),32);
        bufp->chgIData(oldp+632,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_2),32);
        bufp->chgIData(oldp+633,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_3),32);
        bufp->chgIData(oldp+634,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_4),32);
        bufp->chgIData(oldp+635,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_5),32);
        bufp->chgIData(oldp+636,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_6),32);
        bufp->chgIData(oldp+637,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_7),32);
        bufp->chgIData(oldp+638,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_0),32);
        bufp->chgIData(oldp+639,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_1),32);
        bufp->chgIData(oldp+640,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_2),32);
        bufp->chgIData(oldp+641,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_3),32);
        bufp->chgIData(oldp+642,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_4),32);
        bufp->chgIData(oldp+643,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_5),32);
        bufp->chgIData(oldp+644,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_6),32);
        bufp->chgIData(oldp+645,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_7),32);
        bufp->chgIData(oldp+646,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_0),32);
        bufp->chgIData(oldp+647,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_1),32);
        bufp->chgIData(oldp+648,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_2),32);
        bufp->chgIData(oldp+649,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_3),32);
        bufp->chgIData(oldp+650,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_4),32);
        bufp->chgIData(oldp+651,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_5),32);
        bufp->chgIData(oldp+652,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_6),32);
        bufp->chgIData(oldp+653,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_7),32);
        bufp->chgIData(oldp+654,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_0),32);
        bufp->chgIData(oldp+655,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_1),32);
        bufp->chgIData(oldp+656,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_2),32);
        bufp->chgIData(oldp+657,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_3),32);
        bufp->chgIData(oldp+658,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_4),32);
        bufp->chgIData(oldp+659,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_5),32);
        bufp->chgIData(oldp+660,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_6),32);
        bufp->chgIData(oldp+661,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_7),32);
        bufp->chgIData(oldp+662,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_0),32);
        bufp->chgIData(oldp+663,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_1),32);
        bufp->chgIData(oldp+664,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_2),32);
        bufp->chgIData(oldp+665,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_3),32);
        bufp->chgIData(oldp+666,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_4),32);
        bufp->chgIData(oldp+667,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_5),32);
        bufp->chgIData(oldp+668,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_6),32);
        bufp->chgIData(oldp+669,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_7),32);
        bufp->chgIData(oldp+670,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_0),32);
        bufp->chgIData(oldp+671,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_1),32);
        bufp->chgIData(oldp+672,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_2),32);
        bufp->chgIData(oldp+673,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_3),32);
        bufp->chgIData(oldp+674,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_4),32);
        bufp->chgIData(oldp+675,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_5),32);
        bufp->chgIData(oldp+676,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_6),32);
        bufp->chgIData(oldp+677,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_7),32);
        bufp->chgIData(oldp+678,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_0),32);
        bufp->chgIData(oldp+679,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_1),32);
        bufp->chgIData(oldp+680,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_2),32);
        bufp->chgIData(oldp+681,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_3),32);
        bufp->chgIData(oldp+682,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_4),32);
        bufp->chgIData(oldp+683,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_5),32);
        bufp->chgIData(oldp+684,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_6),32);
        bufp->chgIData(oldp+685,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_7),32);
        bufp->chgIData(oldp+686,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_0),32);
        bufp->chgIData(oldp+687,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_1),32);
        bufp->chgIData(oldp+688,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_2),32);
        bufp->chgIData(oldp+689,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_3),32);
        bufp->chgIData(oldp+690,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_4),32);
        bufp->chgIData(oldp+691,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_5),32);
        bufp->chgIData(oldp+692,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_6),32);
        bufp->chgIData(oldp+693,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_7),32);
        bufp->chgIData(oldp+694,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_0),32);
        bufp->chgIData(oldp+695,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_1),32);
        bufp->chgIData(oldp+696,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_2),32);
        bufp->chgIData(oldp+697,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_3),32);
        bufp->chgIData(oldp+698,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_4),32);
        bufp->chgIData(oldp+699,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_5),32);
        bufp->chgIData(oldp+700,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_6),32);
        bufp->chgIData(oldp+701,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_7),32);
        bufp->chgIData(oldp+702,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_0),32);
        bufp->chgIData(oldp+703,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_1),32);
        bufp->chgIData(oldp+704,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_2),32);
        bufp->chgIData(oldp+705,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_3),32);
        bufp->chgIData(oldp+706,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_4),32);
        bufp->chgIData(oldp+707,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_5),32);
        bufp->chgIData(oldp+708,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_6),32);
        bufp->chgIData(oldp+709,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_7),32);
        bufp->chgIData(oldp+710,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_0),32);
        bufp->chgIData(oldp+711,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_1),32);
        bufp->chgIData(oldp+712,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_2),32);
        bufp->chgIData(oldp+713,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_3),32);
        bufp->chgIData(oldp+714,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_4),32);
        bufp->chgIData(oldp+715,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_5),32);
        bufp->chgIData(oldp+716,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_6),32);
        bufp->chgIData(oldp+717,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_7),32);
        bufp->chgIData(oldp+718,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_0),32);
        bufp->chgIData(oldp+719,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_1),32);
        bufp->chgIData(oldp+720,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_2),32);
        bufp->chgIData(oldp+721,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_3),32);
        bufp->chgIData(oldp+722,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_4),32);
        bufp->chgIData(oldp+723,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_5),32);
        bufp->chgIData(oldp+724,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_6),32);
        bufp->chgIData(oldp+725,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_7),32);
        bufp->chgIData(oldp+726,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_0),32);
        bufp->chgIData(oldp+727,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_1),32);
        bufp->chgIData(oldp+728,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_2),32);
        bufp->chgIData(oldp+729,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_3),32);
        bufp->chgIData(oldp+730,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_4),32);
        bufp->chgIData(oldp+731,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_5),32);
        bufp->chgIData(oldp+732,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_6),32);
        bufp->chgIData(oldp+733,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_7),32);
        bufp->chgIData(oldp+734,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_0),32);
        bufp->chgIData(oldp+735,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_1),32);
        bufp->chgIData(oldp+736,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_2),32);
        bufp->chgIData(oldp+737,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_3),32);
        bufp->chgIData(oldp+738,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_4),32);
        bufp->chgIData(oldp+739,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_5),32);
        bufp->chgIData(oldp+740,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_6),32);
        bufp->chgIData(oldp+741,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_7),32);
        bufp->chgIData(oldp+742,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_0),32);
        bufp->chgIData(oldp+743,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_1),32);
        bufp->chgIData(oldp+744,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_2),32);
        bufp->chgIData(oldp+745,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_3),32);
        bufp->chgIData(oldp+746,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_4),32);
        bufp->chgIData(oldp+747,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_5),32);
        bufp->chgIData(oldp+748,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_6),32);
        bufp->chgIData(oldp+749,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_7),32);
        bufp->chgIData(oldp+750,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_0),32);
        bufp->chgIData(oldp+751,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_1),32);
        bufp->chgIData(oldp+752,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_2),32);
        bufp->chgIData(oldp+753,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_3),32);
        bufp->chgIData(oldp+754,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_4),32);
        bufp->chgIData(oldp+755,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_5),32);
        bufp->chgIData(oldp+756,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_6),32);
        bufp->chgIData(oldp+757,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_7),32);
        bufp->chgIData(oldp+758,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_0),32);
        bufp->chgIData(oldp+759,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_1),32);
        bufp->chgIData(oldp+760,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_2),32);
        bufp->chgIData(oldp+761,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_3),32);
        bufp->chgIData(oldp+762,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_4),32);
        bufp->chgIData(oldp+763,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_5),32);
        bufp->chgIData(oldp+764,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_6),32);
        bufp->chgIData(oldp+765,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_7),32);
        bufp->chgIData(oldp+766,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_0),32);
        bufp->chgIData(oldp+767,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_1),32);
        bufp->chgIData(oldp+768,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_2),32);
        bufp->chgIData(oldp+769,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_3),32);
        bufp->chgIData(oldp+770,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_4),32);
        bufp->chgIData(oldp+771,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_5),32);
        bufp->chgIData(oldp+772,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_6),32);
        bufp->chgIData(oldp+773,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_7),32);
        bufp->chgIData(oldp+774,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_0),32);
        bufp->chgIData(oldp+775,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_1),32);
        bufp->chgIData(oldp+776,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_2),32);
        bufp->chgIData(oldp+777,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_3),32);
        bufp->chgIData(oldp+778,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_4),32);
        bufp->chgIData(oldp+779,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_5),32);
        bufp->chgIData(oldp+780,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_6),32);
        bufp->chgIData(oldp+781,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_7),32);
        bufp->chgIData(oldp+782,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_0),32);
        bufp->chgIData(oldp+783,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_1),32);
        bufp->chgIData(oldp+784,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_2),32);
        bufp->chgIData(oldp+785,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_3),32);
        bufp->chgIData(oldp+786,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_4),32);
        bufp->chgIData(oldp+787,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_5),32);
        bufp->chgIData(oldp+788,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_6),32);
        bufp->chgIData(oldp+789,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_7),32);
        bufp->chgIData(oldp+790,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_0),32);
        bufp->chgIData(oldp+791,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_1),32);
        bufp->chgIData(oldp+792,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_2),32);
        bufp->chgIData(oldp+793,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_3),32);
        bufp->chgIData(oldp+794,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_4),32);
        bufp->chgIData(oldp+795,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_5),32);
        bufp->chgIData(oldp+796,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_6),32);
        bufp->chgIData(oldp+797,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_7),32);
        bufp->chgIData(oldp+798,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_0),32);
        bufp->chgIData(oldp+799,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_1),32);
        bufp->chgIData(oldp+800,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_2),32);
        bufp->chgIData(oldp+801,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_3),32);
        bufp->chgIData(oldp+802,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_4),32);
        bufp->chgIData(oldp+803,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_5),32);
        bufp->chgIData(oldp+804,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_6),32);
        bufp->chgIData(oldp+805,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_7),32);
        bufp->chgIData(oldp+806,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_0),32);
        bufp->chgIData(oldp+807,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_1),32);
        bufp->chgIData(oldp+808,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_2),32);
        bufp->chgIData(oldp+809,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_3),32);
        bufp->chgIData(oldp+810,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_4),32);
        bufp->chgIData(oldp+811,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_5),32);
        bufp->chgIData(oldp+812,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_6),32);
        bufp->chgIData(oldp+813,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_7),32);
        bufp->chgIData(oldp+814,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_0),32);
        bufp->chgIData(oldp+815,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_1),32);
        bufp->chgIData(oldp+816,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_2),32);
        bufp->chgIData(oldp+817,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_3),32);
        bufp->chgIData(oldp+818,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_4),32);
        bufp->chgIData(oldp+819,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_5),32);
        bufp->chgIData(oldp+820,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_6),32);
        bufp->chgIData(oldp+821,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_7),32);
        bufp->chgIData(oldp+822,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_0),32);
        bufp->chgIData(oldp+823,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_1),32);
        bufp->chgIData(oldp+824,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_2),32);
        bufp->chgIData(oldp+825,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_3),32);
        bufp->chgIData(oldp+826,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_4),32);
        bufp->chgIData(oldp+827,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_5),32);
        bufp->chgIData(oldp+828,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_6),32);
        bufp->chgIData(oldp+829,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_7),32);
        bufp->chgIData(oldp+830,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_0),32);
        bufp->chgIData(oldp+831,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_1),32);
        bufp->chgIData(oldp+832,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_2),32);
        bufp->chgIData(oldp+833,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_3),32);
        bufp->chgIData(oldp+834,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_4),32);
        bufp->chgIData(oldp+835,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_5),32);
        bufp->chgIData(oldp+836,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_6),32);
        bufp->chgIData(oldp+837,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_7),32);
        bufp->chgIData(oldp+838,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_0),32);
        bufp->chgIData(oldp+839,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_1),32);
        bufp->chgIData(oldp+840,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_2),32);
        bufp->chgIData(oldp+841,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_3),32);
        bufp->chgIData(oldp+842,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_4),32);
        bufp->chgIData(oldp+843,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_5),32);
        bufp->chgIData(oldp+844,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_6),32);
        bufp->chgIData(oldp+845,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_7),32);
        bufp->chgIData(oldp+846,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_0),32);
        bufp->chgIData(oldp+847,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_1),32);
        bufp->chgIData(oldp+848,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_2),32);
        bufp->chgIData(oldp+849,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_3),32);
        bufp->chgIData(oldp+850,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_4),32);
        bufp->chgIData(oldp+851,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_5),32);
        bufp->chgIData(oldp+852,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_6),32);
        bufp->chgIData(oldp+853,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_7),32);
        bufp->chgIData(oldp+854,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_0),32);
        bufp->chgIData(oldp+855,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_1),32);
        bufp->chgIData(oldp+856,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_2),32);
        bufp->chgIData(oldp+857,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_3),32);
        bufp->chgIData(oldp+858,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_4),32);
        bufp->chgIData(oldp+859,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_5),32);
        bufp->chgIData(oldp+860,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_6),32);
        bufp->chgIData(oldp+861,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_7),32);
        bufp->chgIData(oldp+862,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_0),32);
        bufp->chgIData(oldp+863,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_1),32);
        bufp->chgIData(oldp+864,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_2),32);
        bufp->chgIData(oldp+865,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_3),32);
        bufp->chgIData(oldp+866,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_4),32);
        bufp->chgIData(oldp+867,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_5),32);
        bufp->chgIData(oldp+868,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_6),32);
        bufp->chgIData(oldp+869,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_7),32);
        bufp->chgIData(oldp+870,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_0),32);
        bufp->chgIData(oldp+871,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_1),32);
        bufp->chgIData(oldp+872,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_2),32);
        bufp->chgIData(oldp+873,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_3),32);
        bufp->chgIData(oldp+874,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_4),32);
        bufp->chgIData(oldp+875,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_5),32);
        bufp->chgIData(oldp+876,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_6),32);
        bufp->chgIData(oldp+877,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_7),32);
        bufp->chgIData(oldp+878,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_0),32);
        bufp->chgIData(oldp+879,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_1),32);
        bufp->chgIData(oldp+880,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_2),32);
        bufp->chgIData(oldp+881,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_3),32);
        bufp->chgIData(oldp+882,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_4),32);
        bufp->chgIData(oldp+883,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_5),32);
        bufp->chgIData(oldp+884,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_6),32);
        bufp->chgIData(oldp+885,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_7),32);
        bufp->chgIData(oldp+886,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_0),32);
        bufp->chgIData(oldp+887,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_1),32);
        bufp->chgIData(oldp+888,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_2),32);
        bufp->chgIData(oldp+889,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_3),32);
        bufp->chgIData(oldp+890,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_4),32);
        bufp->chgIData(oldp+891,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_5),32);
        bufp->chgIData(oldp+892,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_6),32);
        bufp->chgIData(oldp+893,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_7),32);
        bufp->chgIData(oldp+894,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_0),32);
        bufp->chgIData(oldp+895,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_1),32);
        bufp->chgIData(oldp+896,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_2),32);
        bufp->chgIData(oldp+897,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_3),32);
        bufp->chgIData(oldp+898,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_4),32);
        bufp->chgIData(oldp+899,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_5),32);
        bufp->chgIData(oldp+900,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_6),32);
        bufp->chgIData(oldp+901,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_7),32);
        bufp->chgIData(oldp+902,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_0),32);
        bufp->chgIData(oldp+903,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_1),32);
        bufp->chgIData(oldp+904,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_2),32);
        bufp->chgIData(oldp+905,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_3),32);
        bufp->chgIData(oldp+906,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_4),32);
        bufp->chgIData(oldp+907,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_5),32);
        bufp->chgIData(oldp+908,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_6),32);
        bufp->chgIData(oldp+909,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_7),32);
        bufp->chgIData(oldp+910,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_0),32);
        bufp->chgIData(oldp+911,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_1),32);
        bufp->chgIData(oldp+912,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_2),32);
        bufp->chgIData(oldp+913,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_3),32);
        bufp->chgIData(oldp+914,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_4),32);
        bufp->chgIData(oldp+915,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_5),32);
        bufp->chgIData(oldp+916,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_6),32);
        bufp->chgIData(oldp+917,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_7),32);
        bufp->chgIData(oldp+918,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_0),32);
        bufp->chgIData(oldp+919,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_1),32);
        bufp->chgIData(oldp+920,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_2),32);
        bufp->chgIData(oldp+921,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_3),32);
        bufp->chgIData(oldp+922,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_4),32);
        bufp->chgIData(oldp+923,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_5),32);
        bufp->chgIData(oldp+924,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_6),32);
        bufp->chgIData(oldp+925,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_7),32);
        bufp->chgIData(oldp+926,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_0),32);
        bufp->chgIData(oldp+927,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_1),32);
        bufp->chgIData(oldp+928,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_2),32);
        bufp->chgIData(oldp+929,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_3),32);
        bufp->chgIData(oldp+930,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_4),32);
        bufp->chgIData(oldp+931,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_5),32);
        bufp->chgIData(oldp+932,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_6),32);
        bufp->chgIData(oldp+933,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_7),32);
        bufp->chgIData(oldp+934,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_0),32);
        bufp->chgIData(oldp+935,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_1),32);
        bufp->chgIData(oldp+936,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_2),32);
        bufp->chgIData(oldp+937,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_3),32);
        bufp->chgIData(oldp+938,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_4),32);
        bufp->chgIData(oldp+939,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_5),32);
        bufp->chgIData(oldp+940,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_6),32);
        bufp->chgIData(oldp+941,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_7),32);
        bufp->chgIData(oldp+942,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_0),32);
        bufp->chgIData(oldp+943,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_1),32);
        bufp->chgIData(oldp+944,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_2),32);
        bufp->chgIData(oldp+945,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_3),32);
        bufp->chgIData(oldp+946,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_4),32);
        bufp->chgIData(oldp+947,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_5),32);
        bufp->chgIData(oldp+948,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_6),32);
        bufp->chgIData(oldp+949,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_7),32);
        bufp->chgIData(oldp+950,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_0),32);
        bufp->chgIData(oldp+951,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_1),32);
        bufp->chgIData(oldp+952,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_2),32);
        bufp->chgIData(oldp+953,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_3),32);
        bufp->chgIData(oldp+954,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_4),32);
        bufp->chgIData(oldp+955,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_5),32);
        bufp->chgIData(oldp+956,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_6),32);
        bufp->chgIData(oldp+957,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_7),32);
        bufp->chgIData(oldp+958,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_0),32);
        bufp->chgIData(oldp+959,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_1),32);
        bufp->chgIData(oldp+960,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_2),32);
        bufp->chgIData(oldp+961,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_3),32);
        bufp->chgIData(oldp+962,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_4),32);
        bufp->chgIData(oldp+963,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_5),32);
        bufp->chgIData(oldp+964,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_6),32);
        bufp->chgIData(oldp+965,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_7),32);
        bufp->chgIData(oldp+966,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_0),32);
        bufp->chgIData(oldp+967,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_1),32);
        bufp->chgIData(oldp+968,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_2),32);
        bufp->chgIData(oldp+969,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_3),32);
        bufp->chgIData(oldp+970,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_4),32);
        bufp->chgIData(oldp+971,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_5),32);
        bufp->chgIData(oldp+972,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_6),32);
        bufp->chgIData(oldp+973,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_7),32);
        bufp->chgIData(oldp+974,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_0),32);
        bufp->chgIData(oldp+975,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_1),32);
        bufp->chgIData(oldp+976,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_2),32);
        bufp->chgIData(oldp+977,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_3),32);
        bufp->chgIData(oldp+978,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_4),32);
        bufp->chgIData(oldp+979,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_5),32);
        bufp->chgIData(oldp+980,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_6),32);
        bufp->chgIData(oldp+981,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_7),32);
        bufp->chgIData(oldp+982,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_0),32);
        bufp->chgIData(oldp+983,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_1),32);
        bufp->chgIData(oldp+984,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_2),32);
        bufp->chgIData(oldp+985,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_3),32);
        bufp->chgIData(oldp+986,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_4),32);
        bufp->chgIData(oldp+987,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_5),32);
        bufp->chgIData(oldp+988,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_6),32);
        bufp->chgIData(oldp+989,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_7),32);
        bufp->chgIData(oldp+990,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_0),32);
        bufp->chgIData(oldp+991,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_1),32);
        bufp->chgIData(oldp+992,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_2),32);
        bufp->chgIData(oldp+993,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_3),32);
        bufp->chgIData(oldp+994,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_4),32);
        bufp->chgIData(oldp+995,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_5),32);
        bufp->chgIData(oldp+996,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_6),32);
        bufp->chgIData(oldp+997,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_7),32);
        bufp->chgIData(oldp+998,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_0),32);
        bufp->chgIData(oldp+999,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_1),32);
        bufp->chgIData(oldp+1000,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_2),32);
        bufp->chgIData(oldp+1001,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_3),32);
        bufp->chgIData(oldp+1002,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_4),32);
        bufp->chgIData(oldp+1003,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_5),32);
        bufp->chgIData(oldp+1004,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_6),32);
        bufp->chgIData(oldp+1005,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_7),32);
        bufp->chgIData(oldp+1006,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_0),32);
        bufp->chgIData(oldp+1007,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_1),32);
        bufp->chgIData(oldp+1008,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_2),32);
        bufp->chgIData(oldp+1009,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_3),32);
        bufp->chgIData(oldp+1010,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_4),32);
        bufp->chgIData(oldp+1011,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_5),32);
        bufp->chgIData(oldp+1012,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_6),32);
        bufp->chgIData(oldp+1013,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_7),32);
        bufp->chgIData(oldp+1014,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_0),32);
        bufp->chgIData(oldp+1015,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_1),32);
        bufp->chgIData(oldp+1016,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_2),32);
        bufp->chgIData(oldp+1017,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_3),32);
        bufp->chgIData(oldp+1018,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_4),32);
        bufp->chgIData(oldp+1019,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_5),32);
        bufp->chgIData(oldp+1020,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_6),32);
        bufp->chgIData(oldp+1021,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_7),32);
        bufp->chgIData(oldp+1022,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_0),32);
        bufp->chgIData(oldp+1023,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_1),32);
        bufp->chgIData(oldp+1024,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_2),32);
        bufp->chgIData(oldp+1025,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_3),32);
        bufp->chgIData(oldp+1026,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_4),32);
        bufp->chgIData(oldp+1027,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_5),32);
        bufp->chgIData(oldp+1028,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_6),32);
        bufp->chgIData(oldp+1029,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_7),32);
        bufp->chgIData(oldp+1030,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_0),32);
        bufp->chgIData(oldp+1031,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_1),32);
        bufp->chgIData(oldp+1032,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_2),32);
        bufp->chgIData(oldp+1033,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_3),32);
        bufp->chgIData(oldp+1034,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_4),32);
        bufp->chgIData(oldp+1035,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_5),32);
        bufp->chgIData(oldp+1036,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_6),32);
        bufp->chgIData(oldp+1037,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_7),32);
        bufp->chgIData(oldp+1038,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_0),32);
        bufp->chgIData(oldp+1039,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_1),32);
        bufp->chgIData(oldp+1040,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_2),32);
        bufp->chgIData(oldp+1041,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_3),32);
        bufp->chgIData(oldp+1042,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_4),32);
        bufp->chgIData(oldp+1043,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_5),32);
        bufp->chgIData(oldp+1044,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_6),32);
        bufp->chgIData(oldp+1045,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_7),32);
        bufp->chgIData(oldp+1046,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_0),32);
        bufp->chgIData(oldp+1047,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_1),32);
        bufp->chgIData(oldp+1048,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_2),32);
        bufp->chgIData(oldp+1049,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_3),32);
        bufp->chgIData(oldp+1050,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_4),32);
        bufp->chgIData(oldp+1051,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_5),32);
        bufp->chgIData(oldp+1052,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_6),32);
        bufp->chgIData(oldp+1053,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_7),32);
        bufp->chgIData(oldp+1054,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_0),32);
        bufp->chgIData(oldp+1055,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_1),32);
        bufp->chgIData(oldp+1056,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_2),32);
        bufp->chgIData(oldp+1057,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_3),32);
        bufp->chgIData(oldp+1058,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_4),32);
        bufp->chgIData(oldp+1059,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_5),32);
        bufp->chgIData(oldp+1060,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_6),32);
        bufp->chgIData(oldp+1061,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_7),32);
        bufp->chgIData(oldp+1062,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_0),32);
        bufp->chgIData(oldp+1063,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_1),32);
        bufp->chgIData(oldp+1064,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_2),32);
        bufp->chgIData(oldp+1065,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_3),32);
        bufp->chgIData(oldp+1066,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_4),32);
        bufp->chgIData(oldp+1067,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_5),32);
        bufp->chgIData(oldp+1068,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_6),32);
        bufp->chgIData(oldp+1069,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_7),32);
        bufp->chgIData(oldp+1070,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_0),32);
        bufp->chgIData(oldp+1071,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_1),32);
        bufp->chgIData(oldp+1072,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_2),32);
        bufp->chgIData(oldp+1073,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_3),32);
        bufp->chgIData(oldp+1074,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_4),32);
        bufp->chgIData(oldp+1075,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_5),32);
        bufp->chgIData(oldp+1076,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_6),32);
        bufp->chgIData(oldp+1077,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_7),32);
        bufp->chgIData(oldp+1078,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_0),32);
        bufp->chgIData(oldp+1079,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_1),32);
        bufp->chgIData(oldp+1080,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_2),32);
        bufp->chgIData(oldp+1081,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_3),32);
        bufp->chgIData(oldp+1082,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_4),32);
        bufp->chgIData(oldp+1083,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_5),32);
        bufp->chgIData(oldp+1084,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_6),32);
        bufp->chgIData(oldp+1085,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_7),32);
        bufp->chgIData(oldp+1086,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_0),32);
        bufp->chgIData(oldp+1087,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_1),32);
        bufp->chgIData(oldp+1088,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_2),32);
        bufp->chgIData(oldp+1089,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_3),32);
        bufp->chgIData(oldp+1090,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_4),32);
        bufp->chgIData(oldp+1091,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_5),32);
        bufp->chgIData(oldp+1092,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_6),32);
        bufp->chgIData(oldp+1093,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_7),32);
        bufp->chgIData(oldp+1094,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_0),32);
        bufp->chgIData(oldp+1095,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_1),32);
        bufp->chgIData(oldp+1096,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_2),32);
        bufp->chgIData(oldp+1097,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_3),32);
        bufp->chgIData(oldp+1098,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_4),32);
        bufp->chgIData(oldp+1099,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_5),32);
        bufp->chgIData(oldp+1100,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_6),32);
        bufp->chgIData(oldp+1101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_7),32);
        bufp->chgIData(oldp+1102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_0),32);
        bufp->chgIData(oldp+1103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_1),32);
        bufp->chgIData(oldp+1104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_2),32);
        bufp->chgIData(oldp+1105,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_3),32);
        bufp->chgIData(oldp+1106,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_4),32);
        bufp->chgIData(oldp+1107,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_5),32);
        bufp->chgIData(oldp+1108,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_6),32);
        bufp->chgIData(oldp+1109,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_7),32);
        bufp->chgIData(oldp+1110,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_0),32);
        bufp->chgIData(oldp+1111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_1),32);
        bufp->chgIData(oldp+1112,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_2),32);
        bufp->chgIData(oldp+1113,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_3),32);
        bufp->chgIData(oldp+1114,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_4),32);
        bufp->chgIData(oldp+1115,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_5),32);
        bufp->chgIData(oldp+1116,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_6),32);
        bufp->chgIData(oldp+1117,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_7),32);
        bufp->chgIData(oldp+1118,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_0),32);
        bufp->chgIData(oldp+1119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_1),32);
        bufp->chgIData(oldp+1120,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_2),32);
        bufp->chgIData(oldp+1121,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_3),32);
        bufp->chgIData(oldp+1122,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_4),32);
        bufp->chgIData(oldp+1123,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_5),32);
        bufp->chgIData(oldp+1124,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_6),32);
        bufp->chgIData(oldp+1125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_7),32);
        bufp->chgIData(oldp+1126,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_0),32);
        bufp->chgIData(oldp+1127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_1),32);
        bufp->chgIData(oldp+1128,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_2),32);
        bufp->chgIData(oldp+1129,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_3),32);
        bufp->chgIData(oldp+1130,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_4),32);
        bufp->chgIData(oldp+1131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_5),32);
        bufp->chgIData(oldp+1132,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_6),32);
        bufp->chgIData(oldp+1133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_7),32);
        bufp->chgIData(oldp+1134,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_0),32);
        bufp->chgIData(oldp+1135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_1),32);
        bufp->chgIData(oldp+1136,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_2),32);
        bufp->chgIData(oldp+1137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_3),32);
        bufp->chgIData(oldp+1138,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_4),32);
        bufp->chgIData(oldp+1139,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_5),32);
        bufp->chgIData(oldp+1140,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_6),32);
        bufp->chgIData(oldp+1141,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_7),32);
        bufp->chgIData(oldp+1142,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_0),32);
        bufp->chgIData(oldp+1143,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_1),32);
        bufp->chgIData(oldp+1144,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_2),32);
        bufp->chgIData(oldp+1145,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_3),32);
        bufp->chgIData(oldp+1146,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_4),32);
        bufp->chgIData(oldp+1147,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_5),32);
        bufp->chgIData(oldp+1148,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_6),32);
        bufp->chgIData(oldp+1149,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_7),32);
        bufp->chgIData(oldp+1150,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_0),32);
        bufp->chgIData(oldp+1151,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_1),32);
        bufp->chgIData(oldp+1152,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_2),32);
        bufp->chgIData(oldp+1153,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_3),32);
        bufp->chgIData(oldp+1154,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_4),32);
        bufp->chgIData(oldp+1155,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_5),32);
        bufp->chgIData(oldp+1156,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_6),32);
        bufp->chgIData(oldp+1157,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_7),32);
        bufp->chgIData(oldp+1158,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_0),32);
        bufp->chgIData(oldp+1159,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_1),32);
        bufp->chgIData(oldp+1160,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_2),32);
        bufp->chgIData(oldp+1161,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_3),32);
        bufp->chgIData(oldp+1162,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_4),32);
        bufp->chgIData(oldp+1163,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_5),32);
        bufp->chgIData(oldp+1164,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_6),32);
        bufp->chgIData(oldp+1165,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_7),32);
        bufp->chgIData(oldp+1166,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_0),32);
        bufp->chgIData(oldp+1167,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_1),32);
        bufp->chgIData(oldp+1168,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_2),32);
        bufp->chgIData(oldp+1169,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_3),32);
        bufp->chgIData(oldp+1170,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_4),32);
        bufp->chgIData(oldp+1171,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_5),32);
        bufp->chgIData(oldp+1172,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_6),32);
        bufp->chgIData(oldp+1173,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_7),32);
        bufp->chgIData(oldp+1174,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_0),32);
        bufp->chgIData(oldp+1175,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_1),32);
        bufp->chgIData(oldp+1176,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_2),32);
        bufp->chgIData(oldp+1177,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_3),32);
        bufp->chgIData(oldp+1178,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_4),32);
        bufp->chgIData(oldp+1179,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_5),32);
        bufp->chgIData(oldp+1180,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_6),32);
        bufp->chgIData(oldp+1181,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_7),32);
        bufp->chgIData(oldp+1182,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_0),32);
        bufp->chgIData(oldp+1183,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_1),32);
        bufp->chgIData(oldp+1184,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_2),32);
        bufp->chgIData(oldp+1185,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_3),32);
        bufp->chgIData(oldp+1186,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_4),32);
        bufp->chgIData(oldp+1187,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_5),32);
        bufp->chgIData(oldp+1188,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_6),32);
        bufp->chgIData(oldp+1189,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_7),32);
        bufp->chgIData(oldp+1190,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_0),32);
        bufp->chgIData(oldp+1191,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_1),32);
        bufp->chgIData(oldp+1192,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_2),32);
        bufp->chgIData(oldp+1193,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_3),32);
        bufp->chgIData(oldp+1194,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_4),32);
        bufp->chgIData(oldp+1195,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_5),32);
        bufp->chgIData(oldp+1196,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_6),32);
        bufp->chgIData(oldp+1197,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_7),32);
        bufp->chgIData(oldp+1198,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_0),32);
        bufp->chgIData(oldp+1199,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_1),32);
        bufp->chgIData(oldp+1200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_2),32);
        bufp->chgIData(oldp+1201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_3),32);
        bufp->chgIData(oldp+1202,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_4),32);
        bufp->chgIData(oldp+1203,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_5),32);
        bufp->chgIData(oldp+1204,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_6),32);
        bufp->chgIData(oldp+1205,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_7),32);
        bufp->chgIData(oldp+1206,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_0),32);
        bufp->chgIData(oldp+1207,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_1),32);
        bufp->chgIData(oldp+1208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_2),32);
        bufp->chgIData(oldp+1209,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_3),32);
        bufp->chgIData(oldp+1210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_4),32);
        bufp->chgIData(oldp+1211,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_5),32);
        bufp->chgIData(oldp+1212,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_6),32);
        bufp->chgIData(oldp+1213,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_7),32);
        bufp->chgIData(oldp+1214,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_0),32);
        bufp->chgIData(oldp+1215,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_1),32);
        bufp->chgIData(oldp+1216,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_2),32);
        bufp->chgIData(oldp+1217,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_3),32);
        bufp->chgIData(oldp+1218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_4),32);
        bufp->chgIData(oldp+1219,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_5),32);
        bufp->chgIData(oldp+1220,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_6),32);
        bufp->chgIData(oldp+1221,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_7),32);
        bufp->chgIData(oldp+1222,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_0),32);
        bufp->chgIData(oldp+1223,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_1),32);
        bufp->chgIData(oldp+1224,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_2),32);
        bufp->chgIData(oldp+1225,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_3),32);
        bufp->chgIData(oldp+1226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_4),32);
        bufp->chgIData(oldp+1227,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_5),32);
        bufp->chgIData(oldp+1228,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_6),32);
        bufp->chgIData(oldp+1229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_7),32);
        bufp->chgIData(oldp+1230,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_0),32);
        bufp->chgIData(oldp+1231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_1),32);
        bufp->chgIData(oldp+1232,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_2),32);
        bufp->chgIData(oldp+1233,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_3),32);
        bufp->chgIData(oldp+1234,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_4),32);
        bufp->chgIData(oldp+1235,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_5),32);
        bufp->chgIData(oldp+1236,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_6),32);
        bufp->chgIData(oldp+1237,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_7),32);
        bufp->chgIData(oldp+1238,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_0),32);
        bufp->chgIData(oldp+1239,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_1),32);
        bufp->chgIData(oldp+1240,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_2),32);
        bufp->chgIData(oldp+1241,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_3),32);
        bufp->chgIData(oldp+1242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_4),32);
        bufp->chgIData(oldp+1243,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_5),32);
        bufp->chgIData(oldp+1244,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_6),32);
        bufp->chgIData(oldp+1245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_7),32);
        bufp->chgIData(oldp+1246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_0),32);
        bufp->chgIData(oldp+1247,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_1),32);
        bufp->chgIData(oldp+1248,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_2),32);
        bufp->chgIData(oldp+1249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_3),32);
        bufp->chgIData(oldp+1250,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_4),32);
        bufp->chgIData(oldp+1251,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_5),32);
        bufp->chgIData(oldp+1252,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_6),32);
        bufp->chgIData(oldp+1253,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_7),32);
        bufp->chgIData(oldp+1254,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_0),32);
        bufp->chgIData(oldp+1255,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_1),32);
        bufp->chgIData(oldp+1256,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_2),32);
        bufp->chgIData(oldp+1257,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_3),32);
        bufp->chgIData(oldp+1258,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_4),32);
        bufp->chgIData(oldp+1259,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_5),32);
        bufp->chgIData(oldp+1260,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_6),32);
        bufp->chgIData(oldp+1261,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_7),32);
        bufp->chgIData(oldp+1262,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_0),32);
        bufp->chgIData(oldp+1263,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_1),32);
        bufp->chgIData(oldp+1264,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_2),32);
        bufp->chgIData(oldp+1265,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_3),32);
        bufp->chgIData(oldp+1266,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_4),32);
        bufp->chgIData(oldp+1267,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_5),32);
        bufp->chgIData(oldp+1268,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_6),32);
        bufp->chgIData(oldp+1269,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_7),32);
        bufp->chgIData(oldp+1270,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_0),32);
        bufp->chgIData(oldp+1271,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_1),32);
        bufp->chgIData(oldp+1272,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_2),32);
        bufp->chgIData(oldp+1273,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_3),32);
        bufp->chgIData(oldp+1274,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_4),32);
        bufp->chgIData(oldp+1275,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_5),32);
        bufp->chgIData(oldp+1276,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_6),32);
        bufp->chgIData(oldp+1277,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_7),32);
        bufp->chgIData(oldp+1278,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_0),32);
        bufp->chgIData(oldp+1279,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_1),32);
        bufp->chgIData(oldp+1280,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_2),32);
        bufp->chgIData(oldp+1281,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_3),32);
        bufp->chgIData(oldp+1282,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_4),32);
        bufp->chgIData(oldp+1283,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_5),32);
        bufp->chgIData(oldp+1284,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_6),32);
        bufp->chgIData(oldp+1285,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_7),32);
        bufp->chgIData(oldp+1286,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_0),32);
        bufp->chgIData(oldp+1287,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_1),32);
        bufp->chgIData(oldp+1288,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_2),32);
        bufp->chgIData(oldp+1289,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_3),32);
        bufp->chgIData(oldp+1290,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_4),32);
        bufp->chgIData(oldp+1291,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_5),32);
        bufp->chgIData(oldp+1292,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_6),32);
        bufp->chgIData(oldp+1293,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_7),32);
        bufp->chgIData(oldp+1294,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_0),32);
        bufp->chgIData(oldp+1295,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_1),32);
        bufp->chgIData(oldp+1296,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_2),32);
        bufp->chgIData(oldp+1297,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_3),32);
        bufp->chgIData(oldp+1298,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_4),32);
        bufp->chgIData(oldp+1299,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_5),32);
        bufp->chgIData(oldp+1300,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_6),32);
        bufp->chgIData(oldp+1301,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_7),32);
        bufp->chgIData(oldp+1302,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_0),32);
        bufp->chgIData(oldp+1303,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_1),32);
        bufp->chgIData(oldp+1304,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_2),32);
        bufp->chgIData(oldp+1305,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_3),32);
        bufp->chgIData(oldp+1306,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_4),32);
        bufp->chgIData(oldp+1307,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_5),32);
        bufp->chgIData(oldp+1308,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_6),32);
        bufp->chgIData(oldp+1309,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_7),32);
        bufp->chgIData(oldp+1310,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_0),32);
        bufp->chgIData(oldp+1311,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_1),32);
        bufp->chgIData(oldp+1312,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_2),32);
        bufp->chgIData(oldp+1313,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_3),32);
        bufp->chgIData(oldp+1314,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_4),32);
        bufp->chgIData(oldp+1315,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_5),32);
        bufp->chgIData(oldp+1316,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_6),32);
        bufp->chgIData(oldp+1317,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_7),32);
        bufp->chgIData(oldp+1318,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_0),32);
        bufp->chgIData(oldp+1319,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_1),32);
        bufp->chgIData(oldp+1320,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_2),32);
        bufp->chgIData(oldp+1321,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_3),32);
        bufp->chgIData(oldp+1322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_4),32);
        bufp->chgIData(oldp+1323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_5),32);
        bufp->chgIData(oldp+1324,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_6),32);
        bufp->chgIData(oldp+1325,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_7),32);
        bufp->chgIData(oldp+1326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_0),32);
        bufp->chgIData(oldp+1327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_1),32);
        bufp->chgIData(oldp+1328,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_2),32);
        bufp->chgIData(oldp+1329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_3),32);
        bufp->chgIData(oldp+1330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_4),32);
        bufp->chgIData(oldp+1331,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_5),32);
        bufp->chgIData(oldp+1332,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_6),32);
        bufp->chgIData(oldp+1333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_7),32);
        bufp->chgIData(oldp+1334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_0),32);
        bufp->chgIData(oldp+1335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_1),32);
        bufp->chgIData(oldp+1336,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_2),32);
        bufp->chgIData(oldp+1337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_3),32);
        bufp->chgIData(oldp+1338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_4),32);
        bufp->chgIData(oldp+1339,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_5),32);
        bufp->chgIData(oldp+1340,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_6),32);
        bufp->chgIData(oldp+1341,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_7),32);
        bufp->chgIData(oldp+1342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_0),32);
        bufp->chgIData(oldp+1343,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_1),32);
        bufp->chgIData(oldp+1344,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_2),32);
        bufp->chgIData(oldp+1345,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_3),32);
        bufp->chgIData(oldp+1346,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_4),32);
        bufp->chgIData(oldp+1347,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_5),32);
        bufp->chgIData(oldp+1348,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_6),32);
        bufp->chgIData(oldp+1349,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_7),32);
        bufp->chgIData(oldp+1350,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_0),32);
        bufp->chgIData(oldp+1351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_1),32);
        bufp->chgIData(oldp+1352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_2),32);
        bufp->chgIData(oldp+1353,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_3),32);
        bufp->chgIData(oldp+1354,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_4),32);
        bufp->chgIData(oldp+1355,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_5),32);
        bufp->chgIData(oldp+1356,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_6),32);
        bufp->chgIData(oldp+1357,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_7),32);
        bufp->chgIData(oldp+1358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_0),32);
        bufp->chgIData(oldp+1359,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_1),32);
        bufp->chgIData(oldp+1360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_2),32);
        bufp->chgIData(oldp+1361,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_3),32);
        bufp->chgIData(oldp+1362,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_4),32);
        bufp->chgIData(oldp+1363,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_5),32);
        bufp->chgIData(oldp+1364,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_6),32);
        bufp->chgIData(oldp+1365,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_7),32);
        bufp->chgIData(oldp+1366,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_0),32);
        bufp->chgIData(oldp+1367,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_1),32);
        bufp->chgIData(oldp+1368,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_2),32);
        bufp->chgIData(oldp+1369,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_3),32);
        bufp->chgIData(oldp+1370,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_4),32);
        bufp->chgIData(oldp+1371,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_5),32);
        bufp->chgIData(oldp+1372,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_6),32);
        bufp->chgIData(oldp+1373,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_7),32);
        bufp->chgIData(oldp+1374,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_0),32);
        bufp->chgIData(oldp+1375,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_1),32);
        bufp->chgIData(oldp+1376,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_2),32);
        bufp->chgIData(oldp+1377,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_3),32);
        bufp->chgIData(oldp+1378,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_4),32);
        bufp->chgIData(oldp+1379,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_5),32);
        bufp->chgIData(oldp+1380,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_6),32);
        bufp->chgIData(oldp+1381,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_7),32);
        bufp->chgIData(oldp+1382,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_0),32);
        bufp->chgIData(oldp+1383,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_1),32);
        bufp->chgIData(oldp+1384,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_2),32);
        bufp->chgIData(oldp+1385,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_3),32);
        bufp->chgIData(oldp+1386,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_4),32);
        bufp->chgIData(oldp+1387,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_5),32);
        bufp->chgIData(oldp+1388,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_6),32);
        bufp->chgIData(oldp+1389,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_7),32);
        bufp->chgIData(oldp+1390,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_0),32);
        bufp->chgIData(oldp+1391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_1),32);
        bufp->chgIData(oldp+1392,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_2),32);
        bufp->chgIData(oldp+1393,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_3),32);
        bufp->chgIData(oldp+1394,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_4),32);
        bufp->chgIData(oldp+1395,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_5),32);
        bufp->chgIData(oldp+1396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_6),32);
        bufp->chgIData(oldp+1397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_7),32);
        bufp->chgIData(oldp+1398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_0),32);
        bufp->chgIData(oldp+1399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_1),32);
        bufp->chgIData(oldp+1400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_2),32);
        bufp->chgIData(oldp+1401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_3),32);
        bufp->chgIData(oldp+1402,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_4),32);
        bufp->chgIData(oldp+1403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_5),32);
        bufp->chgIData(oldp+1404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_6),32);
        bufp->chgIData(oldp+1405,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_7),32);
        bufp->chgIData(oldp+1406,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_0),32);
        bufp->chgIData(oldp+1407,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_1),32);
        bufp->chgIData(oldp+1408,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_2),32);
        bufp->chgIData(oldp+1409,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_3),32);
        bufp->chgIData(oldp+1410,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_4),32);
        bufp->chgIData(oldp+1411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_5),32);
        bufp->chgIData(oldp+1412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_6),32);
        bufp->chgIData(oldp+1413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_7),32);
        bufp->chgIData(oldp+1414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_0),32);
        bufp->chgIData(oldp+1415,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_1),32);
        bufp->chgIData(oldp+1416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_2),32);
        bufp->chgIData(oldp+1417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_3),32);
        bufp->chgIData(oldp+1418,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_4),32);
        bufp->chgIData(oldp+1419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_5),32);
        bufp->chgIData(oldp+1420,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_6),32);
        bufp->chgIData(oldp+1421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_7),32);
        bufp->chgIData(oldp+1422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_0),32);
        bufp->chgIData(oldp+1423,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_1),32);
        bufp->chgIData(oldp+1424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_2),32);
        bufp->chgIData(oldp+1425,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_3),32);
        bufp->chgIData(oldp+1426,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_4),32);
        bufp->chgIData(oldp+1427,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_5),32);
        bufp->chgIData(oldp+1428,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_6),32);
        bufp->chgIData(oldp+1429,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_7),32);
        bufp->chgIData(oldp+1430,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_0),32);
        bufp->chgIData(oldp+1431,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_1),32);
        bufp->chgIData(oldp+1432,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_2),32);
        bufp->chgIData(oldp+1433,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_3),32);
        bufp->chgIData(oldp+1434,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_4),32);
        bufp->chgIData(oldp+1435,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_5),32);
        bufp->chgIData(oldp+1436,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_6),32);
        bufp->chgIData(oldp+1437,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_7),32);
        bufp->chgIData(oldp+1438,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_0),32);
        bufp->chgIData(oldp+1439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_1),32);
        bufp->chgIData(oldp+1440,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_2),32);
        bufp->chgIData(oldp+1441,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_3),32);
        bufp->chgIData(oldp+1442,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_4),32);
        bufp->chgIData(oldp+1443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_5),32);
        bufp->chgIData(oldp+1444,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_6),32);
        bufp->chgIData(oldp+1445,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_7),32);
        bufp->chgIData(oldp+1446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_0),32);
        bufp->chgIData(oldp+1447,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_1),32);
        bufp->chgIData(oldp+1448,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_2),32);
        bufp->chgIData(oldp+1449,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_3),32);
        bufp->chgIData(oldp+1450,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_4),32);
        bufp->chgIData(oldp+1451,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_5),32);
        bufp->chgIData(oldp+1452,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_6),32);
        bufp->chgIData(oldp+1453,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_7),32);
        bufp->chgIData(oldp+1454,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_0),32);
        bufp->chgIData(oldp+1455,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_1),32);
        bufp->chgIData(oldp+1456,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_2),32);
        bufp->chgIData(oldp+1457,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_3),32);
        bufp->chgIData(oldp+1458,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_4),32);
        bufp->chgIData(oldp+1459,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_5),32);
        bufp->chgIData(oldp+1460,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_6),32);
        bufp->chgIData(oldp+1461,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_7),32);
        bufp->chgIData(oldp+1462,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_0),32);
        bufp->chgIData(oldp+1463,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_1),32);
        bufp->chgIData(oldp+1464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_2),32);
        bufp->chgIData(oldp+1465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_3),32);
        bufp->chgIData(oldp+1466,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_4),32);
        bufp->chgIData(oldp+1467,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_5),32);
        bufp->chgIData(oldp+1468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_6),32);
        bufp->chgIData(oldp+1469,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_7),32);
        bufp->chgIData(oldp+1470,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_0),32);
        bufp->chgIData(oldp+1471,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_1),32);
        bufp->chgIData(oldp+1472,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_2),32);
        bufp->chgIData(oldp+1473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_3),32);
        bufp->chgIData(oldp+1474,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_4),32);
        bufp->chgIData(oldp+1475,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_5),32);
        bufp->chgIData(oldp+1476,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_6),32);
        bufp->chgIData(oldp+1477,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_7),32);
        bufp->chgIData(oldp+1478,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_0),32);
        bufp->chgIData(oldp+1479,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_1),32);
        bufp->chgIData(oldp+1480,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_2),32);
        bufp->chgIData(oldp+1481,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_3),32);
        bufp->chgIData(oldp+1482,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_4),32);
        bufp->chgIData(oldp+1483,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_5),32);
        bufp->chgIData(oldp+1484,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_6),32);
        bufp->chgIData(oldp+1485,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_7),32);
        bufp->chgIData(oldp+1486,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_0),32);
        bufp->chgIData(oldp+1487,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_1),32);
        bufp->chgIData(oldp+1488,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_2),32);
        bufp->chgIData(oldp+1489,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_3),32);
        bufp->chgIData(oldp+1490,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_4),32);
        bufp->chgIData(oldp+1491,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_5),32);
        bufp->chgIData(oldp+1492,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_6),32);
        bufp->chgIData(oldp+1493,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_7),32);
        bufp->chgIData(oldp+1494,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_0),32);
        bufp->chgIData(oldp+1495,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_1),32);
        bufp->chgIData(oldp+1496,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_2),32);
        bufp->chgIData(oldp+1497,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_3),32);
        bufp->chgIData(oldp+1498,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_4),32);
        bufp->chgIData(oldp+1499,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_5),32);
        bufp->chgIData(oldp+1500,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_6),32);
        bufp->chgIData(oldp+1501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_7),32);
        bufp->chgIData(oldp+1502,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_0),32);
        bufp->chgIData(oldp+1503,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_1),32);
        bufp->chgIData(oldp+1504,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_2),32);
        bufp->chgIData(oldp+1505,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_3),32);
        bufp->chgIData(oldp+1506,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_4),32);
        bufp->chgIData(oldp+1507,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_5),32);
        bufp->chgIData(oldp+1508,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_6),32);
        bufp->chgIData(oldp+1509,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_7),32);
        bufp->chgIData(oldp+1510,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_0),32);
        bufp->chgIData(oldp+1511,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_1),32);
        bufp->chgIData(oldp+1512,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_2),32);
        bufp->chgIData(oldp+1513,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_3),32);
        bufp->chgIData(oldp+1514,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_4),32);
        bufp->chgIData(oldp+1515,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_5),32);
        bufp->chgIData(oldp+1516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_6),32);
        bufp->chgIData(oldp+1517,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_7),32);
        bufp->chgIData(oldp+1518,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_0),32);
        bufp->chgIData(oldp+1519,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_1),32);
        bufp->chgIData(oldp+1520,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_2),32);
        bufp->chgIData(oldp+1521,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_3),32);
        bufp->chgIData(oldp+1522,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_4),32);
        bufp->chgIData(oldp+1523,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_5),32);
        bufp->chgIData(oldp+1524,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_6),32);
        bufp->chgIData(oldp+1525,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_7),32);
        bufp->chgIData(oldp+1526,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_0),32);
        bufp->chgIData(oldp+1527,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_1),32);
        bufp->chgIData(oldp+1528,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_2),32);
        bufp->chgIData(oldp+1529,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_3),32);
        bufp->chgIData(oldp+1530,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_4),32);
        bufp->chgIData(oldp+1531,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_5),32);
        bufp->chgIData(oldp+1532,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_6),32);
        bufp->chgIData(oldp+1533,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_7),32);
        bufp->chgIData(oldp+1534,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_0),32);
        bufp->chgIData(oldp+1535,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_1),32);
        bufp->chgIData(oldp+1536,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_2),32);
        bufp->chgIData(oldp+1537,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_3),32);
        bufp->chgIData(oldp+1538,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_4),32);
        bufp->chgIData(oldp+1539,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_5),32);
        bufp->chgIData(oldp+1540,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_6),32);
        bufp->chgIData(oldp+1541,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_7),32);
        bufp->chgIData(oldp+1542,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_0),32);
        bufp->chgIData(oldp+1543,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_1),32);
        bufp->chgIData(oldp+1544,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_2),32);
        bufp->chgIData(oldp+1545,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_3),32);
        bufp->chgIData(oldp+1546,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_4),32);
        bufp->chgIData(oldp+1547,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_5),32);
        bufp->chgIData(oldp+1548,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_6),32);
        bufp->chgIData(oldp+1549,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_7),32);
        bufp->chgIData(oldp+1550,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_0),32);
        bufp->chgIData(oldp+1551,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_1),32);
        bufp->chgIData(oldp+1552,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_2),32);
        bufp->chgIData(oldp+1553,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_3),32);
        bufp->chgIData(oldp+1554,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_4),32);
        bufp->chgIData(oldp+1555,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_5),32);
        bufp->chgIData(oldp+1556,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_6),32);
        bufp->chgIData(oldp+1557,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_7),32);
        bufp->chgIData(oldp+1558,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_0),32);
        bufp->chgIData(oldp+1559,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_1),32);
        bufp->chgIData(oldp+1560,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_2),32);
        bufp->chgIData(oldp+1561,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_3),32);
        bufp->chgIData(oldp+1562,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_4),32);
        bufp->chgIData(oldp+1563,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_5),32);
        bufp->chgIData(oldp+1564,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_6),32);
        bufp->chgIData(oldp+1565,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_7),32);
        bufp->chgIData(oldp+1566,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_0),32);
        bufp->chgIData(oldp+1567,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_1),32);
        bufp->chgIData(oldp+1568,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_2),32);
        bufp->chgIData(oldp+1569,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_3),32);
        bufp->chgIData(oldp+1570,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_4),32);
        bufp->chgIData(oldp+1571,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_5),32);
        bufp->chgIData(oldp+1572,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_6),32);
        bufp->chgIData(oldp+1573,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_7),32);
        bufp->chgIData(oldp+1574,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_0),32);
        bufp->chgIData(oldp+1575,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_1),32);
        bufp->chgIData(oldp+1576,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_2),32);
        bufp->chgIData(oldp+1577,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_3),32);
        bufp->chgIData(oldp+1578,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_4),32);
        bufp->chgIData(oldp+1579,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_5),32);
        bufp->chgIData(oldp+1580,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_6),32);
        bufp->chgIData(oldp+1581,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_7),32);
        bufp->chgIData(oldp+1582,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_0),32);
        bufp->chgIData(oldp+1583,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_1),32);
        bufp->chgIData(oldp+1584,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_2),32);
        bufp->chgIData(oldp+1585,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_3),32);
        bufp->chgIData(oldp+1586,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_4),32);
        bufp->chgIData(oldp+1587,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_5),32);
        bufp->chgIData(oldp+1588,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_6),32);
        bufp->chgIData(oldp+1589,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_7),32);
        bufp->chgIData(oldp+1590,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_0),32);
        bufp->chgIData(oldp+1591,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_1),32);
        bufp->chgIData(oldp+1592,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_2),32);
        bufp->chgIData(oldp+1593,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_3),32);
        bufp->chgIData(oldp+1594,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_4),32);
        bufp->chgIData(oldp+1595,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_5),32);
        bufp->chgIData(oldp+1596,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_6),32);
        bufp->chgIData(oldp+1597,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_7),32);
        bufp->chgIData(oldp+1598,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_0),32);
        bufp->chgIData(oldp+1599,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_1),32);
        bufp->chgIData(oldp+1600,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_2),32);
        bufp->chgIData(oldp+1601,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_3),32);
        bufp->chgIData(oldp+1602,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_4),32);
        bufp->chgIData(oldp+1603,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_5),32);
        bufp->chgIData(oldp+1604,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_6),32);
        bufp->chgIData(oldp+1605,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_7),32);
        bufp->chgIData(oldp+1606,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_0),32);
        bufp->chgIData(oldp+1607,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_1),32);
        bufp->chgIData(oldp+1608,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_2),32);
        bufp->chgIData(oldp+1609,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_3),32);
        bufp->chgIData(oldp+1610,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_4),32);
        bufp->chgIData(oldp+1611,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_5),32);
        bufp->chgIData(oldp+1612,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_6),32);
        bufp->chgIData(oldp+1613,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_7),32);
        bufp->chgIData(oldp+1614,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_0),32);
        bufp->chgIData(oldp+1615,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_1),32);
        bufp->chgIData(oldp+1616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_2),32);
        bufp->chgIData(oldp+1617,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_3),32);
        bufp->chgIData(oldp+1618,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_4),32);
        bufp->chgIData(oldp+1619,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_5),32);
        bufp->chgIData(oldp+1620,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_6),32);
        bufp->chgIData(oldp+1621,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_7),32);
        bufp->chgIData(oldp+1622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_0),32);
        bufp->chgIData(oldp+1623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_1),32);
        bufp->chgIData(oldp+1624,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_2),32);
        bufp->chgIData(oldp+1625,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_3),32);
        bufp->chgIData(oldp+1626,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_4),32);
        bufp->chgIData(oldp+1627,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_5),32);
        bufp->chgIData(oldp+1628,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_6),32);
        bufp->chgIData(oldp+1629,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_7),32);
        bufp->chgIData(oldp+1630,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_0),32);
        bufp->chgIData(oldp+1631,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_1),32);
        bufp->chgIData(oldp+1632,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_2),32);
        bufp->chgIData(oldp+1633,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_3),32);
        bufp->chgIData(oldp+1634,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_4),32);
        bufp->chgIData(oldp+1635,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_5),32);
        bufp->chgIData(oldp+1636,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_6),32);
        bufp->chgIData(oldp+1637,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_7),32);
        bufp->chgIData(oldp+1638,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_0),32);
        bufp->chgIData(oldp+1639,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_1),32);
        bufp->chgIData(oldp+1640,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_2),32);
        bufp->chgIData(oldp+1641,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_3),32);
        bufp->chgIData(oldp+1642,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_4),32);
        bufp->chgIData(oldp+1643,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_5),32);
        bufp->chgIData(oldp+1644,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_6),32);
        bufp->chgIData(oldp+1645,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_7),32);
        bufp->chgIData(oldp+1646,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_0),32);
        bufp->chgIData(oldp+1647,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_1),32);
        bufp->chgIData(oldp+1648,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_2),32);
        bufp->chgIData(oldp+1649,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_3),32);
        bufp->chgIData(oldp+1650,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_4),32);
        bufp->chgIData(oldp+1651,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_5),32);
        bufp->chgIData(oldp+1652,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_6),32);
        bufp->chgIData(oldp+1653,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_7),32);
        bufp->chgIData(oldp+1654,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_0),32);
        bufp->chgIData(oldp+1655,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_1),32);
        bufp->chgIData(oldp+1656,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_2),32);
        bufp->chgIData(oldp+1657,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_3),32);
        bufp->chgIData(oldp+1658,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_4),32);
        bufp->chgIData(oldp+1659,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_5),32);
        bufp->chgIData(oldp+1660,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_6),32);
        bufp->chgIData(oldp+1661,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_7),32);
        bufp->chgIData(oldp+1662,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_0),32);
        bufp->chgIData(oldp+1663,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_1),32);
        bufp->chgIData(oldp+1664,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_2),32);
        bufp->chgIData(oldp+1665,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_3),32);
        bufp->chgIData(oldp+1666,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_4),32);
        bufp->chgIData(oldp+1667,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_5),32);
        bufp->chgIData(oldp+1668,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_6),32);
        bufp->chgIData(oldp+1669,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_7),32);
        bufp->chgIData(oldp+1670,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_0),32);
        bufp->chgIData(oldp+1671,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_1),32);
        bufp->chgIData(oldp+1672,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_2),32);
        bufp->chgIData(oldp+1673,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_3),32);
        bufp->chgIData(oldp+1674,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_4),32);
        bufp->chgIData(oldp+1675,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_5),32);
        bufp->chgIData(oldp+1676,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_6),32);
        bufp->chgIData(oldp+1677,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_7),32);
        bufp->chgIData(oldp+1678,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_0),32);
        bufp->chgIData(oldp+1679,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_1),32);
        bufp->chgIData(oldp+1680,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_2),32);
        bufp->chgIData(oldp+1681,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_3),32);
        bufp->chgIData(oldp+1682,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_4),32);
        bufp->chgIData(oldp+1683,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_5),32);
        bufp->chgIData(oldp+1684,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_6),32);
        bufp->chgIData(oldp+1685,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_7),32);
        bufp->chgIData(oldp+1686,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_0),32);
        bufp->chgIData(oldp+1687,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_1),32);
        bufp->chgIData(oldp+1688,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_2),32);
        bufp->chgIData(oldp+1689,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_3),32);
        bufp->chgIData(oldp+1690,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_4),32);
        bufp->chgIData(oldp+1691,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_5),32);
        bufp->chgIData(oldp+1692,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_6),32);
        bufp->chgIData(oldp+1693,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_7),32);
        bufp->chgIData(oldp+1694,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_0),32);
        bufp->chgIData(oldp+1695,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_1),32);
        bufp->chgIData(oldp+1696,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_2),32);
        bufp->chgIData(oldp+1697,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_3),32);
        bufp->chgIData(oldp+1698,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_4),32);
        bufp->chgIData(oldp+1699,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_5),32);
        bufp->chgIData(oldp+1700,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_6),32);
        bufp->chgIData(oldp+1701,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_7),32);
        bufp->chgIData(oldp+1702,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_0),32);
        bufp->chgIData(oldp+1703,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_1),32);
        bufp->chgIData(oldp+1704,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_2),32);
        bufp->chgIData(oldp+1705,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_3),32);
        bufp->chgIData(oldp+1706,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_4),32);
        bufp->chgIData(oldp+1707,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_5),32);
        bufp->chgIData(oldp+1708,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_6),32);
        bufp->chgIData(oldp+1709,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_7),32);
        bufp->chgIData(oldp+1710,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_0),32);
        bufp->chgIData(oldp+1711,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_1),32);
        bufp->chgIData(oldp+1712,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_2),32);
        bufp->chgIData(oldp+1713,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_3),32);
        bufp->chgIData(oldp+1714,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_4),32);
        bufp->chgIData(oldp+1715,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_5),32);
        bufp->chgIData(oldp+1716,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_6),32);
        bufp->chgIData(oldp+1717,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_7),32);
        bufp->chgIData(oldp+1718,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_0),32);
        bufp->chgIData(oldp+1719,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_1),32);
        bufp->chgIData(oldp+1720,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_2),32);
        bufp->chgIData(oldp+1721,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_3),32);
        bufp->chgIData(oldp+1722,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_4),32);
        bufp->chgIData(oldp+1723,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_5),32);
        bufp->chgIData(oldp+1724,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_6),32);
        bufp->chgIData(oldp+1725,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_7),32);
        bufp->chgIData(oldp+1726,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_0),32);
        bufp->chgIData(oldp+1727,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_1),32);
        bufp->chgIData(oldp+1728,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_2),32);
        bufp->chgIData(oldp+1729,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_3),32);
        bufp->chgIData(oldp+1730,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_4),32);
        bufp->chgIData(oldp+1731,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_5),32);
        bufp->chgIData(oldp+1732,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_6),32);
        bufp->chgIData(oldp+1733,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_7),32);
        bufp->chgIData(oldp+1734,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_0),32);
        bufp->chgIData(oldp+1735,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_1),32);
        bufp->chgIData(oldp+1736,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_2),32);
        bufp->chgIData(oldp+1737,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_3),32);
        bufp->chgIData(oldp+1738,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_4),32);
        bufp->chgIData(oldp+1739,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_5),32);
        bufp->chgIData(oldp+1740,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_6),32);
        bufp->chgIData(oldp+1741,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_7),32);
        bufp->chgIData(oldp+1742,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_0),32);
        bufp->chgIData(oldp+1743,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_1),32);
        bufp->chgIData(oldp+1744,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_2),32);
        bufp->chgIData(oldp+1745,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_3),32);
        bufp->chgIData(oldp+1746,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_4),32);
        bufp->chgIData(oldp+1747,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_5),32);
        bufp->chgIData(oldp+1748,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_6),32);
        bufp->chgIData(oldp+1749,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_7),32);
        bufp->chgIData(oldp+1750,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_0),32);
        bufp->chgIData(oldp+1751,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_1),32);
        bufp->chgIData(oldp+1752,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_2),32);
        bufp->chgIData(oldp+1753,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_3),32);
        bufp->chgIData(oldp+1754,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_4),32);
        bufp->chgIData(oldp+1755,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_5),32);
        bufp->chgIData(oldp+1756,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_6),32);
        bufp->chgIData(oldp+1757,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_7),32);
        bufp->chgIData(oldp+1758,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_0),32);
        bufp->chgIData(oldp+1759,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_1),32);
        bufp->chgIData(oldp+1760,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_2),32);
        bufp->chgIData(oldp+1761,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_3),32);
        bufp->chgIData(oldp+1762,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_4),32);
        bufp->chgIData(oldp+1763,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_5),32);
        bufp->chgIData(oldp+1764,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_6),32);
        bufp->chgIData(oldp+1765,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_7),32);
        bufp->chgIData(oldp+1766,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_0),32);
        bufp->chgIData(oldp+1767,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_1),32);
        bufp->chgIData(oldp+1768,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_2),32);
        bufp->chgIData(oldp+1769,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_3),32);
        bufp->chgIData(oldp+1770,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_4),32);
        bufp->chgIData(oldp+1771,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_5),32);
        bufp->chgIData(oldp+1772,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_6),32);
        bufp->chgIData(oldp+1773,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_7),32);
        bufp->chgIData(oldp+1774,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_0),32);
        bufp->chgIData(oldp+1775,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_1),32);
        bufp->chgIData(oldp+1776,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_2),32);
        bufp->chgIData(oldp+1777,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_3),32);
        bufp->chgIData(oldp+1778,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_4),32);
        bufp->chgIData(oldp+1779,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_5),32);
        bufp->chgIData(oldp+1780,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_6),32);
        bufp->chgIData(oldp+1781,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_7),32);
        bufp->chgIData(oldp+1782,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_0),32);
        bufp->chgIData(oldp+1783,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_1),32);
        bufp->chgIData(oldp+1784,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_2),32);
        bufp->chgIData(oldp+1785,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_3),32);
        bufp->chgIData(oldp+1786,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_4),32);
        bufp->chgIData(oldp+1787,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_5),32);
        bufp->chgIData(oldp+1788,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_6),32);
        bufp->chgIData(oldp+1789,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_7),32);
        bufp->chgIData(oldp+1790,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_0),32);
        bufp->chgIData(oldp+1791,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_1),32);
        bufp->chgIData(oldp+1792,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_2),32);
        bufp->chgIData(oldp+1793,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_3),32);
        bufp->chgIData(oldp+1794,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_4),32);
        bufp->chgIData(oldp+1795,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_5),32);
        bufp->chgIData(oldp+1796,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_6),32);
        bufp->chgIData(oldp+1797,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_7),32);
        bufp->chgIData(oldp+1798,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_0),32);
        bufp->chgIData(oldp+1799,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_1),32);
        bufp->chgIData(oldp+1800,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_2),32);
        bufp->chgIData(oldp+1801,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_3),32);
        bufp->chgIData(oldp+1802,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_4),32);
        bufp->chgIData(oldp+1803,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_5),32);
        bufp->chgIData(oldp+1804,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_6),32);
        bufp->chgIData(oldp+1805,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_7),32);
        bufp->chgIData(oldp+1806,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_0),32);
        bufp->chgIData(oldp+1807,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_1),32);
        bufp->chgIData(oldp+1808,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_2),32);
        bufp->chgIData(oldp+1809,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_3),32);
        bufp->chgIData(oldp+1810,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_4),32);
        bufp->chgIData(oldp+1811,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_5),32);
        bufp->chgIData(oldp+1812,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_6),32);
        bufp->chgIData(oldp+1813,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_7),32);
        bufp->chgIData(oldp+1814,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_0),32);
        bufp->chgIData(oldp+1815,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_1),32);
        bufp->chgIData(oldp+1816,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_2),32);
        bufp->chgIData(oldp+1817,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_3),32);
        bufp->chgIData(oldp+1818,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_4),32);
        bufp->chgIData(oldp+1819,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_5),32);
        bufp->chgIData(oldp+1820,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_6),32);
        bufp->chgIData(oldp+1821,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_7),32);
        bufp->chgIData(oldp+1822,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_0),32);
        bufp->chgIData(oldp+1823,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_1),32);
        bufp->chgIData(oldp+1824,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_2),32);
        bufp->chgIData(oldp+1825,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_3),32);
        bufp->chgIData(oldp+1826,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_4),32);
        bufp->chgIData(oldp+1827,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_5),32);
        bufp->chgIData(oldp+1828,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_6),32);
        bufp->chgIData(oldp+1829,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_7),32);
        bufp->chgIData(oldp+1830,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_0),32);
        bufp->chgIData(oldp+1831,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_1),32);
        bufp->chgIData(oldp+1832,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_2),32);
        bufp->chgIData(oldp+1833,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_3),32);
        bufp->chgIData(oldp+1834,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_4),32);
        bufp->chgIData(oldp+1835,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_5),32);
        bufp->chgIData(oldp+1836,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_6),32);
        bufp->chgIData(oldp+1837,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_7),32);
        bufp->chgIData(oldp+1838,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_0),32);
        bufp->chgIData(oldp+1839,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_1),32);
        bufp->chgIData(oldp+1840,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_2),32);
        bufp->chgIData(oldp+1841,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_3),32);
        bufp->chgIData(oldp+1842,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_4),32);
        bufp->chgIData(oldp+1843,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_5),32);
        bufp->chgIData(oldp+1844,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_6),32);
        bufp->chgIData(oldp+1845,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_7),32);
        bufp->chgIData(oldp+1846,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_0),32);
        bufp->chgIData(oldp+1847,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_1),32);
        bufp->chgIData(oldp+1848,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_2),32);
        bufp->chgIData(oldp+1849,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_3),32);
        bufp->chgIData(oldp+1850,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_4),32);
        bufp->chgIData(oldp+1851,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_5),32);
        bufp->chgIData(oldp+1852,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_6),32);
        bufp->chgIData(oldp+1853,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_7),32);
        bufp->chgIData(oldp+1854,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_0),32);
        bufp->chgIData(oldp+1855,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_1),32);
        bufp->chgIData(oldp+1856,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_2),32);
        bufp->chgIData(oldp+1857,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_3),32);
        bufp->chgIData(oldp+1858,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_4),32);
        bufp->chgIData(oldp+1859,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_5),32);
        bufp->chgIData(oldp+1860,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_6),32);
        bufp->chgIData(oldp+1861,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_7),32);
        bufp->chgIData(oldp+1862,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_0),32);
        bufp->chgIData(oldp+1863,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_1),32);
        bufp->chgIData(oldp+1864,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_2),32);
        bufp->chgIData(oldp+1865,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_3),32);
        bufp->chgIData(oldp+1866,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_4),32);
        bufp->chgIData(oldp+1867,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_5),32);
        bufp->chgIData(oldp+1868,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_6),32);
        bufp->chgIData(oldp+1869,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_7),32);
        bufp->chgIData(oldp+1870,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_0),32);
        bufp->chgIData(oldp+1871,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_1),32);
        bufp->chgIData(oldp+1872,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_2),32);
        bufp->chgIData(oldp+1873,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_3),32);
        bufp->chgIData(oldp+1874,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_4),32);
        bufp->chgIData(oldp+1875,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_5),32);
        bufp->chgIData(oldp+1876,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_6),32);
        bufp->chgIData(oldp+1877,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_7),32);
        bufp->chgIData(oldp+1878,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_0),32);
        bufp->chgIData(oldp+1879,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_1),32);
        bufp->chgIData(oldp+1880,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_2),32);
        bufp->chgIData(oldp+1881,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_3),32);
        bufp->chgIData(oldp+1882,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_4),32);
        bufp->chgIData(oldp+1883,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_5),32);
        bufp->chgIData(oldp+1884,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_6),32);
        bufp->chgIData(oldp+1885,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_7),32);
        bufp->chgIData(oldp+1886,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_0),32);
        bufp->chgIData(oldp+1887,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_1),32);
        bufp->chgIData(oldp+1888,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_2),32);
        bufp->chgIData(oldp+1889,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_3),32);
        bufp->chgIData(oldp+1890,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_4),32);
        bufp->chgIData(oldp+1891,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_5),32);
        bufp->chgIData(oldp+1892,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_6),32);
        bufp->chgIData(oldp+1893,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_7),32);
        bufp->chgIData(oldp+1894,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_0),32);
        bufp->chgIData(oldp+1895,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_1),32);
        bufp->chgIData(oldp+1896,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_2),32);
        bufp->chgIData(oldp+1897,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_3),32);
        bufp->chgIData(oldp+1898,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_4),32);
        bufp->chgIData(oldp+1899,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_5),32);
        bufp->chgIData(oldp+1900,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_6),32);
        bufp->chgIData(oldp+1901,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_7),32);
        bufp->chgIData(oldp+1902,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_0),32);
        bufp->chgIData(oldp+1903,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_1),32);
        bufp->chgIData(oldp+1904,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_2),32);
        bufp->chgIData(oldp+1905,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_3),32);
        bufp->chgIData(oldp+1906,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_4),32);
        bufp->chgIData(oldp+1907,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_5),32);
        bufp->chgIData(oldp+1908,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_6),32);
        bufp->chgIData(oldp+1909,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_7),32);
        bufp->chgIData(oldp+1910,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_0),32);
        bufp->chgIData(oldp+1911,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_1),32);
        bufp->chgIData(oldp+1912,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_2),32);
        bufp->chgIData(oldp+1913,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_3),32);
        bufp->chgIData(oldp+1914,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_4),32);
        bufp->chgIData(oldp+1915,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_5),32);
        bufp->chgIData(oldp+1916,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_6),32);
        bufp->chgIData(oldp+1917,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_7),32);
        bufp->chgIData(oldp+1918,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_0),32);
        bufp->chgIData(oldp+1919,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_1),32);
        bufp->chgIData(oldp+1920,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_2),32);
        bufp->chgIData(oldp+1921,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_3),32);
        bufp->chgIData(oldp+1922,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_4),32);
        bufp->chgIData(oldp+1923,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_5),32);
        bufp->chgIData(oldp+1924,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_6),32);
        bufp->chgIData(oldp+1925,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_7),32);
        bufp->chgIData(oldp+1926,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_0),32);
        bufp->chgIData(oldp+1927,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_1),32);
        bufp->chgIData(oldp+1928,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_2),32);
        bufp->chgIData(oldp+1929,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_3),32);
        bufp->chgIData(oldp+1930,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_4),32);
        bufp->chgIData(oldp+1931,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_5),32);
        bufp->chgIData(oldp+1932,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_6),32);
        bufp->chgIData(oldp+1933,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_7),32);
        bufp->chgIData(oldp+1934,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_0),32);
        bufp->chgIData(oldp+1935,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_1),32);
        bufp->chgIData(oldp+1936,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_2),32);
        bufp->chgIData(oldp+1937,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_3),32);
        bufp->chgIData(oldp+1938,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_4),32);
        bufp->chgIData(oldp+1939,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_5),32);
        bufp->chgIData(oldp+1940,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_6),32);
        bufp->chgIData(oldp+1941,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_7),32);
        bufp->chgIData(oldp+1942,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_0),32);
        bufp->chgIData(oldp+1943,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_1),32);
        bufp->chgIData(oldp+1944,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_2),32);
        bufp->chgIData(oldp+1945,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_3),32);
        bufp->chgIData(oldp+1946,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_4),32);
        bufp->chgIData(oldp+1947,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_5),32);
        bufp->chgIData(oldp+1948,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_6),32);
        bufp->chgIData(oldp+1949,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_7),32);
        bufp->chgIData(oldp+1950,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_0),32);
        bufp->chgIData(oldp+1951,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_1),32);
        bufp->chgIData(oldp+1952,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_2),32);
        bufp->chgIData(oldp+1953,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_3),32);
        bufp->chgIData(oldp+1954,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_4),32);
        bufp->chgIData(oldp+1955,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_5),32);
        bufp->chgIData(oldp+1956,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_6),32);
        bufp->chgIData(oldp+1957,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_7),32);
        bufp->chgIData(oldp+1958,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_0),32);
        bufp->chgIData(oldp+1959,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_1),32);
        bufp->chgIData(oldp+1960,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_2),32);
        bufp->chgIData(oldp+1961,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_3),32);
        bufp->chgIData(oldp+1962,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_4),32);
        bufp->chgIData(oldp+1963,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_5),32);
        bufp->chgIData(oldp+1964,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_6),32);
        bufp->chgIData(oldp+1965,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_7),32);
        bufp->chgIData(oldp+1966,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_0),32);
        bufp->chgIData(oldp+1967,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_1),32);
        bufp->chgIData(oldp+1968,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_2),32);
        bufp->chgIData(oldp+1969,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_3),32);
        bufp->chgIData(oldp+1970,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_4),32);
        bufp->chgIData(oldp+1971,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_5),32);
        bufp->chgIData(oldp+1972,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_6),32);
        bufp->chgIData(oldp+1973,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_7),32);
        bufp->chgIData(oldp+1974,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_0),32);
        bufp->chgIData(oldp+1975,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_1),32);
        bufp->chgIData(oldp+1976,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_2),32);
        bufp->chgIData(oldp+1977,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_3),32);
        bufp->chgIData(oldp+1978,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_4),32);
        bufp->chgIData(oldp+1979,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_5),32);
        bufp->chgIData(oldp+1980,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_6),32);
        bufp->chgIData(oldp+1981,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_7),32);
        bufp->chgIData(oldp+1982,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_0),32);
        bufp->chgIData(oldp+1983,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_1),32);
        bufp->chgIData(oldp+1984,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_2),32);
        bufp->chgIData(oldp+1985,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_3),32);
        bufp->chgIData(oldp+1986,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_4),32);
        bufp->chgIData(oldp+1987,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_5),32);
        bufp->chgIData(oldp+1988,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_6),32);
        bufp->chgIData(oldp+1989,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_7),32);
        bufp->chgIData(oldp+1990,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_0),32);
        bufp->chgIData(oldp+1991,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_1),32);
        bufp->chgIData(oldp+1992,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_2),32);
        bufp->chgIData(oldp+1993,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_3),32);
        bufp->chgIData(oldp+1994,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_4),32);
        bufp->chgIData(oldp+1995,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_5),32);
        bufp->chgIData(oldp+1996,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_6),32);
        bufp->chgIData(oldp+1997,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_7),32);
        bufp->chgIData(oldp+1998,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_0),32);
        bufp->chgIData(oldp+1999,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_1),32);
        bufp->chgIData(oldp+2000,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_2),32);
        bufp->chgIData(oldp+2001,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_3),32);
        bufp->chgIData(oldp+2002,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_4),32);
        bufp->chgIData(oldp+2003,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_5),32);
        bufp->chgIData(oldp+2004,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_6),32);
        bufp->chgIData(oldp+2005,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_7),32);
        bufp->chgIData(oldp+2006,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_0),32);
        bufp->chgIData(oldp+2007,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_1),32);
        bufp->chgIData(oldp+2008,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_2),32);
        bufp->chgIData(oldp+2009,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_3),32);
        bufp->chgIData(oldp+2010,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_4),32);
        bufp->chgIData(oldp+2011,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_5),32);
        bufp->chgIData(oldp+2012,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_6),32);
        bufp->chgIData(oldp+2013,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_7),32);
        bufp->chgIData(oldp+2014,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_0),32);
        bufp->chgIData(oldp+2015,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_1),32);
        bufp->chgIData(oldp+2016,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_2),32);
        bufp->chgIData(oldp+2017,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_3),32);
        bufp->chgIData(oldp+2018,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_4),32);
        bufp->chgIData(oldp+2019,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_5),32);
        bufp->chgIData(oldp+2020,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_6),32);
        bufp->chgIData(oldp+2021,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_7),32);
        bufp->chgIData(oldp+2022,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_0),32);
        bufp->chgIData(oldp+2023,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_1),32);
        bufp->chgIData(oldp+2024,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_2),32);
        bufp->chgIData(oldp+2025,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_3),32);
        bufp->chgIData(oldp+2026,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_4),32);
        bufp->chgIData(oldp+2027,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_5),32);
        bufp->chgIData(oldp+2028,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_6),32);
        bufp->chgIData(oldp+2029,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_7),32);
        bufp->chgIData(oldp+2030,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_0),32);
        bufp->chgIData(oldp+2031,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_1),32);
        bufp->chgIData(oldp+2032,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_2),32);
        bufp->chgIData(oldp+2033,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_3),32);
        bufp->chgIData(oldp+2034,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_4),32);
        bufp->chgIData(oldp+2035,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_5),32);
        bufp->chgIData(oldp+2036,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_6),32);
        bufp->chgIData(oldp+2037,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_7),32);
        bufp->chgIData(oldp+2038,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_0),32);
        bufp->chgIData(oldp+2039,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_1),32);
        bufp->chgIData(oldp+2040,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_2),32);
        bufp->chgIData(oldp+2041,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_3),32);
        bufp->chgIData(oldp+2042,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_4),32);
        bufp->chgIData(oldp+2043,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_5),32);
        bufp->chgIData(oldp+2044,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_6),32);
        bufp->chgIData(oldp+2045,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_7),32);
        bufp->chgIData(oldp+2046,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_0),32);
        bufp->chgIData(oldp+2047,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_1),32);
        bufp->chgIData(oldp+2048,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_2),32);
        bufp->chgIData(oldp+2049,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_3),32);
        bufp->chgIData(oldp+2050,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_4),32);
        bufp->chgIData(oldp+2051,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_5),32);
        bufp->chgIData(oldp+2052,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_6),32);
        bufp->chgIData(oldp+2053,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_7),32);
        bufp->chgIData(oldp+2054,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_0),32);
        bufp->chgIData(oldp+2055,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_1),32);
        bufp->chgIData(oldp+2056,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_2),32);
        bufp->chgIData(oldp+2057,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_3),32);
        bufp->chgIData(oldp+2058,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_4),32);
        bufp->chgIData(oldp+2059,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_5),32);
        bufp->chgIData(oldp+2060,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_6),32);
        bufp->chgIData(oldp+2061,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_7),32);
        bufp->chgIData(oldp+2062,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_0),32);
        bufp->chgIData(oldp+2063,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_1),32);
        bufp->chgIData(oldp+2064,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_2),32);
        bufp->chgIData(oldp+2065,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_3),32);
        bufp->chgIData(oldp+2066,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_4),32);
        bufp->chgIData(oldp+2067,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_5),32);
        bufp->chgIData(oldp+2068,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_6),32);
        bufp->chgIData(oldp+2069,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_7),32);
        bufp->chgIData(oldp+2070,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_0),32);
        bufp->chgIData(oldp+2071,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_1),32);
        bufp->chgIData(oldp+2072,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_2),32);
        bufp->chgIData(oldp+2073,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_3),32);
        bufp->chgIData(oldp+2074,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_4),32);
        bufp->chgIData(oldp+2075,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_5),32);
        bufp->chgIData(oldp+2076,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_6),32);
        bufp->chgIData(oldp+2077,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_7),32);
        bufp->chgIData(oldp+2078,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_0),32);
        bufp->chgIData(oldp+2079,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_1),32);
        bufp->chgIData(oldp+2080,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_2),32);
        bufp->chgIData(oldp+2081,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_3),32);
        bufp->chgIData(oldp+2082,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_4),32);
        bufp->chgIData(oldp+2083,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_5),32);
        bufp->chgIData(oldp+2084,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_6),32);
        bufp->chgIData(oldp+2085,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_7),32);
        bufp->chgIData(oldp+2086,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_0),32);
        bufp->chgIData(oldp+2087,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_1),32);
        bufp->chgIData(oldp+2088,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_2),32);
        bufp->chgIData(oldp+2089,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_3),32);
        bufp->chgIData(oldp+2090,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_4),32);
        bufp->chgIData(oldp+2091,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_5),32);
        bufp->chgIData(oldp+2092,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_6),32);
        bufp->chgIData(oldp+2093,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_7),32);
        bufp->chgIData(oldp+2094,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_0),32);
        bufp->chgIData(oldp+2095,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_1),32);
        bufp->chgIData(oldp+2096,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_2),32);
        bufp->chgIData(oldp+2097,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_3),32);
        bufp->chgIData(oldp+2098,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_4),32);
        bufp->chgIData(oldp+2099,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_5),32);
        bufp->chgIData(oldp+2100,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_6),32);
        bufp->chgIData(oldp+2101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_7),32);
        bufp->chgIData(oldp+2102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_0),32);
        bufp->chgIData(oldp+2103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_1),32);
        bufp->chgIData(oldp+2104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_2),32);
        bufp->chgIData(oldp+2105,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_3),32);
        bufp->chgIData(oldp+2106,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_4),32);
        bufp->chgIData(oldp+2107,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_5),32);
        bufp->chgIData(oldp+2108,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_6),32);
        bufp->chgIData(oldp+2109,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_7),32);
        bufp->chgIData(oldp+2110,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_0),32);
        bufp->chgIData(oldp+2111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_1),32);
        bufp->chgIData(oldp+2112,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_2),32);
        bufp->chgIData(oldp+2113,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_3),32);
        bufp->chgIData(oldp+2114,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_4),32);
        bufp->chgIData(oldp+2115,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_5),32);
        bufp->chgIData(oldp+2116,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_6),32);
        bufp->chgIData(oldp+2117,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_7),32);
        bufp->chgIData(oldp+2118,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_0),32);
        bufp->chgIData(oldp+2119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_1),32);
        bufp->chgIData(oldp+2120,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_2),32);
        bufp->chgIData(oldp+2121,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_3),32);
        bufp->chgIData(oldp+2122,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_4),32);
        bufp->chgIData(oldp+2123,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_5),32);
        bufp->chgIData(oldp+2124,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_6),32);
        bufp->chgIData(oldp+2125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_7),32);
        bufp->chgIData(oldp+2126,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_0),32);
        bufp->chgIData(oldp+2127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_1),32);
        bufp->chgIData(oldp+2128,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_2),32);
        bufp->chgIData(oldp+2129,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_3),32);
        bufp->chgIData(oldp+2130,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_4),32);
        bufp->chgIData(oldp+2131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_5),32);
        bufp->chgIData(oldp+2132,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_6),32);
        bufp->chgIData(oldp+2133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_7),32);
        bufp->chgIData(oldp+2134,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_0),32);
        bufp->chgIData(oldp+2135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_1),32);
        bufp->chgIData(oldp+2136,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_2),32);
        bufp->chgIData(oldp+2137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_3),32);
        bufp->chgIData(oldp+2138,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_4),32);
        bufp->chgIData(oldp+2139,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_5),32);
        bufp->chgIData(oldp+2140,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_6),32);
        bufp->chgIData(oldp+2141,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_7),32);
        bufp->chgIData(oldp+2142,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_0),32);
        bufp->chgIData(oldp+2143,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_1),32);
        bufp->chgIData(oldp+2144,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_2),32);
        bufp->chgIData(oldp+2145,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_3),32);
        bufp->chgIData(oldp+2146,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_4),32);
        bufp->chgIData(oldp+2147,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_5),32);
        bufp->chgIData(oldp+2148,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_6),32);
        bufp->chgIData(oldp+2149,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_7),32);
        bufp->chgIData(oldp+2150,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_0),32);
        bufp->chgIData(oldp+2151,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_1),32);
        bufp->chgIData(oldp+2152,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_2),32);
        bufp->chgIData(oldp+2153,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_3),32);
        bufp->chgIData(oldp+2154,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_4),32);
        bufp->chgIData(oldp+2155,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_5),32);
        bufp->chgIData(oldp+2156,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_6),32);
        bufp->chgIData(oldp+2157,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_7),32);
        bufp->chgIData(oldp+2158,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_0),21);
        bufp->chgIData(oldp+2159,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_1),21);
        bufp->chgIData(oldp+2160,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_2),21);
        bufp->chgIData(oldp+2161,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_3),21);
        bufp->chgIData(oldp+2162,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_4),21);
        bufp->chgIData(oldp+2163,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_5),21);
        bufp->chgIData(oldp+2164,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_6),21);
        bufp->chgIData(oldp+2165,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_7),21);
        bufp->chgIData(oldp+2166,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_8),21);
        bufp->chgIData(oldp+2167,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_9),21);
        bufp->chgIData(oldp+2168,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_10),21);
        bufp->chgIData(oldp+2169,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_11),21);
        bufp->chgIData(oldp+2170,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_12),21);
        bufp->chgIData(oldp+2171,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_13),21);
        bufp->chgIData(oldp+2172,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_14),21);
        bufp->chgIData(oldp+2173,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_15),21);
        bufp->chgIData(oldp+2174,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_16),21);
        bufp->chgIData(oldp+2175,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_17),21);
        bufp->chgIData(oldp+2176,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_18),21);
        bufp->chgIData(oldp+2177,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_19),21);
        bufp->chgIData(oldp+2178,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_20),21);
        bufp->chgIData(oldp+2179,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_21),21);
        bufp->chgIData(oldp+2180,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_22),21);
        bufp->chgIData(oldp+2181,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_23),21);
        bufp->chgIData(oldp+2182,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_24),21);
        bufp->chgIData(oldp+2183,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_25),21);
        bufp->chgIData(oldp+2184,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_26),21);
        bufp->chgIData(oldp+2185,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_27),21);
        bufp->chgIData(oldp+2186,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_28),21);
        bufp->chgIData(oldp+2187,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_29),21);
        bufp->chgIData(oldp+2188,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_30),21);
        bufp->chgIData(oldp+2189,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_31),21);
        bufp->chgIData(oldp+2190,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_32),21);
        bufp->chgIData(oldp+2191,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_33),21);
        bufp->chgIData(oldp+2192,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_34),21);
        bufp->chgIData(oldp+2193,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_35),21);
        bufp->chgIData(oldp+2194,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_36),21);
        bufp->chgIData(oldp+2195,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_37),21);
        bufp->chgIData(oldp+2196,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_38),21);
        bufp->chgIData(oldp+2197,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_39),21);
        bufp->chgIData(oldp+2198,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_40),21);
        bufp->chgIData(oldp+2199,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_41),21);
        bufp->chgIData(oldp+2200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_42),21);
        bufp->chgIData(oldp+2201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_43),21);
        bufp->chgIData(oldp+2202,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_44),21);
        bufp->chgIData(oldp+2203,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_45),21);
        bufp->chgIData(oldp+2204,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_46),21);
        bufp->chgIData(oldp+2205,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_47),21);
        bufp->chgIData(oldp+2206,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_48),21);
        bufp->chgIData(oldp+2207,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_49),21);
        bufp->chgIData(oldp+2208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_50),21);
        bufp->chgIData(oldp+2209,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_51),21);
        bufp->chgIData(oldp+2210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_52),21);
        bufp->chgIData(oldp+2211,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_53),21);
        bufp->chgIData(oldp+2212,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_54),21);
        bufp->chgIData(oldp+2213,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_55),21);
        bufp->chgIData(oldp+2214,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_56),21);
        bufp->chgIData(oldp+2215,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_57),21);
        bufp->chgIData(oldp+2216,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_58),21);
        bufp->chgIData(oldp+2217,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_59),21);
        bufp->chgIData(oldp+2218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_60),21);
        bufp->chgIData(oldp+2219,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_61),21);
        bufp->chgIData(oldp+2220,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_62),21);
        bufp->chgIData(oldp+2221,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_63),21);
        bufp->chgIData(oldp+2222,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_0),21);
        bufp->chgIData(oldp+2223,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_1),21);
        bufp->chgIData(oldp+2224,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_2),21);
        bufp->chgIData(oldp+2225,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_3),21);
        bufp->chgIData(oldp+2226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_4),21);
        bufp->chgIData(oldp+2227,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_5),21);
        bufp->chgIData(oldp+2228,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_6),21);
        bufp->chgIData(oldp+2229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_7),21);
        bufp->chgIData(oldp+2230,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_8),21);
        bufp->chgIData(oldp+2231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_9),21);
        bufp->chgIData(oldp+2232,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_10),21);
        bufp->chgIData(oldp+2233,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_11),21);
        bufp->chgIData(oldp+2234,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_12),21);
        bufp->chgIData(oldp+2235,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_13),21);
        bufp->chgIData(oldp+2236,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_14),21);
        bufp->chgIData(oldp+2237,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_15),21);
        bufp->chgIData(oldp+2238,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_16),21);
        bufp->chgIData(oldp+2239,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_17),21);
        bufp->chgIData(oldp+2240,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_18),21);
        bufp->chgIData(oldp+2241,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_19),21);
        bufp->chgIData(oldp+2242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_20),21);
        bufp->chgIData(oldp+2243,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_21),21);
        bufp->chgIData(oldp+2244,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_22),21);
        bufp->chgIData(oldp+2245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_23),21);
        bufp->chgIData(oldp+2246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_24),21);
        bufp->chgIData(oldp+2247,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_25),21);
        bufp->chgIData(oldp+2248,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_26),21);
        bufp->chgIData(oldp+2249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_27),21);
        bufp->chgIData(oldp+2250,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_28),21);
        bufp->chgIData(oldp+2251,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_29),21);
        bufp->chgIData(oldp+2252,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_30),21);
        bufp->chgIData(oldp+2253,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_31),21);
        bufp->chgIData(oldp+2254,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_32),21);
        bufp->chgIData(oldp+2255,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_33),21);
        bufp->chgIData(oldp+2256,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_34),21);
        bufp->chgIData(oldp+2257,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_35),21);
        bufp->chgIData(oldp+2258,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_36),21);
        bufp->chgIData(oldp+2259,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_37),21);
        bufp->chgIData(oldp+2260,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_38),21);
        bufp->chgIData(oldp+2261,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_39),21);
        bufp->chgIData(oldp+2262,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_40),21);
        bufp->chgIData(oldp+2263,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_41),21);
        bufp->chgIData(oldp+2264,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_42),21);
        bufp->chgIData(oldp+2265,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_43),21);
        bufp->chgIData(oldp+2266,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_44),21);
        bufp->chgIData(oldp+2267,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_45),21);
        bufp->chgIData(oldp+2268,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_46),21);
        bufp->chgIData(oldp+2269,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_47),21);
        bufp->chgIData(oldp+2270,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_48),21);
        bufp->chgIData(oldp+2271,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_49),21);
        bufp->chgIData(oldp+2272,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_50),21);
        bufp->chgIData(oldp+2273,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_51),21);
        bufp->chgIData(oldp+2274,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_52),21);
        bufp->chgIData(oldp+2275,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_53),21);
        bufp->chgIData(oldp+2276,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_54),21);
        bufp->chgIData(oldp+2277,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_55),21);
        bufp->chgIData(oldp+2278,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_56),21);
        bufp->chgIData(oldp+2279,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_57),21);
        bufp->chgIData(oldp+2280,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_58),21);
        bufp->chgIData(oldp+2281,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_59),21);
        bufp->chgIData(oldp+2282,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_60),21);
        bufp->chgIData(oldp+2283,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_61),21);
        bufp->chgIData(oldp+2284,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_62),21);
        bufp->chgIData(oldp+2285,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_63),21);
        bufp->chgIData(oldp+2286,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_0),21);
        bufp->chgIData(oldp+2287,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_1),21);
        bufp->chgIData(oldp+2288,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_2),21);
        bufp->chgIData(oldp+2289,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_3),21);
        bufp->chgIData(oldp+2290,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_4),21);
        bufp->chgIData(oldp+2291,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_5),21);
        bufp->chgIData(oldp+2292,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_6),21);
        bufp->chgIData(oldp+2293,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_7),21);
        bufp->chgIData(oldp+2294,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_8),21);
        bufp->chgIData(oldp+2295,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_9),21);
        bufp->chgIData(oldp+2296,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_10),21);
        bufp->chgIData(oldp+2297,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_11),21);
        bufp->chgIData(oldp+2298,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_12),21);
        bufp->chgIData(oldp+2299,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_13),21);
        bufp->chgIData(oldp+2300,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_14),21);
        bufp->chgIData(oldp+2301,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_15),21);
        bufp->chgIData(oldp+2302,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_16),21);
        bufp->chgIData(oldp+2303,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_17),21);
        bufp->chgIData(oldp+2304,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_18),21);
        bufp->chgIData(oldp+2305,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_19),21);
        bufp->chgIData(oldp+2306,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_20),21);
        bufp->chgIData(oldp+2307,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_21),21);
        bufp->chgIData(oldp+2308,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_22),21);
        bufp->chgIData(oldp+2309,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_23),21);
        bufp->chgIData(oldp+2310,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_24),21);
        bufp->chgIData(oldp+2311,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_25),21);
        bufp->chgIData(oldp+2312,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_26),21);
        bufp->chgIData(oldp+2313,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_27),21);
        bufp->chgIData(oldp+2314,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_28),21);
        bufp->chgIData(oldp+2315,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_29),21);
        bufp->chgIData(oldp+2316,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_30),21);
        bufp->chgIData(oldp+2317,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_31),21);
        bufp->chgIData(oldp+2318,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_32),21);
        bufp->chgIData(oldp+2319,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_33),21);
        bufp->chgIData(oldp+2320,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_34),21);
        bufp->chgIData(oldp+2321,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_35),21);
        bufp->chgIData(oldp+2322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_36),21);
        bufp->chgIData(oldp+2323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_37),21);
        bufp->chgIData(oldp+2324,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_38),21);
        bufp->chgIData(oldp+2325,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_39),21);
        bufp->chgIData(oldp+2326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_40),21);
        bufp->chgIData(oldp+2327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_41),21);
        bufp->chgIData(oldp+2328,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_42),21);
        bufp->chgIData(oldp+2329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_43),21);
        bufp->chgIData(oldp+2330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_44),21);
        bufp->chgIData(oldp+2331,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_45),21);
        bufp->chgIData(oldp+2332,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_46),21);
        bufp->chgIData(oldp+2333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_47),21);
        bufp->chgIData(oldp+2334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_48),21);
        bufp->chgIData(oldp+2335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_49),21);
        bufp->chgIData(oldp+2336,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_50),21);
        bufp->chgIData(oldp+2337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_51),21);
        bufp->chgIData(oldp+2338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_52),21);
        bufp->chgIData(oldp+2339,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_53),21);
        bufp->chgIData(oldp+2340,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_54),21);
        bufp->chgIData(oldp+2341,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_55),21);
        bufp->chgIData(oldp+2342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_56),21);
        bufp->chgIData(oldp+2343,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_57),21);
        bufp->chgIData(oldp+2344,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_58),21);
        bufp->chgIData(oldp+2345,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_59),21);
        bufp->chgIData(oldp+2346,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_60),21);
        bufp->chgIData(oldp+2347,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_61),21);
        bufp->chgIData(oldp+2348,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_62),21);
        bufp->chgIData(oldp+2349,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_63),21);
        bufp->chgIData(oldp+2350,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_0),21);
        bufp->chgIData(oldp+2351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_1),21);
        bufp->chgIData(oldp+2352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_2),21);
        bufp->chgIData(oldp+2353,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_3),21);
        bufp->chgIData(oldp+2354,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_4),21);
        bufp->chgIData(oldp+2355,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_5),21);
        bufp->chgIData(oldp+2356,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_6),21);
        bufp->chgIData(oldp+2357,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_7),21);
        bufp->chgIData(oldp+2358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_8),21);
        bufp->chgIData(oldp+2359,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_9),21);
        bufp->chgIData(oldp+2360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_10),21);
        bufp->chgIData(oldp+2361,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_11),21);
        bufp->chgIData(oldp+2362,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_12),21);
        bufp->chgIData(oldp+2363,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_13),21);
        bufp->chgIData(oldp+2364,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_14),21);
        bufp->chgIData(oldp+2365,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_15),21);
        bufp->chgIData(oldp+2366,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_16),21);
        bufp->chgIData(oldp+2367,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_17),21);
        bufp->chgIData(oldp+2368,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_18),21);
        bufp->chgIData(oldp+2369,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_19),21);
        bufp->chgIData(oldp+2370,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_20),21);
        bufp->chgIData(oldp+2371,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_21),21);
        bufp->chgIData(oldp+2372,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_22),21);
        bufp->chgIData(oldp+2373,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_23),21);
        bufp->chgIData(oldp+2374,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_24),21);
        bufp->chgIData(oldp+2375,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_25),21);
        bufp->chgIData(oldp+2376,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_26),21);
        bufp->chgIData(oldp+2377,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_27),21);
        bufp->chgIData(oldp+2378,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_28),21);
        bufp->chgIData(oldp+2379,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_29),21);
        bufp->chgIData(oldp+2380,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_30),21);
        bufp->chgIData(oldp+2381,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_31),21);
        bufp->chgIData(oldp+2382,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_32),21);
        bufp->chgIData(oldp+2383,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_33),21);
        bufp->chgIData(oldp+2384,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_34),21);
        bufp->chgIData(oldp+2385,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_35),21);
        bufp->chgIData(oldp+2386,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_36),21);
        bufp->chgIData(oldp+2387,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_37),21);
        bufp->chgIData(oldp+2388,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_38),21);
        bufp->chgIData(oldp+2389,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_39),21);
        bufp->chgIData(oldp+2390,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_40),21);
        bufp->chgIData(oldp+2391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_41),21);
        bufp->chgIData(oldp+2392,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_42),21);
        bufp->chgIData(oldp+2393,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_43),21);
        bufp->chgIData(oldp+2394,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_44),21);
        bufp->chgIData(oldp+2395,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_45),21);
        bufp->chgIData(oldp+2396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_46),21);
        bufp->chgIData(oldp+2397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_47),21);
        bufp->chgIData(oldp+2398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_48),21);
        bufp->chgIData(oldp+2399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_49),21);
        bufp->chgIData(oldp+2400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_50),21);
        bufp->chgIData(oldp+2401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_51),21);
        bufp->chgIData(oldp+2402,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_52),21);
        bufp->chgIData(oldp+2403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_53),21);
        bufp->chgIData(oldp+2404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_54),21);
        bufp->chgIData(oldp+2405,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_55),21);
        bufp->chgIData(oldp+2406,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_56),21);
        bufp->chgIData(oldp+2407,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_57),21);
        bufp->chgIData(oldp+2408,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_58),21);
        bufp->chgIData(oldp+2409,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_59),21);
        bufp->chgIData(oldp+2410,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_60),21);
        bufp->chgIData(oldp+2411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_61),21);
        bufp->chgIData(oldp+2412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_62),21);
        bufp->chgIData(oldp+2413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_63),21);
        bufp->chgBit(oldp+2414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0));
        bufp->chgBit(oldp+2415,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1));
        bufp->chgBit(oldp+2416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2));
        bufp->chgBit(oldp+2417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3));
        bufp->chgBit(oldp+2418,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4));
        bufp->chgBit(oldp+2419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5));
        bufp->chgBit(oldp+2420,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6));
        bufp->chgBit(oldp+2421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7));
        bufp->chgBit(oldp+2422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8));
        bufp->chgBit(oldp+2423,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9));
        bufp->chgBit(oldp+2424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10));
        bufp->chgBit(oldp+2425,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11));
        bufp->chgBit(oldp+2426,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12));
        bufp->chgBit(oldp+2427,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13));
        bufp->chgBit(oldp+2428,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14));
        bufp->chgBit(oldp+2429,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15));
        bufp->chgBit(oldp+2430,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16));
        bufp->chgBit(oldp+2431,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17));
        bufp->chgBit(oldp+2432,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18));
        bufp->chgBit(oldp+2433,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19));
        bufp->chgBit(oldp+2434,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20));
        bufp->chgBit(oldp+2435,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21));
        bufp->chgBit(oldp+2436,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22));
        bufp->chgBit(oldp+2437,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23));
        bufp->chgBit(oldp+2438,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24));
        bufp->chgBit(oldp+2439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25));
        bufp->chgBit(oldp+2440,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26));
        bufp->chgBit(oldp+2441,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27));
        bufp->chgBit(oldp+2442,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28));
        bufp->chgBit(oldp+2443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29));
        bufp->chgBit(oldp+2444,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30));
        bufp->chgBit(oldp+2445,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31));
        bufp->chgBit(oldp+2446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32));
        bufp->chgBit(oldp+2447,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33));
        bufp->chgBit(oldp+2448,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34));
        bufp->chgBit(oldp+2449,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35));
        bufp->chgBit(oldp+2450,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36));
        bufp->chgBit(oldp+2451,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37));
        bufp->chgBit(oldp+2452,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38));
        bufp->chgBit(oldp+2453,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39));
        bufp->chgBit(oldp+2454,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40));
        bufp->chgBit(oldp+2455,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41));
        bufp->chgBit(oldp+2456,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42));
        bufp->chgBit(oldp+2457,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43));
        bufp->chgBit(oldp+2458,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44));
        bufp->chgBit(oldp+2459,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45));
        bufp->chgBit(oldp+2460,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46));
        bufp->chgBit(oldp+2461,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47));
        bufp->chgBit(oldp+2462,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48));
        bufp->chgBit(oldp+2463,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49));
        bufp->chgBit(oldp+2464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50));
        bufp->chgBit(oldp+2465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51));
        bufp->chgBit(oldp+2466,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52));
        bufp->chgBit(oldp+2467,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53));
        bufp->chgBit(oldp+2468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54));
        bufp->chgBit(oldp+2469,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55));
        bufp->chgBit(oldp+2470,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56));
        bufp->chgBit(oldp+2471,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57));
        bufp->chgBit(oldp+2472,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58));
        bufp->chgBit(oldp+2473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59));
        bufp->chgBit(oldp+2474,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60));
        bufp->chgBit(oldp+2475,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61));
        bufp->chgBit(oldp+2476,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62));
        bufp->chgBit(oldp+2477,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63));
        bufp->chgBit(oldp+2478,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0));
        bufp->chgBit(oldp+2479,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1));
        bufp->chgBit(oldp+2480,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2));
        bufp->chgBit(oldp+2481,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3));
        bufp->chgBit(oldp+2482,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4));
        bufp->chgBit(oldp+2483,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5));
        bufp->chgBit(oldp+2484,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6));
        bufp->chgBit(oldp+2485,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7));
        bufp->chgBit(oldp+2486,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8));
        bufp->chgBit(oldp+2487,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9));
        bufp->chgBit(oldp+2488,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10));
        bufp->chgBit(oldp+2489,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11));
        bufp->chgBit(oldp+2490,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12));
        bufp->chgBit(oldp+2491,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13));
        bufp->chgBit(oldp+2492,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14));
        bufp->chgBit(oldp+2493,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15));
        bufp->chgBit(oldp+2494,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16));
        bufp->chgBit(oldp+2495,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17));
        bufp->chgBit(oldp+2496,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18));
        bufp->chgBit(oldp+2497,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19));
        bufp->chgBit(oldp+2498,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20));
        bufp->chgBit(oldp+2499,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21));
        bufp->chgBit(oldp+2500,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22));
        bufp->chgBit(oldp+2501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23));
        bufp->chgBit(oldp+2502,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24));
        bufp->chgBit(oldp+2503,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25));
        bufp->chgBit(oldp+2504,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26));
        bufp->chgBit(oldp+2505,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27));
        bufp->chgBit(oldp+2506,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28));
        bufp->chgBit(oldp+2507,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29));
        bufp->chgBit(oldp+2508,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30));
        bufp->chgBit(oldp+2509,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31));
        bufp->chgBit(oldp+2510,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32));
        bufp->chgBit(oldp+2511,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33));
        bufp->chgBit(oldp+2512,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34));
        bufp->chgBit(oldp+2513,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35));
        bufp->chgBit(oldp+2514,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36));
        bufp->chgBit(oldp+2515,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37));
        bufp->chgBit(oldp+2516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38));
        bufp->chgBit(oldp+2517,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39));
        bufp->chgBit(oldp+2518,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40));
        bufp->chgBit(oldp+2519,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41));
        bufp->chgBit(oldp+2520,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42));
        bufp->chgBit(oldp+2521,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43));
        bufp->chgBit(oldp+2522,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44));
        bufp->chgBit(oldp+2523,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45));
        bufp->chgBit(oldp+2524,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46));
        bufp->chgBit(oldp+2525,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47));
        bufp->chgBit(oldp+2526,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48));
        bufp->chgBit(oldp+2527,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49));
        bufp->chgBit(oldp+2528,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50));
        bufp->chgBit(oldp+2529,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51));
        bufp->chgBit(oldp+2530,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52));
        bufp->chgBit(oldp+2531,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53));
        bufp->chgBit(oldp+2532,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54));
        bufp->chgBit(oldp+2533,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55));
        bufp->chgBit(oldp+2534,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56));
        bufp->chgBit(oldp+2535,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57));
        bufp->chgBit(oldp+2536,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58));
        bufp->chgBit(oldp+2537,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59));
        bufp->chgBit(oldp+2538,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60));
        bufp->chgBit(oldp+2539,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61));
        bufp->chgBit(oldp+2540,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62));
        bufp->chgBit(oldp+2541,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63));
        bufp->chgBit(oldp+2542,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0));
        bufp->chgBit(oldp+2543,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1));
        bufp->chgBit(oldp+2544,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2));
        bufp->chgBit(oldp+2545,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3));
        bufp->chgBit(oldp+2546,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4));
        bufp->chgBit(oldp+2547,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5));
        bufp->chgBit(oldp+2548,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6));
        bufp->chgBit(oldp+2549,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7));
        bufp->chgBit(oldp+2550,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8));
        bufp->chgBit(oldp+2551,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9));
        bufp->chgBit(oldp+2552,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10));
        bufp->chgBit(oldp+2553,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11));
        bufp->chgBit(oldp+2554,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12));
        bufp->chgBit(oldp+2555,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13));
        bufp->chgBit(oldp+2556,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14));
        bufp->chgBit(oldp+2557,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15));
        bufp->chgBit(oldp+2558,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16));
        bufp->chgBit(oldp+2559,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17));
        bufp->chgBit(oldp+2560,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18));
        bufp->chgBit(oldp+2561,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19));
        bufp->chgBit(oldp+2562,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20));
        bufp->chgBit(oldp+2563,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21));
        bufp->chgBit(oldp+2564,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22));
        bufp->chgBit(oldp+2565,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23));
        bufp->chgBit(oldp+2566,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24));
        bufp->chgBit(oldp+2567,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25));
        bufp->chgBit(oldp+2568,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26));
        bufp->chgBit(oldp+2569,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27));
        bufp->chgBit(oldp+2570,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28));
        bufp->chgBit(oldp+2571,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29));
        bufp->chgBit(oldp+2572,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30));
        bufp->chgBit(oldp+2573,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31));
        bufp->chgBit(oldp+2574,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32));
        bufp->chgBit(oldp+2575,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33));
        bufp->chgBit(oldp+2576,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34));
        bufp->chgBit(oldp+2577,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35));
        bufp->chgBit(oldp+2578,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36));
        bufp->chgBit(oldp+2579,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37));
        bufp->chgBit(oldp+2580,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38));
        bufp->chgBit(oldp+2581,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39));
        bufp->chgBit(oldp+2582,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40));
        bufp->chgBit(oldp+2583,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41));
        bufp->chgBit(oldp+2584,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42));
        bufp->chgBit(oldp+2585,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43));
        bufp->chgBit(oldp+2586,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44));
        bufp->chgBit(oldp+2587,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45));
        bufp->chgBit(oldp+2588,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46));
        bufp->chgBit(oldp+2589,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47));
        bufp->chgBit(oldp+2590,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48));
        bufp->chgBit(oldp+2591,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49));
        bufp->chgBit(oldp+2592,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50));
        bufp->chgBit(oldp+2593,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51));
        bufp->chgBit(oldp+2594,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52));
        bufp->chgBit(oldp+2595,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53));
        bufp->chgBit(oldp+2596,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54));
        bufp->chgBit(oldp+2597,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55));
        bufp->chgBit(oldp+2598,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56));
        bufp->chgBit(oldp+2599,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57));
        bufp->chgBit(oldp+2600,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58));
        bufp->chgBit(oldp+2601,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59));
        bufp->chgBit(oldp+2602,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60));
        bufp->chgBit(oldp+2603,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61));
        bufp->chgBit(oldp+2604,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62));
        bufp->chgBit(oldp+2605,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63));
        bufp->chgBit(oldp+2606,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0));
        bufp->chgBit(oldp+2607,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1));
        bufp->chgBit(oldp+2608,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2));
        bufp->chgBit(oldp+2609,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3));
        bufp->chgBit(oldp+2610,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4));
        bufp->chgBit(oldp+2611,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5));
        bufp->chgBit(oldp+2612,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6));
        bufp->chgBit(oldp+2613,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7));
        bufp->chgBit(oldp+2614,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8));
        bufp->chgBit(oldp+2615,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9));
        bufp->chgBit(oldp+2616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10));
        bufp->chgBit(oldp+2617,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11));
        bufp->chgBit(oldp+2618,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12));
        bufp->chgBit(oldp+2619,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13));
        bufp->chgBit(oldp+2620,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14));
        bufp->chgBit(oldp+2621,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15));
        bufp->chgBit(oldp+2622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16));
        bufp->chgBit(oldp+2623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17));
        bufp->chgBit(oldp+2624,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18));
        bufp->chgBit(oldp+2625,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19));
        bufp->chgBit(oldp+2626,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20));
        bufp->chgBit(oldp+2627,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21));
        bufp->chgBit(oldp+2628,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22));
        bufp->chgBit(oldp+2629,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23));
        bufp->chgBit(oldp+2630,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24));
        bufp->chgBit(oldp+2631,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25));
        bufp->chgBit(oldp+2632,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26));
        bufp->chgBit(oldp+2633,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27));
        bufp->chgBit(oldp+2634,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28));
        bufp->chgBit(oldp+2635,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29));
        bufp->chgBit(oldp+2636,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30));
        bufp->chgBit(oldp+2637,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31));
        bufp->chgBit(oldp+2638,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32));
        bufp->chgBit(oldp+2639,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33));
        bufp->chgBit(oldp+2640,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34));
        bufp->chgBit(oldp+2641,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35));
        bufp->chgBit(oldp+2642,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36));
        bufp->chgBit(oldp+2643,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37));
        bufp->chgBit(oldp+2644,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38));
        bufp->chgBit(oldp+2645,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39));
        bufp->chgBit(oldp+2646,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40));
        bufp->chgBit(oldp+2647,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41));
        bufp->chgBit(oldp+2648,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42));
        bufp->chgBit(oldp+2649,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43));
        bufp->chgBit(oldp+2650,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44));
        bufp->chgBit(oldp+2651,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45));
        bufp->chgBit(oldp+2652,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46));
        bufp->chgBit(oldp+2653,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47));
        bufp->chgBit(oldp+2654,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48));
        bufp->chgBit(oldp+2655,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49));
        bufp->chgBit(oldp+2656,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50));
        bufp->chgBit(oldp+2657,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51));
        bufp->chgBit(oldp+2658,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52));
        bufp->chgBit(oldp+2659,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53));
        bufp->chgBit(oldp+2660,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54));
        bufp->chgBit(oldp+2661,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55));
        bufp->chgBit(oldp+2662,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56));
        bufp->chgBit(oldp+2663,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57));
        bufp->chgBit(oldp+2664,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58));
        bufp->chgBit(oldp+2665,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59));
        bufp->chgBit(oldp+2666,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60));
        bufp->chgBit(oldp+2667,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61));
        bufp->chgBit(oldp+2668,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62));
        bufp->chgBit(oldp+2669,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63));
        bufp->chgIData(oldp+2670,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_reg),21);
        bufp->chgCData(oldp+2671,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg),6);
        bufp->chgCData(oldp+2672,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg),5);
        bufp->chgIData(oldp+2673,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__line_base),32);
        bufp->chgIData(oldp+2674,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg),32);
        bufp->chgBit(oldp+2675,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg));
        bufp->chgIData(oldp+2676,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__bypass_inst_reg),32);
        bufp->chgIData(oldp+2677,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__bypass_pc_reg),32);
        bufp->chgBit(oldp+2678,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass));
        bufp->chgCData(oldp+2679,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way),2);
        bufp->chgCData(oldp+2680,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt),3);
        bufp->chgCData(oldp+2681,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state),3);
        bufp->chgIData(oldp+2682,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp),21);
        bufp->chgBit(oldp+2683,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0));
        bufp->chgBit(oldp+2684,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit0));
        bufp->chgIData(oldp+2685,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1),21);
        bufp->chgBit(oldp+2686,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2));
        bufp->chgBit(oldp+2687,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit1));
        bufp->chgIData(oldp+2688,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3),21);
        bufp->chgBit(oldp+2689,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4));
        bufp->chgBit(oldp+2690,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit2));
        bufp->chgIData(oldp+2691,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5),21);
        bufp->chgBit(oldp+2692,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6));
        bufp->chgBit(oldp+2693,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit3));
        bufp->chgBit(oldp+2694,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit));
        bufp->chgIData(oldp+2695,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7),32);
        bufp->chgIData(oldp+2696,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8),32);
        bufp->chgIData(oldp+2697,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9),32);
        bufp->chgIData(oldp+2698,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10),32);
        bufp->chgIData(oldp+2699,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11),32);
        bufp->chgIData(oldp+2700,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12),32);
        bufp->chgIData(oldp+2701,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13),32);
        bufp->chgIData(oldp+2702,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14),32);
        bufp->chgIData(oldp+2703,(((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                    ? ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13)
                                        : ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11))
                                    : ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9)
                                        : ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7)))),32);
        bufp->chgIData(oldp+2704,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16),32);
        bufp->chgIData(oldp+2705,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17),32);
        bufp->chgIData(oldp+2706,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18),32);
        bufp->chgIData(oldp+2707,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19),32);
        bufp->chgIData(oldp+2708,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20),32);
        bufp->chgIData(oldp+2709,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21),32);
        bufp->chgIData(oldp+2710,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22),32);
        bufp->chgIData(oldp+2711,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23),32);
        bufp->chgIData(oldp+2712,(((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                    ? ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22)
                                        : ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20))
                                    : ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18)
                                        : ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16)))),32);
        bufp->chgIData(oldp+2713,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25),32);
        bufp->chgIData(oldp+2714,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26),32);
        bufp->chgIData(oldp+2715,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27),32);
        bufp->chgIData(oldp+2716,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28),32);
        bufp->chgIData(oldp+2717,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29),32);
        bufp->chgIData(oldp+2718,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30),32);
        bufp->chgIData(oldp+2719,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31),32);
        bufp->chgIData(oldp+2720,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32),32);
        bufp->chgIData(oldp+2721,(((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                    ? ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31)
                                        : ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29))
                                    : ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27)
                                        : ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25)))),32);
        bufp->chgIData(oldp+2722,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34),32);
        bufp->chgIData(oldp+2723,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35),32);
        bufp->chgIData(oldp+2724,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36),32);
        bufp->chgIData(oldp+2725,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37),32);
        bufp->chgIData(oldp+2726,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38),32);
        bufp->chgIData(oldp+2727,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39),32);
        bufp->chgIData(oldp+2728,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40),32);
        bufp->chgIData(oldp+2729,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41),32);
        bufp->chgIData(oldp+2730,(((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                    ? ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40)
                                        : ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38))
                                    : ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                        ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36)
                                        : ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34)))),32);
        bufp->chgCData(oldp+2731,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__rand_way),2);
        bufp->chgBit(oldp+2732,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0));
        bufp->chgBit(oldp+2733,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_1));
        bufp->chgBit(oldp+2734,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_2));
        bufp->chgBit(oldp+2735,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_3));
        bufp->chgBit(oldp+2736,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4));
        bufp->chgBit(oldp+2737,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5));
        bufp->chgBit(oldp+2738,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6));
        bufp->chgBit(oldp+2739,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_7));
        bufp->chgBit(oldp+2740,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_in_ready));
        bufp->chgBit(oldp+2741,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu2__DOT__resp_valid_reg));
        bufp->chgIData(oldp+2742,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu2__DOT__pc_reg),32);
        bufp->chgCData(oldp+2743,((0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2744,((0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst 
                                            >> 0x14U))),5);
        bufp->chgIData(oldp+2745,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst),32);
        bufp->chgIData(oldp+2746,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__imm_i),32);
        bufp->chgBit(oldp+2747,((0x17U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+2748,((0x37U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+2749,((0x13U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+2750,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__is_load));
        bufp->chgBit(oldp+2751,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__is_srai));
        bufp->chgBit(oldp+2752,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__is_srli));
        bufp->chgBit(oldp+2753,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__is_slli));
        bufp->chgBit(oldp+2754,((0x33U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+2755,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__is_branch));
        bufp->chgBit(oldp+2756,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__is_store));
        bufp->chgBit(oldp+2757,((0x73U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))));
        bufp->chgBit(oldp+2758,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu1__DOT__out_valid));
        bufp->chgBit(oldp+2759,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu2__DOT__kill_reg));
        bufp->chgBit(oldp+2760,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__state))));
        bufp->chgBit(oldp+2761,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state)) 
                                 & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state))
                                     ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__out_sent)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__req_sent))
                                     : (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state))))));
        bufp->chgIData(oldp+2762,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__pc),32);
        bufp->chgCData(oldp+2763,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__rd_addr),5);
        bufp->chgBit(oldp+2764,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__rd_en));
        bufp->chgIData(oldp+2765,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__csr_wdata),32);
        bufp->chgBit(oldp+2766,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__csr_wen));
        bufp->chgSData(oldp+2767,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__csr_waddr),12);
        bufp->chgIData(oldp+2768,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__csr_rdata),32);
        bufp->chgBit(oldp+2769,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_csrrw));
        bufp->chgBit(oldp+2770,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_csrrs));
        bufp->chgBit(oldp+2771,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_load));
        bufp->chgBit(oldp+2772,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_store));
        bufp->chgBit(oldp+2773,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_lb));
        bufp->chgBit(oldp+2774,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_lbu));
        bufp->chgBit(oldp+2775,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_lh));
        bufp->chgBit(oldp+2776,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_lhu));
        bufp->chgBit(oldp+2777,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_jalr));
        bufp->chgBit(oldp+2778,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_jal));
        bufp->chgIData(oldp+2779,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__rs2_data),32);
        bufp->chgBit(oldp+2780,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_sw));
        bufp->chgBit(oldp+2781,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_sb));
        bufp->chgBit(oldp+2782,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_sh));
        bufp->chgCData(oldp+2783,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state),2);
        bufp->chgBit(oldp+2784,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__req_sent));
        bufp->chgBit(oldp+2785,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__out_sent));
        bufp->chgBit(oldp+2786,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__state))));
        bufp->chgBit(oldp+2787,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__io_out_valid_0));
        bufp->chgIData(oldp+2788,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__pc),32);
        bufp->chgIData(oldp+2789,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__addr),32);
        bufp->chgCData(oldp+2790,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__rd_addr),5);
        bufp->chgBit(oldp+2791,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__rd_en));
        bufp->chgIData(oldp+2792,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__mem_data),32);
        bufp->chgBit(oldp+2793,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_load));
        bufp->chgBit(oldp+2794,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_jalr));
        bufp->chgBit(oldp+2795,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_jal));
        bufp->chgIData(oldp+2796,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__csr_wdata),32);
        bufp->chgBit(oldp+2797,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__csr_wen));
        bufp->chgSData(oldp+2798,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__csr_waddr),12);
        bufp->chgIData(oldp+2799,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__csr_rdata),32);
        bufp->chgBit(oldp+2800,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_csrrw));
        bufp->chgBit(oldp+2801,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_csrrs));
        bufp->chgCData(oldp+2802,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__state),2);
        bufp->chgBit(oldp+2803,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_lb));
        bufp->chgBit(oldp+2804,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_lbu));
        bufp->chgBit(oldp+2805,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_lh));
        bufp->chgBit(oldp+2806,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_lhu));
        bufp->chgCData(oldp+2807,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp),8);
        bufp->chgSData(oldp+2808,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__halfData),16);
        bufp->chgCData(oldp+2809,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__rd_addr),5);
        bufp->chgIData(oldp+2810,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___wb_io_rd_data),32);
        bufp->chgBit(oldp+2811,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__rd_en));
        bufp->chgIData(oldp+2812,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__regfile__DOT__regs_0),32);
        bufp->chgIData(oldp+2813,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp),32);
        bufp->chgIData(oldp+2814,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp_0),32);
        bufp->chgIData(oldp+2815,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__pc),32);
        bufp->chgIData(oldp+2816,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__addr),32);
        bufp->chgIData(oldp+2817,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__mem_data),32);
        bufp->chgBit(oldp+2818,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_load));
        bufp->chgBit(oldp+2819,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_jalr));
        bufp->chgBit(oldp+2820,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_jal));
        bufp->chgIData(oldp+2821,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__csr_rdata),32);
        bufp->chgBit(oldp+2822,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_csrrw));
        bufp->chgBit(oldp+2823,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_csrrs));
        bufp->chgCData(oldp+2824,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__state),2);
        bufp->chgCData(oldp+2825,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__state))
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT___GEN)
                                        ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__state))
                                    : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__state))
                                        ? 2U : ((2U 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__state))
                                                 ? 0U
                                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__state))))),2);
        bufp->chgBit(oldp+2826,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2827,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2828,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2829,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+2830,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+2831,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+2832,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+2833,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+2834,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+2835,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgCData(oldp+2836,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
        bufp->chgCData(oldp+2837,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
        bufp->chgCData(oldp+2838,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
        bufp->chgCData(oldp+2839,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
        bufp->chgCData(oldp+2840,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
        bufp->chgCData(oldp+2841,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+2842,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+2843,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+2844,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+2845,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+2846,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+2847,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+2848,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+2849,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+2850,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+2851,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+2852,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+2853,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+2854,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+2855,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+2856,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+2857,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+2858,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+2859,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+2860,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+2861,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+2862,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+2863,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+2864,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+2865,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+2866,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+2867,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+2868,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+2869,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+2870,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+2871,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+2872,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U] 
                     | vlSelfRef.__Vm_traceActivity
                     [8U]))) {
        bufp->chgBit(oldp+2873,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
        bufp->chgBit(oldp+2874,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_bready_0) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                     ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                        >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
        bufp->chgBit(oldp+2875,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_bready_0) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
        bufp->chgCData(oldp+2876,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
                                    ? (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                             | (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                     << 0x1eU) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                       << 0x1cU)) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                       << 0x1aU) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                         << 0x18U))) 
                                                  | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                       << 0x16U) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U)) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                         << 0x12U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                           << 0x10U)))) 
                                                 | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                       << 0xeU) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                         << 0xcU)) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                         << 0xaU) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                           << 8U))) 
                                                    | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                         << 6U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                           << 4U)) 
                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                           << 2U) 
                                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0))))) 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid), 1U)))))
                                    : 0U)),2);
        bufp->chgCData(oldp+2877,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                    ? (3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                               ? (IData)(
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                                          [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__deq_ptr_value] 
                                                          >> 1U))
                                               : 0U) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))
                                    : 0U)),2);
        bufp->chgBit(oldp+2878,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))));
        bufp->chgBit(oldp+2879,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
        bufp->chgBit(oldp+2880,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)))));
        bufp->chgBit(oldp+2881,((0x7fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                            & (((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                               >> 1U)))));
        bufp->chgBit(oldp+2882,((0x3fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                            & (((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                               >> 2U)))));
        bufp->chgBit(oldp+2883,((0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                            & (((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                               >> 3U)))));
        bufp->chgBit(oldp+2884,((0xfffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                              >> 4U)))));
        bufp->chgBit(oldp+2885,((0x7ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                              >> 5U)))));
        bufp->chgBit(oldp+2886,((0x3ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                              >> 6U)))));
        bufp->chgBit(oldp+2887,((0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                              >> 7U)))));
        bufp->chgBit(oldp+2888,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                             >> 8U)))));
        bufp->chgBit(oldp+2889,((0x7fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                             >> 9U)))));
        bufp->chgBit(oldp+2890,((0x3fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+2891,((0x1fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                             >> 0xbU)))));
        bufp->chgBit(oldp+2892,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+2893,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                          >> 0xdU)))));
        bufp->chgBit(oldp+2894,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                          >> 0xeU)))));
        bufp->chgBit(oldp+2895,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 0xfU))));
        bufp->chgIData(oldp+2896,(((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                                    ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata)),32);
        bufp->chgIData(oldp+2897,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7)
                                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint)
                                             ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)
                                                 ? 
                                                ((0x200bff8U 
                                                  == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low
                                                  : 
                                                 ((0x200bffcU 
                                                   == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high
                                                   : 0U))
                                                 : 0U)
                                             : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)
                                                 ? 0U
                                                 : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata)))),32);
        bufp->chgBit(oldp+2898,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid))));
        bufp->chgBit(oldp+2899,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                                 & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid)
                                     : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_5) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid))))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+2900,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck));
        bufp->chgCData(oldp+2901,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
        bufp->chgBit(oldp+2902,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
        bufp->chgCData(oldp+2903,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
        bufp->chgIData(oldp+2904,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                  [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
        bufp->chgBit(oldp+2905,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
        bufp->chgBit(oldp+2906,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
        bufp->chgBit(oldp+2907,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+2908,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgCData(oldp+2909,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                    ? 0xeU : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                               ? 0xbU
                                               : (0xfU 
                                                  & ((2U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0x14U)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 0x10U)
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                        ? 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                        >> 0xcU)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                         ? 
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                         >> 8U)
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                          >> 4U)
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                           : 0U)))))))))),4);
        bufp->chgBit(oldp+2910,((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+2911,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+2912,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+2913,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+2914,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qi_ce_n)))));
        bufp->chgBit(oldp+2915,((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
        bufp->chgBit(oldp+2916,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qi_sck));
        bufp->chgBit(oldp+2917,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qi_ce_n));
        bufp->chgBit(oldp+2918,((0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgCData(oldp+2919,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
        bufp->chgBit(oldp+2920,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
        bufp->chgCData(oldp+2921,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgIData(oldp+2922,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgCData(oldp+2923,((3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                          >> 1U) - (IData)(3U)))),2);
        bufp->chgBit(oldp+2924,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
        bufp->chgCData(oldp+2925,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+2926,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgBit(oldp+2927,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QI__DOT__state));
        bufp->chgBit(oldp+2928,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
        bufp->chgIData(oldp+2929,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
        bufp->chgIData(oldp+2930,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_read_data_q),32);
        bufp->chgBit(oldp+2931,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
        bufp->chgIData(oldp+2932,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
        bufp->chgCData(oldp+2933,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
        bufp->chgIData(oldp+2934,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
        bufp->chgBit(oldp+2935,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
        bufp->chgBit(oldp+2936,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
        bufp->chgCData(oldp+2937,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
        bufp->chgCData(oldp+2938,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
        bufp->chgCData(oldp+2939,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
        bufp->chgBit(oldp+2940,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
        bufp->chgBit(oldp+2941,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
        bufp->chgBit(oldp+2942,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
        bufp->chgBit(oldp+2943,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgBit(oldp+2944,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgCData(oldp+2945,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
                                  [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr]),6);
        bufp->chgBit(oldp+2946,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0)) 
                                 & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
        bufp->chgBit(oldp+2947,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0))));
        bufp->chgBit(oldp+2948,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgBit(oldp+2949,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
        bufp->chgBit(oldp+2950,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
        bufp->chgCData(oldp+2951,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
        bufp->chgCData(oldp+2952,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
        bufp->chgCData(oldp+2953,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
        bufp->chgCData(oldp+2954,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
        bufp->chgCData(oldp+2955,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
        bufp->chgCData(oldp+2956,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
        bufp->chgCData(oldp+2957,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
        bufp->chgBit(oldp+2958,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgIData(oldp+2959,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
        bufp->chgIData(oldp+2960,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
        bufp->chgIData(oldp+2961,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
        bufp->chgIData(oldp+2962,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
        bufp->chgCData(oldp+2963,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
        bufp->chgCData(oldp+2964,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
        bufp->chgCData(oldp+2965,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
        bufp->chgBit(oldp+2966,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
        bufp->chgIData(oldp+2967,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__wr_data_q),32);
        bufp->chgCData(oldp+2968,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__wr_mask_q),4);
        bufp->chgBit(oldp+2969,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
        bufp->chgCData(oldp+2970,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
        bufp->chgCData(oldp+2971,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
        bufp->chgCData(oldp+2972,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
        bufp->chgIData(oldp+2973,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
        bufp->chgIData(oldp+2974,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
        bufp->chgIData(oldp+2975,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
        bufp->chgCData(oldp+2976,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
        bufp->chgIData(oldp+2977,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata),32);
        bufp->chgSData(oldp+2978,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgCData(oldp+2979,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+2980,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+2984,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgSData(oldp+2985,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+2986,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+2987,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+2988,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 1U)))));
        bufp->chgBit(oldp+2989,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+2990,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+2991,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U))));
        bufp->chgBit(oldp+2992,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgBit(oldp+2993,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+2994,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+2995,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+2996,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+2997,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+2998,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgCData(oldp+2999,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgSData(oldp+3000,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgCData(oldp+3001,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+3002,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+3003,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+3004,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgSData(oldp+3005,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgCData(oldp+3006,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+3007,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+3008,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+3009,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                       >> 7U))));
        bufp->chgBit(oldp+3010,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 4U))));
        bufp->chgBit(oldp+3011,((IData)((0x10U != (0x12U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+3012,((IData)((0x11U == (0x11U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+3013,((IData)((0x14U == (0x14U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+3014,((IData)((0x18U == (0x18U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgCData(oldp+3015,((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                      << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                << 6U)) 
                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                        << 5U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U))) 
                                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                        << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                          << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))),8);
        bufp->chgBit(oldp+3016,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+3017,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+3018,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2));
        bufp->chgBit(oldp+3019,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3));
        bufp->chgBit(oldp+3020,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4));
        bufp->chgBit(oldp+3021,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+3022,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+3023,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+3024,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+3025,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+3026,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+3027,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+3028,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+3029,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+3030,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+3031,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+3032,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+3033,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+3034,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+3035,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+3036,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+3037,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+3038,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+3039,((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                [1U] 
                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [2U] 
                                                   | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [3U] 
                                                      | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [4U] 
                                                         | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [5U] 
                                                            | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [6U] 
                                                               | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [7U] 
                                                                  | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [8U] 
                                                                     | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [9U] 
                                                                        | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xaU] 
                                                                           | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xbU] 
                                                                              | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xcU] 
                                                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xdU] 
                                                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
        bufp->chgBit(oldp+3040,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
        bufp->chgCData(oldp+3041,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgCData(oldp+3042,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+3043,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+3044,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgSData(oldp+3045,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+3046,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
        bufp->chgCData(oldp+3047,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+3048,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
        bufp->chgBit(oldp+3049,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
        bufp->chgBit(oldp+3050,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
        bufp->chgCData(oldp+3051,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+3052,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+3053,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+3054,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+3055,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+3056,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+3057,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+3058,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+3059,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+3060,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+3061,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+3062,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+3063,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+3064,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+3065,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+3066,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+3067,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+3068,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+3069,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+3070,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+3071,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+3072,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+3073,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+3074,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+3075,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+3076,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+3077,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+3078,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+3079,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+3080,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+3081,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+3082,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+3083,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+3084,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+3085,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+3086,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+3087,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+3088,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+3089,((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+3090,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+3091,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+3092,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                           - (IData)(1U)))),4);
        bufp->chgSData(oldp+3093,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+3094,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                            >> 2U))),8);
        bufp->chgCData(oldp+3095,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+3096,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+3097,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+3098,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+3099,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+3100,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+3101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+3102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+3103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+3104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+3105,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+3106,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+3107,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+3108,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+3109,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+3110,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+3111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+3112,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+3113,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+3114,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0U]),3);
        bufp->chgCData(oldp+3115,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [1U]),3);
        bufp->chgCData(oldp+3116,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [2U]),3);
        bufp->chgCData(oldp+3117,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [3U]),3);
        bufp->chgCData(oldp+3118,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [4U]),3);
        bufp->chgCData(oldp+3119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [5U]),3);
        bufp->chgCData(oldp+3120,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [6U]),3);
        bufp->chgCData(oldp+3121,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [7U]),3);
        bufp->chgCData(oldp+3122,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [8U]),3);
        bufp->chgCData(oldp+3123,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [9U]),3);
        bufp->chgCData(oldp+3124,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xaU]),3);
        bufp->chgCData(oldp+3125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xbU]),3);
        bufp->chgCData(oldp+3126,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xcU]),3);
        bufp->chgCData(oldp+3127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xdU]),3);
        bufp->chgCData(oldp+3128,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xeU]),3);
        bufp->chgCData(oldp+3129,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xfU]),3);
        bufp->chgCData(oldp+3130,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                            >> 3U))),8);
        bufp->chgCData(oldp+3131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+3132,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+3133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+3134,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+3135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+3136,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+3137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+3138,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+3139,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+3140,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+3141,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        bufp->chgBit(oldp+3142,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                          >> 3U)))));
        bufp->chgBit(oldp+3143,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                          >> 2U)))));
        bufp->chgBit(oldp+3144,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                          >> 1U)))));
        bufp->chgBit(oldp+3145,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)))));
        bufp->chgCData(oldp+3146,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__mem1_ext__W0_mask),2);
        bufp->chgCData(oldp+3147,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__mem2_ext__W0_mask),2);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgSData(oldp+3148,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__modeReg),13);
        bufp->chgBit(oldp+3149,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__rowOpen_0));
        bufp->chgBit(oldp+3150,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__rowOpen_1));
        bufp->chgBit(oldp+3151,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__rowOpen_2));
        bufp->chgBit(oldp+3152,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__rowOpen_3));
        bufp->chgSData(oldp+3153,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__activeRow_0),13);
        bufp->chgSData(oldp+3154,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__activeRow_1),13);
        bufp->chgSData(oldp+3155,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__activeRow_2),13);
        bufp->chgSData(oldp+3156,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__activeRow_3),13);
        bufp->chgBit(oldp+3157,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_active));
        bufp->chgBit(oldp+3158,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_is_read));
        bufp->chgCData(oldp+3159,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_bank),2);
        bufp->chgSData(oldp+3160,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_row),13);
        bufp->chgSData(oldp+3161,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_col),9);
        bufp->chgCData(oldp+3162,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_remain),3);
        bufp->chgCData(oldp+3163,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__cas_count),3);
        bufp->chgIData(oldp+3164,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___addr_T_4),24);
        bufp->chgCData(oldp+3165,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__unnamedblk1__DOT__unnamedblk2__DOT__burst_length),4);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+3166,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__bitCnt) 
                                           >> 3U)) 
                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__sendReg) 
                                          >> 7U)))));
        bufp->chgCData(oldp+3167,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__sendReg),8);
        bufp->chgCData(oldp+3168,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__bitCnt),4);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+3169,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state),3);
        bufp->chgCData(oldp+3170,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter),8);
        bufp->chgCData(oldp+3171,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+3172,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr),24);
        bufp->chgIData(oldp+3173,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data),32);
        bufp->chgBit(oldp+3174,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+3175,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
        bufp->chgBit(oldp+3176,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
        bufp->chgBit(oldp+3177,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
        bufp->chgBit(oldp+3178,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite));
        bufp->chgIData(oldp+3179,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
        bufp->chgCData(oldp+3180,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
        bufp->chgBit(oldp+3181,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
        bufp->chgBit(oldp+3182,((IData)(((0x20000000U 
                                          == (0x30000000U 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)))));
        bufp->chgBit(oldp+3183,((IData)(((0x20000000U 
                                          == (0x30000000U 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                         & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
        bufp->chgIData(oldp+3184,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
        bufp->chgBit(oldp+3185,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+3186,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                 & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgIData(oldp+3187,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
        bufp->chgBit(oldp+3188,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+3189,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                 & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+3190,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
        bufp->chgBit(oldp+3191,((IData)(((0U == (0x30000000U 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                         & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
        bufp->chgBit(oldp+3192,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
        bufp->chgBit(oldp+3193,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
        bufp->chgBit(oldp+3194,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
        bufp->chgBit(oldp+3195,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+3196,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                                 & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+3197,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+3198,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+3199,((0U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+3200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+3201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+3202,((2U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+3203,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
        bufp->chgCData(oldp+3204,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp),2);
        bufp->chgBit(oldp+3205,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
        bufp->chgCData(oldp+3206,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
        bufp->chgCData(oldp+3207,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U)),2);
        bufp->chgBit(oldp+3208,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
        bufp->chgCData(oldp+3209,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
        bufp->chgIData(oldp+3210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
        bufp->chgCData(oldp+3211,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
        bufp->chgBit(oldp+3212,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
        bufp->chgIData(oldp+3213,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
        bufp->chgBit(oldp+3214,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+3215,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
        bufp->chgQData(oldp+3216,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                    << 0x2bU) | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                                  << 0xbU) 
                                                 | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
        bufp->chgBit(oldp+3218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+3219,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
        bufp->chgCData(oldp+3220,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0),4);
        bufp->chgIData(oldp+3221,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
        bufp->chgCData(oldp+3222,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize),3);
        bufp->chgBit(oldp+3223,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
        bufp->chgIData(oldp+3224,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_write_data_w),32);
        bufp->chgBit(oldp+3225,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast));
        bufp->chgBit(oldp+3226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
        bufp->chgBit(oldp+3227,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
        bufp->chgBit(oldp+3228,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
        bufp->chgBit(oldp+3229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
        bufp->chgIData(oldp+3230,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+3231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+3232,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
        bufp->chgBit(oldp+3233,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+3234,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
        bufp->chgBit(oldp+3235,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+3236,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
        bufp->chgIData(oldp+3237,((0xfffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
        bufp->chgBit(oldp+3238,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                    >> 2U))));
        bufp->chgBit(oldp+3239,((0x7800U == (0x7fffU 
                                             & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0xdU)))));
        bufp->chgSData(oldp+3240,((0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 2U))),11);
        bufp->chgBit(oldp+3241,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
        bufp->chgBit(oldp+3242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+3243,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag));
        bufp->chgSData(oldp+3244,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0)))),16);
        bufp->chgBit(oldp+3245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
        bufp->chgBit(oldp+3246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
        bufp->chgBit(oldp+3247,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
        bufp->chgCData(oldp+3248,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
        bufp->chgBit(oldp+3249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
        bufp->chgCData(oldp+3250,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
        bufp->chgBit(oldp+3251,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
        bufp->chgBit(oldp+3252,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                                 & (0U == ((6U & (4U 
                                                  ^ 
                                                  (0x1eU 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1bU)))) 
                                           | (1U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x18U)))))));
        bufp->chgBit(oldp+3253,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                    >> 1U))));
        bufp->chgBit(oldp+3254,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+3255,((0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+3256,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awTag_hi_1));
        bufp->chgSData(oldp+3257,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
        bufp->chgBit(oldp+3258,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+3259,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
        bufp->chgBit(oldp+3260,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgCData(oldp+3261,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
        bufp->chgBit(oldp+3262,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
        bufp->chgCData(oldp+3263,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
        bufp->chgIData(oldp+3264,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
        bufp->chgBit(oldp+3265,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+3266,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgCData(oldp+3267,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+3268,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+3269,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgCData(oldp+3270,((0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3271,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                   >> 0x18U)),8);
        bufp->chgIData(oldp+3272,(((0xffff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                       << 8U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
        bufp->chgIData(oldp+3273,((0xfffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
        bufp->chgIData(oldp+3274,((0xffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
        bufp->chgCData(oldp+3275,((0xffU & ((IData)(7U) 
                                            + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))),8);
        bufp->chgCData(oldp+3276,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state),2);
        bufp->chgCData(oldp+3277,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__step),4);
        bufp->chgBit(oldp+3278,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__flashIrqSeen));
        bufp->chgBit(oldp+3279,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__flashRxReq));
        bufp->chgBit(oldp+3280,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_psel));
        bufp->chgBit(oldp+3281,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_penable));
        bufp->chgIData(oldp+3282,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_paddr),32);
        bufp->chgIData(oldp+3283,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_pwdata),32);
        bufp->chgBit(oldp+3284,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_pwrite));
        bufp->chgCData(oldp+3285,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_pstrb),4);
        bufp->chgBit(oldp+3286,((0x2fffffffU < (0x3fffffffU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
        bufp->chgCData(oldp+3287,((0x1fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_paddr)),5);
        bufp->chgBit(oldp+3288,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                 & (0x14U == (0x1cU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_paddr)))));
        bufp->chgBit(oldp+3289,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                 & (0x10U == (0x1cU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_paddr)))));
        bufp->chgCData(oldp+3290,((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                      & (0xcU == (0x1cU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_paddr))) 
                                     << 3U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                                & (8U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_paddr))) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                        & (4U == (0x1cU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_paddr))) 
                                       << 1U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                                 & (0U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_paddr)))))),4);
        bufp->chgBit(oldp+3291,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                 & (0x18U == (0x1cU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_paddr)))));
        bufp->chgCData(oldp+3292,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
        bufp->chgCData(oldp+3293,((7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
        bufp->chgCData(oldp+3294,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+3295,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
        bufp->chgIData(oldp+3296,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U] 
                     | vlSelfRef.__Vm_traceActivity
                     [8U]))) {
        bufp->chgIData(oldp+3297,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                    ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                        << 0x18U) | 
                                       (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                         << 0x10U) 
                                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                            << 8U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                    : 0U)),32);
        bufp->chgBit(oldp+3298,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0))));
        bufp->chgBit(oldp+3299,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+3300,((0x7fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                            & (((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                               >> 1U)))));
        bufp->chgBit(oldp+3301,((0x3fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                            & (((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                               >> 2U)))));
        bufp->chgBit(oldp+3302,((0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                            & (((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                               >> 3U)))));
        bufp->chgBit(oldp+3303,((0xfffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                              >> 4U)))));
        bufp->chgBit(oldp+3304,((0x7ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                              >> 5U)))));
        bufp->chgBit(oldp+3305,((0x3ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                              >> 6U)))));
        bufp->chgBit(oldp+3306,((0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                              >> 7U)))));
        bufp->chgBit(oldp+3307,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 8U)))));
        bufp->chgBit(oldp+3308,((0x7fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 9U)))));
        bufp->chgBit(oldp+3309,((0x3fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+3310,((0x1fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 0xbU)))));
        bufp->chgBit(oldp+3311,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+3312,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xdU)))));
        bufp->chgBit(oldp+3313,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xeU)))));
        bufp->chgBit(oldp+3314,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                    >> 0xfU))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+3315,(vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck));
        bufp->chgBit(oldp+3316,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
        bufp->chgBit(oldp+3317,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
        bufp->chgBit(oldp+3318,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
        bufp->chgBit(oldp+3319,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+3320,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+3321,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+3322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready));
        bufp->chgBit(oldp+3323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
        bufp->chgBit(oldp+3324,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
        bufp->chgBit(oldp+3325,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
        bufp->chgCData(oldp+3326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid),4);
        bufp->chgBit(oldp+3327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
        bufp->chgCData(oldp+3328,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid),4);
        bufp->chgIData(oldp+3329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata),32);
        bufp->chgBit(oldp+3330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast));
        bufp->chgSData(oldp+3331,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)))),16);
        bufp->chgSData(oldp+3332,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)))),16);
        bufp->chgBit(oldp+3333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
        bufp->chgCData(oldp+3334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
        bufp->chgCData(oldp+3335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
        bufp->chgCData(oldp+3336,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
        bufp->chgBit(oldp+3337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
        bufp->chgBit(oldp+3338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
        bufp->chgBit(oldp+3339,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
        bufp->chgBit(oldp+3340,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
        bufp->chgBit(oldp+3341,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
        bufp->chgCData(oldp+3342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
        bufp->chgCData(oldp+3343,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
        bufp->chgCData(oldp+3344,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
        bufp->chgBit(oldp+3345,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
        bufp->chgBit(oldp+3346,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
        bufp->chgBit(oldp+3347,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready));
        bufp->chgBit(oldp+3348,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
        bufp->chgBit(oldp+3349,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
        bufp->chgBit(oldp+3350,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
        bufp->chgBit(oldp+3351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
        bufp->chgBit(oldp+3352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid));
        bufp->chgBit(oldp+3353,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast));
        bufp->chgBit(oldp+3354,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid));
        bufp->chgBit(oldp+3355,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid));
        bufp->chgBit(oldp+3356,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rlast));
        bufp->chgIData(oldp+3357,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data),32);
        bufp->chgBit(oldp+3358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last));
        bufp->chgCData(oldp+3359,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
        bufp->chgCData(oldp+3360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
        bufp->chgBit(oldp+3361,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
        bufp->chgCData(oldp+3362,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
        bufp->chgCData(oldp+3363,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[9U])) {
        bufp->chgCData(oldp+3364,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state),3);
        bufp->chgCData(oldp+3365,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmdReg),8);
        bufp->chgCData(oldp+3366,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__bitCnt),3);
        bufp->chgIData(oldp+3367,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__addrReg),24);
        bufp->chgCData(oldp+3368,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__nibCnt),3);
        bufp->chgIData(oldp+3369,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__dataAddr),24);
        bufp->chgCData(oldp+3370,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__outNib),4);
        bufp->chgCData(oldp+3371,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__readByte),8);
        bufp->chgBit(oldp+3372,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__readHigh));
        bufp->chgCData(oldp+3373,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wrHighNib),4);
        bufp->chgBit(oldp+3374,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wrNeedHigh));
        bufp->chgIData(oldp+3375,((0x3fffffU & ((IData)(1U) 
                                                + vlSelfRef.ysyxSoCFull__DOT__psram__DOT__dataAddr))),22);
        bufp->chgBit(oldp+3376,(((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_3) 
                                     | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state)))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__readHigh)) 
                                    & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state))))));
        bufp->chgIData(oldp+3377,((0x3fffffU & vlSelfRef.ysyxSoCFull__DOT__psram__DOT__dataAddr)),22);
        bufp->chgBit(oldp+3378,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_3)) 
                                 & ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state)) 
                                    & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__nibCnt))))));
        bufp->chgBit(oldp+3379,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_8)) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wrNeedHigh)) 
                                    & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state))))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0xaU])) {
        bufp->chgCData(oldp+3380,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss),8);
        bufp->chgBit(oldp+3381,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi));
        bufp->chgBit(oldp+3382,(vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n));
        bufp->chgBit(oldp+3383,(vlSelfRef.ysyxSoCFull__DOT___asic_psram_qpi_en));
        bufp->chgBit(oldp+3384,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
        bufp->chgBit(oldp+3385,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 3U))));
        bufp->chgBit(oldp+3386,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 2U))));
        bufp->chgBit(oldp+3387,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+3388,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgSData(oldp+3389,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
        bufp->chgCData(oldp+3390,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
        bufp->chgBit(oldp+3391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
        bufp->chgIData(oldp+3392,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
        bufp->chgBit(oldp+3393,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
        bufp->chgBit(oldp+3394,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
        bufp->chgBit(oldp+3395,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+3396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
        bufp->chgCData(oldp+3397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
        bufp->chgCData(oldp+3398,(((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QI__DOT__counter))
                                    ? (1U & (0x35U 
                                             >> (7U 
                                                 & ((IData)(7U) 
                                                    - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QI__DOT__counter)))))
                                    : 0U)),4);
        bufp->chgBit(oldp+3399,((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QI__DOT__counter))));
        bufp->chgBit(oldp+3400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
        bufp->chgBit(oldp+3401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
        bufp->chgBit(oldp+3402,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_done));
        bufp->chgCData(oldp+3403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
        bufp->chgBit(oldp+3404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
        bufp->chgBit(oldp+3405,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
        bufp->chgBit(oldp+3406,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QI__DOT__nstate));
        bufp->chgCData(oldp+3407,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QI__DOT__counter),4);
        bufp->chgBit(oldp+3408,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
        bufp->chgCData(oldp+3409,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
        bufp->chgCData(oldp+3410,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_bank_q),2);
        bufp->chgSData(oldp+3411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_row_q),13);
        bufp->chgSData(oldp+3412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_col_q),13);
        bufp->chgCData(oldp+3413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
        bufp->chgSData(oldp+3414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+3415,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+3416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+3417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
        bufp->chgCData(oldp+3418,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
        bufp->chgCData(oldp+3419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
        bufp->chgIData(oldp+3420,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
        bufp->chgWData(oldp+3421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
        bufp->chgBit(oldp+3424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack));
        bufp->chgBit(oldp+3425,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready));
        bufp->chgBit(oldp+3426,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_spi_irq_out));
        bufp->chgSData(oldp+3427,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgIData(oldp+3428,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
        bufp->chgBit(oldp+3429,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 9U))));
        bufp->chgBit(oldp+3430,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xaU))));
        bufp->chgCData(oldp+3431,((0x7fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+3432,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 8U))));
        bufp->chgBit(oldp+3433,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+3434,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+3435,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+3436,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+3437,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+3438,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
        bufp->chgCData(oldp+3439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+3440,((0xffU & ((0x800U 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                             ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0) 
                                                - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                             : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                - (IData)(1U))))),8);
        bufp->chgCData(oldp+3441,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+3442,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
        bufp->chgBit(oldp+3443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
        bufp->chgBit(oldp+3444,(vlSelfRef.ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss));
        bufp->chgBit(oldp+3445,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0xbU])) {
        bufp->chgIData(oldp+3446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
        bufp->chgBit(oldp+3447,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem1_MPORT_en));
        bufp->chgBit(oldp+3448,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_rdata2_en));
        bufp->chgBit(oldp+3449,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_MPORT_3_en));
        bufp->chgBit(oldp+3450,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__dq_in_buf__out_en));
        bufp->chgSData(oldp+3451,((0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
        bufp->chgIData(oldp+3452,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__mem1_ext__W1_addr),24);
        bufp->chgSData(oldp+3453,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                   >> 0x10U)),16);
    }
    bufp->chgBit(oldp+3454,(vlSelfRef.clock));
    bufp->chgBit(oldp+3455,(vlSelfRef.reset));
    bufp->chgSData(oldp+3456,(vlSelfRef.externalPins_gpio_out),16);
    bufp->chgSData(oldp+3457,(vlSelfRef.externalPins_gpio_in),16);
    bufp->chgCData(oldp+3458,(vlSelfRef.externalPins_gpio_seg_0),8);
    bufp->chgCData(oldp+3459,(vlSelfRef.externalPins_gpio_seg_1),8);
    bufp->chgCData(oldp+3460,(vlSelfRef.externalPins_gpio_seg_2),8);
    bufp->chgCData(oldp+3461,(vlSelfRef.externalPins_gpio_seg_3),8);
    bufp->chgCData(oldp+3462,(vlSelfRef.externalPins_gpio_seg_4),8);
    bufp->chgCData(oldp+3463,(vlSelfRef.externalPins_gpio_seg_5),8);
    bufp->chgCData(oldp+3464,(vlSelfRef.externalPins_gpio_seg_6),8);
    bufp->chgCData(oldp+3465,(vlSelfRef.externalPins_gpio_seg_7),8);
    bufp->chgBit(oldp+3466,(vlSelfRef.externalPins_ps2_clk));
    bufp->chgBit(oldp+3467,(vlSelfRef.externalPins_ps2_data));
    bufp->chgCData(oldp+3468,(vlSelfRef.externalPins_vga_r),8);
    bufp->chgCData(oldp+3469,(vlSelfRef.externalPins_vga_g),8);
    bufp->chgCData(oldp+3470,(vlSelfRef.externalPins_vga_b),8);
    bufp->chgBit(oldp+3471,(vlSelfRef.externalPins_vga_hsync));
    bufp->chgBit(oldp+3472,(vlSelfRef.externalPins_vga_vsync));
    bufp->chgBit(oldp+3473,(vlSelfRef.externalPins_vga_valid));
    bufp->chgBit(oldp+3474,(vlSelfRef.externalPins_uart_rx));
    bufp->chgBit(oldp+3475,(vlSelfRef.externalPins_uart_tx));
    bufp->chgBit(oldp+3476,((1U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__bitCnt) 
                                        >> 3U)) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__sendReg) 
                                                   >> 7U)) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) 
                                      | ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                           ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                                           : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                         >> 0x1fU))))));
    bufp->chgCData(oldp+3477,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->chgBit(oldp+3478,((1U & (~ (IData)(vlSelfRef.clock)))));
    bufp->chgBit(oldp+3479,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_done) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                  : (0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->chgBit(oldp+3480,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state)) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_0)
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready)
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___nodeIn_pready_T)))));
    bufp->chgIData(oldp+3481,((((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite))
                                ? 0U : ((0x2fffffffU 
                                         < (0x3fffffffU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))
                                         ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___nodeIn_pready_T)
                                             ? (((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                       << 8U))) 
                                                | ((0xff00U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                       >> 8U)) 
                                                   | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                      >> 0x18U)))
                                             : 0U) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata))),32);
    bufp->chgIData(oldp+3482,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->chgCData(oldp+3483,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp))),6);
    bufp->chgQData(oldp+3484,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                << 0x23U) | (((QData)((IData)(
                                                              ((1U 
                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                              << 3U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp) 
                                                                   << 1U))))))),39);
    bufp->chgQData(oldp+3486,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->chgQData(oldp+3488,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                << 4U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->chgBit(oldp+3490,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__maybe_full)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast)))));
    bufp->chgBit(oldp+3491,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__maybe_full)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->chgBit(oldp+3492,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready))));
    bufp->chgBit(oldp+3493,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_5) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead)
                                 ? (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state))
                                 : ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_arready))))));
    bufp->chgBit(oldp+3494,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_arready) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr))));
    bufp->chgBit(oldp+3495,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0)
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire)
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_3)))));
    bufp->chgBit(oldp+3496,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_mem_master_io_master_arvalid) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_5) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead)
                                    ? (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state))
                                    : ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_arready)))))));
    bufp->chgCData(oldp+3497,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire)
                                        ? (2U | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready)))
                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                    : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_3)
                                        ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)))
                                : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                    ? ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_rready_0)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rlast))
                                        ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                    : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                        ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready))
                                            ? 3U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                        : ((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid)) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_bready_0))
                                            ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)))))),2);
    bufp->chgBit(oldp+3498,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_done) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                 : (0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))));
    bufp->chgBit(oldp+3499,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->chgCData(oldp+3500,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready))
                                ? (0x20U | (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid)))
                                : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready))
                                    ? (0x10U | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0))
                                    : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w) 
                                        << 5U) | ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->chgSData(oldp+3501,(((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])),11);
    bufp->chgCData(oldp+3502,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->chgCData(oldp+3503,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__recvReg),8);
    bufp->chgBit(oldp+3504,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) 
                                   | ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                                        : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->chgIData(oldp+3505,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->chgIData(oldp+3506,(((0xfffffeU & (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->chgIData(oldp+3507,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->chgBit(oldp+3508,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__outEnReg));
    bufp->chgCData(oldp+3509,((((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_3) 
                                    | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state)))) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__readHigh)) 
                                   & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state))))
                                ? vlSelfRef.ysyxSoCFull__DOT__psram__DOT__mem_ext__DOT__Memory
                               [(0x3fffffU & ((IData)(1U) 
                                              + vlSelfRef.ysyxSoCFull__DOT__psram__DOT__dataAddr))]
                                : 0U)),8);
    bufp->chgCData(oldp+3510,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___mem_ext_R1_data),8);
    bufp->chgCData(oldp+3511,((((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wrHighNib) 
                                << 4U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din))),8);
    bufp->chgIData(oldp+3512,(((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___GEN_12)) 
                                      | (0U != (6U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__cas_count)))))
                                ? 0U : ((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_rdata2_en)
                                           ? vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_ext__DOT__Memory
                                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___addr_T_4]
                                           : 0U) << 0x10U) 
                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_rdata2_en)
                                            ? vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem1_ext__DOT__Memory
                                           [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___addr_T_4]
                                            : 0U)))),32);
    bufp->chgSData(oldp+3513,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_rdata2_en)
                                ? vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem1_ext__DOT__Memory
                               [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___addr_T_4]
                                : 0U)),16);
    bufp->chgSData(oldp+3514,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_rdata2_en)
                                ? vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_ext__DOT__Memory
                               [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___addr_T_4]
                                : 0U)),16);
}

void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_cleanup\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
}
