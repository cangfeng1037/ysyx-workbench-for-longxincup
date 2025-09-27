// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__cpu__DOT__imm_ext_i = (((- (IData)(
                                                           (vlSelfRef.inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.inst 
                                                  >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__is_addi = (IData)(
                                                    (0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.inst)));
    vlSelfRef.top__DOT__cpu__DOT__rs1_data = ((0U == 
                                               (0x1fU 
                                                & (vlSelfRef.inst 
                                                   >> 0xfU)))
                                               ? 0U
                                               : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
                                              [(0x1fU 
                                                & (vlSelfRef.inst 
                                                   >> 0xfU))]);
    vlSelfRef.top__DOT__cpu__DOT__alu_out = (((0x17U 
                                               == (0x7fU 
                                                   & vlSelfRef.inst))
                                               ? vlSelfRef.top__DOT__cpu__DOT__pc_current
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.inst))
                                                   ? vlSelfRef.top__DOT__cpu__DOT__pc_current
                                                   : vlSelfRef.top__DOT__cpu__DOT__rs1_data)) 
                                             + ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.inst))
                                                 ? 
                                                (0xfffff000U 
                                                 & vlSelfRef.inst)
                                                 : 
                                                ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.inst))
                                                  ? vlSelfRef.top__DOT__cpu__DOT__rs1_data
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.inst))
                                                   ? vlSelfRef.top__DOT__cpu__DOT__imm_ext_i
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_addi)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__imm_ext_i
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.inst 
                                                         >> 0x14U)))
                                                     ? 0U
                                                     : 
                                                    vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
                                                    [
                                                    (0x1fU 
                                                     & (vlSelfRef.inst 
                                                        >> 0x14U))]))))));
    vlSelfRef.top__DOT__cpu__DOT__pc_next = ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.inst))
                                              ? (((
                                                   (- (IData)(
                                                              (vlSelfRef.inst 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | (((0xff000U 
                                                       & vlSelfRef.inst) 
                                                      | (0x800U 
                                                         & (vlSelfRef.inst 
                                                            >> 9U))) 
                                                     | (0x7feU 
                                                        & (vlSelfRef.inst 
                                                           >> 0x14U)))) 
                                                 + vlSelfRef.top__DOT__cpu__DOT__pc_current)
                                              : ((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.inst))
                                                  ? 
                                                 (0xfffffffeU 
                                                  & vlSelfRef.top__DOT__cpu__DOT__alu_out)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__cpu__DOT__pc_current)));
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__ebreak_TOP();

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0;
    __VdlyVal__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0;
    __VdlyDim0__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0;
    __VdlySet__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 0;
    // Body
    if (((~ (IData)(vlSelfRef.rst)) & (0x100073U == vlSelfRef.inst))) {
        Vtop___024root____Vdpiimwrap_top__DOT__ebreak_TOP();
    }
    __VdlySet__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 0U;
    if ((((IData)(vlSelfRef.top__DOT__cpu__DOT__is_addi) 
          | ((0x17U == (0x7fU & vlSelfRef.inst)) | 
             ((0x37U == (0x7fU & vlSelfRef.inst)) | 
              ((0x6fU == (0x7fU & vlSelfRef.inst)) 
               | (0x67U == (0x7fU & vlSelfRef.inst)))))) 
         & (0U != (0x1fU & (vlSelfRef.inst >> 7U))))) {
        __VdlyVal__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 
            = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_addi)
                ? vlSelfRef.top__DOT__cpu__DOT__alu_out
                : ((0x37U == (0x7fU & vlSelfRef.inst))
                    ? (0xfffff000U & vlSelfRef.inst)
                    : ((0x17U == (0x7fU & vlSelfRef.inst))
                        ? vlSelfRef.top__DOT__cpu__DOT__alu_out
                        : ((0x6fU == (0x7fU & vlSelfRef.inst))
                            ? ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__pc_current)
                            : ((0x67U == (0x7fU & vlSelfRef.inst))
                                ? ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__pc_current)
                                : 0U)))));
        __VdlyDim0__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 
            = (0x1fU & (vlSelfRef.inst >> 7U));
        __VdlySet__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0 = 1U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0) {
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[__VdlyDim0__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0] 
            = __VdlyVal__top__DOT__cpu__DOT__regfile__DOT__regs_out__v0;
    }
    vlSelfRef.halt_ret = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
        [0xaU];
    vlSelfRef.top__DOT__cpu__DOT__rs1_data = ((0U == 
                                               (0x1fU 
                                                & (vlSelfRef.inst 
                                                   >> 0xfU)))
                                               ? 0U
                                               : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
                                              [(0x1fU 
                                                & (vlSelfRef.inst 
                                                   >> 0xfU))]);
    vlSelfRef.top__DOT__cpu__DOT__pc_current = ((IData)(vlSelfRef.rst)
                                                 ? 0x80000000U
                                                 : vlSelfRef.top__DOT__cpu__DOT__pc_next);
    vlSelfRef.pc = vlSelfRef.top__DOT__cpu__DOT__pc_current;
    vlSelfRef.top__DOT__cpu__DOT__alu_out = (((0x17U 
                                               == (0x7fU 
                                                   & vlSelfRef.inst))
                                               ? vlSelfRef.top__DOT__cpu__DOT__pc_current
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.inst))
                                                   ? vlSelfRef.top__DOT__cpu__DOT__pc_current
                                                   : vlSelfRef.top__DOT__cpu__DOT__rs1_data)) 
                                             + ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.inst))
                                                 ? 
                                                (0xfffff000U 
                                                 & vlSelfRef.inst)
                                                 : 
                                                ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.inst))
                                                  ? vlSelfRef.top__DOT__cpu__DOT__rs1_data
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.inst))
                                                   ? vlSelfRef.top__DOT__cpu__DOT__imm_ext_i
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_addi)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__imm_ext_i
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.inst 
                                                         >> 0x14U)))
                                                     ? 0U
                                                     : 
                                                    vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
                                                    [
                                                    (0x1fU 
                                                     & (vlSelfRef.inst 
                                                        >> 0x14U))]))))));
    vlSelfRef.top__DOT__cpu__DOT__pc_next = ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.inst))
                                              ? (((
                                                   (- (IData)(
                                                              (vlSelfRef.inst 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | (((0xff000U 
                                                       & vlSelfRef.inst) 
                                                      | (0x800U 
                                                         & (vlSelfRef.inst 
                                                            >> 9U))) 
                                                     | (0x7feU 
                                                        & (vlSelfRef.inst 
                                                           >> 0x14U)))) 
                                                 + vlSelfRef.top__DOT__cpu__DOT__pc_current)
                                              : ((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.inst))
                                                  ? 
                                                 (0xfffffffeU 
                                                  & vlSelfRef.top__DOT__cpu__DOT__alu_out)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__cpu__DOT__pc_current)));
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
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

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/cangfeng_/ysyx-workbench/npc/vsrc/top.v", 1, "", "Input combinational region did not converge.");
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
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/cangfeng_/ysyx-workbench/npc/vsrc/top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/cangfeng_/ysyx-workbench/npc/vsrc/top.v", 1, "", "Active region did not converge.");
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
