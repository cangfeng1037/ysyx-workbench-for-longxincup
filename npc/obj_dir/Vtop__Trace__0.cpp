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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__cpu__DOT__pc_current),32);
        bufp->chgIData(oldp+1,(((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__pc_current)),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[0]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[1]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[2]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[3]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[4]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[5]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[6]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[7]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[8]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[9]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[10]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[11]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[12]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[13]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[14]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[15]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[16]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[17]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[18]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[19]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[20]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[21]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[22]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[23]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[24]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[25]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[26]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[27]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[28]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[29]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[30]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[31]),32);
    }
    bufp->chgBit(oldp+34,(vlSelfRef.clk));
    bufp->chgBit(oldp+35,(vlSelfRef.rst));
    bufp->chgIData(oldp+36,(vlSelfRef.pc),32);
    bufp->chgIData(oldp+37,(vlSelfRef.inst),32);
    bufp->chgBit(oldp+38,((0x100073U == vlSelfRef.inst)));
    bufp->chgCData(oldp+39,((0x7fU & vlSelfRef.inst)),7);
    bufp->chgCData(oldp+40,((0x1fU & (vlSelfRef.inst 
                                      >> 7U))),5);
    bufp->chgCData(oldp+41,((7U & (vlSelfRef.inst >> 0xcU))),3);
    bufp->chgCData(oldp+42,((0x1fU & (vlSelfRef.inst 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+43,((0x1fU & (vlSelfRef.inst 
                                      >> 0x14U))),5);
    bufp->chgSData(oldp+44,((vlSelfRef.inst >> 0x14U)),12);
    bufp->chgIData(oldp+45,((((- (IData)((vlSelfRef.inst 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelfRef.inst 
                                          >> 0x14U))),32);
    bufp->chgBit(oldp+46,((IData)((0x13U == (0x707fU 
                                             & vlSelfRef.inst)))));
    bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
                            [(0x1fU & (vlSelfRef.inst 
                                       >> 0xfU))]),32);
    bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
                            [(0x1fU & (vlSelfRef.inst 
                                       >> 0x14U))]),32);
    bufp->chgIData(oldp+49,((vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
                             [(0x1fU & (vlSelfRef.inst 
                                        >> 0xfU))] 
                             + (((- (IData)((vlSelfRef.inst 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelfRef.inst 
                                             >> 0x14U)))),32);
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
