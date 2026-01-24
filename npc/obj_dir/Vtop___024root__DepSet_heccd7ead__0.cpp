// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__ebreak_box__DOT__ebreak_TOP();

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.top__DOT____Vcellinp__ebreak_box__is_ebreak) {
        Vtop___024root____Vdpiimwrap_top__DOT__ebreak_box__DOT__ebreak_TOP();
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__DSRAM__DOT__mem_blackbox__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);
void Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pmem_read_inst_TOP(IData/*31:0*/ pc, IData/*31:0*/ &pmem_read_inst__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__DSRAM__DOT__mem_blackbox__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pmem_read_inst__2__Vfuncout;
    __Vfunc_top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pmem_read_inst__2__Vfuncout = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__ifu__DOT__pc_reg;
    __Vdly__top__DOT__cpu__DOT__ifu__DOT__pc_reg = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__ifu__DOT__inst_reg;
    __Vdly__top__DOT__cpu__DOT__ifu__DOT__inst_reg = 0;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__ifu__DOT__state;
    __Vdly__top__DOT__cpu__DOT__ifu__DOT__state = 0;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__ifu__DOT__out_valid;
    __Vdly__top__DOT__cpu__DOT__ifu__DOT__out_valid = 0;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__exu__DOT__state;
    __Vdly__top__DOT__cpu__DOT__exu__DOT__state = 0;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__exu__DOT__out_valid;
    __Vdly__top__DOT__cpu__DOT__exu__DOT__out_valid = 0;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__axi_ifu_master__DOT__pending;
    __Vdly__top__DOT__cpu__DOT__axi_ifu_master__DOT__pending = 0;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending;
    __Vdly__top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_r;
    __Vdly__top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_r = 0;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_valid_r;
    __Vdly__top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_valid_r = 0;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__ISRAM__DOT___imem_inst_valid;
    __Vdly__top__DOT__cpu__DOT__ISRAM__DOT___imem_inst_valid = 0;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__axi_arbiter__DOT__busy;
    __Vdly__top__DOT__cpu__DOT__axi_arbiter__DOT__busy = 0;
    CData/*0:0*/ __Vdly__top__DOT__cpu__DOT__axi_arbiter__DOT__is_write;
    __Vdly__top__DOT__cpu__DOT__axi_arbiter__DOT__is_write = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__csr__DOT__mstatus;
    __Vdly__top__DOT__cpu__DOT__csr__DOT__mstatus = 0;
    // Body
    __Vdly__top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_r 
        = vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_r;
    __Vdly__top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_valid_r 
        = vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_valid_r;
    __Vdly__top__DOT__cpu__DOT__ISRAM__DOT___imem_inst_valid 
        = vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___imem_inst_valid;
    __Vdly__top__DOT__cpu__DOT__exu__DOT__state = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__state;
    __Vdly__top__DOT__cpu__DOT__csr__DOT__mstatus = vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus;
    __Vdly__top__DOT__cpu__DOT__exu__DOT__out_valid 
        = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__out_valid;
    __Vdly__top__DOT__cpu__DOT__axi_arbiter__DOT__is_write 
        = vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__is_write;
    __Vdly__top__DOT__cpu__DOT__axi_arbiter__DOT__busy 
        = vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy;
    __Vdly__top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending 
        = vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending;
    __Vdly__top__DOT__cpu__DOT__axi_ifu_master__DOT__pending 
        = vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__pending;
    if ((IData)((((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)) 
                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0)) 
                 & ((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0) 
                    | (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__ar_fire))))) {
        Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__DSRAM__DOT__mem_blackbox__DOT__pmem_write_TOP(
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0)
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                                                                 ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result
                                                                                 : 0U)))
                                                                                 : 0U), 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0)
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
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
                                                                                 : 0U), 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0)
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
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
                                                                                 : 0U));
    }
    __Vdly__top__DOT__cpu__DOT__ifu__DOT__pc_reg = vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc_reg;
    __Vdly__top__DOT__cpu__DOT__ifu__DOT__inst_reg 
        = vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__inst_reg;
    __Vdly__top__DOT__cpu__DOT__ifu__DOT__out_valid 
        = vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__out_valid;
    __Vdly__top__DOT__cpu__DOT__ifu__DOT__state = vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__state;
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT__state = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & ((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__state)
                                                     ? 
                                                    (~ 
                                                     ((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__state) 
                                                      & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__state))))
                                                     : (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___GEN_1))));
    vlSelfRef.top__DOT__cpu__DOT__busy = ((~ (IData)(vlSelfRef.reset)) 
                                          & ((2U != (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state)) 
                                             & (((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_in_ready) 
                                                 & (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__out_valid)) 
                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__busy))));
    vlSelfRef.top__DOT__cpu__DOT__mem__DOT__out_valid 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((((0U 
                                                       == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state)) 
                                                      | (1U 
                                                         == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))) 
                                                     | (2U 
                                                        == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))) 
                                                    | (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT___GEN_2))) 
                                                   & ((3U 
                                                       == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state)) 
                                                      | (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__out_valid))));
    if (vlSelfRef.reset) {
        __Vdly__top__DOT__cpu__DOT__csr__DOT__mstatus = 0U;
        __Vdly__top__DOT__cpu__DOT__exu__DOT__state = 0U;
        __Vdly__top__DOT__cpu__DOT__exu__DOT__out_valid = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__state 
            = __Vdly__top__DOT__cpu__DOT__exu__DOT__state;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__out_valid 
            = __Vdly__top__DOT__cpu__DOT__exu__DOT__out_valid;
        __Vdly__top__DOT__cpu__DOT__axi_ifu_master__DOT__pending = 0U;
        __Vdly__top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending = 0U;
        vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending 
            = __Vdly__top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending;
        vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__pending 
            = __Vdly__top__DOT__cpu__DOT__axi_ifu_master__DOT__pending;
        __Vdly__top__DOT__cpu__DOT__ifu__DOT__pc_reg = 0U;
        __Vdly__top__DOT__cpu__DOT__ifu__DOT__inst_reg = 0U;
        __Vdly__top__DOT__cpu__DOT__ifu__DOT__state = 0U;
        __Vdly__top__DOT__cpu__DOT__ifu__DOT__out_valid = 0U;
    } else {
        if ((1U & (((((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wen)) 
                      | (0x305U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_waddr))) 
                     | (0x341U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_waddr))) 
                    | (0x342U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_waddr))) 
                   | (0x300U != (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_waddr))))) {
            if ((0x30200073U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) {
                __Vdly__top__DOT__cpu__DOT__csr__DOT__mstatus 
                    = (0x80U | ((0xffffff00U & vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus) 
                                | ((0x70U & vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus) 
                                   | ((8U & (vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus 
                                             >> 4U)) 
                                      | (7U & vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus)))));
            }
        } else {
            __Vdly__top__DOT__cpu__DOT__csr__DOT__mstatus 
                = vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wdata;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__state) {
            __Vdly__top__DOT__cpu__DOT__exu__DOT__state 
                = (1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__state) 
                            & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT___GEN_0))));
            __Vdly__top__DOT__cpu__DOT__exu__DOT__out_valid 
                = (1U & ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__state)
                          ? (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT___GEN_0))
                          : (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__out_valid)));
        } else {
            __Vdly__top__DOT__cpu__DOT__exu__DOT__state 
                = (1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT___GEN));
            __Vdly__top__DOT__cpu__DOT__exu__DOT__out_valid = 0U;
        }
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__state 
            = __Vdly__top__DOT__cpu__DOT__exu__DOT__state;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__out_valid 
            = __Vdly__top__DOT__cpu__DOT__exu__DOT__out_valid;
        __Vdly__top__DOT__cpu__DOT__axi_ifu_master__DOT__pending 
            = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__r_fire)) 
               & (((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__io_I_bus_ARVALID_0) 
                   & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_i_master_ARREADY)) 
                  | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__pending)));
        __Vdly__top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending 
            = (((IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__io_flush_0) 
                & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__pending)) 
               | ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__r_fire)) 
                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending)));
        vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending 
            = __Vdly__top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending;
        vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__pending 
            = __Vdly__top__DOT__cpu__DOT__axi_ifu_master__DOT__pending;
        if (((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__state)) 
             & (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___GEN))) {
            __Vdly__top__DOT__cpu__DOT__ifu__DOT__pc_reg 
                = vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__state) 
             & (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___GEN_0))) {
            __Vdly__top__DOT__cpu__DOT__ifu__DOT__inst_reg 
                = ((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                          | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_2)))
                    ? 0U : vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RDATA);
        }
        __Vdly__top__DOT__cpu__DOT__ifu__DOT__state 
            = (1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__io_flush_0)) 
                     & ((IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__state)
                         ? (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__state) 
                               & (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___GEN_1)))
                         : (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___GEN))));
        __Vdly__top__DOT__cpu__DOT__ifu__DOT__out_valid 
            = ((~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__io_flush_0) 
                   | (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___GEN_1))) 
               & ((IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__state)
                   ? ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___GEN_1)) 
                      & ((IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___GEN_0) 
                         | (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__out_valid)))
                   : (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__out_valid)));
    }
    vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__out_valid 
        = __Vdly__top__DOT__cpu__DOT__ifu__DOT__out_valid;
    vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__state = __Vdly__top__DOT__cpu__DOT__ifu__DOT__state;
    vlSelfRef.top__DOT__cpu__DOT___idu_io_in_ready 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__state)) 
                 & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__busy))));
    vlSelfRef.top__DOT__cpu__DOT___ifu_io_inst_resp_ready 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__out_valid)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__state));
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__rdata_reg = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_csrrs = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_csrrw = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__pc = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_load = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__mem_inst = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_en = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_0 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_31 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_30 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_29 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_28 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_11 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_10 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_6 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_9 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_4 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_7 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_2 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_5 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_3 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_1 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_8 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_12 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_13 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_14 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_15 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_16 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_17 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_18 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_19 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_20 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_21 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_22 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_23 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_24 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_25 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_26 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_27 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__alu_result = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs1_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_beq = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bne = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_blt = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bltu = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bge = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bgeu = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_jalr = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_jal = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_rdata = 0U;
        vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__mem_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state = 0U;
        __Vdly__top__DOT__cpu__DOT__axi_arbiter__DOT__busy = 0U;
        vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__using_ifu = 0U;
        __Vdly__top__DOT__cpu__DOT__axi_arbiter__DOT__is_write = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc = 0x80000000U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_csrrs = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_csrrw = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__pc = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_load = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT___GEN)))) {
            vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__rdata_reg 
                = vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT___mem_blackbox_rdata;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__exu__DOT___GEN) {
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs1_data 
                = vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_beq 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_beq;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bne 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bne;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_blt 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_blt;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bltu 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bltu;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bge 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bge;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bgeu 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bgeu;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__wb__DOT___GEN) {
            vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_csrrs 
                = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_csrrs;
            vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_csrrw 
                = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_csrrw;
            vlSelfRef.top__DOT__cpu__DOT__wb__DOT__pc 
                = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__pc;
            vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_load 
                = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_load;
            vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_en 
                = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rd_en;
            vlSelfRef.top__DOT__cpu__DOT__wb__DOT__alu_result 
                = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result;
            vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_jalr 
                = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_jalr;
            vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_jal 
                = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_jal;
            vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_rdata 
                = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_rdata;
            vlSelfRef.top__DOT__cpu__DOT__wb__DOT__mem_data 
                = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__mem_data;
        }
        if ((1U & (~ ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state)) 
                      | (~ ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state)) 
                            & (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___imem_inst_valid))))))) {
            vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__mem_inst 
                = vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___imem_inst;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (~ (IData)((0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_0 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x1fU == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_31 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x1eU == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_30 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x1dU == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_29 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x1cU == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_28 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xbU == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_11 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xaU == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_10 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (6U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_6 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (9U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_9 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (4U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_4 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (7U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_7 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_2 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (5U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_5 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (3U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_3 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_1 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (8U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_8 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xcU == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_12 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xdU == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_13 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xeU == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_14 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0xfU == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_15 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x10U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_16 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x11U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_17 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x12U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_18 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x13U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_19 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x14U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_20 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x15U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_21 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x16U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_22 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x17U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_23 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x18U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_24 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x19U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_25 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x1aU == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_26 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN) 
             & (0x1bU == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)))) {
            vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_27 
                = vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT___GEN) {
            if (vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT___GEN_0) {
                if (vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_mem_req_ready_0) {
                    vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state = 2U;
                }
            } else if (((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__io_mem_req_valid_0) 
                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_mem_req_ready_0))) {
                vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state = 1U;
            }
        } else if (((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT___GEN_2)
                     ? ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_m_master_RVALID) 
                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_M_bus_RREADY_0))
                     : (((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT___GEN_3) 
                         & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_m_master_BVALID)) 
                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_M_bus_BREADY_0)))) {
            vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state = 0U;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__idle) {
            if (vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0) {
                vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state = 2U;
            } else if (vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__ar_fire) {
                vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state = 1U;
            }
        } else if (((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT___GEN_0)
                     ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_RVALID_0) 
                        & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)) 
                           & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_RREADY_0)))
                     : (((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT___GEN_1) 
                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_BVALID_0)) 
                        & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)) 
                           & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_BREADY_0))))) {
            vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state = 0U;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__exu__DOT___GEN_0) {
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs2_data;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sb;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sh;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sw;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_csrrs 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_csrrs;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_csrrw 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_csrrw;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__pc 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__pc;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_load 
                = (((((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lw) 
                      | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lb)) 
                     | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lbu)) 
                    | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lh)) 
                   | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lhu));
        }
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state 
            = vlSelfRef.top__DOT__cpu__DOT__wb__DOT__casez_tmp;
        __Vdly__top__DOT__cpu__DOT__axi_arbiter__DOT__busy 
            = ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy)
                ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__is_write)
                    ? ((~ ((IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_BVALID) 
                           & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_BREADY_0))) 
                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy))
                    : ((~ ((IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RVALID) 
                           & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_RREADY_0))) 
                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy)))
                : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                    ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_4) 
                       | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy))
                    : ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_5) 
                       | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy))));
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy) 
                      | (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                             ? (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_4)
                             : (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_5))))))) {
            vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__using_ifu 
                = vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu;
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy)))) {
            __Vdly__top__DOT__cpu__DOT__axi_arbiter__DOT__is_write 
                = ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                    ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_4) 
                       | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__is_write))
                    : ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_5)) 
                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__is_write)));
        }
        if (vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__io_flush_0) {
            vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc 
                = ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_jal)
                    ? vlSelfRef.top__DOT__cpu__DOT___exu_io_branch_bits_pc_branch
                    : ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_jalr)
                        ? (0xfffffffeU & (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a 
                                          + vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b))
                        : ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_branch_bits_is_branch_taken)
                            ? vlSelfRef.top__DOT__cpu__DOT___exu_io_branch_bits_pc_branch
                            : (((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_ecall) 
                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_mret))
                                ? vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_rdata
                                : vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___pc_T))));
        } else if (vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___GEN_1) {
            vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc 
                = vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___pc_T;
        }
    }
    if (vlSelfRef.reset) {
        __Vdly__top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_r = 0U;
        __Vdly__top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_valid_r = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___imem_inst = 0U;
        __Vdly__top__DOT__cpu__DOT__ISRAM__DOT___imem_inst_valid = 0U;
    } else {
        if (vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_valid_r) {
            Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pmem_read_inst_TOP(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_r, __Vfunc_top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pmem_read_inst__2__Vfuncout);
            vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___imem_inst 
                = __Vfunc_top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pmem_read_inst__2__Vfuncout;
            __Vdly__top__DOT__cpu__DOT__ISRAM__DOT___imem_inst_valid = 1U;
        } else {
            __Vdly__top__DOT__cpu__DOT__ISRAM__DOT___imem_inst_valid = 0U;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___GEN) {
            __Vdly__top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_r 
                = vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_i_ARADDR;
            __Vdly__top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_valid_r 
                = (0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state));
        } else {
            __Vdly__top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_r 
                = vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__pc_lat;
            __Vdly__top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_valid_r = 0U;
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rd_en = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_jalr = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_jal = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_rdata = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__mem_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs2_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sb = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sh = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sw = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_ecall = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_mret = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_csrrs = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_csrrw = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__pc = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__pc_lat = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rd_en = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rd_addr = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_jalr = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_jal = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_rdata = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lw = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lbu = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lb = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lhu = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lh = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rd_addr = 0U;
        vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mepc = 0U;
        vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mtvec = 0U;
        vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mcause = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lw = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lbu = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lb = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lhu = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lh = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_waddr = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wen = 0U;
        vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wdata = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_waddr = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_wen = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_wdata = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_waddr = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_wen = 0U;
        vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_wdata = 0U;
        vlSelfRef.top__DOT__cpu__DOT__idu__DOT__pc = 0U;
        vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst = 0U;
    } else {
        if ((1U & (~ (((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state)) 
                       | (1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))) 
                      | (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT___GEN_1)))))) {
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__mem_data 
                = ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lw)
                    ? vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_mem_resp_bits_rdata
                    : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lbu)
                        ? (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__casez_tmp)
                        : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lb)
                            ? (((- (IData)((1U & ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__casez_tmp) 
                                                  >> 7U)))) 
                                << 8U) | (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__casez_tmp))
                            : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lhu)
                                ? (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__sel_half)
                                : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lh)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__sel_half) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__sel_half))
                                    : 0U)))));
        }
        if (vlSelfRef.top__DOT__cpu__DOT__wb__DOT___GEN) {
            vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr 
                = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rd_addr;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__exu__DOT___GEN_0) {
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rd_en 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rd_en;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_jalr 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_jalr;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_jal 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_jal;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_rdata 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_rdata;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rd_addr 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rd_addr;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lw 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lw;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lbu 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lbu;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lb 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lb;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lhu 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lhu;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lh 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lh;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___GEN) {
            vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__pc_lat 
                = vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_i_ARADDR;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__io_I_bus_ARREADY_0) {
            if (vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___GEN) {
                vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state = 1U;
            }
        } else if (vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___GEN_0) {
            if (vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___imem_inst_valid) {
                vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state = 2U;
            }
        } else if ((((IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___GEN_1) 
                     & ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_is_inst) 
                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_RREADY_0))) 
                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__io_I_bus_RVALID_0))) {
            vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state = 0U;
        }
        vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state 
            = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__casez_tmp_0;
        if (vlSelfRef.top__DOT__cpu__DOT__exu__DOT___GEN) {
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs2_data 
                = vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sb 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sb;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sh 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sh;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sw 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sw;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a 
                = (((0x17U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                    | (0x6fU == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)))
                    ? vlSelfRef.top__DOT__cpu__DOT__idu__DOT__pc
                    : ((0x37U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))
                        ? 0U : vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data));
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_ecall 
                = (0x73U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst);
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_mret 
                = (0x30200073U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst);
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_csrrs 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrs;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_csrrw 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrw;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__pc 
                = vlSelfRef.top__DOT__cpu__DOT__idu__DOT__pc;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rd_en 
                = ((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_load) 
                   | ((0x37U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                      | ((0x17U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                         | ((0x33U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                            | ((0x6fU == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                               | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_jalr) 
                                  | ((0x13U == (0x7fU 
                                                & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                                     | (((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrw) 
                                         | (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrs)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                                     >> 7U)))))))))));
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_jalr 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_jalr;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_jal 
                = (0x6fU == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst));
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_rdata 
                = ((0x300U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                    ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus
                    : ((0x342U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                        ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mcause
                        : ((0x341U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                            ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mepc
                            : ((0x305U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                                ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mtvec
                                : 0U))));
        }
        if ((1U & (~ (((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wen)) 
                       | (0x305U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_waddr))) 
                      | (0x341U != (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_waddr)))))) {
            vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mepc 
                = vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wdata;
        }
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wen) 
             & (0x305U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_waddr)))) {
            vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mtvec 
                = vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wdata;
        }
        if ((1U & ((((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wen)) 
                     | (0x305U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_waddr))) 
                    | (0x341U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_waddr))) 
                   | (0x342U != (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_waddr))))) {
            if ((0x73U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) {
                vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mcause = 0xbU;
            }
        } else {
            vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mcause 
                = vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wdata;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__wb__DOT___GEN) {
            vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_waddr 
                = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_waddr;
            vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wen 
                = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_wen;
            vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wdata 
                = vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_wdata;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__exu__DOT___GEN_0) {
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_waddr 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_waddr;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_wen 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_wen;
            vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_wdata 
                = vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_wdata;
        }
        if (vlSelfRef.top__DOT__cpu__DOT__exu__DOT___GEN) {
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rd_addr 
                = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                            >> 7U));
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lw 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lw;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lbu 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lbu;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lb 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lb;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lhu 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lhu;
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lh 
                = vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lh;
            if ((0x73U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) {
                vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_waddr = 0x341U;
                vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_wdata 
                    = vlSelfRef.top__DOT__cpu__DOT__idu__DOT__pc;
            } else if ((0x30200073U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) {
                vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_waddr = 0x342U;
                vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_wdata = 0U;
            } else {
                vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_waddr 
                    = (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                       >> 0x14U);
                vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_wdata 
                    = vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data;
            }
            vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_wen 
                = ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrw) 
                   | (0x73U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst));
        }
        if (vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___GEN_1) {
            vlSelfRef.top__DOT__cpu__DOT__idu__DOT__pc 
                = vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc_reg;
            vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                = vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__inst_reg;
        }
    }
    vlSelfRef.io_gpr_31 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_31;
    vlSelfRef.io_gpr_30 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_30;
    vlSelfRef.io_gpr_29 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_29;
    vlSelfRef.io_gpr_28 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_28;
    vlSelfRef.io_gpr_11 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_11;
    vlSelfRef.io_gpr_10 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_10;
    vlSelfRef.io_gpr_6 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_6;
    vlSelfRef.io_gpr_9 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_9;
    vlSelfRef.io_gpr_4 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_4;
    vlSelfRef.io_gpr_7 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_7;
    vlSelfRef.io_gpr_2 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_2;
    vlSelfRef.io_gpr_5 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_5;
    vlSelfRef.io_gpr_3 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_3;
    vlSelfRef.io_gpr_1 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_1;
    vlSelfRef.io_gpr_8 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_8;
    vlSelfRef.io_gpr_12 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_12;
    vlSelfRef.io_gpr_13 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_13;
    vlSelfRef.io_gpr_14 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_14;
    vlSelfRef.io_gpr_15 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_15;
    vlSelfRef.io_gpr_16 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_16;
    vlSelfRef.io_gpr_17 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_17;
    vlSelfRef.io_gpr_18 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_18;
    vlSelfRef.io_gpr_19 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_19;
    vlSelfRef.io_gpr_20 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_20;
    vlSelfRef.io_gpr_21 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_21;
    vlSelfRef.io_gpr_22 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_22;
    vlSelfRef.io_gpr_23 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_23;
    vlSelfRef.io_gpr_24 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_24;
    vlSelfRef.io_gpr_25 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_25;
    vlSelfRef.io_gpr_26 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_26;
    vlSelfRef.io_gpr_27 = vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_27;
    vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT___GEN 
        = (0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state));
    vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT___GEN_2 
        = (1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state));
    vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT___GEN_3 
        = (2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state));
    vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_M_bus_BREADY_0 
        = ((~ ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
               | (1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)))) 
           & (2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_2_0 = ((1U 
                                                 != (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
                                                | (0U 
                                                   == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)));
    vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data = 
        (((IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_csrrs) 
          | (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_csrrw))
          ? vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_rdata
          : ((IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_load)
              ? vlSelfRef.top__DOT__cpu__DOT__wb__DOT__mem_data
              : (((IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_jal) 
                  | (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_jalr))
                  ? ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__wb__DOT__pc)
                  : vlSelfRef.top__DOT__cpu__DOT__wb__DOT__alu_result)));
    vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__idle 
        = (0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state));
    vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state));
    vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT___GEN_1 
        = (2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state));
    vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_BVALID_0 
        = ((~ ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)) 
               | (1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)))) 
           & (2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)));
    vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_RVALID_0 
        = ((0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)) 
           & (1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)));
    vlSelfRef.top__DOT__cpu__DOT___axi_ifu_master_io_I_bus_RREADY 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___ifu_io_inst_resp_ready) 
           | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending));
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__is_write 
        = __Vdly__top__DOT__cpu__DOT__axi_arbiter__DOT__is_write;
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy 
        = __Vdly__top__DOT__cpu__DOT__axi_arbiter__DOT__busy;
    vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_r 
        = __Vdly__top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_r;
    vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_valid_r 
        = __Vdly__top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_valid_r;
    vlSelfRef.io_difftest_valid = (2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state));
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_7 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy) 
           & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__using_ifu)) 
              & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__is_write)));
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_2 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy)) 
                 | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__is_write)));
    vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___pc_T = 
        ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc);
    vlSelfRef.top__DOT__cpu__DOT__regfile__DOT___GEN 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_en) 
           & (0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr)));
    vlSelfRef.top__DOT__cpu__DOT___exu_io_branch_bits_is_branch_taken 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_beq)
            ? (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs1_data 
               == vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs2_data)
            : ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bne)
                ? (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs1_data 
                   != vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs2_data)
                : ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_blt)
                    ? VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs1_data, vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs2_data)
                    : ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bltu)
                        ? (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs1_data 
                           < vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs2_data)
                        : ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bge)
                            ? VL_GTES_III(32, vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs1_data, vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs2_data)
                            : ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bgeu) 
                               & (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs1_data 
                                  >= vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs2_data)))))));
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_BREADY_0 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_7) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_M_bus_BREADY_0));
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_3 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_2) 
           | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__using_ifu));
    vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___imem_inst_valid 
        = __Vdly__top__DOT__cpu__DOT__ISRAM__DOT___imem_inst_valid;
    vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus 
        = __Vdly__top__DOT__cpu__DOT__csr__DOT__mstatus;
    vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp 
        = ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
            ? ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
                        ? 0U : (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a 
                                < vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b))
                    : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
                        ? VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b)
                        : VL_MODDIV_III(32, vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b)))
                : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
                        ? VL_MODDIVS_III(32, vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b)
                        : VL_DIV_III(32, vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b))
                    : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
                        ? (IData)((0x1ffffffffULL & 
                                   VL_DIVS_QQQ(33, 
                                               (((QData)((IData)(
                                                                 (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                                  >> 0x1fU))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a))), 
                                               (((QData)((IData)(
                                                                 (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b 
                                                                  >> 0x1fU))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b))))))
                        : (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a 
                           * vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b))))
            : ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a, 
                                         (0x1fU & vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b))
                        : (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a 
                           >> (0x1fU & vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b)))
                    : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
                        ? (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a 
                           << (0x1fU & vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b))
                        : (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a 
                           ^ vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b)))
                : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
                        ? (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a 
                           | vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b)
                        : (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a 
                           & vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b))
                    : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op))
                        ? (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a 
                           - vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b)
                        : (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a 
                           + vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b)))));
    vlSelfRef.top__DOT__cpu__DOT___exu_io_branch_bits_pc_branch 
        = (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b 
           + vlSelfRef.top__DOT__cpu__DOT__exu__DOT__pc);
    vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__io_I_bus_ARREADY_0 
        = (0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state));
    vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state));
    vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___GEN_1 
        = (2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state));
    vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__io_I_bus_RVALID_0 
        = ((~ ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state)) 
               | (1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state)))) 
           & (2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state)));
    vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__io_flush_0 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__out_valid) 
           & ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_jal) 
              | ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_branch_bits_is_branch_taken) 
                 | ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_jalr) 
                    | ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_ecall) 
                       | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_mret))))));
    vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_M_bus_RREADY_0 
        = ((0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
           & ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
              & (2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))));
    vlSelfRef.top__DOT__cpu__DOT__mem__DOT__io_mem_req_valid_0 
        = ((0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state)) 
           & (1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state)));
    vlSelfRef.top__DOT__cpu__DOT___ifu_io_inst_req_valid 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__state)) 
                 & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__io_flush_0))));
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_RREADY_0 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_2)) 
           & ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__using_ifu)
               ? (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_ifu_master_io_I_bus_RREADY)
               : (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_M_bus_RREADY_0)));
    vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT___GEN_0 
        = (((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw) 
            | ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb) 
               | (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh))) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__io_mem_req_valid_0));
    vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__io_I_bus_ARVALID_0 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__pending)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT___ifu_io_inst_req_valid));
    vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_ARVALID 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
           & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT___GEN_0)) 
              & (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__io_mem_req_valid_0)));
    vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT___GEN_0));
    vlSelfRef.top__DOT__cpu__DOT__wb__DOT___GEN = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state)) 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__out_valid));
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_1 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__io_I_bus_ARVALID_0) 
           | (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_ARVALID));
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID));
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu 
        = (1U & ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__io_I_bus_ARVALID_0) 
                 | ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_ARVALID)) 
                    & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)))));
    vlSelfRef.top__DOT__cpu__DOT__wb__DOT__casez_tmp 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))
            ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT___GEN)
                ? 1U : (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))
            : ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))
                ? 2U : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))
                         ? 0U : (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))));
    vlSelfRef.top__DOT__cpu__DOT__mem__DOT___GEN_2 
        = ((3U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT___GEN));
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_6 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy)) 
           & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)) 
              & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_1)));
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__awvalid 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID));
    vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_is_inst 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy)
            ? (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__using_ifu)
            : (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu));
    vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARADDR 
        = ((1U & ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy) 
                  | ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_1)) 
                     | (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID))))
            ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)
                     ? vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc
                     : ((1U & ((0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
                               | ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__io_mem_req_valid_0)) 
                                  | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT___GEN_0))))
                         ? 0U : vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result)));
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__arvalid 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)
            ? (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__io_I_bus_ARVALID_0)
            : (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_ARVALID));
    vlSelfRef.top__DOT__cpu__DOT__exu__DOT___GEN_0 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__out_valid));
    vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARVALID 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_6) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__arvalid));
    vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___GEN 
        = (((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_is_inst) 
            & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARVALID)) 
           & (0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state)));
    vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT__addr 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARVALID)
            ? vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARADDR
            : ((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                      | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                         ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result
                         : 0U)));
    vlSelfRef.top__DOT__cpu__DOT__exu__DOT___GEN = 
        ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__state)) 
         & (IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__state));
    vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT____VdfgRegularize_hdf3ce10e_0_1 
        = ((0xa00003f8U != vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT__addr) 
           & (0xa0000200U != vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT__addr));
    vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN_0 
        = ((0xa00003f8U == vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT__addr) 
           | (0xa0000200U == vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT__addr));
    vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT____VdfgRegularize_hdf3ce10e_0_2 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN_0)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT____VdfgRegularize_hdf3ce10e_0_1));
    vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_is_inst) 
           | (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN_0));
    vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc_reg 
        = __Vdly__top__DOT__cpu__DOT__ifu__DOT__pc_reg;
    vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___GEN_1 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_in_ready) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__out_valid));
    vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__inst_reg 
        = __Vdly__top__DOT__cpu__DOT__ifu__DOT__inst_reg;
    if (vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_is_inst) {
        vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_i_ARADDR 
            = vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARADDR;
        vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RDATA 
            = vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__mem_inst;
    } else {
        vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_i_ARADDR = 0U;
        vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RDATA 
            = ((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT____VdfgRegularize_hdf3ce10e_0_1)) 
                      | (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN_0)))
                ? 0U : vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__rdata_reg);
    }
    vlSelfRef.top__DOT__cpu__DOT__mem__DOT__sel_half 
        = (0xffffU & ((2U & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result)
                       ? ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0)
                           ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_3)
                                    ? 0U : (vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RDATA 
                                            >> 0x10U)))
                       : ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0)
                           ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_3)
                                    ? 0U : vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RDATA))));
    vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_mem_resp_bits_rdata 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0)
            ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_3)
                     ? 0U : vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RDATA));
    vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT____VdfgRegularize_hdf3ce10e_0_3 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT____VdfgRegularize_hdf3ce10e_0_1));
    vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_m_AWVALID 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)) 
           & ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN) 
              & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__awvalid)));
    vlSelfRef.io_pc = vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc_reg;
    vlSelfRef.io_inst = vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__inst_reg;
    vlSelfRef.top__DOT____Vcellinp__ebreak_box__is_ebreak 
        = (0x100073U == vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__inst_reg);
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr 
        = ((0x73U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
            ? 0x305U : ((0x30200073U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                         ? 0x341U : (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                     >> 0x14U)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_10 
        = (IData)((0x33U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_11 
        = (IData)((0x7033U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_12 
        = ((0x33U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
           | (0x13U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_13 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_jalr 
        = (IData)((0x67U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT__imm_i = 
        (((- (IData)((vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                      >> 0x1fU))) << 0xcU) | (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                              >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sw 
        = (IData)((0x2023U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sb 
        = (IData)((0x23U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sh 
        = (IData)((0x1023U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lw 
        = (IData)((0x2003U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lb 
        = (IData)((3U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lh 
        = (IData)((0x1003U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_beq 
        = (IData)((0x63U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bne 
        = (IData)((0x1063U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_blt 
        = (IData)((0x4063U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bge 
        = (IData)((0x5063U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_slli 
        = (IData)((0x1013U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp 
        = ((0x80000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
            ? ((0x40000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                ? ((0x20000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                    ? ((0x10000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_31
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_30)
                        : ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_29
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_28))
                    : ((0x10000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_27
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_26)
                        : ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_25
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_24)))
                : ((0x20000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                    ? ((0x10000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_23
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_22)
                        : ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_21
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_20))
                    : ((0x10000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_19
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_18)
                        : ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_17
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_16))))
            : ((0x40000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                ? ((0x20000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                    ? ((0x10000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_15
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_14)
                        : ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_13
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_12))
                    : ((0x10000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_11
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_10)
                        : ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_9
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_8)))
                : ((0x20000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                    ? ((0x10000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_7
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_6)
                        : ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_5
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_4))
                    : ((0x10000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_3
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_2)
                        : ((0x8000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_1
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_0)))));
    vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp_0 
        = ((0x1000000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
            ? ((0x800000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                ? ((0x400000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                    ? ((0x200000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_31
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_30)
                        : ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_29
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_28))
                    : ((0x200000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_27
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_26)
                        : ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_25
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_24)))
                : ((0x400000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                    ? ((0x200000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_23
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_22)
                        : ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_21
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_20))
                    : ((0x200000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_19
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_18)
                        : ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_17
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_16))))
            : ((0x800000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                ? ((0x400000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                    ? ((0x200000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_15
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_14)
                        : ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_13
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_12))
                    : ((0x200000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_11
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_10)
                        : ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_9
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_8)))
                : ((0x400000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                    ? ((0x200000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_7
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_6)
                        : ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_5
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_4))
                    : ((0x200000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                        ? ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_3
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_2)
                        : ((0x100000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                            ? vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_1
                            : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_0)))));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_5 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    vlSelfRef.top__DOT__cpu__DOT__mem__DOT__casez_tmp 
        = (0xffU & ((0U == (3U & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result))
                     ? vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_mem_resp_bits_rdata
                     : ((1U == (3U & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result))
                         ? (vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_mem_resp_bits_rdata 
                            >> 8U) : ((2U == (3U & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result))
                                       ? (vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_mem_resp_bits_rdata 
                                          >> 0x10U)
                                       : (vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_mem_resp_bits_rdata 
                                          >> 0x18U)))));
    vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RVALID 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_is_inst)
            ? (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__io_I_bus_RVALID_0)
            : ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT____VdfgRegularize_hdf3ce10e_0_2) 
               & (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_RVALID_0)));
    vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_i_master_RVALID 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_2)) 
           & ((IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RVALID) 
              & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__using_ifu)));
    vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_m_master_RVALID 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_3)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RVALID));
    vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_BVALID 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT____VdfgRegularize_hdf3ce10e_0_3) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_BVALID_0));
    vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_m_AWVALID));
    vlSelfRef.top__DOT__cpu__DOT___DSRAM_io_M_bus_ARREADY 
        = ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_m_AWVALID)) 
           & (0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)));
    vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_ARREADY 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_is_inst)
            ? (0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state))
            : ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT____VdfgRegularize_hdf3ce10e_0_2) 
               & (IData)(vlSelfRef.top__DOT__cpu__DOT___DSRAM_io_M_bus_ARREADY)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_store 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sw) 
           | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sb) 
              | (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sh)));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_load 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lw) 
           | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lbu) 
              | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lh) 
                 | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lhu) 
                    | (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lb)))));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_branch 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bne) 
           | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_beq) 
              | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bge) 
                 | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bgeu) 
                    | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_blt) 
                       | (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bltu))))));
    vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data 
        = ((0U == (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                            >> 0xfU))) ? 0U : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp);
    vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data 
        = ((0U == (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                            >> 0x14U))) ? 0U : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp_0);
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srli 
        = ((~ (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
               >> 0x1eU)) & (IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_5));
    vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srai 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_5) 
           & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
              >> 0x1eU));
    vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__r_fire 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_i_master_RVALID) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_ifu_master_io_I_bus_RREADY));
    vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___GEN_0 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___ifu_io_inst_resp_ready) 
           & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending)) 
              & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_i_master_RVALID)));
    vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_m_master_BVALID 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_7) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_BVALID));
    vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_AWREADY 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT____VdfgRegularize_hdf3ce10e_0_3) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0));
    vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__ar_fire 
        = (((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)) 
            & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARVALID)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT___DSRAM_io_M_bus_ARREADY));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op 
        = (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_10) 
            & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
               >> 0x1eU)) ? 1U : (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_11) 
                                   | (IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))))
                                   ? 2U : (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_12) 
                                            & (0x6000U 
                                               == (0x7000U 
                                                   & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)))
                                            ? 3U : 
                                           (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_12) 
                                             & (0x4000U 
                                                == 
                                                (0x7000U 
                                                 & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)))
                                             ? 4U : 
                                            (((IData)(
                                                      (0x1033U 
                                                       == 
                                                       (0x4000707fU 
                                                        & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))) 
                                              | (IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_slli))
                                              ? 5U : 
                                             ((((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_13) 
                                                & (IData)(
                                                          (0U 
                                                           == 
                                                           (0xfe000000U 
                                                            & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)))) 
                                               | (IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srli))
                                               ? 6U
                                               : ((
                                                   ((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_13) 
                                                    & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                                       >> 0x1eU)) 
                                                   | (IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srai))
                                                   ? 7U
                                                   : 
                                                  ((IData)(
                                                           (0x2033U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)))
                                                    ? 0xdU
                                                    : 
                                                   ((IData)(
                                                            (0x3033U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)))
                                                     ? 0xeU
                                                     : 
                                                    ((IData)(
                                                             (0x2013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)))
                                                      ? 0xdU
                                                      : 
                                                     ((IData)(
                                                              (0x3013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)))
                                                       ? 0xeU
                                                       : 
                                                      (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_10) 
                                                        & (1U 
                                                           == 
                                                           (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                                            >> 0x19U)))
                                                        ? 8U
                                                        : 
                                                       ((IData)(
                                                                (0x2004033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)))
                                                         ? 9U
                                                         : 
                                                        (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_13) 
                                                          & (1U 
                                                             == 
                                                             (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                                              >> 0x19U)))
                                                          ? 0xaU
                                                          : 
                                                         ((IData)(
                                                                  (0x2006033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)))
                                                           ? 0xbU
                                                           : 
                                                          (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_1_11) 
                                                            & (1U 
                                                               == 
                                                               (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                                                >> 0x19U)))
                                                            ? 0xcU
                                                            : 0U))))))))))))))));
    vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b 
        = (((0x13U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
            | ((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_load) 
               | ((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_store) 
                  | ((0x6fU == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                     | ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_jalr) 
                        | ((0x17U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                           | ((0x37U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                              | (IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_branch))))))))
            ? (((0x37U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                | (0x17U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)))
                ? (0xfffff000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                : ((0x6fU == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))
                    ? (((- (IData)((vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                    >> 0x1fU))) << 0x14U) 
                       | (((0xff000U & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst) 
                           | (0x800U & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                        >> 9U))) | 
                          (0x7feU & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                     >> 0x14U)))) : 
                   ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_jalr)
                     ? vlSelfRef.top__DOT__cpu__DOT__idu__DOT__imm_i
                     : ((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_store)
                         ? (((- (IData)((vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                         >> 0x1fU))) 
                             << 0xcU) | ((0xfe0U & 
                                          (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                           >> 0x14U)) 
                                         | (0x1fU & 
                                            (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                             >> 7U))))
                         : ((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_branch)
                             ? (((- (IData)((vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                                      >> 7U)))))
                             : (((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_slli) 
                                 | ((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srli) 
                                    | (IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srai)))
                                 ? (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                             >> 0x14U))
                                 : vlSelfRef.top__DOT__cpu__DOT__idu__DOT__imm_i))))))
            : vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data);
    vlSelfRef.top__DOT__cpu__DOT__mem__DOT___GEN_1 
        = ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state)) 
           & ((0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
              & ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state))
                  ? (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_m_master_RVALID)
                  : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
                     & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_m_master_BVALID)))));
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_4 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_AWREADY) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__awvalid));
    vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT___GEN 
        = (1U & ((0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)) 
                 | ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__ar_fire)) 
                    | (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0))));
    vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_5 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_1) 
           & ((IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_ARREADY) 
              & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__arvalid)));
    vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_i_master_ARREADY 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_6) 
           & ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu) 
              & (IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_ARREADY)));
    vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_mem_req_ready_0 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
           & ((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT___GEN_0)
               ? (((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)) 
                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                  & (IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_AWREADY))
               : (((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_6) 
                   & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)) 
                      & (IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_ARREADY))) 
                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__io_mem_req_valid_0))));
    if ((((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)) 
          & ((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0) 
             | (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__ar_fire))) 
         & (~ ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)) 
               & (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0))))) {
        Vtop___024root____Vdpiimwrap_top__DOT__cpu__DOT__DSRAM__DOT__mem_blackbox__DOT__pmem_read_TOP(
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT___GEN)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                                                                 ? 0U
                                                                                 : vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARADDR)), vlSelfRef.__Vfunc_top__DOT__cpu__DOT__DSRAM__DOT__mem_blackbox__DOT__pmem_read__0__Vfuncout);
        vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT___mem_blackbox_rdata 
            = vlSelfRef.__Vfunc_top__DOT__cpu__DOT__DSRAM__DOT__mem_blackbox__DOT__pmem_read__0__Vfuncout;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT___mem_blackbox_rdata = 0U;
    }
    vlSelfRef.top__DOT__cpu__DOT__ifu__DOT___GEN = 
        (((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__pending)) 
          & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_i_master_ARREADY)) 
         & (IData)(vlSelfRef.top__DOT__cpu__DOT___ifu_io_inst_req_valid));
    vlSelfRef.top__DOT__cpu__DOT__mem__DOT__casez_tmp_0 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
            ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT___GEN_0)
                ? (1U | (2U & ((~ ((((((((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lw) 
                                         | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lb)) 
                                        | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lbu)) 
                                       | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lh)) 
                                      | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lhu)) 
                                     | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sw)) 
                                    | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sb)) 
                                   | (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sh))) 
                               << 1U))) : (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
            : ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
                ? (((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_mem_req_ready_0) 
                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__io_mem_req_valid_0))
                    ? (2U | (1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_load))))
                    : (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
                : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
                    ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT___GEN_1)
                        ? 3U : (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
                    : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT___GEN_2)
                        ? 0U : (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state)))));
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

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
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("verilog/top.sv", 2414, "", "NBA region did not converge.");
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
                VL_FATAL_MT("verilog/top.sv", 2414, "", "Active region did not converge.");
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
}
#endif  // VL_DEBUG
