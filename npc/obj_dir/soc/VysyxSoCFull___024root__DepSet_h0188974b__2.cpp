// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT___mem_ext_R1_data 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_3)) 
            & ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state)) 
               & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__nibCnt))))
            ? vlSelfRef.ysyxSoCFull__DOT__psram__DOT__mem_ext__DOT__Memory
           [(0x3fffffU & vlSelfRef.ysyxSoCFull__DOT__psram__DOT__dataAddr)]
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT___mem_ext_R0_data 
        = (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_3) 
                | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state)))) 
            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__readHigh)) 
               & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state))))
            ? vlSelfRef.ysyxSoCFull__DOT__psram__DOT__mem_ext__DOT__Memory
           [(0x3fffffU & ((IData)(1U) + vlSelfRef.ysyxSoCFull__DOT__psram__DOT__dataAddr))]
            : 0U);
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__3(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___GEN_13 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_active));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___GEN_12 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___GEN_10));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__mem1_ext__W1_addr 
        = (0xffffffU & ((0xfffe00U & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                                        << 0xdU) + 
                                       ((0x33U >= (0x3fU 
                                                   & ((IData)(0xdU) 
                                                      * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))))
                                         ? (0x1fffU 
                                            & (IData)(
                                                      (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___GEN_5 
                                                       >> 
                                                       (0x3fU 
                                                        & ((IData)(0xdU) 
                                                           * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))))))
                                         : 0U)) << 9U)) 
                        + (0x1ffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem1_MPORT_en 
        = ((~ ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
               | ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                  | (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___GEN_2) 
              & ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___GEN_4) 
                    >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_MPORT_3_en 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_is_read)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___GEN_13));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__dq_in_buf__out_en 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___GEN_13) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__burst_is_read) 
              & (2U > (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__cas_count))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_rdata2_en 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___GEN_12) 
           & (2U > (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__cas_count)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
        = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
               ? 0U : 0xffffffffU) & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                         ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q) 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                           ? 0U : 0xffffffffU)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                          ? 0U : 0xffffffffU))) 
            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                ? 0U : 0xffffffffU)) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__dq_in_buf__out_en)
                                           ? 0xffffffffU
                                           : 0U) & 
                                         (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__dq_in_buf__out_en)
                                            ? ((1U 
                                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___GEN_12)) 
                                                   | (0U 
                                                      != 
                                                      (6U 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__cas_count)))))
                                                ? 0U
                                                : (
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_rdata2_en)
                                                      ? 
                                                     vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_ext__DOT__Memory
                                                     [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___addr_T_4]
                                                      : 0U) 
                                                    << 0x10U) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem2_rdata2_en)
                                                       ? 
                                                      vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__mem1_ext__DOT__Memory
                                                      [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___addr_T_4]
                                                       : 0U)))
                                            : 0U) & 
                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__dq_in_buf__out_en)
                                            ? 0xffffffffU
                                            : 0U))) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__dq_in_buf__out_en)
                                            ? 0xffffffffU
                                            : 0U)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__4(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din 
        = ((((((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
               | (0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
           | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__outEnReg)
                 ? 0xfU : 0U) & (((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__outEnReg)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__outNib)
                                   : 0U) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__outEnReg)
                                             ? 0xfU
                                             : 0U))) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__outEnReg)
                  ? 0xfU : 0U)));
}

void VysyxSoCFull___024root___eval_triggers__act(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf);

bool VysyxSoCFull___024root___eval_phase__act(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<10> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VysyxSoCFull___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VysyxSoCFull___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VysyxSoCFull___024root___eval_nba(VysyxSoCFull___024root* vlSelf);

bool VysyxSoCFull___024root___eval_phase__nba(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VysyxSoCFull___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
bool VysyxSoCFull___024root___eval_phase__ico(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__nba(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval\n"); );
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
            VysyxSoCFull___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../ysyxSoC/build/ysyxSoCFull.v", 7399, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VysyxSoCFull___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../ysyxSoC/build/ysyxSoCFull.v", 7399, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../ysyxSoC/build/ysyxSoCFull.v", 7399, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VysyxSoCFull___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VysyxSoCFull___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelfRef.externalPins_ps2_clk 
                     & 0xfeU))) {
        Verilated::overWidthError("externalPins_ps2_clk");}
    if (VL_UNLIKELY((vlSelfRef.externalPins_ps2_data 
                     & 0xfeU))) {
        Verilated::overWidthError("externalPins_ps2_data");}
    if (VL_UNLIKELY((vlSelfRef.externalPins_uart_rx 
                     & 0xfeU))) {
        Verilated::overWidthError("externalPins_uart_rx");}
}
#endif  // VL_DEBUG
