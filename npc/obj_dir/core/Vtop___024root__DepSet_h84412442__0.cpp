// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern "C" void ebreak();

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__ebreak_box__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__ebreak_box__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_pc_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_pc__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_pc_TOP\n"); );
    // Init
    // Body
    get_pc__Vfuncrtn = vlSymsp->TOP.top__DOT__npc_cpu__DOT__wb__DOT__pc;
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_inst_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_inst_TOP\n"); );
    // Init
    // Body
    get_inst__Vfuncrtn = vlSymsp->TOP.top__DOT__npc_cpu__DOT__wb__DOT__inst;
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_difftest_valid_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_difftest_valid__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_difftest_valid_TOP\n"); );
    // Init
    // Body
    get_difftest_valid__Vfuncrtn = vlSymsp->TOP.top__DOT__npc_cpu__DOT__wb__DOT__state;
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_non_inst_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_non_inst__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_non_inst_TOP\n"); );
    // Init
    // Body
    get_non_inst__Vfuncrtn = 0U;
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_gpr_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &get_gpr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_gpr_TOP\n"); );
    // Init
    // Body
    get_gpr__Vfuncrtn = (((((((((0U == idx) | (1U == idx)) 
                               | (2U == idx)) | (3U 
                                                 == idx)) 
                             | (4U == idx)) | (5U == idx)) 
                           | (6U == idx)) | (7U == idx))
                          ? ((0U == idx) ? 0U : ((1U 
                                                  == idx)
                                                  ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_1
                                                  : 
                                                 ((2U 
                                                   == idx)
                                                   ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_2
                                                   : 
                                                  ((3U 
                                                    == idx)
                                                    ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_3
                                                    : 
                                                   ((4U 
                                                     == idx)
                                                     ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_4
                                                     : 
                                                    ((5U 
                                                      == idx)
                                                      ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_5
                                                      : 
                                                     ((6U 
                                                       == idx)
                                                       ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_6
                                                       : vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_7)))))))
                          : (((((((((8U == idx) | (9U 
                                                   == idx)) 
                                   | (0xaU == idx)) 
                                  | (0xbU == idx)) 
                                 | (0xcU == idx)) | 
                                (0xdU == idx)) | (0xeU 
                                                  == idx)) 
                              | (0xfU == idx)) ? ((8U 
                                                   == idx)
                                                   ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_8
                                                   : 
                                                  ((9U 
                                                    == idx)
                                                    ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_9
                                                    : 
                                                   ((0xaU 
                                                     == idx)
                                                     ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_10
                                                     : 
                                                    ((0xbU 
                                                      == idx)
                                                      ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_11
                                                      : 
                                                     ((0xcU 
                                                       == idx)
                                                       ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_12
                                                       : 
                                                      ((0xdU 
                                                        == idx)
                                                        ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_13
                                                        : 
                                                       ((0xeU 
                                                         == idx)
                                                         ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_14
                                                         : vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_15)))))))
                              : (((((((((0x10U == idx) 
                                        | (0x11U == idx)) 
                                       | (0x12U == idx)) 
                                      | (0x13U == idx)) 
                                     | (0x14U == idx)) 
                                    | (0x15U == idx)) 
                                   | (0x16U == idx)) 
                                  | (0x17U == idx))
                                  ? ((0x10U == idx)
                                      ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_16
                                      : ((0x11U == idx)
                                          ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_17
                                          : ((0x12U 
                                              == idx)
                                              ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_18
                                              : ((0x13U 
                                                  == idx)
                                                  ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_19
                                                  : 
                                                 ((0x14U 
                                                   == idx)
                                                   ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_20
                                                   : 
                                                  ((0x15U 
                                                    == idx)
                                                    ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_21
                                                    : 
                                                   ((0x16U 
                                                     == idx)
                                                     ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_22
                                                     : vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_23)))))))
                                  : (((((((((0x18U 
                                             == idx) 
                                            | (0x19U 
                                               == idx)) 
                                           | (0x1aU 
                                              == idx)) 
                                          | (0x1bU 
                                             == idx)) 
                                         | (0x1cU == idx)) 
                                        | (0x1dU == idx)) 
                                       | (0x1eU == idx)) 
                                      | (0x1fU == idx))
                                      ? ((0x18U == idx)
                                          ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_24
                                          : ((0x19U 
                                              == idx)
                                              ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_25
                                              : ((0x1aU 
                                                  == idx)
                                                  ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_26
                                                  : 
                                                 ((0x1bU 
                                                   == idx)
                                                   ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_27
                                                   : 
                                                  ((0x1cU 
                                                    == idx)
                                                    ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_28
                                                    : 
                                                   ((0x1dU 
                                                     == idx)
                                                     ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_29
                                                     : 
                                                    ((0x1eU 
                                                      == idx)
                                                      ? vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_30
                                                      : vlSymsp->TOP.top__DOT__npc_cpu__DOT__regfile__DOT__regs_31)))))))
                                      : 0U))));
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_hit_count_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_hit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_hit_count_TOP\n"); );
    // Init
    // Body
    get_hit_count__Vfuncrtn = vlSymsp->TOP.top__DOT__npc_cpu__DOT__icache1__DOT__hit_count;
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_miss_count_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_miss_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_miss_count_TOP\n"); );
    // Init
    // Body
    get_miss_count__Vfuncrtn = vlSymsp->TOP.top__DOT__npc_cpu__DOT__icache1__DOT__miss_count;
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_dcache_hit_count_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_dcache_hit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_dcache_hit_count_TOP\n"); );
    // Init
    // Body
    get_dcache_hit_count__Vfuncrtn = vlSymsp->TOP.top__DOT__npc_cpu__DOT__dcache1__DOT__hit_count;
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_dcache_miss_count_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_dcache_miss_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_dcache_miss_count_TOP\n"); );
    // Init
    // Body
    get_dcache_miss_count__Vfuncrtn = vlSymsp->TOP.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_count;
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_i_cnt_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_i_cnt__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_i_cnt_TOP\n"); );
    // Init
    // Body
    get_i_cnt__Vfuncrtn = vlSymsp->TOP.top__DOT__npc_cpu__DOT__ifu2__DOT__i_cnt;
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_d_cnt_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_d_cnt__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_d_cnt_TOP\n"); );
    // Init
    // Body
    get_d_cnt__Vfuncrtn = vlSymsp->TOP.top__DOT__npc_cpu__DOT__mem2__DOT__total_mem_cycles;
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_stall_cnt_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_stall_cnt__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_stall_cnt_TOP\n"); );
    // Init
    // Body
    get_stall_cnt__Vfuncrtn = vlSymsp->TOP.top__DOT__npc_cpu__DOT__stall_cnt;
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_flush_cnt_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_flush_cnt__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_flush_cnt_TOP\n"); );
    // Init
    // Body
    get_flush_cnt__Vfuncrtn = vlSymsp->TOP.top__DOT__npc_cpu__DOT__flush_cnt;
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_bp_total_count_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_bp_total_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_bp_total_count_TOP\n"); );
    // Init
    // Body
    get_bp_total_count__Vfuncrtn = vlSymsp->TOP.top__DOT__npc_cpu__DOT__exu__DOT__bp_total_count_reg;
}

void Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_bp_hit_count_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &get_bp_hit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__difftest_dpi__DOT__get_bp_hit_count_TOP\n"); );
    // Init
    // Body
    get_bp_hit_count__Vfuncrtn = vlSymsp->TOP.top__DOT__npc_cpu__DOT__exu__DOT__bp_hit_count_reg;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clock) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.io_halt) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__io_halt__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__io_halt__0 = vlSelfRef.io_halt;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
