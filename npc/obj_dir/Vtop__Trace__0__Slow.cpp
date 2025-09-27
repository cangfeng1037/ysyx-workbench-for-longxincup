// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+35,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"halt_ret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+35,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"halt_ret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"is_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+64,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"halt_ret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"pc_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"pc_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+43,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"imm_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+48,0,"is_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"imm_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+52,0,"imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"imm_ext_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"imm_ext_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"snpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"dnpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"is_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+62,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+62,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+43,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"imm_i",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+51,0,"imm_u",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+52,0,"imm_j",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"imm_ext_u",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"imm_ext_i",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"is_auipc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_lui",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"is_addi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pc_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+65,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+64,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+61,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"x10_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+64,(5U),32);
    bufp->fullIData(oldp+65,(0x20U),32);
    bufp->fullBit(oldp+66,(1U));
    bufp->fullCData(oldp+67,(0U),4);
    bufp->fullIData(oldp+68,(0x80000000U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.top__DOT__cpu__DOT__pc_current),32);
    bufp->fullIData(oldp+2,(((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__pc_current)),32);
    bufp->fullIData(oldp+3,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[0]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[1]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[2]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[3]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[4]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[5]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[6]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[7]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[8]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[9]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[10]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[11]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[12]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[13]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[14]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[15]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[16]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[17]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[18]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[19]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[20]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[21]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[22]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[23]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[24]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[25]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[26]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[27]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[28]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[29]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[30]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[31]),32);
    bufp->fullBit(oldp+35,(vlSelfRef.clk));
    bufp->fullBit(oldp+36,(vlSelfRef.rst));
    bufp->fullIData(oldp+37,(vlSelfRef.pc),32);
    bufp->fullIData(oldp+38,(vlSelfRef.inst),32);
    bufp->fullIData(oldp+39,(vlSelfRef.halt_ret),32);
    bufp->fullBit(oldp+40,((0x100073U == vlSelfRef.inst)));
    bufp->fullIData(oldp+41,(((0x6fU == (0x7fU & vlSelfRef.inst))
                               ? ((((- (IData)((vlSelfRef.inst 
                                                >> 0x1fU))) 
                                    << 0x14U) | (((0xff000U 
                                                   & vlSelfRef.inst) 
                                                  | (0x800U 
                                                     & (vlSelfRef.inst 
                                                        >> 9U))) 
                                                 | (0x7feU 
                                                    & (vlSelfRef.inst 
                                                       >> 0x14U)))) 
                                  + vlSelfRef.top__DOT__cpu__DOT__pc_current)
                               : ((0x67U == (0x7fU 
                                             & vlSelfRef.inst))
                                   ? (0xfffffffeU & vlSelfRef.top__DOT__cpu__DOT__alu_out)
                                   : ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__pc_current)))),32);
    bufp->fullCData(oldp+42,((0x7fU & vlSelfRef.inst)),7);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelfRef.inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+44,((7U & (vlSelfRef.inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+45,((0x1fU & (vlSelfRef.inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+46,((0x1fU & (vlSelfRef.inst 
                                       >> 0x14U))),5);
    bufp->fullSData(oldp+47,((vlSelfRef.inst >> 0x14U)),12);
    bufp->fullBit(oldp+48,((0x17U == (0x7fU & vlSelfRef.inst))));
    bufp->fullBit(oldp+49,((0x37U == (0x7fU & vlSelfRef.inst))));
    bufp->fullIData(oldp+50,(vlSelfRef.top__DOT__cpu__DOT__alu_out),32);
    bufp->fullIData(oldp+51,((vlSelfRef.inst >> 0xcU)),20);
    bufp->fullIData(oldp+52,((((- (IData)((vlSelfRef.inst 
                                           >> 0x1fU))) 
                               << 0x14U) | (((0xff000U 
                                              & vlSelfRef.inst) 
                                             | (0x800U 
                                                & (vlSelfRef.inst 
                                                   >> 9U))) 
                                            | (0x7feU 
                                               & (vlSelfRef.inst 
                                                  >> 0x14U))))),32);
    bufp->fullIData(oldp+53,((0xfffff000U & vlSelfRef.inst)),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top__DOT__cpu__DOT__imm_ext_i),32);
    bufp->fullBit(oldp+55,((0x6fU == (0x7fU & vlSelfRef.inst))));
    bufp->fullBit(oldp+56,((0x67U == (0x7fU & vlSelfRef.inst))));
    bufp->fullBit(oldp+57,(vlSelfRef.top__DOT__cpu__DOT__is_addi));
    bufp->fullBit(oldp+58,(((IData)(vlSelfRef.top__DOT__cpu__DOT__is_addi) 
                            | ((0x17U == (0x7fU & vlSelfRef.inst)) 
                               | ((0x37U == (0x7fU 
                                             & vlSelfRef.inst)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSelfRef.inst)) 
                                     | (0x67U == (0x7fU 
                                                  & vlSelfRef.inst))))))));
    bufp->fullIData(oldp+59,(vlSelfRef.top__DOT__cpu__DOT__rs1_data),32);
    bufp->fullIData(oldp+60,(((0U == (0x1fU & (vlSelfRef.inst 
                                               >> 0x14U)))
                               ? 0U : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
                              [(0x1fU & (vlSelfRef.inst 
                                         >> 0x14U))])),32);
    bufp->fullIData(oldp+61,(((IData)(vlSelfRef.top__DOT__cpu__DOT__is_addi)
                               ? vlSelfRef.top__DOT__cpu__DOT__alu_out
                               : ((0x37U == (0x7fU 
                                             & vlSelfRef.inst))
                                   ? (0xfffff000U & vlSelfRef.inst)
                                   : ((0x17U == (0x7fU 
                                                 & vlSelfRef.inst))
                                       ? vlSelfRef.top__DOT__cpu__DOT__alu_out
                                       : ((0x6fU == 
                                           (0x7fU & vlSelfRef.inst))
                                           ? ((IData)(4U) 
                                              + vlSelfRef.top__DOT__cpu__DOT__pc_current)
                                           : ((0x67U 
                                               == (0x7fU 
                                                   & vlSelfRef.inst))
                                               ? ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__cpu__DOT__pc_current)
                                               : 0U)))))),32);
    bufp->fullIData(oldp+62,(((0x17U == (0x7fU & vlSelfRef.inst))
                               ? vlSelfRef.top__DOT__cpu__DOT__pc_current
                               : ((0x6fU == (0x7fU 
                                             & vlSelfRef.inst))
                                   ? vlSelfRef.top__DOT__cpu__DOT__pc_current
                                   : vlSelfRef.top__DOT__cpu__DOT__rs1_data))),32);
    bufp->fullIData(oldp+63,(((0x17U == (0x7fU & vlSelfRef.inst))
                               ? (0xfffff000U & vlSelfRef.inst)
                               : ((0x6fU == (0x7fU 
                                             & vlSelfRef.inst))
                                   ? vlSelfRef.top__DOT__cpu__DOT__rs1_data
                                   : ((0x67U == (0x7fU 
                                                 & vlSelfRef.inst))
                                       ? vlSelfRef.top__DOT__cpu__DOT__imm_ext_i
                                       : ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_addi)
                                           ? vlSelfRef.top__DOT__cpu__DOT__imm_ext_i
                                           : ((0U == 
                                               (0x1fU 
                                                & (vlSelfRef.inst 
                                                   >> 0x14U)))
                                               ? 0U
                                               : vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out
                                              [(0x1fU 
                                                & (vlSelfRef.inst 
                                                   >> 0x14U))])))))),32);
}
