// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_0_sub_1(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_0_sub_1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+4275,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_2
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_2
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_2
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_2)))),32);
    bufp->fullIData(oldp+4276,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_3
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_3
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_3
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_3)))),32);
    bufp->fullIData(oldp+4277,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_4
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_4
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_4
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_4)))),32);
    bufp->fullIData(oldp+4278,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_5
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_5
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_5
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_5)))),32);
    bufp->fullIData(oldp+4279,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_6
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_6
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_6
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_6)))),32);
    bufp->fullIData(oldp+4280,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_62_7
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_62_7
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_62_7
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_62_7)))),32);
    bufp->fullIData(oldp+4281,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_0
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_0
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_0
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_0)))),32);
    bufp->fullIData(oldp+4282,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_1
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_1
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_1
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_1)))),32);
    bufp->fullIData(oldp+4283,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_2
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_2
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_2
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_2)))),32);
    bufp->fullIData(oldp+4284,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_3
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_3
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_3
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_3)))),32);
    bufp->fullIData(oldp+4285,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_4
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_4
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_4
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_4)))),32);
    bufp->fullIData(oldp+4286,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_5
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_5
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_5
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_5)))),32);
    bufp->fullIData(oldp+4287,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_6
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_6
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_6
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_6)))),32);
    bufp->fullIData(oldp+4288,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_0_63_7
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_1_63_7
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__victim_way))
                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_2_63_7
                                         : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__data_array_3_63_7)))),32);
    bufp->fullIData(oldp+4289,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_754),32);
    bufp->fullIData(oldp+4290,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_755),32);
    bufp->fullIData(oldp+4291,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_756),32);
    bufp->fullIData(oldp+4292,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_757),32);
    bufp->fullIData(oldp+4293,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_758),32);
    bufp->fullIData(oldp+4294,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_759),32);
    bufp->fullIData(oldp+4295,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_760),32);
    bufp->fullIData(oldp+4296,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_761),32);
    bufp->fullIData(oldp+4297,(((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt))
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
    bufp->fullIData(oldp+4298,(((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg))
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
    bufp->fullIData(oldp+4299,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32),32);
    bufp->fullBit(oldp+4300,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0));
    bufp->fullBit(oldp+4301,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_1));
    bufp->fullBit(oldp+4302,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_2));
    bufp->fullBit(oldp+4303,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_3));
    bufp->fullBit(oldp+4304,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4));
    bufp->fullBit(oldp+4305,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5));
    bufp->fullBit(oldp+4306,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6));
    bufp->fullBit(oldp+4307,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_7));
    bufp->fullBit(oldp+4308,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__state)))));
    bufp->fullBit(oldp+4309,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__state));
    bufp->fullIData(oldp+4310,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__pc),32);
    bufp->fullCData(oldp+4311,((0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst 
                                         >> 7U))),5);
    bufp->fullBit(oldp+4312,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__is_load) 
                              | ((0x37U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                 | ((0x17U == (0x7fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                    | ((0x33U == (0x7fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                       | ((0x6fU == 
                                           (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)) 
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
    bufp->fullIData(oldp+4313,((((0x17U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                 | (0x6fU == (0x7fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__pc
                                 : ((0x37U == (0x7fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))
                                     ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___regfile_io_rs1_data))),32);
    bufp->fullIData(oldp+4314,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_alu_b),32);
    bufp->fullCData(oldp+4315,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_alu_op),4);
    bufp->fullIData(oldp+4316,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___regfile_io_rs1_data),32);
    bufp->fullIData(oldp+4317,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___regfile_io_rs2_data),32);
    bufp->fullIData(oldp+4318,(((0x73U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__pc
                                 : ((0x30200073U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)
                                     ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___regfile_io_rs1_data))),32);
    bufp->fullBit(oldp+4319,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw) 
                              | (0x73U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))));
    bufp->fullSData(oldp+4320,(((0x73U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)
                                 ? 0x341U : ((0x30200073U 
                                              == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst)
                                              ? 0x342U
                                              : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                 >> 0x14U)))),12);
    bufp->fullBit(oldp+4321,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw));
    bufp->fullBit(oldp+4322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrs));
    bufp->fullBit(oldp+4323,((0x6fU == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+4324,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr));
    bufp->fullBit(oldp+4325,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_lw));
    bufp->fullBit(oldp+4326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_sw));
    bufp->fullBit(oldp+4327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_lb));
    bufp->fullBit(oldp+4328,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_sb));
    bufp->fullBit(oldp+4329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_lh));
    bufp->fullBit(oldp+4330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_sh));
    bufp->fullBit(oldp+4331,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_lbu));
    bufp->fullBit(oldp+4332,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_lhu));
    bufp->fullBit(oldp+4333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_beq));
    bufp->fullBit(oldp+4334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_bne));
    bufp->fullBit(oldp+4335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_blt));
    bufp->fullBit(oldp+4336,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_bltu));
    bufp->fullBit(oldp+4337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_bge));
    bufp->fullBit(oldp+4338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_out_bits_is_bgeu));
    bufp->fullBit(oldp+4339,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state))));
    bufp->fullBit(oldp+4340,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__out_valid));
    bufp->fullIData(oldp+4341,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__pc),32);
    bufp->fullIData(oldp+4342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__alu__DOT__casez_tmp),32);
    bufp->fullIData(oldp+4343,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__rs2_data),32);
    bufp->fullCData(oldp+4344,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__rd_addr),5);
    bufp->fullBit(oldp+4345,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__rd_en));
    bufp->fullIData(oldp+4346,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__csr_wdata),32);
    bufp->fullBit(oldp+4347,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__csr_wen));
    bufp->fullSData(oldp+4348,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__csr_waddr),12);
    bufp->fullIData(oldp+4349,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__csr_rdata),32);
    bufp->fullBit(oldp+4350,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_csrrw));
    bufp->fullBit(oldp+4351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_csrrs));
    bufp->fullBit(oldp+4352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_lw));
    bufp->fullBit(oldp+4353,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_lbu));
    bufp->fullBit(oldp+4354,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_lh));
    bufp->fullBit(oldp+4355,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_lhu));
    bufp->fullBit(oldp+4356,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_lb));
    bufp->fullBit(oldp+4357,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_sw));
    bufp->fullBit(oldp+4358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_sb));
    bufp->fullBit(oldp+4359,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_sh));
    bufp->fullBit(oldp+4360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_jalr));
    bufp->fullBit(oldp+4361,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_jal));
    bufp->fullIData(oldp+4362,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___exu_io_branch_bits_pc_branch),32);
    bufp->fullIData(oldp+4363,((0xfffffffeU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__alu_a 
                                               + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__alu_b))),32);
    bufp->fullBit(oldp+4364,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___exu_io_branch_bits_is_branch_taken));
    bufp->fullBit(oldp+4365,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_ecall));
    bufp->fullBit(oldp+4366,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_mret));
    bufp->fullBit(oldp+4367,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__state));
    bufp->fullIData(oldp+4368,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__alu_a),32);
    bufp->fullIData(oldp+4369,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__alu_b),32);
    bufp->fullCData(oldp+4370,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__alu_op),4);
    bufp->fullIData(oldp+4371,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__rs1_data),32);
    bufp->fullBit(oldp+4372,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_beq));
    bufp->fullBit(oldp+4373,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_bne));
    bufp->fullBit(oldp+4374,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_blt));
    bufp->fullBit(oldp+4375,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_bltu));
    bufp->fullBit(oldp+4376,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_bge));
    bufp->fullBit(oldp+4377,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__exu__DOT__is_bgeu));
    bufp->fullBit(oldp+4378,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_1));
    bufp->fullBit(oldp+4379,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu1__DOT__state));
    bufp->fullIData(oldp+4380,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu1__DOT__pc),32);
    bufp->fullBit(oldp+4381,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu2__DOT__io_in_ready_0));
    bufp->fullBit(oldp+4382,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_1)) 
                              & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit)
                                  : ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_8)) 
                                     & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state)))))));
    bufp->fullIData(oldp+4383,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_1)
                                 ? 0U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state))
                                          ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit)
                                              ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit0)
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
                                              ? 0U : 
                                             ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass)
                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__bypass_inst_reg
                                               : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit0)
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
    bufp->fullIData(oldp+4384,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_1)
                                 ? 0U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state))
                                          ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit)
                                              ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_7
                                              : 0U)
                                          : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT___GEN_9)
                                              ? 0U : 
                                             ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass)
                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__bypass_pc_reg
                                               : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_7))))),32);
    bufp->fullIData(oldp+4385,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_0),32);
    bufp->fullIData(oldp+4386,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_1),32);
    bufp->fullIData(oldp+4387,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_2),32);
    bufp->fullIData(oldp+4388,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_3),32);
    bufp->fullIData(oldp+4389,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_4),32);
    bufp->fullIData(oldp+4390,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_5),32);
    bufp->fullIData(oldp+4391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_6),32);
    bufp->fullIData(oldp+4392,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_0_7),32);
    bufp->fullIData(oldp+4393,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_0),32);
    bufp->fullIData(oldp+4394,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_1),32);
    bufp->fullIData(oldp+4395,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_2),32);
    bufp->fullIData(oldp+4396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_3),32);
    bufp->fullIData(oldp+4397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_4),32);
    bufp->fullIData(oldp+4398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_5),32);
    bufp->fullIData(oldp+4399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_6),32);
    bufp->fullIData(oldp+4400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_1_7),32);
    bufp->fullIData(oldp+4401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_0),32);
    bufp->fullIData(oldp+4402,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_1),32);
    bufp->fullIData(oldp+4403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_2),32);
    bufp->fullIData(oldp+4404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_3),32);
    bufp->fullIData(oldp+4405,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_4),32);
    bufp->fullIData(oldp+4406,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_5),32);
    bufp->fullIData(oldp+4407,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_6),32);
    bufp->fullIData(oldp+4408,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_2_7),32);
    bufp->fullIData(oldp+4409,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_0),32);
    bufp->fullIData(oldp+4410,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_1),32);
    bufp->fullIData(oldp+4411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_2),32);
    bufp->fullIData(oldp+4412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_3),32);
    bufp->fullIData(oldp+4413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_4),32);
    bufp->fullIData(oldp+4414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_5),32);
    bufp->fullIData(oldp+4415,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_6),32);
    bufp->fullIData(oldp+4416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_3_7),32);
    bufp->fullIData(oldp+4417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_0),32);
    bufp->fullIData(oldp+4418,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_1),32);
    bufp->fullIData(oldp+4419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_2),32);
    bufp->fullIData(oldp+4420,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_3),32);
    bufp->fullIData(oldp+4421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_4),32);
    bufp->fullIData(oldp+4422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_5),32);
    bufp->fullIData(oldp+4423,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_6),32);
    bufp->fullIData(oldp+4424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_4_7),32);
    bufp->fullIData(oldp+4425,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_0),32);
    bufp->fullIData(oldp+4426,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_1),32);
    bufp->fullIData(oldp+4427,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_2),32);
    bufp->fullIData(oldp+4428,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_3),32);
    bufp->fullIData(oldp+4429,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_4),32);
    bufp->fullIData(oldp+4430,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_5),32);
    bufp->fullIData(oldp+4431,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_6),32);
    bufp->fullIData(oldp+4432,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_5_7),32);
    bufp->fullIData(oldp+4433,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_0),32);
    bufp->fullIData(oldp+4434,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_1),32);
    bufp->fullIData(oldp+4435,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_2),32);
    bufp->fullIData(oldp+4436,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_3),32);
    bufp->fullIData(oldp+4437,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_4),32);
    bufp->fullIData(oldp+4438,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_5),32);
    bufp->fullIData(oldp+4439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_6),32);
    bufp->fullIData(oldp+4440,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_6_7),32);
    bufp->fullIData(oldp+4441,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_0),32);
    bufp->fullIData(oldp+4442,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_1),32);
    bufp->fullIData(oldp+4443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_2),32);
    bufp->fullIData(oldp+4444,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_3),32);
    bufp->fullIData(oldp+4445,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_4),32);
    bufp->fullIData(oldp+4446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_5),32);
    bufp->fullIData(oldp+4447,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_6),32);
    bufp->fullIData(oldp+4448,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_7_7),32);
    bufp->fullIData(oldp+4449,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_0),32);
    bufp->fullIData(oldp+4450,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_1),32);
    bufp->fullIData(oldp+4451,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_2),32);
    bufp->fullIData(oldp+4452,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_3),32);
    bufp->fullIData(oldp+4453,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_4),32);
    bufp->fullIData(oldp+4454,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_5),32);
    bufp->fullIData(oldp+4455,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_6),32);
    bufp->fullIData(oldp+4456,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_8_7),32);
    bufp->fullIData(oldp+4457,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_0),32);
    bufp->fullIData(oldp+4458,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_1),32);
    bufp->fullIData(oldp+4459,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_2),32);
    bufp->fullIData(oldp+4460,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_3),32);
    bufp->fullIData(oldp+4461,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_4),32);
    bufp->fullIData(oldp+4462,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_5),32);
    bufp->fullIData(oldp+4463,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_6),32);
    bufp->fullIData(oldp+4464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_9_7),32);
    bufp->fullIData(oldp+4465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_0),32);
    bufp->fullIData(oldp+4466,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_1),32);
    bufp->fullIData(oldp+4467,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_2),32);
    bufp->fullIData(oldp+4468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_3),32);
    bufp->fullIData(oldp+4469,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_4),32);
    bufp->fullIData(oldp+4470,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_5),32);
    bufp->fullIData(oldp+4471,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_6),32);
    bufp->fullIData(oldp+4472,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_10_7),32);
    bufp->fullIData(oldp+4473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_0),32);
    bufp->fullIData(oldp+4474,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_1),32);
    bufp->fullIData(oldp+4475,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_2),32);
    bufp->fullIData(oldp+4476,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_3),32);
    bufp->fullIData(oldp+4477,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_4),32);
    bufp->fullIData(oldp+4478,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_5),32);
    bufp->fullIData(oldp+4479,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_6),32);
    bufp->fullIData(oldp+4480,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_11_7),32);
    bufp->fullIData(oldp+4481,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_0),32);
    bufp->fullIData(oldp+4482,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_1),32);
    bufp->fullIData(oldp+4483,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_2),32);
    bufp->fullIData(oldp+4484,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_3),32);
    bufp->fullIData(oldp+4485,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_4),32);
    bufp->fullIData(oldp+4486,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_5),32);
    bufp->fullIData(oldp+4487,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_6),32);
    bufp->fullIData(oldp+4488,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_12_7),32);
    bufp->fullIData(oldp+4489,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_0),32);
    bufp->fullIData(oldp+4490,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_1),32);
    bufp->fullIData(oldp+4491,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_2),32);
    bufp->fullIData(oldp+4492,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_3),32);
    bufp->fullIData(oldp+4493,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_4),32);
    bufp->fullIData(oldp+4494,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_5),32);
    bufp->fullIData(oldp+4495,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_6),32);
    bufp->fullIData(oldp+4496,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_13_7),32);
    bufp->fullIData(oldp+4497,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_0),32);
    bufp->fullIData(oldp+4498,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_1),32);
    bufp->fullIData(oldp+4499,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_2),32);
    bufp->fullIData(oldp+4500,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_3),32);
    bufp->fullIData(oldp+4501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_4),32);
    bufp->fullIData(oldp+4502,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_5),32);
    bufp->fullIData(oldp+4503,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_6),32);
    bufp->fullIData(oldp+4504,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_14_7),32);
    bufp->fullIData(oldp+4505,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_0),32);
    bufp->fullIData(oldp+4506,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_1),32);
    bufp->fullIData(oldp+4507,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_2),32);
    bufp->fullIData(oldp+4508,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_3),32);
    bufp->fullIData(oldp+4509,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_4),32);
    bufp->fullIData(oldp+4510,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_5),32);
    bufp->fullIData(oldp+4511,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_6),32);
    bufp->fullIData(oldp+4512,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_15_7),32);
    bufp->fullIData(oldp+4513,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_0),32);
    bufp->fullIData(oldp+4514,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_1),32);
    bufp->fullIData(oldp+4515,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_2),32);
    bufp->fullIData(oldp+4516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_3),32);
    bufp->fullIData(oldp+4517,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_4),32);
    bufp->fullIData(oldp+4518,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_5),32);
    bufp->fullIData(oldp+4519,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_6),32);
    bufp->fullIData(oldp+4520,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_16_7),32);
    bufp->fullIData(oldp+4521,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_0),32);
    bufp->fullIData(oldp+4522,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_1),32);
    bufp->fullIData(oldp+4523,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_2),32);
    bufp->fullIData(oldp+4524,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_3),32);
    bufp->fullIData(oldp+4525,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_4),32);
    bufp->fullIData(oldp+4526,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_5),32);
    bufp->fullIData(oldp+4527,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_6),32);
    bufp->fullIData(oldp+4528,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_17_7),32);
    bufp->fullIData(oldp+4529,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_0),32);
    bufp->fullIData(oldp+4530,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_1),32);
    bufp->fullIData(oldp+4531,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_2),32);
    bufp->fullIData(oldp+4532,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_3),32);
    bufp->fullIData(oldp+4533,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_4),32);
    bufp->fullIData(oldp+4534,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_5),32);
    bufp->fullIData(oldp+4535,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_6),32);
    bufp->fullIData(oldp+4536,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_18_7),32);
    bufp->fullIData(oldp+4537,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_0),32);
    bufp->fullIData(oldp+4538,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_1),32);
    bufp->fullIData(oldp+4539,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_2),32);
    bufp->fullIData(oldp+4540,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_3),32);
    bufp->fullIData(oldp+4541,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_4),32);
    bufp->fullIData(oldp+4542,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_5),32);
    bufp->fullIData(oldp+4543,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_6),32);
    bufp->fullIData(oldp+4544,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_19_7),32);
    bufp->fullIData(oldp+4545,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_0),32);
    bufp->fullIData(oldp+4546,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_1),32);
    bufp->fullIData(oldp+4547,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_2),32);
    bufp->fullIData(oldp+4548,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_3),32);
    bufp->fullIData(oldp+4549,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_4),32);
    bufp->fullIData(oldp+4550,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_5),32);
    bufp->fullIData(oldp+4551,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_6),32);
    bufp->fullIData(oldp+4552,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_20_7),32);
    bufp->fullIData(oldp+4553,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_0),32);
    bufp->fullIData(oldp+4554,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_1),32);
    bufp->fullIData(oldp+4555,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_2),32);
    bufp->fullIData(oldp+4556,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_3),32);
    bufp->fullIData(oldp+4557,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_4),32);
    bufp->fullIData(oldp+4558,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_5),32);
    bufp->fullIData(oldp+4559,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_6),32);
    bufp->fullIData(oldp+4560,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_21_7),32);
    bufp->fullIData(oldp+4561,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_0),32);
    bufp->fullIData(oldp+4562,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_1),32);
    bufp->fullIData(oldp+4563,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_2),32);
    bufp->fullIData(oldp+4564,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_3),32);
    bufp->fullIData(oldp+4565,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_4),32);
    bufp->fullIData(oldp+4566,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_5),32);
    bufp->fullIData(oldp+4567,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_6),32);
    bufp->fullIData(oldp+4568,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_22_7),32);
    bufp->fullIData(oldp+4569,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_0),32);
    bufp->fullIData(oldp+4570,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_1),32);
    bufp->fullIData(oldp+4571,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_2),32);
    bufp->fullIData(oldp+4572,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_3),32);
    bufp->fullIData(oldp+4573,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_4),32);
    bufp->fullIData(oldp+4574,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_5),32);
    bufp->fullIData(oldp+4575,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_6),32);
    bufp->fullIData(oldp+4576,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_23_7),32);
    bufp->fullIData(oldp+4577,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_0),32);
    bufp->fullIData(oldp+4578,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_1),32);
    bufp->fullIData(oldp+4579,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_2),32);
    bufp->fullIData(oldp+4580,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_3),32);
    bufp->fullIData(oldp+4581,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_4),32);
    bufp->fullIData(oldp+4582,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_5),32);
    bufp->fullIData(oldp+4583,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_6),32);
    bufp->fullIData(oldp+4584,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_24_7),32);
    bufp->fullIData(oldp+4585,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_0),32);
    bufp->fullIData(oldp+4586,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_1),32);
    bufp->fullIData(oldp+4587,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_2),32);
    bufp->fullIData(oldp+4588,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_3),32);
    bufp->fullIData(oldp+4589,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_4),32);
    bufp->fullIData(oldp+4590,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_5),32);
    bufp->fullIData(oldp+4591,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_6),32);
    bufp->fullIData(oldp+4592,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_25_7),32);
    bufp->fullIData(oldp+4593,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_0),32);
    bufp->fullIData(oldp+4594,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_1),32);
    bufp->fullIData(oldp+4595,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_2),32);
    bufp->fullIData(oldp+4596,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_3),32);
    bufp->fullIData(oldp+4597,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_4),32);
    bufp->fullIData(oldp+4598,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_5),32);
    bufp->fullIData(oldp+4599,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_6),32);
    bufp->fullIData(oldp+4600,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_26_7),32);
    bufp->fullIData(oldp+4601,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_0),32);
    bufp->fullIData(oldp+4602,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_1),32);
    bufp->fullIData(oldp+4603,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_2),32);
    bufp->fullIData(oldp+4604,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_3),32);
    bufp->fullIData(oldp+4605,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_4),32);
    bufp->fullIData(oldp+4606,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_5),32);
    bufp->fullIData(oldp+4607,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_6),32);
    bufp->fullIData(oldp+4608,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_27_7),32);
    bufp->fullIData(oldp+4609,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_0),32);
    bufp->fullIData(oldp+4610,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_1),32);
    bufp->fullIData(oldp+4611,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_2),32);
    bufp->fullIData(oldp+4612,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_3),32);
    bufp->fullIData(oldp+4613,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_4),32);
    bufp->fullIData(oldp+4614,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_5),32);
    bufp->fullIData(oldp+4615,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_6),32);
    bufp->fullIData(oldp+4616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_28_7),32);
    bufp->fullIData(oldp+4617,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_0),32);
    bufp->fullIData(oldp+4618,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_1),32);
    bufp->fullIData(oldp+4619,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_2),32);
    bufp->fullIData(oldp+4620,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_3),32);
    bufp->fullIData(oldp+4621,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_4),32);
    bufp->fullIData(oldp+4622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_5),32);
    bufp->fullIData(oldp+4623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_6),32);
    bufp->fullIData(oldp+4624,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_29_7),32);
    bufp->fullIData(oldp+4625,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_0),32);
    bufp->fullIData(oldp+4626,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_1),32);
    bufp->fullIData(oldp+4627,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_2),32);
    bufp->fullIData(oldp+4628,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_3),32);
    bufp->fullIData(oldp+4629,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_4),32);
    bufp->fullIData(oldp+4630,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_5),32);
    bufp->fullIData(oldp+4631,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_6),32);
    bufp->fullIData(oldp+4632,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_30_7),32);
    bufp->fullIData(oldp+4633,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_0),32);
    bufp->fullIData(oldp+4634,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_1),32);
    bufp->fullIData(oldp+4635,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_2),32);
    bufp->fullIData(oldp+4636,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_3),32);
    bufp->fullIData(oldp+4637,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_4),32);
    bufp->fullIData(oldp+4638,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_5),32);
    bufp->fullIData(oldp+4639,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_6),32);
    bufp->fullIData(oldp+4640,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_31_7),32);
    bufp->fullIData(oldp+4641,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_0),32);
    bufp->fullIData(oldp+4642,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_1),32);
    bufp->fullIData(oldp+4643,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_2),32);
    bufp->fullIData(oldp+4644,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_3),32);
    bufp->fullIData(oldp+4645,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_4),32);
    bufp->fullIData(oldp+4646,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_5),32);
    bufp->fullIData(oldp+4647,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_6),32);
    bufp->fullIData(oldp+4648,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_32_7),32);
    bufp->fullIData(oldp+4649,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_0),32);
    bufp->fullIData(oldp+4650,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_1),32);
    bufp->fullIData(oldp+4651,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_2),32);
    bufp->fullIData(oldp+4652,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_3),32);
    bufp->fullIData(oldp+4653,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_4),32);
    bufp->fullIData(oldp+4654,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_5),32);
    bufp->fullIData(oldp+4655,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_6),32);
    bufp->fullIData(oldp+4656,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_33_7),32);
    bufp->fullIData(oldp+4657,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_0),32);
    bufp->fullIData(oldp+4658,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_1),32);
    bufp->fullIData(oldp+4659,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_2),32);
    bufp->fullIData(oldp+4660,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_3),32);
    bufp->fullIData(oldp+4661,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_4),32);
    bufp->fullIData(oldp+4662,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_5),32);
    bufp->fullIData(oldp+4663,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_6),32);
    bufp->fullIData(oldp+4664,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_34_7),32);
    bufp->fullIData(oldp+4665,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_0),32);
    bufp->fullIData(oldp+4666,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_1),32);
    bufp->fullIData(oldp+4667,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_2),32);
    bufp->fullIData(oldp+4668,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_3),32);
    bufp->fullIData(oldp+4669,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_4),32);
    bufp->fullIData(oldp+4670,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_5),32);
    bufp->fullIData(oldp+4671,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_6),32);
    bufp->fullIData(oldp+4672,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_35_7),32);
    bufp->fullIData(oldp+4673,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_0),32);
    bufp->fullIData(oldp+4674,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_1),32);
    bufp->fullIData(oldp+4675,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_2),32);
    bufp->fullIData(oldp+4676,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_3),32);
    bufp->fullIData(oldp+4677,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_4),32);
    bufp->fullIData(oldp+4678,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_5),32);
    bufp->fullIData(oldp+4679,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_6),32);
    bufp->fullIData(oldp+4680,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_36_7),32);
    bufp->fullIData(oldp+4681,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_0),32);
    bufp->fullIData(oldp+4682,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_1),32);
    bufp->fullIData(oldp+4683,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_2),32);
    bufp->fullIData(oldp+4684,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_3),32);
    bufp->fullIData(oldp+4685,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_4),32);
    bufp->fullIData(oldp+4686,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_5),32);
    bufp->fullIData(oldp+4687,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_6),32);
    bufp->fullIData(oldp+4688,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_37_7),32);
    bufp->fullIData(oldp+4689,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_0),32);
    bufp->fullIData(oldp+4690,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_1),32);
    bufp->fullIData(oldp+4691,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_2),32);
    bufp->fullIData(oldp+4692,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_3),32);
    bufp->fullIData(oldp+4693,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_4),32);
    bufp->fullIData(oldp+4694,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_5),32);
    bufp->fullIData(oldp+4695,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_6),32);
    bufp->fullIData(oldp+4696,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_38_7),32);
    bufp->fullIData(oldp+4697,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_0),32);
    bufp->fullIData(oldp+4698,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_1),32);
    bufp->fullIData(oldp+4699,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_2),32);
    bufp->fullIData(oldp+4700,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_3),32);
    bufp->fullIData(oldp+4701,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_4),32);
    bufp->fullIData(oldp+4702,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_5),32);
    bufp->fullIData(oldp+4703,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_6),32);
    bufp->fullIData(oldp+4704,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_39_7),32);
    bufp->fullIData(oldp+4705,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_0),32);
    bufp->fullIData(oldp+4706,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_1),32);
    bufp->fullIData(oldp+4707,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_2),32);
    bufp->fullIData(oldp+4708,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_3),32);
    bufp->fullIData(oldp+4709,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_4),32);
    bufp->fullIData(oldp+4710,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_5),32);
    bufp->fullIData(oldp+4711,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_6),32);
    bufp->fullIData(oldp+4712,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_40_7),32);
    bufp->fullIData(oldp+4713,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_0),32);
    bufp->fullIData(oldp+4714,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_1),32);
    bufp->fullIData(oldp+4715,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_2),32);
    bufp->fullIData(oldp+4716,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_3),32);
    bufp->fullIData(oldp+4717,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_4),32);
    bufp->fullIData(oldp+4718,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_5),32);
    bufp->fullIData(oldp+4719,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_6),32);
    bufp->fullIData(oldp+4720,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_41_7),32);
    bufp->fullIData(oldp+4721,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_0),32);
    bufp->fullIData(oldp+4722,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_1),32);
    bufp->fullIData(oldp+4723,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_2),32);
    bufp->fullIData(oldp+4724,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_3),32);
    bufp->fullIData(oldp+4725,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_4),32);
    bufp->fullIData(oldp+4726,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_5),32);
    bufp->fullIData(oldp+4727,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_6),32);
    bufp->fullIData(oldp+4728,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_42_7),32);
    bufp->fullIData(oldp+4729,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_0),32);
    bufp->fullIData(oldp+4730,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_1),32);
    bufp->fullIData(oldp+4731,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_2),32);
    bufp->fullIData(oldp+4732,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_3),32);
    bufp->fullIData(oldp+4733,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_4),32);
    bufp->fullIData(oldp+4734,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_5),32);
    bufp->fullIData(oldp+4735,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_6),32);
    bufp->fullIData(oldp+4736,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_43_7),32);
    bufp->fullIData(oldp+4737,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_0),32);
    bufp->fullIData(oldp+4738,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_1),32);
    bufp->fullIData(oldp+4739,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_2),32);
    bufp->fullIData(oldp+4740,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_3),32);
    bufp->fullIData(oldp+4741,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_4),32);
    bufp->fullIData(oldp+4742,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_5),32);
    bufp->fullIData(oldp+4743,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_6),32);
    bufp->fullIData(oldp+4744,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_44_7),32);
    bufp->fullIData(oldp+4745,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_0),32);
    bufp->fullIData(oldp+4746,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_1),32);
    bufp->fullIData(oldp+4747,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_2),32);
    bufp->fullIData(oldp+4748,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_3),32);
    bufp->fullIData(oldp+4749,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_4),32);
    bufp->fullIData(oldp+4750,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_5),32);
    bufp->fullIData(oldp+4751,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_6),32);
    bufp->fullIData(oldp+4752,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_45_7),32);
    bufp->fullIData(oldp+4753,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_0),32);
    bufp->fullIData(oldp+4754,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_1),32);
    bufp->fullIData(oldp+4755,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_2),32);
    bufp->fullIData(oldp+4756,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_3),32);
    bufp->fullIData(oldp+4757,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_4),32);
    bufp->fullIData(oldp+4758,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_5),32);
    bufp->fullIData(oldp+4759,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_6),32);
    bufp->fullIData(oldp+4760,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_46_7),32);
    bufp->fullIData(oldp+4761,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_0),32);
    bufp->fullIData(oldp+4762,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_1),32);
    bufp->fullIData(oldp+4763,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_2),32);
    bufp->fullIData(oldp+4764,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_3),32);
    bufp->fullIData(oldp+4765,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_4),32);
    bufp->fullIData(oldp+4766,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_5),32);
    bufp->fullIData(oldp+4767,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_6),32);
    bufp->fullIData(oldp+4768,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_47_7),32);
    bufp->fullIData(oldp+4769,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_0),32);
    bufp->fullIData(oldp+4770,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_1),32);
    bufp->fullIData(oldp+4771,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_2),32);
    bufp->fullIData(oldp+4772,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_3),32);
    bufp->fullIData(oldp+4773,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_4),32);
    bufp->fullIData(oldp+4774,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_5),32);
    bufp->fullIData(oldp+4775,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_6),32);
    bufp->fullIData(oldp+4776,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_48_7),32);
    bufp->fullIData(oldp+4777,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_0),32);
    bufp->fullIData(oldp+4778,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_1),32);
    bufp->fullIData(oldp+4779,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_2),32);
    bufp->fullIData(oldp+4780,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_3),32);
    bufp->fullIData(oldp+4781,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_4),32);
    bufp->fullIData(oldp+4782,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_5),32);
    bufp->fullIData(oldp+4783,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_6),32);
    bufp->fullIData(oldp+4784,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_49_7),32);
    bufp->fullIData(oldp+4785,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_0),32);
    bufp->fullIData(oldp+4786,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_1),32);
    bufp->fullIData(oldp+4787,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_2),32);
    bufp->fullIData(oldp+4788,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_3),32);
    bufp->fullIData(oldp+4789,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_4),32);
    bufp->fullIData(oldp+4790,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_5),32);
    bufp->fullIData(oldp+4791,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_6),32);
    bufp->fullIData(oldp+4792,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_50_7),32);
    bufp->fullIData(oldp+4793,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_0),32);
    bufp->fullIData(oldp+4794,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_1),32);
    bufp->fullIData(oldp+4795,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_2),32);
    bufp->fullIData(oldp+4796,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_3),32);
    bufp->fullIData(oldp+4797,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_4),32);
    bufp->fullIData(oldp+4798,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_5),32);
    bufp->fullIData(oldp+4799,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_6),32);
    bufp->fullIData(oldp+4800,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_51_7),32);
    bufp->fullIData(oldp+4801,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_0),32);
    bufp->fullIData(oldp+4802,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_1),32);
    bufp->fullIData(oldp+4803,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_2),32);
    bufp->fullIData(oldp+4804,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_3),32);
    bufp->fullIData(oldp+4805,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_4),32);
    bufp->fullIData(oldp+4806,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_5),32);
    bufp->fullIData(oldp+4807,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_6),32);
    bufp->fullIData(oldp+4808,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_52_7),32);
    bufp->fullIData(oldp+4809,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_0),32);
    bufp->fullIData(oldp+4810,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_1),32);
    bufp->fullIData(oldp+4811,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_2),32);
    bufp->fullIData(oldp+4812,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_3),32);
    bufp->fullIData(oldp+4813,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_4),32);
    bufp->fullIData(oldp+4814,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_5),32);
    bufp->fullIData(oldp+4815,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_6),32);
    bufp->fullIData(oldp+4816,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_53_7),32);
    bufp->fullIData(oldp+4817,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_0),32);
    bufp->fullIData(oldp+4818,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_1),32);
    bufp->fullIData(oldp+4819,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_2),32);
    bufp->fullIData(oldp+4820,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_3),32);
    bufp->fullIData(oldp+4821,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_4),32);
    bufp->fullIData(oldp+4822,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_5),32);
    bufp->fullIData(oldp+4823,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_6),32);
    bufp->fullIData(oldp+4824,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_54_7),32);
    bufp->fullIData(oldp+4825,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_0),32);
    bufp->fullIData(oldp+4826,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_1),32);
    bufp->fullIData(oldp+4827,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_2),32);
    bufp->fullIData(oldp+4828,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_3),32);
    bufp->fullIData(oldp+4829,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_4),32);
    bufp->fullIData(oldp+4830,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_5),32);
    bufp->fullIData(oldp+4831,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_6),32);
    bufp->fullIData(oldp+4832,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_55_7),32);
    bufp->fullIData(oldp+4833,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_0),32);
    bufp->fullIData(oldp+4834,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_1),32);
    bufp->fullIData(oldp+4835,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_2),32);
    bufp->fullIData(oldp+4836,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_3),32);
    bufp->fullIData(oldp+4837,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_4),32);
    bufp->fullIData(oldp+4838,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_5),32);
    bufp->fullIData(oldp+4839,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_6),32);
    bufp->fullIData(oldp+4840,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_56_7),32);
    bufp->fullIData(oldp+4841,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_0),32);
    bufp->fullIData(oldp+4842,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_1),32);
    bufp->fullIData(oldp+4843,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_2),32);
    bufp->fullIData(oldp+4844,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_3),32);
    bufp->fullIData(oldp+4845,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_4),32);
    bufp->fullIData(oldp+4846,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_5),32);
    bufp->fullIData(oldp+4847,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_6),32);
    bufp->fullIData(oldp+4848,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_57_7),32);
    bufp->fullIData(oldp+4849,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_0),32);
    bufp->fullIData(oldp+4850,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_1),32);
    bufp->fullIData(oldp+4851,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_2),32);
    bufp->fullIData(oldp+4852,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_3),32);
    bufp->fullIData(oldp+4853,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_4),32);
    bufp->fullIData(oldp+4854,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_5),32);
    bufp->fullIData(oldp+4855,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_6),32);
    bufp->fullIData(oldp+4856,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_58_7),32);
    bufp->fullIData(oldp+4857,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_0),32);
    bufp->fullIData(oldp+4858,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_1),32);
    bufp->fullIData(oldp+4859,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_2),32);
    bufp->fullIData(oldp+4860,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_3),32);
    bufp->fullIData(oldp+4861,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_4),32);
    bufp->fullIData(oldp+4862,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_5),32);
    bufp->fullIData(oldp+4863,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_6),32);
    bufp->fullIData(oldp+4864,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_59_7),32);
    bufp->fullIData(oldp+4865,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_0),32);
    bufp->fullIData(oldp+4866,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_1),32);
    bufp->fullIData(oldp+4867,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_2),32);
    bufp->fullIData(oldp+4868,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_3),32);
    bufp->fullIData(oldp+4869,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_4),32);
    bufp->fullIData(oldp+4870,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_5),32);
    bufp->fullIData(oldp+4871,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_6),32);
    bufp->fullIData(oldp+4872,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_60_7),32);
    bufp->fullIData(oldp+4873,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_0),32);
    bufp->fullIData(oldp+4874,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_1),32);
    bufp->fullIData(oldp+4875,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_2),32);
    bufp->fullIData(oldp+4876,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_3),32);
    bufp->fullIData(oldp+4877,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_4),32);
    bufp->fullIData(oldp+4878,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_5),32);
    bufp->fullIData(oldp+4879,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_6),32);
    bufp->fullIData(oldp+4880,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_61_7),32);
    bufp->fullIData(oldp+4881,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_0),32);
    bufp->fullIData(oldp+4882,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_1),32);
    bufp->fullIData(oldp+4883,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_2),32);
    bufp->fullIData(oldp+4884,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_3),32);
    bufp->fullIData(oldp+4885,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_4),32);
    bufp->fullIData(oldp+4886,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_5),32);
    bufp->fullIData(oldp+4887,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_6),32);
    bufp->fullIData(oldp+4888,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_62_7),32);
    bufp->fullIData(oldp+4889,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_0),32);
    bufp->fullIData(oldp+4890,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_1),32);
    bufp->fullIData(oldp+4891,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_2),32);
    bufp->fullIData(oldp+4892,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_3),32);
    bufp->fullIData(oldp+4893,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_4),32);
    bufp->fullIData(oldp+4894,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_5),32);
    bufp->fullIData(oldp+4895,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_6),32);
    bufp->fullIData(oldp+4896,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_63_7),32);
    bufp->fullIData(oldp+4897,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_0),32);
    bufp->fullIData(oldp+4898,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_1),32);
    bufp->fullIData(oldp+4899,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_2),32);
    bufp->fullIData(oldp+4900,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_3),32);
    bufp->fullIData(oldp+4901,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_4),32);
    bufp->fullIData(oldp+4902,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_5),32);
    bufp->fullIData(oldp+4903,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_6),32);
    bufp->fullIData(oldp+4904,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_0_7),32);
    bufp->fullIData(oldp+4905,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_0),32);
    bufp->fullIData(oldp+4906,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_1),32);
    bufp->fullIData(oldp+4907,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_2),32);
    bufp->fullIData(oldp+4908,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_3),32);
    bufp->fullIData(oldp+4909,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_4),32);
    bufp->fullIData(oldp+4910,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_5),32);
    bufp->fullIData(oldp+4911,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_6),32);
    bufp->fullIData(oldp+4912,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_1_7),32);
    bufp->fullIData(oldp+4913,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_0),32);
    bufp->fullIData(oldp+4914,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_1),32);
    bufp->fullIData(oldp+4915,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_2),32);
    bufp->fullIData(oldp+4916,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_3),32);
    bufp->fullIData(oldp+4917,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_4),32);
    bufp->fullIData(oldp+4918,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_5),32);
    bufp->fullIData(oldp+4919,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_6),32);
    bufp->fullIData(oldp+4920,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_2_7),32);
    bufp->fullIData(oldp+4921,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_0),32);
    bufp->fullIData(oldp+4922,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_1),32);
    bufp->fullIData(oldp+4923,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_2),32);
    bufp->fullIData(oldp+4924,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_3),32);
    bufp->fullIData(oldp+4925,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_4),32);
    bufp->fullIData(oldp+4926,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_5),32);
    bufp->fullIData(oldp+4927,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_6),32);
    bufp->fullIData(oldp+4928,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_3_7),32);
    bufp->fullIData(oldp+4929,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_0),32);
    bufp->fullIData(oldp+4930,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_1),32);
    bufp->fullIData(oldp+4931,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_2),32);
    bufp->fullIData(oldp+4932,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_3),32);
    bufp->fullIData(oldp+4933,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_4),32);
    bufp->fullIData(oldp+4934,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_5),32);
    bufp->fullIData(oldp+4935,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_6),32);
    bufp->fullIData(oldp+4936,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_4_7),32);
    bufp->fullIData(oldp+4937,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_0),32);
    bufp->fullIData(oldp+4938,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_1),32);
    bufp->fullIData(oldp+4939,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_2),32);
    bufp->fullIData(oldp+4940,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_3),32);
    bufp->fullIData(oldp+4941,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_4),32);
    bufp->fullIData(oldp+4942,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_5),32);
    bufp->fullIData(oldp+4943,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_6),32);
    bufp->fullIData(oldp+4944,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_5_7),32);
    bufp->fullIData(oldp+4945,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_0),32);
    bufp->fullIData(oldp+4946,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_1),32);
    bufp->fullIData(oldp+4947,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_2),32);
    bufp->fullIData(oldp+4948,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_3),32);
    bufp->fullIData(oldp+4949,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_4),32);
    bufp->fullIData(oldp+4950,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_5),32);
    bufp->fullIData(oldp+4951,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_6),32);
    bufp->fullIData(oldp+4952,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_6_7),32);
    bufp->fullIData(oldp+4953,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_0),32);
    bufp->fullIData(oldp+4954,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_1),32);
    bufp->fullIData(oldp+4955,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_2),32);
    bufp->fullIData(oldp+4956,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_3),32);
    bufp->fullIData(oldp+4957,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_4),32);
    bufp->fullIData(oldp+4958,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_5),32);
    bufp->fullIData(oldp+4959,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_6),32);
    bufp->fullIData(oldp+4960,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_7_7),32);
    bufp->fullIData(oldp+4961,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_0),32);
    bufp->fullIData(oldp+4962,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_1),32);
    bufp->fullIData(oldp+4963,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_2),32);
    bufp->fullIData(oldp+4964,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_3),32);
    bufp->fullIData(oldp+4965,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_4),32);
    bufp->fullIData(oldp+4966,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_5),32);
    bufp->fullIData(oldp+4967,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_6),32);
    bufp->fullIData(oldp+4968,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_8_7),32);
    bufp->fullIData(oldp+4969,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_0),32);
    bufp->fullIData(oldp+4970,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_1),32);
    bufp->fullIData(oldp+4971,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_2),32);
    bufp->fullIData(oldp+4972,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_3),32);
    bufp->fullIData(oldp+4973,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_4),32);
    bufp->fullIData(oldp+4974,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_5),32);
    bufp->fullIData(oldp+4975,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_6),32);
    bufp->fullIData(oldp+4976,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_9_7),32);
    bufp->fullIData(oldp+4977,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_0),32);
    bufp->fullIData(oldp+4978,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_1),32);
    bufp->fullIData(oldp+4979,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_2),32);
    bufp->fullIData(oldp+4980,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_3),32);
    bufp->fullIData(oldp+4981,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_4),32);
    bufp->fullIData(oldp+4982,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_5),32);
    bufp->fullIData(oldp+4983,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_6),32);
    bufp->fullIData(oldp+4984,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_10_7),32);
    bufp->fullIData(oldp+4985,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_0),32);
    bufp->fullIData(oldp+4986,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_1),32);
    bufp->fullIData(oldp+4987,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_2),32);
    bufp->fullIData(oldp+4988,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_3),32);
    bufp->fullIData(oldp+4989,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_4),32);
    bufp->fullIData(oldp+4990,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_5),32);
    bufp->fullIData(oldp+4991,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_6),32);
    bufp->fullIData(oldp+4992,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_11_7),32);
    bufp->fullIData(oldp+4993,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_0),32);
    bufp->fullIData(oldp+4994,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_1),32);
    bufp->fullIData(oldp+4995,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_2),32);
    bufp->fullIData(oldp+4996,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_3),32);
    bufp->fullIData(oldp+4997,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_4),32);
    bufp->fullIData(oldp+4998,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_5),32);
    bufp->fullIData(oldp+4999,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_6),32);
    bufp->fullIData(oldp+5000,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_12_7),32);
    bufp->fullIData(oldp+5001,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_0),32);
    bufp->fullIData(oldp+5002,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_1),32);
    bufp->fullIData(oldp+5003,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_2),32);
    bufp->fullIData(oldp+5004,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_3),32);
    bufp->fullIData(oldp+5005,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_4),32);
    bufp->fullIData(oldp+5006,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_5),32);
    bufp->fullIData(oldp+5007,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_6),32);
    bufp->fullIData(oldp+5008,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_13_7),32);
    bufp->fullIData(oldp+5009,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_0),32);
    bufp->fullIData(oldp+5010,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_1),32);
    bufp->fullIData(oldp+5011,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_2),32);
    bufp->fullIData(oldp+5012,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_3),32);
    bufp->fullIData(oldp+5013,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_4),32);
    bufp->fullIData(oldp+5014,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_5),32);
    bufp->fullIData(oldp+5015,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_6),32);
    bufp->fullIData(oldp+5016,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_14_7),32);
    bufp->fullIData(oldp+5017,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_0),32);
    bufp->fullIData(oldp+5018,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_1),32);
    bufp->fullIData(oldp+5019,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_2),32);
    bufp->fullIData(oldp+5020,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_3),32);
    bufp->fullIData(oldp+5021,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_4),32);
    bufp->fullIData(oldp+5022,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_5),32);
    bufp->fullIData(oldp+5023,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_6),32);
    bufp->fullIData(oldp+5024,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_15_7),32);
    bufp->fullIData(oldp+5025,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_0),32);
    bufp->fullIData(oldp+5026,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_1),32);
    bufp->fullIData(oldp+5027,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_2),32);
    bufp->fullIData(oldp+5028,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_3),32);
    bufp->fullIData(oldp+5029,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_4),32);
    bufp->fullIData(oldp+5030,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_5),32);
    bufp->fullIData(oldp+5031,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_6),32);
    bufp->fullIData(oldp+5032,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_16_7),32);
    bufp->fullIData(oldp+5033,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_0),32);
    bufp->fullIData(oldp+5034,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_1),32);
    bufp->fullIData(oldp+5035,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_2),32);
    bufp->fullIData(oldp+5036,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_3),32);
    bufp->fullIData(oldp+5037,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_4),32);
    bufp->fullIData(oldp+5038,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_5),32);
    bufp->fullIData(oldp+5039,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_6),32);
    bufp->fullIData(oldp+5040,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_17_7),32);
    bufp->fullIData(oldp+5041,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_0),32);
    bufp->fullIData(oldp+5042,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_1),32);
    bufp->fullIData(oldp+5043,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_2),32);
    bufp->fullIData(oldp+5044,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_3),32);
    bufp->fullIData(oldp+5045,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_4),32);
    bufp->fullIData(oldp+5046,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_5),32);
    bufp->fullIData(oldp+5047,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_6),32);
    bufp->fullIData(oldp+5048,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_18_7),32);
    bufp->fullIData(oldp+5049,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_0),32);
    bufp->fullIData(oldp+5050,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_1),32);
    bufp->fullIData(oldp+5051,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_2),32);
    bufp->fullIData(oldp+5052,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_3),32);
    bufp->fullIData(oldp+5053,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_4),32);
    bufp->fullIData(oldp+5054,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_5),32);
    bufp->fullIData(oldp+5055,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_6),32);
    bufp->fullIData(oldp+5056,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_19_7),32);
    bufp->fullIData(oldp+5057,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_0),32);
    bufp->fullIData(oldp+5058,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_1),32);
    bufp->fullIData(oldp+5059,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_2),32);
    bufp->fullIData(oldp+5060,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_3),32);
    bufp->fullIData(oldp+5061,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_4),32);
    bufp->fullIData(oldp+5062,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_5),32);
    bufp->fullIData(oldp+5063,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_6),32);
    bufp->fullIData(oldp+5064,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_20_7),32);
    bufp->fullIData(oldp+5065,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_0),32);
    bufp->fullIData(oldp+5066,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_1),32);
    bufp->fullIData(oldp+5067,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_2),32);
    bufp->fullIData(oldp+5068,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_3),32);
    bufp->fullIData(oldp+5069,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_4),32);
    bufp->fullIData(oldp+5070,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_5),32);
    bufp->fullIData(oldp+5071,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_6),32);
    bufp->fullIData(oldp+5072,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_21_7),32);
    bufp->fullIData(oldp+5073,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_0),32);
    bufp->fullIData(oldp+5074,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_1),32);
    bufp->fullIData(oldp+5075,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_2),32);
    bufp->fullIData(oldp+5076,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_3),32);
    bufp->fullIData(oldp+5077,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_4),32);
    bufp->fullIData(oldp+5078,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_5),32);
    bufp->fullIData(oldp+5079,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_6),32);
    bufp->fullIData(oldp+5080,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_22_7),32);
    bufp->fullIData(oldp+5081,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_0),32);
    bufp->fullIData(oldp+5082,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_1),32);
    bufp->fullIData(oldp+5083,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_2),32);
    bufp->fullIData(oldp+5084,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_3),32);
    bufp->fullIData(oldp+5085,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_4),32);
    bufp->fullIData(oldp+5086,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_5),32);
    bufp->fullIData(oldp+5087,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_6),32);
    bufp->fullIData(oldp+5088,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_23_7),32);
    bufp->fullIData(oldp+5089,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_0),32);
    bufp->fullIData(oldp+5090,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_1),32);
    bufp->fullIData(oldp+5091,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_2),32);
    bufp->fullIData(oldp+5092,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_3),32);
    bufp->fullIData(oldp+5093,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_4),32);
    bufp->fullIData(oldp+5094,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_5),32);
    bufp->fullIData(oldp+5095,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_6),32);
    bufp->fullIData(oldp+5096,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_24_7),32);
    bufp->fullIData(oldp+5097,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_0),32);
    bufp->fullIData(oldp+5098,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_1),32);
    bufp->fullIData(oldp+5099,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_2),32);
    bufp->fullIData(oldp+5100,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_3),32);
    bufp->fullIData(oldp+5101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_4),32);
    bufp->fullIData(oldp+5102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_5),32);
    bufp->fullIData(oldp+5103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_6),32);
    bufp->fullIData(oldp+5104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_25_7),32);
    bufp->fullIData(oldp+5105,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_0),32);
    bufp->fullIData(oldp+5106,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_1),32);
    bufp->fullIData(oldp+5107,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_2),32);
    bufp->fullIData(oldp+5108,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_3),32);
    bufp->fullIData(oldp+5109,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_4),32);
    bufp->fullIData(oldp+5110,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_5),32);
    bufp->fullIData(oldp+5111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_6),32);
    bufp->fullIData(oldp+5112,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_26_7),32);
    bufp->fullIData(oldp+5113,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_0),32);
    bufp->fullIData(oldp+5114,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_1),32);
    bufp->fullIData(oldp+5115,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_2),32);
    bufp->fullIData(oldp+5116,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_3),32);
    bufp->fullIData(oldp+5117,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_4),32);
    bufp->fullIData(oldp+5118,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_5),32);
    bufp->fullIData(oldp+5119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_6),32);
    bufp->fullIData(oldp+5120,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_27_7),32);
    bufp->fullIData(oldp+5121,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_0),32);
    bufp->fullIData(oldp+5122,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_1),32);
    bufp->fullIData(oldp+5123,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_2),32);
    bufp->fullIData(oldp+5124,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_3),32);
    bufp->fullIData(oldp+5125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_4),32);
    bufp->fullIData(oldp+5126,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_5),32);
    bufp->fullIData(oldp+5127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_6),32);
    bufp->fullIData(oldp+5128,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_28_7),32);
    bufp->fullIData(oldp+5129,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_0),32);
    bufp->fullIData(oldp+5130,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_1),32);
    bufp->fullIData(oldp+5131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_2),32);
    bufp->fullIData(oldp+5132,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_3),32);
    bufp->fullIData(oldp+5133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_4),32);
    bufp->fullIData(oldp+5134,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_5),32);
    bufp->fullIData(oldp+5135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_6),32);
    bufp->fullIData(oldp+5136,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_29_7),32);
    bufp->fullIData(oldp+5137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_0),32);
    bufp->fullIData(oldp+5138,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_1),32);
    bufp->fullIData(oldp+5139,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_2),32);
    bufp->fullIData(oldp+5140,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_3),32);
    bufp->fullIData(oldp+5141,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_4),32);
    bufp->fullIData(oldp+5142,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_5),32);
    bufp->fullIData(oldp+5143,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_6),32);
    bufp->fullIData(oldp+5144,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_30_7),32);
    bufp->fullIData(oldp+5145,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_0),32);
    bufp->fullIData(oldp+5146,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_1),32);
    bufp->fullIData(oldp+5147,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_2),32);
    bufp->fullIData(oldp+5148,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_3),32);
    bufp->fullIData(oldp+5149,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_4),32);
    bufp->fullIData(oldp+5150,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_5),32);
    bufp->fullIData(oldp+5151,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_6),32);
    bufp->fullIData(oldp+5152,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_31_7),32);
    bufp->fullIData(oldp+5153,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_0),32);
    bufp->fullIData(oldp+5154,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_1),32);
    bufp->fullIData(oldp+5155,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_2),32);
    bufp->fullIData(oldp+5156,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_3),32);
    bufp->fullIData(oldp+5157,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_4),32);
    bufp->fullIData(oldp+5158,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_5),32);
    bufp->fullIData(oldp+5159,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_6),32);
    bufp->fullIData(oldp+5160,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_32_7),32);
    bufp->fullIData(oldp+5161,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_0),32);
    bufp->fullIData(oldp+5162,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_1),32);
    bufp->fullIData(oldp+5163,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_2),32);
    bufp->fullIData(oldp+5164,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_3),32);
    bufp->fullIData(oldp+5165,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_4),32);
    bufp->fullIData(oldp+5166,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_5),32);
    bufp->fullIData(oldp+5167,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_6),32);
    bufp->fullIData(oldp+5168,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_33_7),32);
    bufp->fullIData(oldp+5169,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_0),32);
    bufp->fullIData(oldp+5170,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_1),32);
    bufp->fullIData(oldp+5171,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_2),32);
    bufp->fullIData(oldp+5172,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_3),32);
    bufp->fullIData(oldp+5173,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_4),32);
    bufp->fullIData(oldp+5174,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_5),32);
    bufp->fullIData(oldp+5175,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_6),32);
    bufp->fullIData(oldp+5176,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_34_7),32);
    bufp->fullIData(oldp+5177,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_0),32);
    bufp->fullIData(oldp+5178,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_1),32);
    bufp->fullIData(oldp+5179,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_2),32);
    bufp->fullIData(oldp+5180,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_3),32);
    bufp->fullIData(oldp+5181,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_4),32);
    bufp->fullIData(oldp+5182,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_5),32);
    bufp->fullIData(oldp+5183,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_6),32);
    bufp->fullIData(oldp+5184,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_35_7),32);
    bufp->fullIData(oldp+5185,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_0),32);
    bufp->fullIData(oldp+5186,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_1),32);
    bufp->fullIData(oldp+5187,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_2),32);
    bufp->fullIData(oldp+5188,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_3),32);
    bufp->fullIData(oldp+5189,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_4),32);
    bufp->fullIData(oldp+5190,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_5),32);
    bufp->fullIData(oldp+5191,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_6),32);
    bufp->fullIData(oldp+5192,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_36_7),32);
    bufp->fullIData(oldp+5193,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_0),32);
    bufp->fullIData(oldp+5194,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_1),32);
    bufp->fullIData(oldp+5195,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_2),32);
    bufp->fullIData(oldp+5196,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_3),32);
    bufp->fullIData(oldp+5197,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_4),32);
    bufp->fullIData(oldp+5198,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_5),32);
    bufp->fullIData(oldp+5199,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_6),32);
    bufp->fullIData(oldp+5200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_37_7),32);
    bufp->fullIData(oldp+5201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_0),32);
    bufp->fullIData(oldp+5202,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_1),32);
    bufp->fullIData(oldp+5203,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_2),32);
    bufp->fullIData(oldp+5204,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_3),32);
    bufp->fullIData(oldp+5205,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_4),32);
    bufp->fullIData(oldp+5206,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_5),32);
    bufp->fullIData(oldp+5207,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_6),32);
    bufp->fullIData(oldp+5208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_38_7),32);
    bufp->fullIData(oldp+5209,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_0),32);
    bufp->fullIData(oldp+5210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_1),32);
    bufp->fullIData(oldp+5211,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_2),32);
    bufp->fullIData(oldp+5212,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_3),32);
    bufp->fullIData(oldp+5213,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_4),32);
    bufp->fullIData(oldp+5214,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_5),32);
    bufp->fullIData(oldp+5215,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_6),32);
    bufp->fullIData(oldp+5216,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_39_7),32);
    bufp->fullIData(oldp+5217,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_0),32);
    bufp->fullIData(oldp+5218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_1),32);
    bufp->fullIData(oldp+5219,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_2),32);
    bufp->fullIData(oldp+5220,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_3),32);
    bufp->fullIData(oldp+5221,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_4),32);
    bufp->fullIData(oldp+5222,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_5),32);
    bufp->fullIData(oldp+5223,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_6),32);
    bufp->fullIData(oldp+5224,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_40_7),32);
    bufp->fullIData(oldp+5225,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_0),32);
    bufp->fullIData(oldp+5226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_1),32);
    bufp->fullIData(oldp+5227,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_2),32);
    bufp->fullIData(oldp+5228,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_3),32);
    bufp->fullIData(oldp+5229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_4),32);
    bufp->fullIData(oldp+5230,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_5),32);
    bufp->fullIData(oldp+5231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_6),32);
    bufp->fullIData(oldp+5232,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_41_7),32);
    bufp->fullIData(oldp+5233,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_0),32);
    bufp->fullIData(oldp+5234,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_1),32);
    bufp->fullIData(oldp+5235,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_2),32);
    bufp->fullIData(oldp+5236,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_3),32);
    bufp->fullIData(oldp+5237,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_4),32);
    bufp->fullIData(oldp+5238,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_5),32);
    bufp->fullIData(oldp+5239,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_6),32);
    bufp->fullIData(oldp+5240,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_42_7),32);
    bufp->fullIData(oldp+5241,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_0),32);
    bufp->fullIData(oldp+5242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_1),32);
    bufp->fullIData(oldp+5243,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_2),32);
    bufp->fullIData(oldp+5244,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_3),32);
    bufp->fullIData(oldp+5245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_4),32);
    bufp->fullIData(oldp+5246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_5),32);
    bufp->fullIData(oldp+5247,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_6),32);
    bufp->fullIData(oldp+5248,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_43_7),32);
    bufp->fullIData(oldp+5249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_0),32);
    bufp->fullIData(oldp+5250,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_1),32);
    bufp->fullIData(oldp+5251,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_2),32);
    bufp->fullIData(oldp+5252,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_3),32);
    bufp->fullIData(oldp+5253,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_4),32);
    bufp->fullIData(oldp+5254,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_5),32);
    bufp->fullIData(oldp+5255,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_6),32);
    bufp->fullIData(oldp+5256,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_44_7),32);
    bufp->fullIData(oldp+5257,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_0),32);
    bufp->fullIData(oldp+5258,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_1),32);
    bufp->fullIData(oldp+5259,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_2),32);
    bufp->fullIData(oldp+5260,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_3),32);
    bufp->fullIData(oldp+5261,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_4),32);
    bufp->fullIData(oldp+5262,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_5),32);
    bufp->fullIData(oldp+5263,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_6),32);
    bufp->fullIData(oldp+5264,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_45_7),32);
    bufp->fullIData(oldp+5265,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_0),32);
    bufp->fullIData(oldp+5266,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_1),32);
    bufp->fullIData(oldp+5267,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_2),32);
    bufp->fullIData(oldp+5268,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_3),32);
    bufp->fullIData(oldp+5269,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_4),32);
    bufp->fullIData(oldp+5270,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_5),32);
    bufp->fullIData(oldp+5271,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_6),32);
    bufp->fullIData(oldp+5272,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_46_7),32);
    bufp->fullIData(oldp+5273,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_0),32);
    bufp->fullIData(oldp+5274,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_1),32);
    bufp->fullIData(oldp+5275,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_2),32);
    bufp->fullIData(oldp+5276,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_3),32);
    bufp->fullIData(oldp+5277,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_4),32);
    bufp->fullIData(oldp+5278,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_5),32);
    bufp->fullIData(oldp+5279,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_6),32);
    bufp->fullIData(oldp+5280,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_47_7),32);
    bufp->fullIData(oldp+5281,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_0),32);
    bufp->fullIData(oldp+5282,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_1),32);
    bufp->fullIData(oldp+5283,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_2),32);
    bufp->fullIData(oldp+5284,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_3),32);
    bufp->fullIData(oldp+5285,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_4),32);
    bufp->fullIData(oldp+5286,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_5),32);
    bufp->fullIData(oldp+5287,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_6),32);
    bufp->fullIData(oldp+5288,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_48_7),32);
    bufp->fullIData(oldp+5289,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_0),32);
    bufp->fullIData(oldp+5290,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_1),32);
    bufp->fullIData(oldp+5291,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_2),32);
    bufp->fullIData(oldp+5292,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_3),32);
    bufp->fullIData(oldp+5293,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_4),32);
    bufp->fullIData(oldp+5294,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_5),32);
    bufp->fullIData(oldp+5295,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_6),32);
    bufp->fullIData(oldp+5296,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_49_7),32);
    bufp->fullIData(oldp+5297,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_0),32);
    bufp->fullIData(oldp+5298,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_1),32);
    bufp->fullIData(oldp+5299,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_2),32);
    bufp->fullIData(oldp+5300,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_3),32);
    bufp->fullIData(oldp+5301,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_4),32);
    bufp->fullIData(oldp+5302,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_5),32);
    bufp->fullIData(oldp+5303,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_6),32);
    bufp->fullIData(oldp+5304,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_50_7),32);
    bufp->fullIData(oldp+5305,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_0),32);
    bufp->fullIData(oldp+5306,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_1),32);
    bufp->fullIData(oldp+5307,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_2),32);
    bufp->fullIData(oldp+5308,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_3),32);
    bufp->fullIData(oldp+5309,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_4),32);
    bufp->fullIData(oldp+5310,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_5),32);
    bufp->fullIData(oldp+5311,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_6),32);
    bufp->fullIData(oldp+5312,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_51_7),32);
    bufp->fullIData(oldp+5313,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_0),32);
    bufp->fullIData(oldp+5314,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_1),32);
    bufp->fullIData(oldp+5315,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_2),32);
    bufp->fullIData(oldp+5316,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_3),32);
    bufp->fullIData(oldp+5317,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_4),32);
    bufp->fullIData(oldp+5318,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_5),32);
    bufp->fullIData(oldp+5319,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_6),32);
    bufp->fullIData(oldp+5320,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_52_7),32);
    bufp->fullIData(oldp+5321,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_0),32);
    bufp->fullIData(oldp+5322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_1),32);
    bufp->fullIData(oldp+5323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_2),32);
    bufp->fullIData(oldp+5324,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_3),32);
    bufp->fullIData(oldp+5325,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_4),32);
    bufp->fullIData(oldp+5326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_5),32);
    bufp->fullIData(oldp+5327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_6),32);
    bufp->fullIData(oldp+5328,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_53_7),32);
    bufp->fullIData(oldp+5329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_0),32);
    bufp->fullIData(oldp+5330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_1),32);
    bufp->fullIData(oldp+5331,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_2),32);
    bufp->fullIData(oldp+5332,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_3),32);
    bufp->fullIData(oldp+5333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_4),32);
    bufp->fullIData(oldp+5334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_5),32);
    bufp->fullIData(oldp+5335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_6),32);
    bufp->fullIData(oldp+5336,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_54_7),32);
    bufp->fullIData(oldp+5337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_0),32);
    bufp->fullIData(oldp+5338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_1),32);
    bufp->fullIData(oldp+5339,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_2),32);
    bufp->fullIData(oldp+5340,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_3),32);
    bufp->fullIData(oldp+5341,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_4),32);
    bufp->fullIData(oldp+5342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_5),32);
    bufp->fullIData(oldp+5343,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_6),32);
    bufp->fullIData(oldp+5344,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_55_7),32);
    bufp->fullIData(oldp+5345,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_0),32);
    bufp->fullIData(oldp+5346,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_1),32);
    bufp->fullIData(oldp+5347,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_2),32);
    bufp->fullIData(oldp+5348,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_3),32);
    bufp->fullIData(oldp+5349,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_4),32);
    bufp->fullIData(oldp+5350,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_5),32);
    bufp->fullIData(oldp+5351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_6),32);
    bufp->fullIData(oldp+5352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_56_7),32);
    bufp->fullIData(oldp+5353,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_0),32);
    bufp->fullIData(oldp+5354,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_1),32);
    bufp->fullIData(oldp+5355,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_2),32);
    bufp->fullIData(oldp+5356,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_3),32);
    bufp->fullIData(oldp+5357,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_4),32);
    bufp->fullIData(oldp+5358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_5),32);
    bufp->fullIData(oldp+5359,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_6),32);
    bufp->fullIData(oldp+5360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_57_7),32);
    bufp->fullIData(oldp+5361,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_0),32);
    bufp->fullIData(oldp+5362,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_1),32);
    bufp->fullIData(oldp+5363,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_2),32);
    bufp->fullIData(oldp+5364,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_3),32);
    bufp->fullIData(oldp+5365,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_4),32);
    bufp->fullIData(oldp+5366,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_5),32);
    bufp->fullIData(oldp+5367,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_6),32);
    bufp->fullIData(oldp+5368,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_58_7),32);
    bufp->fullIData(oldp+5369,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_0),32);
    bufp->fullIData(oldp+5370,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_1),32);
    bufp->fullIData(oldp+5371,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_2),32);
    bufp->fullIData(oldp+5372,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_3),32);
    bufp->fullIData(oldp+5373,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_4),32);
    bufp->fullIData(oldp+5374,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_5),32);
    bufp->fullIData(oldp+5375,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_6),32);
    bufp->fullIData(oldp+5376,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_59_7),32);
    bufp->fullIData(oldp+5377,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_0),32);
    bufp->fullIData(oldp+5378,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_1),32);
    bufp->fullIData(oldp+5379,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_2),32);
    bufp->fullIData(oldp+5380,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_3),32);
    bufp->fullIData(oldp+5381,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_4),32);
    bufp->fullIData(oldp+5382,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_5),32);
    bufp->fullIData(oldp+5383,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_6),32);
    bufp->fullIData(oldp+5384,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_60_7),32);
    bufp->fullIData(oldp+5385,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_0),32);
    bufp->fullIData(oldp+5386,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_1),32);
    bufp->fullIData(oldp+5387,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_2),32);
    bufp->fullIData(oldp+5388,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_3),32);
    bufp->fullIData(oldp+5389,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_4),32);
    bufp->fullIData(oldp+5390,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_5),32);
    bufp->fullIData(oldp+5391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_6),32);
    bufp->fullIData(oldp+5392,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_61_7),32);
    bufp->fullIData(oldp+5393,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_0),32);
    bufp->fullIData(oldp+5394,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_1),32);
    bufp->fullIData(oldp+5395,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_2),32);
    bufp->fullIData(oldp+5396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_3),32);
    bufp->fullIData(oldp+5397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_4),32);
    bufp->fullIData(oldp+5398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_5),32);
    bufp->fullIData(oldp+5399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_6),32);
    bufp->fullIData(oldp+5400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_62_7),32);
    bufp->fullIData(oldp+5401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_0),32);
    bufp->fullIData(oldp+5402,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_1),32);
    bufp->fullIData(oldp+5403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_2),32);
    bufp->fullIData(oldp+5404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_3),32);
    bufp->fullIData(oldp+5405,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_4),32);
    bufp->fullIData(oldp+5406,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_5),32);
    bufp->fullIData(oldp+5407,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_6),32);
    bufp->fullIData(oldp+5408,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_63_7),32);
    bufp->fullIData(oldp+5409,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_0),32);
    bufp->fullIData(oldp+5410,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_1),32);
    bufp->fullIData(oldp+5411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_2),32);
    bufp->fullIData(oldp+5412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_3),32);
    bufp->fullIData(oldp+5413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_4),32);
    bufp->fullIData(oldp+5414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_5),32);
    bufp->fullIData(oldp+5415,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_6),32);
    bufp->fullIData(oldp+5416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_0_7),32);
    bufp->fullIData(oldp+5417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_0),32);
    bufp->fullIData(oldp+5418,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_1),32);
    bufp->fullIData(oldp+5419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_2),32);
    bufp->fullIData(oldp+5420,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_3),32);
    bufp->fullIData(oldp+5421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_4),32);
    bufp->fullIData(oldp+5422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_5),32);
    bufp->fullIData(oldp+5423,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_6),32);
    bufp->fullIData(oldp+5424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_1_7),32);
    bufp->fullIData(oldp+5425,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_0),32);
    bufp->fullIData(oldp+5426,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_1),32);
    bufp->fullIData(oldp+5427,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_2),32);
    bufp->fullIData(oldp+5428,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_3),32);
    bufp->fullIData(oldp+5429,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_4),32);
    bufp->fullIData(oldp+5430,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_5),32);
    bufp->fullIData(oldp+5431,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_6),32);
    bufp->fullIData(oldp+5432,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_2_7),32);
    bufp->fullIData(oldp+5433,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_0),32);
    bufp->fullIData(oldp+5434,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_1),32);
    bufp->fullIData(oldp+5435,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_2),32);
    bufp->fullIData(oldp+5436,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_3),32);
    bufp->fullIData(oldp+5437,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_4),32);
    bufp->fullIData(oldp+5438,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_5),32);
    bufp->fullIData(oldp+5439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_6),32);
    bufp->fullIData(oldp+5440,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_3_7),32);
    bufp->fullIData(oldp+5441,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_0),32);
    bufp->fullIData(oldp+5442,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_1),32);
    bufp->fullIData(oldp+5443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_2),32);
    bufp->fullIData(oldp+5444,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_3),32);
    bufp->fullIData(oldp+5445,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_4),32);
    bufp->fullIData(oldp+5446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_5),32);
    bufp->fullIData(oldp+5447,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_6),32);
    bufp->fullIData(oldp+5448,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_4_7),32);
    bufp->fullIData(oldp+5449,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_0),32);
    bufp->fullIData(oldp+5450,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_1),32);
    bufp->fullIData(oldp+5451,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_2),32);
    bufp->fullIData(oldp+5452,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_3),32);
    bufp->fullIData(oldp+5453,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_4),32);
    bufp->fullIData(oldp+5454,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_5),32);
    bufp->fullIData(oldp+5455,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_6),32);
    bufp->fullIData(oldp+5456,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_5_7),32);
    bufp->fullIData(oldp+5457,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_0),32);
    bufp->fullIData(oldp+5458,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_1),32);
    bufp->fullIData(oldp+5459,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_2),32);
    bufp->fullIData(oldp+5460,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_3),32);
    bufp->fullIData(oldp+5461,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_4),32);
    bufp->fullIData(oldp+5462,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_5),32);
    bufp->fullIData(oldp+5463,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_6),32);
    bufp->fullIData(oldp+5464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_6_7),32);
    bufp->fullIData(oldp+5465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_0),32);
    bufp->fullIData(oldp+5466,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_1),32);
    bufp->fullIData(oldp+5467,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_2),32);
    bufp->fullIData(oldp+5468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_3),32);
    bufp->fullIData(oldp+5469,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_4),32);
    bufp->fullIData(oldp+5470,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_5),32);
    bufp->fullIData(oldp+5471,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_6),32);
    bufp->fullIData(oldp+5472,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_7_7),32);
    bufp->fullIData(oldp+5473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_0),32);
    bufp->fullIData(oldp+5474,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_1),32);
    bufp->fullIData(oldp+5475,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_2),32);
    bufp->fullIData(oldp+5476,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_3),32);
    bufp->fullIData(oldp+5477,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_4),32);
    bufp->fullIData(oldp+5478,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_5),32);
    bufp->fullIData(oldp+5479,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_6),32);
    bufp->fullIData(oldp+5480,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_8_7),32);
    bufp->fullIData(oldp+5481,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_0),32);
    bufp->fullIData(oldp+5482,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_1),32);
    bufp->fullIData(oldp+5483,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_2),32);
    bufp->fullIData(oldp+5484,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_3),32);
    bufp->fullIData(oldp+5485,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_4),32);
    bufp->fullIData(oldp+5486,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_5),32);
    bufp->fullIData(oldp+5487,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_6),32);
    bufp->fullIData(oldp+5488,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_9_7),32);
    bufp->fullIData(oldp+5489,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_0),32);
    bufp->fullIData(oldp+5490,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_1),32);
    bufp->fullIData(oldp+5491,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_2),32);
    bufp->fullIData(oldp+5492,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_3),32);
    bufp->fullIData(oldp+5493,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_4),32);
    bufp->fullIData(oldp+5494,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_5),32);
    bufp->fullIData(oldp+5495,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_6),32);
    bufp->fullIData(oldp+5496,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_10_7),32);
    bufp->fullIData(oldp+5497,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_0),32);
    bufp->fullIData(oldp+5498,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_1),32);
    bufp->fullIData(oldp+5499,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_2),32);
    bufp->fullIData(oldp+5500,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_3),32);
    bufp->fullIData(oldp+5501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_4),32);
    bufp->fullIData(oldp+5502,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_5),32);
    bufp->fullIData(oldp+5503,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_6),32);
    bufp->fullIData(oldp+5504,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_11_7),32);
    bufp->fullIData(oldp+5505,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_0),32);
    bufp->fullIData(oldp+5506,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_1),32);
    bufp->fullIData(oldp+5507,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_2),32);
    bufp->fullIData(oldp+5508,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_3),32);
    bufp->fullIData(oldp+5509,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_4),32);
    bufp->fullIData(oldp+5510,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_5),32);
    bufp->fullIData(oldp+5511,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_6),32);
    bufp->fullIData(oldp+5512,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_12_7),32);
    bufp->fullIData(oldp+5513,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_0),32);
    bufp->fullIData(oldp+5514,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_1),32);
    bufp->fullIData(oldp+5515,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_2),32);
    bufp->fullIData(oldp+5516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_3),32);
    bufp->fullIData(oldp+5517,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_4),32);
    bufp->fullIData(oldp+5518,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_5),32);
    bufp->fullIData(oldp+5519,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_6),32);
    bufp->fullIData(oldp+5520,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_13_7),32);
    bufp->fullIData(oldp+5521,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_0),32);
    bufp->fullIData(oldp+5522,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_1),32);
    bufp->fullIData(oldp+5523,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_2),32);
    bufp->fullIData(oldp+5524,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_3),32);
    bufp->fullIData(oldp+5525,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_4),32);
    bufp->fullIData(oldp+5526,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_5),32);
    bufp->fullIData(oldp+5527,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_6),32);
    bufp->fullIData(oldp+5528,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_14_7),32);
    bufp->fullIData(oldp+5529,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_0),32);
    bufp->fullIData(oldp+5530,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_1),32);
    bufp->fullIData(oldp+5531,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_2),32);
    bufp->fullIData(oldp+5532,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_3),32);
    bufp->fullIData(oldp+5533,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_4),32);
    bufp->fullIData(oldp+5534,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_5),32);
    bufp->fullIData(oldp+5535,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_6),32);
    bufp->fullIData(oldp+5536,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_15_7),32);
    bufp->fullIData(oldp+5537,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_0),32);
    bufp->fullIData(oldp+5538,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_1),32);
    bufp->fullIData(oldp+5539,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_2),32);
    bufp->fullIData(oldp+5540,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_3),32);
    bufp->fullIData(oldp+5541,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_4),32);
    bufp->fullIData(oldp+5542,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_5),32);
    bufp->fullIData(oldp+5543,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_6),32);
    bufp->fullIData(oldp+5544,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_16_7),32);
    bufp->fullIData(oldp+5545,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_0),32);
    bufp->fullIData(oldp+5546,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_1),32);
    bufp->fullIData(oldp+5547,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_2),32);
    bufp->fullIData(oldp+5548,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_3),32);
    bufp->fullIData(oldp+5549,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_4),32);
    bufp->fullIData(oldp+5550,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_5),32);
    bufp->fullIData(oldp+5551,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_6),32);
    bufp->fullIData(oldp+5552,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_17_7),32);
    bufp->fullIData(oldp+5553,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_0),32);
    bufp->fullIData(oldp+5554,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_1),32);
    bufp->fullIData(oldp+5555,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_2),32);
    bufp->fullIData(oldp+5556,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_3),32);
    bufp->fullIData(oldp+5557,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_4),32);
    bufp->fullIData(oldp+5558,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_5),32);
    bufp->fullIData(oldp+5559,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_6),32);
    bufp->fullIData(oldp+5560,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_18_7),32);
    bufp->fullIData(oldp+5561,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_0),32);
    bufp->fullIData(oldp+5562,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_1),32);
    bufp->fullIData(oldp+5563,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_2),32);
    bufp->fullIData(oldp+5564,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_3),32);
    bufp->fullIData(oldp+5565,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_4),32);
    bufp->fullIData(oldp+5566,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_5),32);
    bufp->fullIData(oldp+5567,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_6),32);
    bufp->fullIData(oldp+5568,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_19_7),32);
    bufp->fullIData(oldp+5569,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_0),32);
    bufp->fullIData(oldp+5570,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_1),32);
    bufp->fullIData(oldp+5571,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_2),32);
    bufp->fullIData(oldp+5572,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_3),32);
    bufp->fullIData(oldp+5573,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_4),32);
    bufp->fullIData(oldp+5574,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_5),32);
    bufp->fullIData(oldp+5575,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_6),32);
    bufp->fullIData(oldp+5576,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_20_7),32);
    bufp->fullIData(oldp+5577,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_0),32);
    bufp->fullIData(oldp+5578,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_1),32);
    bufp->fullIData(oldp+5579,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_2),32);
    bufp->fullIData(oldp+5580,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_3),32);
    bufp->fullIData(oldp+5581,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_4),32);
    bufp->fullIData(oldp+5582,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_5),32);
    bufp->fullIData(oldp+5583,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_6),32);
    bufp->fullIData(oldp+5584,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_21_7),32);
    bufp->fullIData(oldp+5585,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_0),32);
    bufp->fullIData(oldp+5586,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_1),32);
    bufp->fullIData(oldp+5587,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_2),32);
    bufp->fullIData(oldp+5588,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_3),32);
    bufp->fullIData(oldp+5589,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_4),32);
    bufp->fullIData(oldp+5590,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_5),32);
    bufp->fullIData(oldp+5591,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_6),32);
    bufp->fullIData(oldp+5592,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_22_7),32);
    bufp->fullIData(oldp+5593,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_0),32);
    bufp->fullIData(oldp+5594,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_1),32);
    bufp->fullIData(oldp+5595,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_2),32);
    bufp->fullIData(oldp+5596,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_3),32);
    bufp->fullIData(oldp+5597,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_4),32);
    bufp->fullIData(oldp+5598,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_5),32);
    bufp->fullIData(oldp+5599,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_6),32);
    bufp->fullIData(oldp+5600,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_23_7),32);
    bufp->fullIData(oldp+5601,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_0),32);
    bufp->fullIData(oldp+5602,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_1),32);
    bufp->fullIData(oldp+5603,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_2),32);
    bufp->fullIData(oldp+5604,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_3),32);
    bufp->fullIData(oldp+5605,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_4),32);
    bufp->fullIData(oldp+5606,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_5),32);
    bufp->fullIData(oldp+5607,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_6),32);
    bufp->fullIData(oldp+5608,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_24_7),32);
    bufp->fullIData(oldp+5609,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_0),32);
    bufp->fullIData(oldp+5610,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_1),32);
    bufp->fullIData(oldp+5611,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_2),32);
    bufp->fullIData(oldp+5612,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_3),32);
    bufp->fullIData(oldp+5613,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_4),32);
    bufp->fullIData(oldp+5614,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_5),32);
    bufp->fullIData(oldp+5615,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_6),32);
    bufp->fullIData(oldp+5616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_25_7),32);
    bufp->fullIData(oldp+5617,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_0),32);
    bufp->fullIData(oldp+5618,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_1),32);
    bufp->fullIData(oldp+5619,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_2),32);
    bufp->fullIData(oldp+5620,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_3),32);
    bufp->fullIData(oldp+5621,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_4),32);
    bufp->fullIData(oldp+5622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_5),32);
    bufp->fullIData(oldp+5623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_6),32);
    bufp->fullIData(oldp+5624,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_26_7),32);
    bufp->fullIData(oldp+5625,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_0),32);
    bufp->fullIData(oldp+5626,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_1),32);
    bufp->fullIData(oldp+5627,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_2),32);
    bufp->fullIData(oldp+5628,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_3),32);
    bufp->fullIData(oldp+5629,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_4),32);
    bufp->fullIData(oldp+5630,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_5),32);
    bufp->fullIData(oldp+5631,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_6),32);
    bufp->fullIData(oldp+5632,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_27_7),32);
    bufp->fullIData(oldp+5633,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_0),32);
    bufp->fullIData(oldp+5634,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_1),32);
    bufp->fullIData(oldp+5635,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_2),32);
    bufp->fullIData(oldp+5636,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_3),32);
    bufp->fullIData(oldp+5637,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_4),32);
    bufp->fullIData(oldp+5638,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_5),32);
    bufp->fullIData(oldp+5639,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_6),32);
    bufp->fullIData(oldp+5640,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_28_7),32);
    bufp->fullIData(oldp+5641,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_0),32);
    bufp->fullIData(oldp+5642,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_1),32);
    bufp->fullIData(oldp+5643,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_2),32);
    bufp->fullIData(oldp+5644,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_3),32);
    bufp->fullIData(oldp+5645,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_4),32);
    bufp->fullIData(oldp+5646,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_5),32);
    bufp->fullIData(oldp+5647,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_6),32);
    bufp->fullIData(oldp+5648,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_29_7),32);
    bufp->fullIData(oldp+5649,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_0),32);
    bufp->fullIData(oldp+5650,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_1),32);
    bufp->fullIData(oldp+5651,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_2),32);
    bufp->fullIData(oldp+5652,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_3),32);
    bufp->fullIData(oldp+5653,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_4),32);
    bufp->fullIData(oldp+5654,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_5),32);
    bufp->fullIData(oldp+5655,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_6),32);
    bufp->fullIData(oldp+5656,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_30_7),32);
    bufp->fullIData(oldp+5657,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_0),32);
    bufp->fullIData(oldp+5658,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_1),32);
    bufp->fullIData(oldp+5659,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_2),32);
    bufp->fullIData(oldp+5660,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_3),32);
    bufp->fullIData(oldp+5661,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_4),32);
    bufp->fullIData(oldp+5662,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_5),32);
    bufp->fullIData(oldp+5663,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_6),32);
    bufp->fullIData(oldp+5664,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_31_7),32);
    bufp->fullIData(oldp+5665,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_0),32);
    bufp->fullIData(oldp+5666,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_1),32);
    bufp->fullIData(oldp+5667,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_2),32);
    bufp->fullIData(oldp+5668,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_3),32);
    bufp->fullIData(oldp+5669,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_4),32);
    bufp->fullIData(oldp+5670,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_5),32);
    bufp->fullIData(oldp+5671,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_6),32);
    bufp->fullIData(oldp+5672,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_32_7),32);
    bufp->fullIData(oldp+5673,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_0),32);
    bufp->fullIData(oldp+5674,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_1),32);
    bufp->fullIData(oldp+5675,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_2),32);
    bufp->fullIData(oldp+5676,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_3),32);
    bufp->fullIData(oldp+5677,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_4),32);
    bufp->fullIData(oldp+5678,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_5),32);
    bufp->fullIData(oldp+5679,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_6),32);
    bufp->fullIData(oldp+5680,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_33_7),32);
    bufp->fullIData(oldp+5681,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_0),32);
    bufp->fullIData(oldp+5682,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_1),32);
    bufp->fullIData(oldp+5683,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_2),32);
    bufp->fullIData(oldp+5684,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_3),32);
    bufp->fullIData(oldp+5685,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_4),32);
    bufp->fullIData(oldp+5686,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_5),32);
    bufp->fullIData(oldp+5687,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_6),32);
    bufp->fullIData(oldp+5688,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_34_7),32);
    bufp->fullIData(oldp+5689,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_0),32);
    bufp->fullIData(oldp+5690,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_1),32);
    bufp->fullIData(oldp+5691,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_2),32);
    bufp->fullIData(oldp+5692,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_3),32);
    bufp->fullIData(oldp+5693,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_4),32);
    bufp->fullIData(oldp+5694,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_5),32);
    bufp->fullIData(oldp+5695,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_6),32);
    bufp->fullIData(oldp+5696,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_35_7),32);
    bufp->fullIData(oldp+5697,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_0),32);
    bufp->fullIData(oldp+5698,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_1),32);
    bufp->fullIData(oldp+5699,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_2),32);
    bufp->fullIData(oldp+5700,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_3),32);
    bufp->fullIData(oldp+5701,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_4),32);
    bufp->fullIData(oldp+5702,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_5),32);
    bufp->fullIData(oldp+5703,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_6),32);
    bufp->fullIData(oldp+5704,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_36_7),32);
    bufp->fullIData(oldp+5705,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_0),32);
    bufp->fullIData(oldp+5706,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_1),32);
    bufp->fullIData(oldp+5707,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_2),32);
    bufp->fullIData(oldp+5708,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_3),32);
    bufp->fullIData(oldp+5709,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_4),32);
    bufp->fullIData(oldp+5710,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_5),32);
    bufp->fullIData(oldp+5711,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_6),32);
    bufp->fullIData(oldp+5712,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_37_7),32);
    bufp->fullIData(oldp+5713,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_0),32);
    bufp->fullIData(oldp+5714,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_1),32);
    bufp->fullIData(oldp+5715,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_2),32);
    bufp->fullIData(oldp+5716,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_3),32);
    bufp->fullIData(oldp+5717,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_4),32);
    bufp->fullIData(oldp+5718,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_5),32);
    bufp->fullIData(oldp+5719,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_6),32);
    bufp->fullIData(oldp+5720,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_38_7),32);
    bufp->fullIData(oldp+5721,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_0),32);
    bufp->fullIData(oldp+5722,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_1),32);
    bufp->fullIData(oldp+5723,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_2),32);
    bufp->fullIData(oldp+5724,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_3),32);
    bufp->fullIData(oldp+5725,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_4),32);
    bufp->fullIData(oldp+5726,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_5),32);
    bufp->fullIData(oldp+5727,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_6),32);
    bufp->fullIData(oldp+5728,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_39_7),32);
    bufp->fullIData(oldp+5729,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_0),32);
    bufp->fullIData(oldp+5730,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_1),32);
    bufp->fullIData(oldp+5731,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_2),32);
    bufp->fullIData(oldp+5732,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_3),32);
    bufp->fullIData(oldp+5733,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_4),32);
    bufp->fullIData(oldp+5734,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_5),32);
    bufp->fullIData(oldp+5735,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_6),32);
    bufp->fullIData(oldp+5736,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_40_7),32);
    bufp->fullIData(oldp+5737,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_0),32);
    bufp->fullIData(oldp+5738,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_1),32);
    bufp->fullIData(oldp+5739,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_2),32);
    bufp->fullIData(oldp+5740,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_3),32);
    bufp->fullIData(oldp+5741,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_4),32);
    bufp->fullIData(oldp+5742,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_5),32);
    bufp->fullIData(oldp+5743,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_6),32);
    bufp->fullIData(oldp+5744,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_41_7),32);
    bufp->fullIData(oldp+5745,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_0),32);
    bufp->fullIData(oldp+5746,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_1),32);
    bufp->fullIData(oldp+5747,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_2),32);
    bufp->fullIData(oldp+5748,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_3),32);
    bufp->fullIData(oldp+5749,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_4),32);
    bufp->fullIData(oldp+5750,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_5),32);
    bufp->fullIData(oldp+5751,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_6),32);
    bufp->fullIData(oldp+5752,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_42_7),32);
    bufp->fullIData(oldp+5753,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_0),32);
    bufp->fullIData(oldp+5754,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_1),32);
    bufp->fullIData(oldp+5755,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_2),32);
    bufp->fullIData(oldp+5756,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_3),32);
    bufp->fullIData(oldp+5757,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_4),32);
    bufp->fullIData(oldp+5758,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_5),32);
    bufp->fullIData(oldp+5759,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_6),32);
    bufp->fullIData(oldp+5760,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_43_7),32);
    bufp->fullIData(oldp+5761,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_0),32);
    bufp->fullIData(oldp+5762,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_1),32);
    bufp->fullIData(oldp+5763,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_2),32);
    bufp->fullIData(oldp+5764,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_3),32);
    bufp->fullIData(oldp+5765,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_4),32);
    bufp->fullIData(oldp+5766,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_5),32);
    bufp->fullIData(oldp+5767,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_6),32);
    bufp->fullIData(oldp+5768,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_44_7),32);
    bufp->fullIData(oldp+5769,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_0),32);
    bufp->fullIData(oldp+5770,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_1),32);
    bufp->fullIData(oldp+5771,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_2),32);
    bufp->fullIData(oldp+5772,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_3),32);
    bufp->fullIData(oldp+5773,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_4),32);
    bufp->fullIData(oldp+5774,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_5),32);
    bufp->fullIData(oldp+5775,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_6),32);
    bufp->fullIData(oldp+5776,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_45_7),32);
    bufp->fullIData(oldp+5777,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_0),32);
    bufp->fullIData(oldp+5778,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_1),32);
    bufp->fullIData(oldp+5779,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_2),32);
    bufp->fullIData(oldp+5780,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_3),32);
    bufp->fullIData(oldp+5781,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_4),32);
    bufp->fullIData(oldp+5782,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_5),32);
    bufp->fullIData(oldp+5783,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_6),32);
    bufp->fullIData(oldp+5784,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_46_7),32);
    bufp->fullIData(oldp+5785,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_0),32);
    bufp->fullIData(oldp+5786,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_1),32);
    bufp->fullIData(oldp+5787,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_2),32);
    bufp->fullIData(oldp+5788,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_3),32);
    bufp->fullIData(oldp+5789,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_4),32);
    bufp->fullIData(oldp+5790,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_5),32);
    bufp->fullIData(oldp+5791,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_6),32);
    bufp->fullIData(oldp+5792,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_47_7),32);
    bufp->fullIData(oldp+5793,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_0),32);
    bufp->fullIData(oldp+5794,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_1),32);
    bufp->fullIData(oldp+5795,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_2),32);
    bufp->fullIData(oldp+5796,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_3),32);
    bufp->fullIData(oldp+5797,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_4),32);
    bufp->fullIData(oldp+5798,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_5),32);
    bufp->fullIData(oldp+5799,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_6),32);
    bufp->fullIData(oldp+5800,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_48_7),32);
    bufp->fullIData(oldp+5801,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_0),32);
    bufp->fullIData(oldp+5802,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_1),32);
    bufp->fullIData(oldp+5803,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_2),32);
    bufp->fullIData(oldp+5804,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_3),32);
    bufp->fullIData(oldp+5805,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_4),32);
    bufp->fullIData(oldp+5806,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_5),32);
    bufp->fullIData(oldp+5807,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_6),32);
    bufp->fullIData(oldp+5808,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_49_7),32);
    bufp->fullIData(oldp+5809,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_0),32);
    bufp->fullIData(oldp+5810,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_1),32);
    bufp->fullIData(oldp+5811,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_2),32);
    bufp->fullIData(oldp+5812,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_3),32);
    bufp->fullIData(oldp+5813,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_4),32);
    bufp->fullIData(oldp+5814,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_5),32);
    bufp->fullIData(oldp+5815,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_6),32);
    bufp->fullIData(oldp+5816,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_50_7),32);
    bufp->fullIData(oldp+5817,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_0),32);
    bufp->fullIData(oldp+5818,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_1),32);
    bufp->fullIData(oldp+5819,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_2),32);
    bufp->fullIData(oldp+5820,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_3),32);
    bufp->fullIData(oldp+5821,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_4),32);
    bufp->fullIData(oldp+5822,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_5),32);
    bufp->fullIData(oldp+5823,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_6),32);
    bufp->fullIData(oldp+5824,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_51_7),32);
    bufp->fullIData(oldp+5825,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_0),32);
    bufp->fullIData(oldp+5826,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_1),32);
    bufp->fullIData(oldp+5827,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_2),32);
    bufp->fullIData(oldp+5828,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_3),32);
    bufp->fullIData(oldp+5829,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_4),32);
    bufp->fullIData(oldp+5830,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_5),32);
    bufp->fullIData(oldp+5831,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_6),32);
    bufp->fullIData(oldp+5832,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_52_7),32);
    bufp->fullIData(oldp+5833,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_0),32);
    bufp->fullIData(oldp+5834,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_1),32);
    bufp->fullIData(oldp+5835,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_2),32);
    bufp->fullIData(oldp+5836,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_3),32);
    bufp->fullIData(oldp+5837,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_4),32);
    bufp->fullIData(oldp+5838,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_5),32);
    bufp->fullIData(oldp+5839,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_6),32);
    bufp->fullIData(oldp+5840,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_53_7),32);
    bufp->fullIData(oldp+5841,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_0),32);
    bufp->fullIData(oldp+5842,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_1),32);
    bufp->fullIData(oldp+5843,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_2),32);
    bufp->fullIData(oldp+5844,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_3),32);
    bufp->fullIData(oldp+5845,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_4),32);
    bufp->fullIData(oldp+5846,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_5),32);
    bufp->fullIData(oldp+5847,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_6),32);
    bufp->fullIData(oldp+5848,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_54_7),32);
    bufp->fullIData(oldp+5849,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_0),32);
    bufp->fullIData(oldp+5850,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_1),32);
    bufp->fullIData(oldp+5851,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_2),32);
    bufp->fullIData(oldp+5852,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_3),32);
    bufp->fullIData(oldp+5853,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_4),32);
    bufp->fullIData(oldp+5854,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_5),32);
    bufp->fullIData(oldp+5855,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_6),32);
    bufp->fullIData(oldp+5856,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_55_7),32);
    bufp->fullIData(oldp+5857,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_0),32);
    bufp->fullIData(oldp+5858,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_1),32);
    bufp->fullIData(oldp+5859,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_2),32);
    bufp->fullIData(oldp+5860,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_3),32);
    bufp->fullIData(oldp+5861,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_4),32);
    bufp->fullIData(oldp+5862,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_5),32);
    bufp->fullIData(oldp+5863,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_6),32);
    bufp->fullIData(oldp+5864,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_56_7),32);
    bufp->fullIData(oldp+5865,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_0),32);
    bufp->fullIData(oldp+5866,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_1),32);
    bufp->fullIData(oldp+5867,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_2),32);
    bufp->fullIData(oldp+5868,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_3),32);
    bufp->fullIData(oldp+5869,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_4),32);
    bufp->fullIData(oldp+5870,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_5),32);
    bufp->fullIData(oldp+5871,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_6),32);
    bufp->fullIData(oldp+5872,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_57_7),32);
    bufp->fullIData(oldp+5873,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_0),32);
    bufp->fullIData(oldp+5874,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_1),32);
    bufp->fullIData(oldp+5875,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_2),32);
    bufp->fullIData(oldp+5876,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_3),32);
    bufp->fullIData(oldp+5877,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_4),32);
    bufp->fullIData(oldp+5878,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_5),32);
    bufp->fullIData(oldp+5879,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_6),32);
    bufp->fullIData(oldp+5880,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_58_7),32);
    bufp->fullIData(oldp+5881,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_0),32);
    bufp->fullIData(oldp+5882,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_1),32);
    bufp->fullIData(oldp+5883,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_2),32);
    bufp->fullIData(oldp+5884,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_3),32);
    bufp->fullIData(oldp+5885,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_4),32);
    bufp->fullIData(oldp+5886,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_5),32);
    bufp->fullIData(oldp+5887,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_6),32);
    bufp->fullIData(oldp+5888,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_59_7),32);
    bufp->fullIData(oldp+5889,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_0),32);
    bufp->fullIData(oldp+5890,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_1),32);
    bufp->fullIData(oldp+5891,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_2),32);
    bufp->fullIData(oldp+5892,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_3),32);
    bufp->fullIData(oldp+5893,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_4),32);
    bufp->fullIData(oldp+5894,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_5),32);
    bufp->fullIData(oldp+5895,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_6),32);
    bufp->fullIData(oldp+5896,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_60_7),32);
    bufp->fullIData(oldp+5897,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_0),32);
    bufp->fullIData(oldp+5898,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_1),32);
    bufp->fullIData(oldp+5899,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_2),32);
    bufp->fullIData(oldp+5900,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_3),32);
    bufp->fullIData(oldp+5901,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_4),32);
    bufp->fullIData(oldp+5902,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_5),32);
    bufp->fullIData(oldp+5903,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_6),32);
    bufp->fullIData(oldp+5904,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_61_7),32);
    bufp->fullIData(oldp+5905,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_0),32);
    bufp->fullIData(oldp+5906,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_1),32);
    bufp->fullIData(oldp+5907,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_2),32);
    bufp->fullIData(oldp+5908,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_3),32);
    bufp->fullIData(oldp+5909,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_4),32);
    bufp->fullIData(oldp+5910,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_5),32);
    bufp->fullIData(oldp+5911,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_6),32);
    bufp->fullIData(oldp+5912,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_62_7),32);
    bufp->fullIData(oldp+5913,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_0),32);
    bufp->fullIData(oldp+5914,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_1),32);
    bufp->fullIData(oldp+5915,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_2),32);
    bufp->fullIData(oldp+5916,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_3),32);
    bufp->fullIData(oldp+5917,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_4),32);
    bufp->fullIData(oldp+5918,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_5),32);
    bufp->fullIData(oldp+5919,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_6),32);
    bufp->fullIData(oldp+5920,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_63_7),32);
    bufp->fullIData(oldp+5921,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_0),32);
    bufp->fullIData(oldp+5922,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_1),32);
    bufp->fullIData(oldp+5923,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_2),32);
    bufp->fullIData(oldp+5924,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_3),32);
    bufp->fullIData(oldp+5925,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_4),32);
    bufp->fullIData(oldp+5926,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_5),32);
    bufp->fullIData(oldp+5927,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_6),32);
    bufp->fullIData(oldp+5928,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_0_7),32);
    bufp->fullIData(oldp+5929,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_0),32);
    bufp->fullIData(oldp+5930,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_1),32);
    bufp->fullIData(oldp+5931,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_2),32);
    bufp->fullIData(oldp+5932,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_3),32);
    bufp->fullIData(oldp+5933,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_4),32);
    bufp->fullIData(oldp+5934,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_5),32);
    bufp->fullIData(oldp+5935,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_6),32);
    bufp->fullIData(oldp+5936,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_1_7),32);
    bufp->fullIData(oldp+5937,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_0),32);
    bufp->fullIData(oldp+5938,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_1),32);
    bufp->fullIData(oldp+5939,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_2),32);
    bufp->fullIData(oldp+5940,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_3),32);
    bufp->fullIData(oldp+5941,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_4),32);
    bufp->fullIData(oldp+5942,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_5),32);
    bufp->fullIData(oldp+5943,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_6),32);
    bufp->fullIData(oldp+5944,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_2_7),32);
    bufp->fullIData(oldp+5945,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_0),32);
    bufp->fullIData(oldp+5946,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_1),32);
    bufp->fullIData(oldp+5947,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_2),32);
    bufp->fullIData(oldp+5948,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_3),32);
    bufp->fullIData(oldp+5949,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_4),32);
    bufp->fullIData(oldp+5950,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_5),32);
    bufp->fullIData(oldp+5951,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_6),32);
    bufp->fullIData(oldp+5952,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_3_7),32);
    bufp->fullIData(oldp+5953,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_0),32);
    bufp->fullIData(oldp+5954,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_1),32);
    bufp->fullIData(oldp+5955,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_2),32);
    bufp->fullIData(oldp+5956,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_3),32);
    bufp->fullIData(oldp+5957,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_4),32);
    bufp->fullIData(oldp+5958,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_5),32);
    bufp->fullIData(oldp+5959,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_6),32);
    bufp->fullIData(oldp+5960,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_4_7),32);
    bufp->fullIData(oldp+5961,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_0),32);
    bufp->fullIData(oldp+5962,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_1),32);
    bufp->fullIData(oldp+5963,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_2),32);
    bufp->fullIData(oldp+5964,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_3),32);
    bufp->fullIData(oldp+5965,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_4),32);
    bufp->fullIData(oldp+5966,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_5),32);
    bufp->fullIData(oldp+5967,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_6),32);
    bufp->fullIData(oldp+5968,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_5_7),32);
    bufp->fullIData(oldp+5969,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_0),32);
    bufp->fullIData(oldp+5970,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_1),32);
    bufp->fullIData(oldp+5971,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_2),32);
    bufp->fullIData(oldp+5972,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_3),32);
    bufp->fullIData(oldp+5973,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_4),32);
    bufp->fullIData(oldp+5974,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_5),32);
    bufp->fullIData(oldp+5975,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_6),32);
    bufp->fullIData(oldp+5976,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_6_7),32);
    bufp->fullIData(oldp+5977,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_0),32);
    bufp->fullIData(oldp+5978,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_1),32);
    bufp->fullIData(oldp+5979,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_2),32);
    bufp->fullIData(oldp+5980,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_3),32);
    bufp->fullIData(oldp+5981,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_4),32);
    bufp->fullIData(oldp+5982,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_5),32);
    bufp->fullIData(oldp+5983,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_6),32);
    bufp->fullIData(oldp+5984,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_7_7),32);
    bufp->fullIData(oldp+5985,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_0),32);
    bufp->fullIData(oldp+5986,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_1),32);
    bufp->fullIData(oldp+5987,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_2),32);
    bufp->fullIData(oldp+5988,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_3),32);
    bufp->fullIData(oldp+5989,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_4),32);
    bufp->fullIData(oldp+5990,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_5),32);
    bufp->fullIData(oldp+5991,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_6),32);
    bufp->fullIData(oldp+5992,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_8_7),32);
    bufp->fullIData(oldp+5993,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_0),32);
    bufp->fullIData(oldp+5994,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_1),32);
    bufp->fullIData(oldp+5995,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_2),32);
    bufp->fullIData(oldp+5996,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_3),32);
    bufp->fullIData(oldp+5997,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_4),32);
    bufp->fullIData(oldp+5998,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_5),32);
    bufp->fullIData(oldp+5999,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_6),32);
    bufp->fullIData(oldp+6000,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_9_7),32);
    bufp->fullIData(oldp+6001,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_0),32);
    bufp->fullIData(oldp+6002,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_1),32);
    bufp->fullIData(oldp+6003,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_2),32);
    bufp->fullIData(oldp+6004,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_3),32);
    bufp->fullIData(oldp+6005,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_4),32);
    bufp->fullIData(oldp+6006,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_5),32);
    bufp->fullIData(oldp+6007,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_6),32);
    bufp->fullIData(oldp+6008,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_10_7),32);
    bufp->fullIData(oldp+6009,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_0),32);
    bufp->fullIData(oldp+6010,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_1),32);
    bufp->fullIData(oldp+6011,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_2),32);
    bufp->fullIData(oldp+6012,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_3),32);
    bufp->fullIData(oldp+6013,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_4),32);
    bufp->fullIData(oldp+6014,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_5),32);
    bufp->fullIData(oldp+6015,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_6),32);
    bufp->fullIData(oldp+6016,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_11_7),32);
    bufp->fullIData(oldp+6017,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_0),32);
    bufp->fullIData(oldp+6018,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_1),32);
    bufp->fullIData(oldp+6019,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_2),32);
    bufp->fullIData(oldp+6020,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_3),32);
    bufp->fullIData(oldp+6021,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_4),32);
    bufp->fullIData(oldp+6022,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_5),32);
    bufp->fullIData(oldp+6023,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_6),32);
    bufp->fullIData(oldp+6024,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_12_7),32);
    bufp->fullIData(oldp+6025,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_0),32);
    bufp->fullIData(oldp+6026,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_1),32);
    bufp->fullIData(oldp+6027,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_2),32);
    bufp->fullIData(oldp+6028,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_3),32);
    bufp->fullIData(oldp+6029,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_4),32);
    bufp->fullIData(oldp+6030,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_5),32);
    bufp->fullIData(oldp+6031,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_6),32);
    bufp->fullIData(oldp+6032,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_13_7),32);
    bufp->fullIData(oldp+6033,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_0),32);
    bufp->fullIData(oldp+6034,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_1),32);
    bufp->fullIData(oldp+6035,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_2),32);
    bufp->fullIData(oldp+6036,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_3),32);
    bufp->fullIData(oldp+6037,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_4),32);
    bufp->fullIData(oldp+6038,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_5),32);
    bufp->fullIData(oldp+6039,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_6),32);
    bufp->fullIData(oldp+6040,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_14_7),32);
    bufp->fullIData(oldp+6041,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_0),32);
    bufp->fullIData(oldp+6042,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_1),32);
    bufp->fullIData(oldp+6043,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_2),32);
    bufp->fullIData(oldp+6044,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_3),32);
    bufp->fullIData(oldp+6045,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_4),32);
    bufp->fullIData(oldp+6046,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_5),32);
    bufp->fullIData(oldp+6047,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_6),32);
    bufp->fullIData(oldp+6048,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_15_7),32);
    bufp->fullIData(oldp+6049,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_0),32);
    bufp->fullIData(oldp+6050,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_1),32);
    bufp->fullIData(oldp+6051,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_2),32);
    bufp->fullIData(oldp+6052,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_3),32);
    bufp->fullIData(oldp+6053,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_4),32);
    bufp->fullIData(oldp+6054,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_5),32);
    bufp->fullIData(oldp+6055,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_6),32);
    bufp->fullIData(oldp+6056,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_16_7),32);
    bufp->fullIData(oldp+6057,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_0),32);
    bufp->fullIData(oldp+6058,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_1),32);
    bufp->fullIData(oldp+6059,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_2),32);
    bufp->fullIData(oldp+6060,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_3),32);
    bufp->fullIData(oldp+6061,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_4),32);
    bufp->fullIData(oldp+6062,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_5),32);
    bufp->fullIData(oldp+6063,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_6),32);
    bufp->fullIData(oldp+6064,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_17_7),32);
    bufp->fullIData(oldp+6065,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_0),32);
    bufp->fullIData(oldp+6066,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_1),32);
    bufp->fullIData(oldp+6067,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_2),32);
    bufp->fullIData(oldp+6068,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_3),32);
    bufp->fullIData(oldp+6069,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_4),32);
    bufp->fullIData(oldp+6070,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_5),32);
    bufp->fullIData(oldp+6071,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_6),32);
    bufp->fullIData(oldp+6072,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_18_7),32);
    bufp->fullIData(oldp+6073,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_0),32);
    bufp->fullIData(oldp+6074,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_1),32);
    bufp->fullIData(oldp+6075,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_2),32);
    bufp->fullIData(oldp+6076,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_3),32);
    bufp->fullIData(oldp+6077,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_4),32);
    bufp->fullIData(oldp+6078,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_5),32);
    bufp->fullIData(oldp+6079,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_6),32);
    bufp->fullIData(oldp+6080,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_19_7),32);
    bufp->fullIData(oldp+6081,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_0),32);
    bufp->fullIData(oldp+6082,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_1),32);
    bufp->fullIData(oldp+6083,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_2),32);
    bufp->fullIData(oldp+6084,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_3),32);
    bufp->fullIData(oldp+6085,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_4),32);
    bufp->fullIData(oldp+6086,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_5),32);
    bufp->fullIData(oldp+6087,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_6),32);
    bufp->fullIData(oldp+6088,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_20_7),32);
    bufp->fullIData(oldp+6089,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_0),32);
    bufp->fullIData(oldp+6090,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_1),32);
    bufp->fullIData(oldp+6091,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_2),32);
    bufp->fullIData(oldp+6092,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_3),32);
    bufp->fullIData(oldp+6093,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_4),32);
    bufp->fullIData(oldp+6094,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_5),32);
    bufp->fullIData(oldp+6095,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_6),32);
    bufp->fullIData(oldp+6096,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_21_7),32);
    bufp->fullIData(oldp+6097,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_0),32);
    bufp->fullIData(oldp+6098,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_1),32);
    bufp->fullIData(oldp+6099,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_2),32);
    bufp->fullIData(oldp+6100,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_3),32);
    bufp->fullIData(oldp+6101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_4),32);
    bufp->fullIData(oldp+6102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_5),32);
    bufp->fullIData(oldp+6103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_6),32);
    bufp->fullIData(oldp+6104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_22_7),32);
    bufp->fullIData(oldp+6105,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_0),32);
    bufp->fullIData(oldp+6106,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_1),32);
    bufp->fullIData(oldp+6107,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_2),32);
    bufp->fullIData(oldp+6108,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_3),32);
    bufp->fullIData(oldp+6109,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_4),32);
    bufp->fullIData(oldp+6110,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_5),32);
    bufp->fullIData(oldp+6111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_6),32);
    bufp->fullIData(oldp+6112,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_23_7),32);
    bufp->fullIData(oldp+6113,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_0),32);
    bufp->fullIData(oldp+6114,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_1),32);
    bufp->fullIData(oldp+6115,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_2),32);
    bufp->fullIData(oldp+6116,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_3),32);
    bufp->fullIData(oldp+6117,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_4),32);
    bufp->fullIData(oldp+6118,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_5),32);
    bufp->fullIData(oldp+6119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_6),32);
    bufp->fullIData(oldp+6120,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_24_7),32);
    bufp->fullIData(oldp+6121,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_0),32);
    bufp->fullIData(oldp+6122,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_1),32);
    bufp->fullIData(oldp+6123,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_2),32);
    bufp->fullIData(oldp+6124,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_3),32);
    bufp->fullIData(oldp+6125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_4),32);
    bufp->fullIData(oldp+6126,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_5),32);
    bufp->fullIData(oldp+6127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_6),32);
    bufp->fullIData(oldp+6128,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_25_7),32);
    bufp->fullIData(oldp+6129,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_0),32);
    bufp->fullIData(oldp+6130,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_1),32);
    bufp->fullIData(oldp+6131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_2),32);
    bufp->fullIData(oldp+6132,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_3),32);
    bufp->fullIData(oldp+6133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_4),32);
    bufp->fullIData(oldp+6134,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_5),32);
    bufp->fullIData(oldp+6135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_6),32);
    bufp->fullIData(oldp+6136,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_26_7),32);
    bufp->fullIData(oldp+6137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_0),32);
    bufp->fullIData(oldp+6138,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_1),32);
    bufp->fullIData(oldp+6139,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_2),32);
    bufp->fullIData(oldp+6140,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_3),32);
    bufp->fullIData(oldp+6141,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_4),32);
    bufp->fullIData(oldp+6142,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_5),32);
    bufp->fullIData(oldp+6143,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_6),32);
    bufp->fullIData(oldp+6144,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_27_7),32);
    bufp->fullIData(oldp+6145,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_0),32);
    bufp->fullIData(oldp+6146,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_1),32);
    bufp->fullIData(oldp+6147,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_2),32);
    bufp->fullIData(oldp+6148,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_3),32);
    bufp->fullIData(oldp+6149,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_4),32);
    bufp->fullIData(oldp+6150,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_5),32);
    bufp->fullIData(oldp+6151,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_6),32);
    bufp->fullIData(oldp+6152,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_28_7),32);
    bufp->fullIData(oldp+6153,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_0),32);
    bufp->fullIData(oldp+6154,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_1),32);
    bufp->fullIData(oldp+6155,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_2),32);
    bufp->fullIData(oldp+6156,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_3),32);
    bufp->fullIData(oldp+6157,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_4),32);
    bufp->fullIData(oldp+6158,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_5),32);
    bufp->fullIData(oldp+6159,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_6),32);
    bufp->fullIData(oldp+6160,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_29_7),32);
    bufp->fullIData(oldp+6161,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_0),32);
    bufp->fullIData(oldp+6162,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_1),32);
    bufp->fullIData(oldp+6163,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_2),32);
    bufp->fullIData(oldp+6164,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_3),32);
    bufp->fullIData(oldp+6165,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_4),32);
    bufp->fullIData(oldp+6166,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_5),32);
    bufp->fullIData(oldp+6167,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_6),32);
    bufp->fullIData(oldp+6168,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_30_7),32);
    bufp->fullIData(oldp+6169,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_0),32);
    bufp->fullIData(oldp+6170,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_1),32);
    bufp->fullIData(oldp+6171,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_2),32);
    bufp->fullIData(oldp+6172,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_3),32);
    bufp->fullIData(oldp+6173,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_4),32);
    bufp->fullIData(oldp+6174,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_5),32);
    bufp->fullIData(oldp+6175,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_6),32);
    bufp->fullIData(oldp+6176,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_31_7),32);
    bufp->fullIData(oldp+6177,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_0),32);
    bufp->fullIData(oldp+6178,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_1),32);
    bufp->fullIData(oldp+6179,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_2),32);
    bufp->fullIData(oldp+6180,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_3),32);
    bufp->fullIData(oldp+6181,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_4),32);
    bufp->fullIData(oldp+6182,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_5),32);
    bufp->fullIData(oldp+6183,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_6),32);
    bufp->fullIData(oldp+6184,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_32_7),32);
    bufp->fullIData(oldp+6185,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_0),32);
    bufp->fullIData(oldp+6186,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_1),32);
    bufp->fullIData(oldp+6187,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_2),32);
    bufp->fullIData(oldp+6188,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_3),32);
    bufp->fullIData(oldp+6189,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_4),32);
    bufp->fullIData(oldp+6190,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_5),32);
    bufp->fullIData(oldp+6191,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_6),32);
    bufp->fullIData(oldp+6192,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_33_7),32);
    bufp->fullIData(oldp+6193,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_0),32);
    bufp->fullIData(oldp+6194,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_1),32);
    bufp->fullIData(oldp+6195,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_2),32);
    bufp->fullIData(oldp+6196,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_3),32);
    bufp->fullIData(oldp+6197,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_4),32);
    bufp->fullIData(oldp+6198,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_5),32);
    bufp->fullIData(oldp+6199,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_6),32);
    bufp->fullIData(oldp+6200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_34_7),32);
    bufp->fullIData(oldp+6201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_0),32);
    bufp->fullIData(oldp+6202,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_1),32);
    bufp->fullIData(oldp+6203,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_2),32);
    bufp->fullIData(oldp+6204,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_3),32);
    bufp->fullIData(oldp+6205,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_4),32);
    bufp->fullIData(oldp+6206,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_5),32);
    bufp->fullIData(oldp+6207,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_6),32);
    bufp->fullIData(oldp+6208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_35_7),32);
    bufp->fullIData(oldp+6209,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_0),32);
    bufp->fullIData(oldp+6210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_1),32);
    bufp->fullIData(oldp+6211,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_2),32);
    bufp->fullIData(oldp+6212,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_3),32);
    bufp->fullIData(oldp+6213,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_4),32);
    bufp->fullIData(oldp+6214,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_5),32);
    bufp->fullIData(oldp+6215,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_6),32);
    bufp->fullIData(oldp+6216,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_36_7),32);
    bufp->fullIData(oldp+6217,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_0),32);
    bufp->fullIData(oldp+6218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_1),32);
    bufp->fullIData(oldp+6219,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_2),32);
    bufp->fullIData(oldp+6220,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_3),32);
    bufp->fullIData(oldp+6221,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_4),32);
    bufp->fullIData(oldp+6222,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_5),32);
    bufp->fullIData(oldp+6223,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_6),32);
    bufp->fullIData(oldp+6224,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_37_7),32);
    bufp->fullIData(oldp+6225,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_0),32);
    bufp->fullIData(oldp+6226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_1),32);
    bufp->fullIData(oldp+6227,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_2),32);
    bufp->fullIData(oldp+6228,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_3),32);
    bufp->fullIData(oldp+6229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_4),32);
    bufp->fullIData(oldp+6230,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_5),32);
    bufp->fullIData(oldp+6231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_6),32);
    bufp->fullIData(oldp+6232,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_38_7),32);
    bufp->fullIData(oldp+6233,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_0),32);
    bufp->fullIData(oldp+6234,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_1),32);
    bufp->fullIData(oldp+6235,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_2),32);
    bufp->fullIData(oldp+6236,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_3),32);
    bufp->fullIData(oldp+6237,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_4),32);
    bufp->fullIData(oldp+6238,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_5),32);
    bufp->fullIData(oldp+6239,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_6),32);
    bufp->fullIData(oldp+6240,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_39_7),32);
    bufp->fullIData(oldp+6241,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_0),32);
    bufp->fullIData(oldp+6242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_1),32);
    bufp->fullIData(oldp+6243,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_2),32);
    bufp->fullIData(oldp+6244,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_3),32);
    bufp->fullIData(oldp+6245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_4),32);
    bufp->fullIData(oldp+6246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_5),32);
    bufp->fullIData(oldp+6247,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_6),32);
    bufp->fullIData(oldp+6248,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_40_7),32);
    bufp->fullIData(oldp+6249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_0),32);
    bufp->fullIData(oldp+6250,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_1),32);
    bufp->fullIData(oldp+6251,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_2),32);
    bufp->fullIData(oldp+6252,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_3),32);
    bufp->fullIData(oldp+6253,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_4),32);
    bufp->fullIData(oldp+6254,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_5),32);
    bufp->fullIData(oldp+6255,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_6),32);
    bufp->fullIData(oldp+6256,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_41_7),32);
    bufp->fullIData(oldp+6257,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_0),32);
    bufp->fullIData(oldp+6258,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_1),32);
    bufp->fullIData(oldp+6259,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_2),32);
    bufp->fullIData(oldp+6260,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_3),32);
    bufp->fullIData(oldp+6261,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_4),32);
    bufp->fullIData(oldp+6262,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_5),32);
    bufp->fullIData(oldp+6263,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_6),32);
    bufp->fullIData(oldp+6264,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_42_7),32);
    bufp->fullIData(oldp+6265,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_0),32);
    bufp->fullIData(oldp+6266,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_1),32);
    bufp->fullIData(oldp+6267,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_2),32);
    bufp->fullIData(oldp+6268,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_3),32);
    bufp->fullIData(oldp+6269,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_4),32);
    bufp->fullIData(oldp+6270,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_5),32);
    bufp->fullIData(oldp+6271,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_6),32);
    bufp->fullIData(oldp+6272,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_43_7),32);
    bufp->fullIData(oldp+6273,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_0),32);
    bufp->fullIData(oldp+6274,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_1),32);
    bufp->fullIData(oldp+6275,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_2),32);
    bufp->fullIData(oldp+6276,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_3),32);
    bufp->fullIData(oldp+6277,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_4),32);
    bufp->fullIData(oldp+6278,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_5),32);
    bufp->fullIData(oldp+6279,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_6),32);
    bufp->fullIData(oldp+6280,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_44_7),32);
    bufp->fullIData(oldp+6281,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_0),32);
    bufp->fullIData(oldp+6282,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_1),32);
    bufp->fullIData(oldp+6283,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_2),32);
    bufp->fullIData(oldp+6284,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_3),32);
    bufp->fullIData(oldp+6285,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_4),32);
    bufp->fullIData(oldp+6286,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_5),32);
    bufp->fullIData(oldp+6287,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_6),32);
    bufp->fullIData(oldp+6288,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_45_7),32);
    bufp->fullIData(oldp+6289,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_0),32);
    bufp->fullIData(oldp+6290,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_1),32);
    bufp->fullIData(oldp+6291,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_2),32);
    bufp->fullIData(oldp+6292,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_3),32);
    bufp->fullIData(oldp+6293,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_4),32);
    bufp->fullIData(oldp+6294,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_5),32);
    bufp->fullIData(oldp+6295,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_6),32);
    bufp->fullIData(oldp+6296,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_46_7),32);
    bufp->fullIData(oldp+6297,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_0),32);
    bufp->fullIData(oldp+6298,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_1),32);
    bufp->fullIData(oldp+6299,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_2),32);
    bufp->fullIData(oldp+6300,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_3),32);
    bufp->fullIData(oldp+6301,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_4),32);
    bufp->fullIData(oldp+6302,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_5),32);
    bufp->fullIData(oldp+6303,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_6),32);
    bufp->fullIData(oldp+6304,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_47_7),32);
    bufp->fullIData(oldp+6305,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_0),32);
    bufp->fullIData(oldp+6306,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_1),32);
    bufp->fullIData(oldp+6307,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_2),32);
    bufp->fullIData(oldp+6308,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_3),32);
    bufp->fullIData(oldp+6309,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_4),32);
    bufp->fullIData(oldp+6310,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_5),32);
    bufp->fullIData(oldp+6311,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_6),32);
    bufp->fullIData(oldp+6312,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_48_7),32);
    bufp->fullIData(oldp+6313,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_0),32);
    bufp->fullIData(oldp+6314,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_1),32);
    bufp->fullIData(oldp+6315,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_2),32);
    bufp->fullIData(oldp+6316,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_3),32);
    bufp->fullIData(oldp+6317,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_4),32);
    bufp->fullIData(oldp+6318,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_5),32);
    bufp->fullIData(oldp+6319,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_6),32);
    bufp->fullIData(oldp+6320,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_49_7),32);
    bufp->fullIData(oldp+6321,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_0),32);
    bufp->fullIData(oldp+6322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_1),32);
    bufp->fullIData(oldp+6323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_2),32);
    bufp->fullIData(oldp+6324,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_3),32);
    bufp->fullIData(oldp+6325,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_4),32);
    bufp->fullIData(oldp+6326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_5),32);
    bufp->fullIData(oldp+6327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_6),32);
    bufp->fullIData(oldp+6328,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_50_7),32);
    bufp->fullIData(oldp+6329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_0),32);
    bufp->fullIData(oldp+6330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_1),32);
    bufp->fullIData(oldp+6331,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_2),32);
    bufp->fullIData(oldp+6332,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_3),32);
    bufp->fullIData(oldp+6333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_4),32);
    bufp->fullIData(oldp+6334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_5),32);
    bufp->fullIData(oldp+6335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_6),32);
    bufp->fullIData(oldp+6336,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_51_7),32);
    bufp->fullIData(oldp+6337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_0),32);
    bufp->fullIData(oldp+6338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_1),32);
    bufp->fullIData(oldp+6339,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_2),32);
    bufp->fullIData(oldp+6340,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_3),32);
    bufp->fullIData(oldp+6341,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_4),32);
    bufp->fullIData(oldp+6342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_5),32);
    bufp->fullIData(oldp+6343,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_6),32);
    bufp->fullIData(oldp+6344,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_52_7),32);
    bufp->fullIData(oldp+6345,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_0),32);
    bufp->fullIData(oldp+6346,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_1),32);
    bufp->fullIData(oldp+6347,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_2),32);
    bufp->fullIData(oldp+6348,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_3),32);
    bufp->fullIData(oldp+6349,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_4),32);
    bufp->fullIData(oldp+6350,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_5),32);
    bufp->fullIData(oldp+6351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_6),32);
    bufp->fullIData(oldp+6352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_53_7),32);
    bufp->fullIData(oldp+6353,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_0),32);
    bufp->fullIData(oldp+6354,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_1),32);
    bufp->fullIData(oldp+6355,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_2),32);
    bufp->fullIData(oldp+6356,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_3),32);
    bufp->fullIData(oldp+6357,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_4),32);
    bufp->fullIData(oldp+6358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_5),32);
    bufp->fullIData(oldp+6359,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_6),32);
    bufp->fullIData(oldp+6360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_54_7),32);
    bufp->fullIData(oldp+6361,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_0),32);
    bufp->fullIData(oldp+6362,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_1),32);
    bufp->fullIData(oldp+6363,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_2),32);
    bufp->fullIData(oldp+6364,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_3),32);
    bufp->fullIData(oldp+6365,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_4),32);
    bufp->fullIData(oldp+6366,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_5),32);
    bufp->fullIData(oldp+6367,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_6),32);
    bufp->fullIData(oldp+6368,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_55_7),32);
    bufp->fullIData(oldp+6369,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_0),32);
    bufp->fullIData(oldp+6370,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_1),32);
    bufp->fullIData(oldp+6371,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_2),32);
    bufp->fullIData(oldp+6372,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_3),32);
    bufp->fullIData(oldp+6373,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_4),32);
    bufp->fullIData(oldp+6374,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_5),32);
    bufp->fullIData(oldp+6375,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_6),32);
    bufp->fullIData(oldp+6376,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_56_7),32);
    bufp->fullIData(oldp+6377,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_0),32);
    bufp->fullIData(oldp+6378,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_1),32);
    bufp->fullIData(oldp+6379,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_2),32);
    bufp->fullIData(oldp+6380,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_3),32);
    bufp->fullIData(oldp+6381,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_4),32);
    bufp->fullIData(oldp+6382,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_5),32);
    bufp->fullIData(oldp+6383,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_6),32);
    bufp->fullIData(oldp+6384,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_57_7),32);
    bufp->fullIData(oldp+6385,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_0),32);
    bufp->fullIData(oldp+6386,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_1),32);
    bufp->fullIData(oldp+6387,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_2),32);
    bufp->fullIData(oldp+6388,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_3),32);
    bufp->fullIData(oldp+6389,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_4),32);
    bufp->fullIData(oldp+6390,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_5),32);
    bufp->fullIData(oldp+6391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_6),32);
    bufp->fullIData(oldp+6392,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_58_7),32);
    bufp->fullIData(oldp+6393,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_0),32);
    bufp->fullIData(oldp+6394,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_1),32);
    bufp->fullIData(oldp+6395,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_2),32);
    bufp->fullIData(oldp+6396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_3),32);
    bufp->fullIData(oldp+6397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_4),32);
    bufp->fullIData(oldp+6398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_5),32);
    bufp->fullIData(oldp+6399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_6),32);
    bufp->fullIData(oldp+6400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_59_7),32);
    bufp->fullIData(oldp+6401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_0),32);
    bufp->fullIData(oldp+6402,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_1),32);
    bufp->fullIData(oldp+6403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_2),32);
    bufp->fullIData(oldp+6404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_3),32);
    bufp->fullIData(oldp+6405,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_4),32);
    bufp->fullIData(oldp+6406,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_5),32);
    bufp->fullIData(oldp+6407,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_6),32);
    bufp->fullIData(oldp+6408,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_60_7),32);
    bufp->fullIData(oldp+6409,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_0),32);
    bufp->fullIData(oldp+6410,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_1),32);
    bufp->fullIData(oldp+6411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_2),32);
    bufp->fullIData(oldp+6412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_3),32);
    bufp->fullIData(oldp+6413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_4),32);
    bufp->fullIData(oldp+6414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_5),32);
    bufp->fullIData(oldp+6415,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_6),32);
    bufp->fullIData(oldp+6416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_61_7),32);
    bufp->fullIData(oldp+6417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_0),32);
    bufp->fullIData(oldp+6418,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_1),32);
    bufp->fullIData(oldp+6419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_2),32);
    bufp->fullIData(oldp+6420,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_3),32);
    bufp->fullIData(oldp+6421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_4),32);
    bufp->fullIData(oldp+6422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_5),32);
    bufp->fullIData(oldp+6423,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_6),32);
    bufp->fullIData(oldp+6424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_62_7),32);
    bufp->fullIData(oldp+6425,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_0),32);
    bufp->fullIData(oldp+6426,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_1),32);
    bufp->fullIData(oldp+6427,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_2),32);
    bufp->fullIData(oldp+6428,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_3),32);
    bufp->fullIData(oldp+6429,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_4),32);
    bufp->fullIData(oldp+6430,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_5),32);
    bufp->fullIData(oldp+6431,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_6),32);
    bufp->fullIData(oldp+6432,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_63_7),32);
    bufp->fullIData(oldp+6433,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_0),21);
    bufp->fullIData(oldp+6434,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_1),21);
    bufp->fullIData(oldp+6435,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_2),21);
    bufp->fullIData(oldp+6436,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_3),21);
    bufp->fullIData(oldp+6437,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_4),21);
    bufp->fullIData(oldp+6438,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_5),21);
    bufp->fullIData(oldp+6439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_6),21);
    bufp->fullIData(oldp+6440,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_7),21);
    bufp->fullIData(oldp+6441,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_8),21);
    bufp->fullIData(oldp+6442,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_9),21);
    bufp->fullIData(oldp+6443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_10),21);
    bufp->fullIData(oldp+6444,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_11),21);
    bufp->fullIData(oldp+6445,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_12),21);
    bufp->fullIData(oldp+6446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_13),21);
    bufp->fullIData(oldp+6447,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_14),21);
    bufp->fullIData(oldp+6448,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_15),21);
    bufp->fullIData(oldp+6449,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_16),21);
    bufp->fullIData(oldp+6450,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_17),21);
    bufp->fullIData(oldp+6451,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_18),21);
    bufp->fullIData(oldp+6452,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_19),21);
    bufp->fullIData(oldp+6453,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_20),21);
    bufp->fullIData(oldp+6454,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_21),21);
    bufp->fullIData(oldp+6455,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_22),21);
    bufp->fullIData(oldp+6456,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_23),21);
    bufp->fullIData(oldp+6457,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_24),21);
    bufp->fullIData(oldp+6458,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_25),21);
    bufp->fullIData(oldp+6459,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_26),21);
    bufp->fullIData(oldp+6460,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_27),21);
    bufp->fullIData(oldp+6461,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_28),21);
    bufp->fullIData(oldp+6462,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_29),21);
    bufp->fullIData(oldp+6463,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_30),21);
    bufp->fullIData(oldp+6464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_31),21);
    bufp->fullIData(oldp+6465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_32),21);
    bufp->fullIData(oldp+6466,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_33),21);
    bufp->fullIData(oldp+6467,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_34),21);
    bufp->fullIData(oldp+6468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_35),21);
    bufp->fullIData(oldp+6469,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_36),21);
    bufp->fullIData(oldp+6470,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_37),21);
    bufp->fullIData(oldp+6471,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_38),21);
    bufp->fullIData(oldp+6472,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_39),21);
    bufp->fullIData(oldp+6473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_40),21);
    bufp->fullIData(oldp+6474,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_41),21);
    bufp->fullIData(oldp+6475,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_42),21);
    bufp->fullIData(oldp+6476,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_43),21);
    bufp->fullIData(oldp+6477,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_44),21);
    bufp->fullIData(oldp+6478,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_45),21);
    bufp->fullIData(oldp+6479,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_46),21);
    bufp->fullIData(oldp+6480,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_47),21);
    bufp->fullIData(oldp+6481,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_48),21);
    bufp->fullIData(oldp+6482,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_49),21);
    bufp->fullIData(oldp+6483,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_50),21);
    bufp->fullIData(oldp+6484,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_51),21);
    bufp->fullIData(oldp+6485,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_52),21);
    bufp->fullIData(oldp+6486,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_53),21);
    bufp->fullIData(oldp+6487,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_54),21);
    bufp->fullIData(oldp+6488,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_55),21);
    bufp->fullIData(oldp+6489,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_56),21);
    bufp->fullIData(oldp+6490,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_57),21);
    bufp->fullIData(oldp+6491,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_58),21);
    bufp->fullIData(oldp+6492,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_59),21);
    bufp->fullIData(oldp+6493,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_60),21);
    bufp->fullIData(oldp+6494,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_61),21);
    bufp->fullIData(oldp+6495,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_62),21);
    bufp->fullIData(oldp+6496,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_63),21);
    bufp->fullIData(oldp+6497,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_0),21);
    bufp->fullIData(oldp+6498,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_1),21);
    bufp->fullIData(oldp+6499,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_2),21);
    bufp->fullIData(oldp+6500,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_3),21);
    bufp->fullIData(oldp+6501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_4),21);
    bufp->fullIData(oldp+6502,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_5),21);
    bufp->fullIData(oldp+6503,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_6),21);
    bufp->fullIData(oldp+6504,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_7),21);
    bufp->fullIData(oldp+6505,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_8),21);
    bufp->fullIData(oldp+6506,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_9),21);
    bufp->fullIData(oldp+6507,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_10),21);
    bufp->fullIData(oldp+6508,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_11),21);
    bufp->fullIData(oldp+6509,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_12),21);
    bufp->fullIData(oldp+6510,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_13),21);
    bufp->fullIData(oldp+6511,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_14),21);
    bufp->fullIData(oldp+6512,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_15),21);
    bufp->fullIData(oldp+6513,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_16),21);
    bufp->fullIData(oldp+6514,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_17),21);
    bufp->fullIData(oldp+6515,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_18),21);
    bufp->fullIData(oldp+6516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_19),21);
    bufp->fullIData(oldp+6517,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_20),21);
    bufp->fullIData(oldp+6518,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_21),21);
    bufp->fullIData(oldp+6519,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_22),21);
    bufp->fullIData(oldp+6520,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_23),21);
    bufp->fullIData(oldp+6521,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_24),21);
    bufp->fullIData(oldp+6522,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_25),21);
    bufp->fullIData(oldp+6523,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_26),21);
    bufp->fullIData(oldp+6524,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_27),21);
    bufp->fullIData(oldp+6525,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_28),21);
    bufp->fullIData(oldp+6526,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_29),21);
    bufp->fullIData(oldp+6527,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_30),21);
    bufp->fullIData(oldp+6528,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_31),21);
    bufp->fullIData(oldp+6529,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_32),21);
    bufp->fullIData(oldp+6530,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_33),21);
    bufp->fullIData(oldp+6531,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_34),21);
    bufp->fullIData(oldp+6532,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_35),21);
    bufp->fullIData(oldp+6533,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_36),21);
    bufp->fullIData(oldp+6534,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_37),21);
    bufp->fullIData(oldp+6535,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_38),21);
    bufp->fullIData(oldp+6536,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_39),21);
    bufp->fullIData(oldp+6537,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_40),21);
    bufp->fullIData(oldp+6538,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_41),21);
    bufp->fullIData(oldp+6539,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_42),21);
    bufp->fullIData(oldp+6540,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_43),21);
    bufp->fullIData(oldp+6541,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_44),21);
    bufp->fullIData(oldp+6542,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_45),21);
    bufp->fullIData(oldp+6543,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_46),21);
    bufp->fullIData(oldp+6544,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_47),21);
    bufp->fullIData(oldp+6545,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_48),21);
    bufp->fullIData(oldp+6546,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_49),21);
    bufp->fullIData(oldp+6547,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_50),21);
    bufp->fullIData(oldp+6548,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_51),21);
    bufp->fullIData(oldp+6549,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_52),21);
    bufp->fullIData(oldp+6550,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_53),21);
    bufp->fullIData(oldp+6551,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_54),21);
    bufp->fullIData(oldp+6552,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_55),21);
    bufp->fullIData(oldp+6553,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_56),21);
    bufp->fullIData(oldp+6554,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_57),21);
    bufp->fullIData(oldp+6555,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_58),21);
    bufp->fullIData(oldp+6556,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_59),21);
    bufp->fullIData(oldp+6557,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_60),21);
    bufp->fullIData(oldp+6558,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_61),21);
    bufp->fullIData(oldp+6559,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_62),21);
    bufp->fullIData(oldp+6560,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_63),21);
    bufp->fullIData(oldp+6561,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_0),21);
    bufp->fullIData(oldp+6562,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_1),21);
    bufp->fullIData(oldp+6563,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_2),21);
    bufp->fullIData(oldp+6564,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_3),21);
    bufp->fullIData(oldp+6565,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_4),21);
    bufp->fullIData(oldp+6566,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_5),21);
    bufp->fullIData(oldp+6567,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_6),21);
    bufp->fullIData(oldp+6568,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_7),21);
    bufp->fullIData(oldp+6569,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_8),21);
    bufp->fullIData(oldp+6570,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_9),21);
    bufp->fullIData(oldp+6571,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_10),21);
    bufp->fullIData(oldp+6572,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_11),21);
    bufp->fullIData(oldp+6573,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_12),21);
    bufp->fullIData(oldp+6574,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_13),21);
    bufp->fullIData(oldp+6575,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_14),21);
    bufp->fullIData(oldp+6576,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_15),21);
    bufp->fullIData(oldp+6577,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_16),21);
    bufp->fullIData(oldp+6578,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_17),21);
    bufp->fullIData(oldp+6579,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_18),21);
    bufp->fullIData(oldp+6580,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_19),21);
    bufp->fullIData(oldp+6581,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_20),21);
    bufp->fullIData(oldp+6582,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_21),21);
    bufp->fullIData(oldp+6583,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_22),21);
    bufp->fullIData(oldp+6584,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_23),21);
    bufp->fullIData(oldp+6585,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_24),21);
    bufp->fullIData(oldp+6586,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_25),21);
    bufp->fullIData(oldp+6587,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_26),21);
    bufp->fullIData(oldp+6588,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_27),21);
    bufp->fullIData(oldp+6589,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_28),21);
    bufp->fullIData(oldp+6590,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_29),21);
    bufp->fullIData(oldp+6591,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_30),21);
    bufp->fullIData(oldp+6592,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_31),21);
    bufp->fullIData(oldp+6593,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_32),21);
    bufp->fullIData(oldp+6594,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_33),21);
    bufp->fullIData(oldp+6595,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_34),21);
    bufp->fullIData(oldp+6596,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_35),21);
    bufp->fullIData(oldp+6597,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_36),21);
    bufp->fullIData(oldp+6598,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_37),21);
    bufp->fullIData(oldp+6599,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_38),21);
    bufp->fullIData(oldp+6600,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_39),21);
    bufp->fullIData(oldp+6601,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_40),21);
    bufp->fullIData(oldp+6602,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_41),21);
    bufp->fullIData(oldp+6603,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_42),21);
    bufp->fullIData(oldp+6604,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_43),21);
    bufp->fullIData(oldp+6605,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_44),21);
    bufp->fullIData(oldp+6606,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_45),21);
    bufp->fullIData(oldp+6607,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_46),21);
    bufp->fullIData(oldp+6608,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_47),21);
    bufp->fullIData(oldp+6609,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_48),21);
    bufp->fullIData(oldp+6610,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_49),21);
    bufp->fullIData(oldp+6611,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_50),21);
    bufp->fullIData(oldp+6612,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_51),21);
    bufp->fullIData(oldp+6613,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_52),21);
    bufp->fullIData(oldp+6614,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_53),21);
    bufp->fullIData(oldp+6615,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_54),21);
    bufp->fullIData(oldp+6616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_55),21);
    bufp->fullIData(oldp+6617,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_56),21);
    bufp->fullIData(oldp+6618,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_57),21);
    bufp->fullIData(oldp+6619,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_58),21);
    bufp->fullIData(oldp+6620,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_59),21);
    bufp->fullIData(oldp+6621,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_60),21);
    bufp->fullIData(oldp+6622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_61),21);
    bufp->fullIData(oldp+6623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_62),21);
    bufp->fullIData(oldp+6624,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_63),21);
    bufp->fullIData(oldp+6625,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_0),21);
    bufp->fullIData(oldp+6626,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_1),21);
    bufp->fullIData(oldp+6627,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_2),21);
    bufp->fullIData(oldp+6628,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_3),21);
    bufp->fullIData(oldp+6629,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_4),21);
    bufp->fullIData(oldp+6630,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_5),21);
    bufp->fullIData(oldp+6631,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_6),21);
    bufp->fullIData(oldp+6632,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_7),21);
    bufp->fullIData(oldp+6633,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_8),21);
    bufp->fullIData(oldp+6634,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_9),21);
    bufp->fullIData(oldp+6635,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_10),21);
    bufp->fullIData(oldp+6636,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_11),21);
    bufp->fullIData(oldp+6637,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_12),21);
    bufp->fullIData(oldp+6638,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_13),21);
    bufp->fullIData(oldp+6639,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_14),21);
    bufp->fullIData(oldp+6640,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_15),21);
    bufp->fullIData(oldp+6641,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_16),21);
    bufp->fullIData(oldp+6642,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_17),21);
    bufp->fullIData(oldp+6643,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_18),21);
    bufp->fullIData(oldp+6644,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_19),21);
    bufp->fullIData(oldp+6645,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_20),21);
    bufp->fullIData(oldp+6646,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_21),21);
    bufp->fullIData(oldp+6647,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_22),21);
    bufp->fullIData(oldp+6648,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_23),21);
    bufp->fullIData(oldp+6649,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_24),21);
    bufp->fullIData(oldp+6650,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_25),21);
    bufp->fullIData(oldp+6651,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_26),21);
    bufp->fullIData(oldp+6652,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_27),21);
    bufp->fullIData(oldp+6653,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_28),21);
    bufp->fullIData(oldp+6654,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_29),21);
    bufp->fullIData(oldp+6655,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_30),21);
    bufp->fullIData(oldp+6656,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_31),21);
    bufp->fullIData(oldp+6657,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_32),21);
    bufp->fullIData(oldp+6658,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_33),21);
    bufp->fullIData(oldp+6659,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_34),21);
    bufp->fullIData(oldp+6660,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_35),21);
    bufp->fullIData(oldp+6661,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_36),21);
    bufp->fullIData(oldp+6662,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_37),21);
    bufp->fullIData(oldp+6663,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_38),21);
    bufp->fullIData(oldp+6664,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_39),21);
    bufp->fullIData(oldp+6665,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_40),21);
    bufp->fullIData(oldp+6666,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_41),21);
    bufp->fullIData(oldp+6667,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_42),21);
    bufp->fullIData(oldp+6668,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_43),21);
    bufp->fullIData(oldp+6669,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_44),21);
    bufp->fullIData(oldp+6670,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_45),21);
    bufp->fullIData(oldp+6671,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_46),21);
    bufp->fullIData(oldp+6672,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_47),21);
    bufp->fullIData(oldp+6673,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_48),21);
    bufp->fullIData(oldp+6674,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_49),21);
    bufp->fullIData(oldp+6675,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_50),21);
    bufp->fullIData(oldp+6676,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_51),21);
    bufp->fullIData(oldp+6677,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_52),21);
    bufp->fullIData(oldp+6678,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_53),21);
    bufp->fullIData(oldp+6679,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_54),21);
    bufp->fullIData(oldp+6680,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_55),21);
    bufp->fullIData(oldp+6681,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_56),21);
    bufp->fullIData(oldp+6682,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_57),21);
    bufp->fullIData(oldp+6683,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_58),21);
    bufp->fullIData(oldp+6684,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_59),21);
    bufp->fullIData(oldp+6685,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_60),21);
    bufp->fullIData(oldp+6686,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_61),21);
    bufp->fullIData(oldp+6687,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_62),21);
    bufp->fullIData(oldp+6688,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_63),21);
    bufp->fullBit(oldp+6689,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0));
    bufp->fullBit(oldp+6690,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1));
    bufp->fullBit(oldp+6691,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2));
    bufp->fullBit(oldp+6692,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3));
    bufp->fullBit(oldp+6693,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4));
    bufp->fullBit(oldp+6694,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5));
    bufp->fullBit(oldp+6695,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6));
    bufp->fullBit(oldp+6696,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7));
    bufp->fullBit(oldp+6697,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8));
    bufp->fullBit(oldp+6698,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9));
    bufp->fullBit(oldp+6699,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10));
    bufp->fullBit(oldp+6700,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11));
    bufp->fullBit(oldp+6701,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12));
    bufp->fullBit(oldp+6702,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13));
    bufp->fullBit(oldp+6703,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14));
    bufp->fullBit(oldp+6704,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15));
    bufp->fullBit(oldp+6705,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16));
    bufp->fullBit(oldp+6706,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17));
    bufp->fullBit(oldp+6707,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18));
    bufp->fullBit(oldp+6708,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19));
    bufp->fullBit(oldp+6709,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20));
    bufp->fullBit(oldp+6710,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21));
    bufp->fullBit(oldp+6711,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22));
    bufp->fullBit(oldp+6712,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23));
    bufp->fullBit(oldp+6713,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24));
    bufp->fullBit(oldp+6714,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25));
    bufp->fullBit(oldp+6715,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26));
    bufp->fullBit(oldp+6716,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27));
    bufp->fullBit(oldp+6717,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28));
    bufp->fullBit(oldp+6718,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29));
    bufp->fullBit(oldp+6719,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30));
    bufp->fullBit(oldp+6720,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31));
    bufp->fullBit(oldp+6721,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32));
    bufp->fullBit(oldp+6722,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33));
    bufp->fullBit(oldp+6723,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34));
    bufp->fullBit(oldp+6724,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35));
    bufp->fullBit(oldp+6725,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36));
    bufp->fullBit(oldp+6726,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37));
    bufp->fullBit(oldp+6727,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38));
    bufp->fullBit(oldp+6728,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39));
    bufp->fullBit(oldp+6729,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40));
    bufp->fullBit(oldp+6730,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41));
    bufp->fullBit(oldp+6731,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42));
    bufp->fullBit(oldp+6732,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43));
    bufp->fullBit(oldp+6733,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44));
    bufp->fullBit(oldp+6734,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45));
    bufp->fullBit(oldp+6735,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46));
    bufp->fullBit(oldp+6736,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47));
    bufp->fullBit(oldp+6737,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48));
    bufp->fullBit(oldp+6738,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49));
    bufp->fullBit(oldp+6739,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50));
    bufp->fullBit(oldp+6740,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51));
    bufp->fullBit(oldp+6741,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52));
    bufp->fullBit(oldp+6742,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53));
    bufp->fullBit(oldp+6743,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54));
    bufp->fullBit(oldp+6744,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55));
    bufp->fullBit(oldp+6745,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56));
    bufp->fullBit(oldp+6746,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57));
    bufp->fullBit(oldp+6747,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58));
    bufp->fullBit(oldp+6748,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59));
    bufp->fullBit(oldp+6749,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60));
    bufp->fullBit(oldp+6750,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61));
    bufp->fullBit(oldp+6751,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62));
    bufp->fullBit(oldp+6752,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63));
    bufp->fullBit(oldp+6753,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0));
    bufp->fullBit(oldp+6754,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1));
    bufp->fullBit(oldp+6755,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2));
    bufp->fullBit(oldp+6756,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3));
    bufp->fullBit(oldp+6757,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4));
    bufp->fullBit(oldp+6758,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5));
    bufp->fullBit(oldp+6759,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6));
    bufp->fullBit(oldp+6760,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7));
    bufp->fullBit(oldp+6761,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8));
    bufp->fullBit(oldp+6762,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9));
    bufp->fullBit(oldp+6763,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10));
    bufp->fullBit(oldp+6764,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11));
    bufp->fullBit(oldp+6765,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12));
    bufp->fullBit(oldp+6766,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13));
    bufp->fullBit(oldp+6767,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14));
    bufp->fullBit(oldp+6768,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15));
    bufp->fullBit(oldp+6769,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16));
    bufp->fullBit(oldp+6770,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17));
    bufp->fullBit(oldp+6771,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18));
    bufp->fullBit(oldp+6772,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19));
    bufp->fullBit(oldp+6773,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20));
    bufp->fullBit(oldp+6774,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21));
    bufp->fullBit(oldp+6775,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22));
    bufp->fullBit(oldp+6776,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23));
    bufp->fullBit(oldp+6777,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24));
    bufp->fullBit(oldp+6778,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25));
    bufp->fullBit(oldp+6779,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26));
    bufp->fullBit(oldp+6780,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27));
    bufp->fullBit(oldp+6781,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28));
    bufp->fullBit(oldp+6782,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29));
    bufp->fullBit(oldp+6783,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30));
    bufp->fullBit(oldp+6784,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31));
    bufp->fullBit(oldp+6785,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32));
    bufp->fullBit(oldp+6786,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33));
    bufp->fullBit(oldp+6787,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34));
    bufp->fullBit(oldp+6788,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35));
    bufp->fullBit(oldp+6789,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36));
    bufp->fullBit(oldp+6790,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37));
    bufp->fullBit(oldp+6791,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38));
    bufp->fullBit(oldp+6792,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39));
    bufp->fullBit(oldp+6793,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40));
    bufp->fullBit(oldp+6794,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41));
    bufp->fullBit(oldp+6795,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42));
    bufp->fullBit(oldp+6796,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43));
    bufp->fullBit(oldp+6797,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44));
    bufp->fullBit(oldp+6798,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45));
    bufp->fullBit(oldp+6799,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46));
    bufp->fullBit(oldp+6800,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47));
    bufp->fullBit(oldp+6801,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48));
    bufp->fullBit(oldp+6802,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49));
    bufp->fullBit(oldp+6803,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50));
    bufp->fullBit(oldp+6804,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51));
    bufp->fullBit(oldp+6805,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52));
    bufp->fullBit(oldp+6806,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53));
    bufp->fullBit(oldp+6807,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54));
    bufp->fullBit(oldp+6808,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55));
    bufp->fullBit(oldp+6809,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56));
    bufp->fullBit(oldp+6810,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57));
    bufp->fullBit(oldp+6811,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58));
    bufp->fullBit(oldp+6812,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59));
    bufp->fullBit(oldp+6813,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60));
    bufp->fullBit(oldp+6814,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61));
    bufp->fullBit(oldp+6815,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62));
    bufp->fullBit(oldp+6816,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63));
    bufp->fullBit(oldp+6817,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0));
    bufp->fullBit(oldp+6818,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1));
    bufp->fullBit(oldp+6819,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2));
    bufp->fullBit(oldp+6820,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3));
    bufp->fullBit(oldp+6821,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4));
    bufp->fullBit(oldp+6822,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5));
    bufp->fullBit(oldp+6823,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6));
    bufp->fullBit(oldp+6824,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7));
    bufp->fullBit(oldp+6825,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8));
    bufp->fullBit(oldp+6826,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9));
    bufp->fullBit(oldp+6827,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10));
    bufp->fullBit(oldp+6828,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11));
    bufp->fullBit(oldp+6829,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12));
    bufp->fullBit(oldp+6830,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13));
    bufp->fullBit(oldp+6831,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14));
    bufp->fullBit(oldp+6832,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15));
    bufp->fullBit(oldp+6833,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16));
    bufp->fullBit(oldp+6834,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17));
    bufp->fullBit(oldp+6835,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18));
    bufp->fullBit(oldp+6836,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19));
    bufp->fullBit(oldp+6837,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20));
    bufp->fullBit(oldp+6838,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21));
    bufp->fullBit(oldp+6839,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22));
    bufp->fullBit(oldp+6840,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23));
    bufp->fullBit(oldp+6841,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24));
    bufp->fullBit(oldp+6842,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25));
    bufp->fullBit(oldp+6843,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26));
    bufp->fullBit(oldp+6844,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27));
    bufp->fullBit(oldp+6845,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28));
    bufp->fullBit(oldp+6846,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29));
    bufp->fullBit(oldp+6847,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30));
    bufp->fullBit(oldp+6848,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31));
    bufp->fullBit(oldp+6849,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32));
    bufp->fullBit(oldp+6850,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33));
    bufp->fullBit(oldp+6851,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34));
    bufp->fullBit(oldp+6852,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35));
    bufp->fullBit(oldp+6853,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36));
    bufp->fullBit(oldp+6854,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37));
    bufp->fullBit(oldp+6855,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38));
    bufp->fullBit(oldp+6856,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39));
    bufp->fullBit(oldp+6857,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40));
    bufp->fullBit(oldp+6858,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41));
    bufp->fullBit(oldp+6859,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42));
    bufp->fullBit(oldp+6860,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43));
    bufp->fullBit(oldp+6861,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44));
    bufp->fullBit(oldp+6862,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45));
    bufp->fullBit(oldp+6863,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46));
    bufp->fullBit(oldp+6864,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47));
    bufp->fullBit(oldp+6865,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48));
    bufp->fullBit(oldp+6866,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49));
    bufp->fullBit(oldp+6867,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50));
    bufp->fullBit(oldp+6868,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51));
    bufp->fullBit(oldp+6869,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52));
    bufp->fullBit(oldp+6870,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53));
    bufp->fullBit(oldp+6871,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54));
    bufp->fullBit(oldp+6872,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55));
    bufp->fullBit(oldp+6873,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56));
    bufp->fullBit(oldp+6874,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57));
    bufp->fullBit(oldp+6875,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58));
    bufp->fullBit(oldp+6876,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59));
    bufp->fullBit(oldp+6877,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60));
    bufp->fullBit(oldp+6878,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61));
    bufp->fullBit(oldp+6879,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62));
    bufp->fullBit(oldp+6880,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63));
    bufp->fullBit(oldp+6881,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0));
    bufp->fullBit(oldp+6882,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1));
    bufp->fullBit(oldp+6883,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2));
    bufp->fullBit(oldp+6884,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3));
    bufp->fullBit(oldp+6885,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4));
    bufp->fullBit(oldp+6886,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5));
    bufp->fullBit(oldp+6887,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6));
    bufp->fullBit(oldp+6888,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7));
    bufp->fullBit(oldp+6889,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8));
    bufp->fullBit(oldp+6890,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9));
    bufp->fullBit(oldp+6891,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10));
    bufp->fullBit(oldp+6892,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11));
    bufp->fullBit(oldp+6893,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12));
    bufp->fullBit(oldp+6894,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13));
    bufp->fullBit(oldp+6895,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14));
    bufp->fullBit(oldp+6896,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15));
    bufp->fullBit(oldp+6897,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16));
    bufp->fullBit(oldp+6898,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17));
    bufp->fullBit(oldp+6899,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18));
    bufp->fullBit(oldp+6900,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19));
    bufp->fullBit(oldp+6901,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20));
    bufp->fullBit(oldp+6902,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21));
    bufp->fullBit(oldp+6903,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22));
    bufp->fullBit(oldp+6904,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23));
    bufp->fullBit(oldp+6905,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24));
    bufp->fullBit(oldp+6906,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25));
    bufp->fullBit(oldp+6907,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26));
    bufp->fullBit(oldp+6908,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27));
    bufp->fullBit(oldp+6909,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28));
    bufp->fullBit(oldp+6910,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29));
    bufp->fullBit(oldp+6911,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30));
    bufp->fullBit(oldp+6912,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31));
    bufp->fullBit(oldp+6913,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32));
    bufp->fullBit(oldp+6914,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33));
    bufp->fullBit(oldp+6915,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34));
    bufp->fullBit(oldp+6916,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35));
    bufp->fullBit(oldp+6917,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36));
    bufp->fullBit(oldp+6918,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37));
    bufp->fullBit(oldp+6919,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38));
    bufp->fullBit(oldp+6920,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39));
    bufp->fullBit(oldp+6921,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40));
    bufp->fullBit(oldp+6922,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41));
    bufp->fullBit(oldp+6923,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42));
    bufp->fullBit(oldp+6924,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43));
    bufp->fullBit(oldp+6925,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44));
    bufp->fullBit(oldp+6926,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45));
    bufp->fullBit(oldp+6927,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46));
    bufp->fullBit(oldp+6928,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47));
    bufp->fullBit(oldp+6929,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48));
    bufp->fullBit(oldp+6930,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49));
    bufp->fullBit(oldp+6931,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50));
    bufp->fullBit(oldp+6932,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51));
    bufp->fullBit(oldp+6933,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52));
    bufp->fullBit(oldp+6934,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53));
    bufp->fullBit(oldp+6935,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54));
    bufp->fullBit(oldp+6936,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55));
    bufp->fullBit(oldp+6937,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56));
    bufp->fullBit(oldp+6938,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57));
    bufp->fullBit(oldp+6939,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58));
    bufp->fullBit(oldp+6940,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59));
    bufp->fullBit(oldp+6941,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60));
    bufp->fullBit(oldp+6942,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61));
    bufp->fullBit(oldp+6943,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62));
    bufp->fullBit(oldp+6944,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63));
    bufp->fullIData(oldp+6945,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__tag_reg),21);
    bufp->fullCData(oldp+6946,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__index_reg),6);
    bufp->fullCData(oldp+6947,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg),5);
    bufp->fullIData(oldp+6948,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__line_base),32);
    bufp->fullIData(oldp+6949,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg),32);
    bufp->fullBit(oldp+6950,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg));
    bufp->fullIData(oldp+6951,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__bypass_inst_reg),32);
    bufp->fullIData(oldp+6952,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__bypass_pc_reg),32);
    bufp->fullBit(oldp+6953,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__resp_is_bypass));
    bufp->fullCData(oldp+6954,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__victim_way),2);
    bufp->fullCData(oldp+6955,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt),3);
    bufp->fullCData(oldp+6956,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__state),3);
    bufp->fullIData(oldp+6957,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp),21);
    bufp->fullBit(oldp+6958,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0));
    bufp->fullBit(oldp+6959,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit0));
    bufp->fullIData(oldp+6960,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1),21);
    bufp->fullBit(oldp+6961,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2));
    bufp->fullBit(oldp+6962,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit1));
    bufp->fullIData(oldp+6963,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3),21);
    bufp->fullBit(oldp+6964,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_4));
    bufp->fullBit(oldp+6965,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit2));
    bufp->fullIData(oldp+6966,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_5),21);
    bufp->fullBit(oldp+6967,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_6));
    bufp->fullBit(oldp+6968,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit3));
    bufp->fullBit(oldp+6969,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__hit));
    bufp->fullIData(oldp+6970,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_7),32);
    bufp->fullIData(oldp+6971,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_8),32);
    bufp->fullIData(oldp+6972,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_9),32);
    bufp->fullIData(oldp+6973,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_10),32);
    bufp->fullIData(oldp+6974,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_11),32);
    bufp->fullIData(oldp+6975,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_12),32);
    bufp->fullIData(oldp+6976,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_13),32);
    bufp->fullIData(oldp+6977,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_14),32);
    bufp->fullIData(oldp+6978,(((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
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
    bufp->fullIData(oldp+6979,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_16),32);
    bufp->fullIData(oldp+6980,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_17),32);
    bufp->fullIData(oldp+6981,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_18),32);
    bufp->fullIData(oldp+6982,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_19),32);
    bufp->fullIData(oldp+6983,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_20),32);
    bufp->fullIData(oldp+6984,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_21),32);
    bufp->fullIData(oldp+6985,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_22),32);
    bufp->fullIData(oldp+6986,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_23),32);
    bufp->fullIData(oldp+6987,(((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
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
    bufp->fullIData(oldp+6988,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_25),32);
    bufp->fullIData(oldp+6989,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_26),32);
    bufp->fullIData(oldp+6990,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_27),32);
    bufp->fullIData(oldp+6991,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_28),32);
    bufp->fullIData(oldp+6992,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_29),32);
    bufp->fullIData(oldp+6993,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_30),32);
    bufp->fullIData(oldp+6994,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_31),32);
    bufp->fullIData(oldp+6995,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_32),32);
    bufp->fullIData(oldp+6996,(((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
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
    bufp->fullIData(oldp+6997,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_34),32);
    bufp->fullIData(oldp+6998,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_35),32);
    bufp->fullIData(oldp+6999,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_36),32);
    bufp->fullIData(oldp+7000,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_37),32);
    bufp->fullIData(oldp+7001,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_38),32);
    bufp->fullIData(oldp+7002,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_39),32);
    bufp->fullIData(oldp+7003,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_40),32);
    bufp->fullIData(oldp+7004,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_41),32);
    bufp->fullIData(oldp+7005,(((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__offset_reg))
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
    bufp->fullCData(oldp+7006,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__rand_way),2);
    bufp->fullBit(oldp+7007,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0));
    bufp->fullBit(oldp+7008,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_1));
    bufp->fullBit(oldp+7009,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_2));
    bufp->fullBit(oldp+7010,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_3));
    bufp->fullBit(oldp+7011,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4));
    bufp->fullBit(oldp+7012,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5));
    bufp->fullBit(oldp+7013,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6));
    bufp->fullBit(oldp+7014,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_7));
    bufp->fullBit(oldp+7015,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___idu_io_in_ready));
    bufp->fullBit(oldp+7016,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu2__DOT__resp_valid_reg));
    bufp->fullIData(oldp+7017,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu2__DOT__pc_reg),32);
    bufp->fullCData(oldp+7018,((0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+7019,((0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+7020,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst),32);
    bufp->fullIData(oldp+7021,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__imm_i),32);
    bufp->fullBit(oldp+7022,((0x17U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+7023,((0x37U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+7024,((0x13U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+7025,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__is_load));
    bufp->fullBit(oldp+7026,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__is_srai));
    bufp->fullBit(oldp+7027,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__is_srli));
    bufp->fullBit(oldp+7028,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__is_slli));
    bufp->fullBit(oldp+7029,((0x33U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+7030,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__is_branch));
    bufp->fullBit(oldp+7031,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__is_store));
    bufp->fullBit(oldp+7032,((0x73U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+7033,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu1__DOT__out_valid));
    bufp->fullBit(oldp+7034,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__ifu2__DOT__kill_reg));
    bufp->fullBit(oldp+7035,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__state))));
    bufp->fullBit(oldp+7036,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state)) 
                              & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state))
                                  ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__out_sent)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__req_sent))
                                  : (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state))))));
    bufp->fullIData(oldp+7037,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__pc),32);
    bufp->fullCData(oldp+7038,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__rd_addr),5);
    bufp->fullBit(oldp+7039,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__rd_en));
    bufp->fullIData(oldp+7040,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__csr_wdata),32);
    bufp->fullBit(oldp+7041,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__csr_wen));
    bufp->fullSData(oldp+7042,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__csr_waddr),12);
    bufp->fullIData(oldp+7043,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__csr_rdata),32);
    bufp->fullBit(oldp+7044,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_csrrw));
    bufp->fullBit(oldp+7045,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_csrrs));
    bufp->fullBit(oldp+7046,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_load));
    bufp->fullBit(oldp+7047,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_store));
    bufp->fullBit(oldp+7048,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_lb));
    bufp->fullBit(oldp+7049,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_lbu));
    bufp->fullBit(oldp+7050,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_lh));
    bufp->fullBit(oldp+7051,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_lhu));
    bufp->fullBit(oldp+7052,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_jalr));
    bufp->fullBit(oldp+7053,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_jal));
    bufp->fullIData(oldp+7054,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__rs2_data),32);
    bufp->fullBit(oldp+7055,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_sw));
    bufp->fullBit(oldp+7056,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_sb));
    bufp->fullBit(oldp+7057,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__is_sh));
    bufp->fullCData(oldp+7058,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__state),2);
    bufp->fullBit(oldp+7059,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__req_sent));
    bufp->fullBit(oldp+7060,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem1__DOT__out_sent));
    bufp->fullBit(oldp+7061,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__state))));
    bufp->fullBit(oldp+7062,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__io_out_valid_0));
    bufp->fullIData(oldp+7063,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__pc),32);
    bufp->fullIData(oldp+7064,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__addr),32);
    bufp->fullCData(oldp+7065,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__rd_addr),5);
    bufp->fullBit(oldp+7066,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__rd_en));
    bufp->fullIData(oldp+7067,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__mem_data),32);
    bufp->fullBit(oldp+7068,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_load));
    bufp->fullBit(oldp+7069,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_jalr));
    bufp->fullBit(oldp+7070,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_jal));
    bufp->fullIData(oldp+7071,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__csr_wdata),32);
    bufp->fullBit(oldp+7072,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__csr_wen));
    bufp->fullSData(oldp+7073,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__csr_waddr),12);
    bufp->fullIData(oldp+7074,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__csr_rdata),32);
    bufp->fullBit(oldp+7075,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_csrrw));
    bufp->fullBit(oldp+7076,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_csrrs));
    bufp->fullCData(oldp+7077,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__state),2);
    bufp->fullBit(oldp+7078,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_lb));
    bufp->fullBit(oldp+7079,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_lbu));
    bufp->fullBit(oldp+7080,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_lh));
    bufp->fullBit(oldp+7081,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__is_lhu));
    bufp->fullCData(oldp+7082,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp),8);
    bufp->fullSData(oldp+7083,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__mem2__DOT__halfData),16);
    bufp->fullCData(oldp+7084,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__rd_addr),5);
    bufp->fullIData(oldp+7085,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___wb_io_rd_data),32);
    bufp->fullBit(oldp+7086,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__rd_en));
    bufp->fullIData(oldp+7087,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__regfile__DOT__regs_0),32);
    bufp->fullIData(oldp+7088,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp),32);
    bufp->fullIData(oldp+7089,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp_0),32);
    bufp->fullIData(oldp+7090,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__pc),32);
    bufp->fullIData(oldp+7091,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__addr),32);
    bufp->fullIData(oldp+7092,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__mem_data),32);
    bufp->fullBit(oldp+7093,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_load));
    bufp->fullBit(oldp+7094,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_jalr));
    bufp->fullBit(oldp+7095,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_jal));
    bufp->fullIData(oldp+7096,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__csr_rdata),32);
    bufp->fullBit(oldp+7097,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_csrrw));
    bufp->fullBit(oldp+7098,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__is_csrrs));
    bufp->fullCData(oldp+7099,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__state),2);
    bufp->fullCData(oldp+7100,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__state))
                                 ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT___GEN)
                                     ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__state))
                                 : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__state))
                                     ? 2U : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__state))
                                              ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__wb__DOT__state))))),2);
    bufp->fullBit(oldp+7101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+7102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+7103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+7104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+7105,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+7106,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+7107,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+7108,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+7109,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+7110,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+7111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+7112,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+7113,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+7114,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+7115,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+7116,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+7117,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+7118,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+7119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+7120,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+7121,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+7122,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+7123,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+7124,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+7125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+7126,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+7127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+7128,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+7129,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+7130,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+7131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+7132,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+7133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+7134,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+7135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+7136,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+7137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+7138,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+7139,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+7140,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+7141,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+7142,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+7143,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+7144,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+7145,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+7146,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+7147,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+7148,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+7149,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_bready_0) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                     >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->fullBit(oldp+7150,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_bready_0) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullCData(oldp+7151,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
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
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid), 1U)))))
                                 : 0U)),2);
    bufp->fullCData(oldp+7152,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                 ? (3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                            ? (IData)(
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                                       [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__deq_ptr_value] 
                                                       >> 1U))
                                            : 0U) | 
                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U)))
                                 : 0U)),2);
    bufp->fullBit(oldp+7153,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))));
    bufp->fullBit(oldp+7154,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+7155,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)))));
    bufp->fullBit(oldp+7156,((0x7fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+7157,((0x3fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+7158,((0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+7159,((0xfffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+7160,((0x7ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+7161,((0x3ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+7162,((0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+7163,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+7164,((0x7fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+7165,((0x3fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+7166,((0x1fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+7167,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+7168,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+7169,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+7170,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                 >> 0xfU))));
    bufp->fullIData(oldp+7171,(((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_8)))
                                 ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata)),32);
    bufp->fullIData(oldp+7172,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7)
                                 ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint)
                                          ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)
                                              ? ((0x200bff8U 
                                                  == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low
                                                  : 
                                                 ((0x200bffcU 
                                                   == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high
                                                   : 0U))
                                              : 0U)
                                          : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)
                                              ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata)))),32);
    bufp->fullBit(oldp+7173,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid))));
    bufp->fullBit(oldp+7174,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                              & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid)
                                  : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_5) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid))))));
    bufp->fullBit(oldp+7175,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+7176,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+7177,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+7178,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullIData(oldp+7179,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                               [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+7180,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+7181,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullBit(oldp+7182,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+7183,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+7184,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                 ? 0xeU : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? 0xbU : 
                                           (0xfU & 
                                            ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                              ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x14U)
                                              : ((3U 
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
    bufp->fullBit(oldp+7185,((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+7186,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+7187,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+7188,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+7189,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qi_ce_n)))));
    bufp->fullBit(oldp+7190,((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullBit(oldp+7191,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qi_sck));
    bufp->fullBit(oldp+7192,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qi_ce_n));
    bufp->fullBit(oldp+7193,((0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+7194,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+7195,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+7196,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+7197,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+7198,((3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                       >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+7199,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+7200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+7201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+7202,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QI__DOT__state));
    bufp->fullBit(oldp+7203,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+7204,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+7205,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_read_data_q),32);
    bufp->fullBit(oldp+7206,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+7207,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+7208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+7209,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+7210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+7211,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+7212,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+7213,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+7214,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+7215,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+7216,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+7217,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+7218,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+7219,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+7220,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
                               [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr]),6);
    bufp->fullBit(oldp+7221,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0)) 
                              & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+7222,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0))));
    bufp->fullBit(oldp+7223,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+7224,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+7225,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+7226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+7227,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+7228,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+7229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+7230,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+7231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+7232,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+7233,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+7234,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+7235,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+7236,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+7237,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+7238,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+7239,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+7240,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+7241,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullIData(oldp+7242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__wr_data_q),32);
    bufp->fullCData(oldp+7243,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__wr_mask_q),4);
    bufp->fullBit(oldp+7244,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+7245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+7246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+7247,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+7248,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+7249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+7250,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+7251,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullIData(oldp+7252,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata),32);
    bufp->fullSData(oldp+7253,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullCData(oldp+7254,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+7255,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+7259,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullSData(oldp+7260,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+7261,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+7262,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+7263,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U)))));
    bufp->fullBit(oldp+7264,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+7265,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+7266,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 1U))));
    bufp->fullBit(oldp+7267,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+7268,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+7269,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+7270,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+7271,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+7272,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+7273,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+7274,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+7275,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+7276,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+7277,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+7278,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+7279,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+7280,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+7281,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+7282,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+7283,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+7284,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 7U))));
    bufp->fullBit(oldp+7285,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+7286,((IData)((0x10U != (0x12U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+7287,((IData)((0x11U == (0x11U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+7288,((IData)((0x14U == (0x14U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+7289,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+7290,((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+7291,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+7292,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+7293,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2));
    bufp->fullBit(oldp+7294,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3));
    bufp->fullBit(oldp+7295,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4));
    bufp->fullBit(oldp+7296,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+7297,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+7298,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+7299,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+7300,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+7301,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+7302,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+7303,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+7304,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+7305,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+7306,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+7307,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+7308,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+7309,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+7310,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+7311,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+7312,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+7313,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+7314,((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+7315,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+7316,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+7317,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+7318,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+7319,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+7320,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+7321,((1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+7322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+7323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+7324,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+7325,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+7326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+7327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+7328,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+7329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+7330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+7331,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+7332,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+7333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+7334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+7335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+7336,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+7337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+7338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+7339,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+7340,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+7341,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+7342,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+7343,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+7344,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+7345,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+7346,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+7347,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+7348,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+7349,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+7350,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+7351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+7352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+7353,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+7354,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+7355,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+7356,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+7357,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+7358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+7359,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+7360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+7361,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+7362,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+7363,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+7364,((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+7365,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+7366,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+7367,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+7368,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+7369,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+7370,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+7371,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+7372,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+7373,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+7374,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+7375,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+7376,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+7377,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+7378,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+7379,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+7380,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+7381,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+7382,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+7383,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+7384,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+7385,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+7386,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+7387,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+7388,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+7389,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+7390,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+7391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+7392,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+7393,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+7394,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+7395,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+7396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+7397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+7398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+7399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+7400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+7401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+7402,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+7403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+7404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+7405,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+7406,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+7407,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+7408,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+7409,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+7410,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+7411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+7412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+7413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+7414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+7415,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+7416,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+7417,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                       >> 3U)))));
    bufp->fullBit(oldp+7418,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                       >> 2U)))));
    bufp->fullBit(oldp+7419,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                       >> 1U)))));
    bufp->fullBit(oldp+7420,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)))));
    bufp->fullCData(oldp+7421,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__mem1_ext__W0_mask),2);
    bufp->fullCData(oldp+7422,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__mem2_ext__W0_mask),2);
    bufp->fullSData(oldp+7423,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__modeReg),13);
    bufp->fullBit(oldp+7424,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__rowOpen_0));
    bufp->fullBit(oldp+7425,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__rowOpen_1));
    bufp->fullBit(oldp+7426,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__rowOpen_2));
    bufp->fullBit(oldp+7427,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__rowOpen_3));
    bufp->fullSData(oldp+7428,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__activeRow_0),13);
    bufp->fullSData(oldp+7429,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__activeRow_1),13);
    bufp->fullSData(oldp+7430,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__activeRow_2),13);
    bufp->fullSData(oldp+7431,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__activeRow_3),13);
    bufp->fullBit(oldp+7432,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_active));
    bufp->fullBit(oldp+7433,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_is_read));
    bufp->fullCData(oldp+7434,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_bank),2);
    bufp->fullSData(oldp+7435,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_row),13);
    bufp->fullSData(oldp+7436,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_col),9);
    bufp->fullCData(oldp+7437,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_remain),3);
    bufp->fullCData(oldp+7438,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__cas_count),3);
    bufp->fullIData(oldp+7439,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___addr_T_4),24);
    bufp->fullCData(oldp+7440,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__unnamedblk1__DOT__unnamedblk2__DOT__burst_length),4);
    bufp->fullBit(oldp+7441,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__bitCnt) 
                                        >> 3U)) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__sendReg) 
                                                   >> 7U)))));
    bufp->fullCData(oldp+7442,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__sendReg),8);
    bufp->fullCData(oldp+7443,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__bitCnt),4);
    bufp->fullCData(oldp+7444,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+7445,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+7446,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+7447,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+7448,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+7449,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+7450,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+7451,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+7452,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+7453,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite));
    bufp->fullIData(oldp+7454,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+7455,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+7456,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+7457,((IData)(((0x20000000U 
                                       == (0x30000000U 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)))));
    bufp->fullBit(oldp+7458,((IData)(((0x20000000U 
                                       == (0x30000000U 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                      & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
    bufp->fullIData(oldp+7459,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+7460,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+7461,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+7462,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+7463,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+7464,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+7465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+7466,((IData)(((0U == (0x30000000U 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                      & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
    bufp->fullBit(oldp+7467,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+7468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+7469,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+7470,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+7471,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+7472,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+7473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+7474,((0U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+7475,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+7476,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+7477,((2U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+7478,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullCData(oldp+7479,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp),2);
    bufp->fullBit(oldp+7480,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullCData(oldp+7481,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullCData(oldp+7482,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+7483,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullCData(oldp+7484,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+7485,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+7486,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+7487,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+7488,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullBit(oldp+7489,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+7490,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+7491,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+7493,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+7494,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+7495,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0),4);
    bufp->fullIData(oldp+7496,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+7497,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize),3);
    bufp->fullBit(oldp+7498,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullIData(oldp+7499,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_write_data_w),32);
    bufp->fullBit(oldp+7500,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast));
    bufp->fullBit(oldp+7501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+7502,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+7503,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+7504,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullIData(oldp+7505,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+7506,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+7507,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+7508,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+7509,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+7510,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+7511,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+7512,((0xfffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+7513,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+7514,((0x7800U == (0x7fffU & 
                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+7515,((0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+7516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullBit(oldp+7517,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+7518,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag));
    bufp->fullSData(oldp+7519,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0)))),16);
    bufp->fullBit(oldp+7520,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+7521,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+7522,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullCData(oldp+7523,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+7524,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+7525,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+7526,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+7527,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+7528,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+7529,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+7530,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+7531,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awTag_hi_1));
    bufp->fullSData(oldp+7532,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+7533,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+7534,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+7535,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+7536,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+7537,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+7538,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+7539,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+7540,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+7541,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+7542,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+7543,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+7544,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+7545,((0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+7546,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+7547,(((0xffff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+7548,((0xfffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+7549,((0xffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+7550,((0xffU & ((IData)(7U) 
                                         + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))),8);
    bufp->fullCData(oldp+7551,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state),2);
    bufp->fullCData(oldp+7552,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__step),4);
    bufp->fullBit(oldp+7553,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__flashIrqSeen));
    bufp->fullBit(oldp+7554,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__flashRxReq));
    bufp->fullBit(oldp+7555,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_psel));
    bufp->fullBit(oldp+7556,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_penable));
    bufp->fullIData(oldp+7557,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_paddr),32);
    bufp->fullIData(oldp+7558,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_pwdata),32);
    bufp->fullBit(oldp+7559,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_pwrite));
    bufp->fullCData(oldp+7560,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_pstrb),4);
    bufp->fullBit(oldp+7561,((0x2fffffffU < (0x3fffffffU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    bufp->fullCData(oldp+7562,((0x1fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_paddr)),5);
    bufp->fullBit(oldp+7563,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                              & (0x14U == (0x1cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_paddr)))));
    bufp->fullBit(oldp+7564,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                              & (0x10U == (0x1cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_paddr)))));
    bufp->fullCData(oldp+7565,((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
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
    bufp->fullBit(oldp+7566,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                              & (0x18U == (0x1cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_paddr)))));
    bufp->fullCData(oldp+7567,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+7568,((7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+7569,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+7570,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+7571,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+7572,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+7573,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0))));
    bufp->fullBit(oldp+7574,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+7575,((0x7fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+7576,((0x3fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+7577,((0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+7578,((0xfffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+7579,((0x7ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+7580,((0x3ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+7581,((0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+7582,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+7583,((0x7fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+7584,((0x3fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+7585,((0x1fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+7586,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+7587,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+7588,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+7589,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+7590,(vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+7591,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+7592,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+7593,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+7594,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+7595,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+7596,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+7597,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready));
    bufp->fullBit(oldp+7598,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+7599,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+7600,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+7601,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid),4);
    bufp->fullBit(oldp+7602,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+7603,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid),4);
    bufp->fullIData(oldp+7604,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata),32);
    bufp->fullBit(oldp+7605,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast));
    bufp->fullSData(oldp+7606,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)))),16);
    bufp->fullSData(oldp+7607,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)))),16);
    bufp->fullBit(oldp+7608,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+7609,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+7610,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+7611,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+7612,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+7613,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+7614,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+7615,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+7616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+7617,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+7618,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+7619,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+7620,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+7621,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+7622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready));
    bufp->fullBit(oldp+7623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+7624,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+7625,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+7626,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+7627,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid));
    bufp->fullBit(oldp+7628,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast));
    bufp->fullBit(oldp+7629,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid));
    bufp->fullBit(oldp+7630,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid));
    bufp->fullBit(oldp+7631,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rlast));
    bufp->fullIData(oldp+7632,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data),32);
    bufp->fullBit(oldp+7633,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last));
    bufp->fullCData(oldp+7634,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+7635,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+7636,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+7637,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+7638,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullCData(oldp+7639,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+7640,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmdReg),8);
    bufp->fullCData(oldp+7641,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__bitCnt),3);
    bufp->fullIData(oldp+7642,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__addrReg),24);
    bufp->fullCData(oldp+7643,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__nibCnt),3);
    bufp->fullIData(oldp+7644,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__dataAddr),24);
    bufp->fullCData(oldp+7645,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__outNib),4);
    bufp->fullCData(oldp+7646,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__readByte),8);
    bufp->fullBit(oldp+7647,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__readHigh));
    bufp->fullCData(oldp+7648,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wrHighNib),4);
    bufp->fullBit(oldp+7649,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wrNeedHigh));
    bufp->fullIData(oldp+7650,((0x3fffffU & ((IData)(1U) 
                                             + vlSelfRef.ysyxSoCFull__DOT__psram__DOT__dataAddr))),22);
    bufp->fullBit(oldp+7651,(((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_3) 
                                  | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state)))) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__readHigh)) 
                                 & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state))))));
    bufp->fullIData(oldp+7652,((0x3fffffU & vlSelfRef.ysyxSoCFull__DOT__psram__DOT__dataAddr)),22);
    bufp->fullBit(oldp+7653,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_3)) 
                              & ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state)) 
                                 & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__nibCnt))))));
    bufp->fullBit(oldp+7654,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_8)) 
                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wrNeedHigh)) 
                                 & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state))))));
    bufp->fullCData(oldp+7655,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+7656,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+7657,(vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+7658,(vlSelfRef.ysyxSoCFull__DOT___asic_psram_qpi_en));
    bufp->fullBit(oldp+7659,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullBit(oldp+7660,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+7661,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+7662,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+7663,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+7664,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+7665,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullBit(oldp+7666,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+7667,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+7668,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+7669,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+7670,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+7671,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+7672,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+7673,(((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QI__DOT__counter))
                                 ? (1U & (0x35U >> 
                                          (7U & ((IData)(7U) 
                                                 - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QI__DOT__counter)))))
                                 : 0U)),4);
    bufp->fullBit(oldp+7674,((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QI__DOT__counter))));
    bufp->fullBit(oldp+7675,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+7676,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+7677,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_done));
    bufp->fullCData(oldp+7678,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullBit(oldp+7679,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+7680,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullBit(oldp+7681,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QI__DOT__nstate));
    bufp->fullCData(oldp+7682,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QI__DOT__counter),4);
    bufp->fullBit(oldp+7683,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    bufp->fullCData(oldp+7684,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+7685,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_bank_q),2);
    bufp->fullSData(oldp+7686,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_row_q),13);
    bufp->fullSData(oldp+7687,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_col_q),13);
    bufp->fullCData(oldp+7688,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+7689,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+7690,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+7691,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+7692,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+7693,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullCData(oldp+7694,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+7695,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+7696,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+7699,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack));
    bufp->fullBit(oldp+7700,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready));
    bufp->fullBit(oldp+7701,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_spi_irq_out));
    bufp->fullSData(oldp+7702,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullIData(oldp+7703,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+7704,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U))));
    bufp->fullBit(oldp+7705,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xaU))));
    bufp->fullCData(oldp+7706,((0x7fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+7707,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 8U))));
    bufp->fullBit(oldp+7708,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+7709,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+7710,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+7711,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+7712,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+7713,((1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullCData(oldp+7714,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+7715,((0xffU & ((0x800U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                          ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0) 
                                             - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                          : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                             - (IData)(1U))))),8);
    bufp->fullCData(oldp+7716,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+7717,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+7718,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+7719,(vlSelfRef.ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss));
    bufp->fullBit(oldp+7720,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset));
    bufp->fullIData(oldp+7721,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullBit(oldp+7722,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem1_MPORT_en));
    bufp->fullBit(oldp+7723,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_rdata2_en));
    bufp->fullBit(oldp+7724,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_MPORT_3_en));
    bufp->fullBit(oldp+7725,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__dq_in_buf__out_en));
    bufp->fullSData(oldp+7726,((0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullIData(oldp+7727,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__mem1_ext__W1_addr),24);
    bufp->fullSData(oldp+7728,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullBit(oldp+7729,(vlSelfRef.clock));
    bufp->fullBit(oldp+7730,(vlSelfRef.reset));
    bufp->fullSData(oldp+7731,(vlSelfRef.externalPins_gpio_out),16);
    bufp->fullSData(oldp+7732,(vlSelfRef.externalPins_gpio_in),16);
    bufp->fullCData(oldp+7733,(vlSelfRef.externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+7734,(vlSelfRef.externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+7735,(vlSelfRef.externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+7736,(vlSelfRef.externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+7737,(vlSelfRef.externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+7738,(vlSelfRef.externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+7739,(vlSelfRef.externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+7740,(vlSelfRef.externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+7741,(vlSelfRef.externalPins_ps2_clk));
    bufp->fullBit(oldp+7742,(vlSelfRef.externalPins_ps2_data));
    bufp->fullCData(oldp+7743,(vlSelfRef.externalPins_vga_r),8);
    bufp->fullCData(oldp+7744,(vlSelfRef.externalPins_vga_g),8);
    bufp->fullCData(oldp+7745,(vlSelfRef.externalPins_vga_b),8);
    bufp->fullBit(oldp+7746,(vlSelfRef.externalPins_vga_hsync));
    bufp->fullBit(oldp+7747,(vlSelfRef.externalPins_vga_vsync));
    bufp->fullBit(oldp+7748,(vlSelfRef.externalPins_vga_valid));
    bufp->fullBit(oldp+7749,(vlSelfRef.externalPins_uart_rx));
    bufp->fullBit(oldp+7750,(vlSelfRef.externalPins_uart_tx));
    bufp->fullBit(oldp+7751,((1U & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__bitCnt) 
                                         >> 3U)) | 
                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__sendReg) 
                                      >> 7U)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) 
                                                 | ((((2U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                                      & (0U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                                      ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                                                      : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                                    >> 0x1fU))))));
    bufp->fullCData(oldp+7752,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+7753,((1U & (~ (IData)(vlSelfRef.clock)))));
    bufp->fullBit(oldp+7754,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_done) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                   : (0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+7755,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state)) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_0)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready)
                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___nodeIn_pready_T)))));
    bufp->fullIData(oldp+7756,((((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state)) 
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
                                              : 0U)
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata))),32);
    bufp->fullIData(oldp+7757,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+7758,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp))),6);
    bufp->fullQData(oldp+7759,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullQData(oldp+7761,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+7763,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+7765,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__maybe_full)
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast)))));
    bufp->fullBit(oldp+7766,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__maybe_full)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+7767,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready))));
    bufp->fullBit(oldp+7768,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_5) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead)
                                  ? (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state))
                                  : ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_arready))))));
    bufp->fullBit(oldp+7769,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_arready) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr))));
    bufp->fullBit(oldp+7770,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire)
                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_3)))));
    bufp->fullBit(oldp+7771,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_mem_master_io_master_arvalid) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_5) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead)
                                     ? (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state))
                                     : ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_arready)))))));
    bufp->fullCData(oldp+7772,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
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
    bufp->fullBit(oldp+7773,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_done) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                  : (0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))));
    bufp->fullBit(oldp+7774,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->fullCData(oldp+7775,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready))
                                 ? (0x20U | (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)) 
                                              << 4U) 
                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid)))
                                 : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready))
                                     ? (0x10U | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0))
                                     : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w) 
                                         << 5U) | (
                                                   ((0U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullSData(oldp+7776,(((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])),11);
    bufp->fullCData(oldp+7777,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+7778,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__recvReg),8);
    bufp->fullBit(oldp+7779,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) 
                                    | ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+7780,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+7781,(((0xfffffeU & (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+7782,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+7783,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__outEnReg));
    bufp->fullCData(oldp+7784,((((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_3) 
                                     | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state)))) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__readHigh)) 
                                    & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state))))
                                 ? vlSelfRef.ysyxSoCFull__DOT__psram__DOT__mem_ext__DOT__Memory
                                [(0x3fffffU & ((IData)(1U) 
                                               + vlSelfRef.ysyxSoCFull__DOT__psram__DOT__dataAddr))]
                                 : 0U)),8);
    bufp->fullCData(oldp+7785,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___mem_ext_R1_data),8);
    bufp->fullCData(oldp+7786,((((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wrHighNib) 
                                 << 4U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din))),8);
    bufp->fullIData(oldp+7787,(((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___GEN_12)) 
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
    bufp->fullSData(oldp+7788,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_rdata2_en)
                                 ? vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem1_ext__DOT__Memory
                                [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___addr_T_4]
                                 : 0U)),16);
    bufp->fullSData(oldp+7789,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_rdata2_en)
                                 ? vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_ext__DOT__Memory
                                [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___addr_T_4]
                                 : 0U)),16);
}
