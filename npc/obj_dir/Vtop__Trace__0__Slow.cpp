// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"io_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"io_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+280,0,"io_halt_ret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"io_non_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"io_gpr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"io_gpr_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"io_gpr_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"io_gpr_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"io_gpr_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"io_gpr_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"io_gpr_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"io_gpr_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"io_gpr_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"io_gpr_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"io_gpr_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"io_gpr_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"io_gpr_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"io_gpr_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"io_gpr_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"io_gpr_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"io_gpr_16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"io_gpr_17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"io_gpr_18",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"io_gpr_19",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"io_gpr_20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"io_gpr_21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"io_gpr_22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"io_gpr_23",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"io_gpr_24",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"io_gpr_25",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"io_gpr_26",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"io_gpr_27",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"io_gpr_28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"io_gpr_29",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"io_gpr_30",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"io_gpr_31",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+314,0,"io_difftest_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"io_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"io_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+280,0,"io_halt_ret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"io_non_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"io_gpr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"io_gpr_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"io_gpr_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"io_gpr_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"io_gpr_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"io_gpr_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"io_gpr_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"io_gpr_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"io_gpr_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"io_gpr_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"io_gpr_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"io_gpr_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"io_gpr_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"io_gpr_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"io_gpr_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"io_gpr_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"io_gpr_16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"io_gpr_17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"io_gpr_18",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"io_gpr_19",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"io_gpr_20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"io_gpr_21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"io_gpr_22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"io_gpr_23",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"io_gpr_24",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"io_gpr_25",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"io_gpr_26",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"io_gpr_27",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"io_gpr_28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"io_gpr_29",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"io_gpr_30",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"io_gpr_31",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+314,0,"io_difftest_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"io_regs_out_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"io_regs_out_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"io_regs_out_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"io_regs_out_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"io_regs_out_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"io_regs_out_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"io_regs_out_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"io_regs_out_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"io_regs_out_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"io_regs_out_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"io_regs_out_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"io_regs_out_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"io_regs_out_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"io_regs_out_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"io_regs_out_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"io_regs_out_16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"io_regs_out_17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"io_regs_out_18",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"io_regs_out_19",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"io_regs_out_20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"io_regs_out_21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"io_regs_out_22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"io_regs_out_23",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"io_regs_out_24",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"io_regs_out_25",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"io_regs_out_26",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"io_regs_out_27",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"io_regs_out_28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"io_regs_out_29",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"io_regs_out_30",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"io_regs_out_31",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"io_pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"io_inst_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+314,0,"io_difftest_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DSRAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_M_bus_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"io_M_bus_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_M_bus_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"io_M_bus_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"io_M_bus_WSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"io_M_bus_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_M_bus_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"io_M_bus_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"io_M_bus_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_M_bus_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"io_M_bus_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"io_M_bus_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"io_M_bus_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"io_M_bus_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_M_bus_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+13,0,"rdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"write_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_M_bus_WREADY_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"io_M_bus_ARREADY_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"io_M_bus_RVALID_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"io_M_bus_BVALID_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem_blackbox", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ISRAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"io_I_bus_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"io_I_bus_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_I_bus_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"io_I_bus_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"io_I_bus_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"io_I_bus_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,0,"pc_lat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"mem_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"io_I_bus_ARREADY_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"io_I_bus_RVALID_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"pc_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"inst_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"pc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"pc_valid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("axi_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"io_i_master_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"io_i_master_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"io_i_master_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"io_i_master_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"io_i_master_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"io_i_master_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"io_m_master_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"io_m_master_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"io_m_master_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"io_m_master_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"io_m_master_WSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+47,0,"io_m_master_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"io_m_master_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"io_m_master_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"io_m_master_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"io_m_master_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"io_m_master_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"io_m_master_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"io_m_master_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"io_m_master_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"io_m_master_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"io_slave_AWADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"io_slave_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"io_slave_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"io_slave_WDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"io_slave_WSTRB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+60,0,"io_slave_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"io_slave_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"io_slave_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"io_slave_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"io_slave_ARADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"io_slave_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"io_slave_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"io_slave_RDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"io_slave_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"io_slave_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"io_is_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"using_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"is_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"m_aw_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"pick_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"io_slave_BREADY_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"io_slave_RREADY_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("axi_ifu_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"io_I_bus_ARADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"io_I_bus_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"io_I_bus_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"io_I_bus_RDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"io_I_bus_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"io_I_bus_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"io_inst_req_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_inst_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"io_inst_req_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"io_inst_resp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"io_inst_resp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"io_inst_resp_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"killPending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"io_I_bus_ARVALID_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"io_I_bus_RREADY_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("axi_mem_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"io_M_bus_AWADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"io_M_bus_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"io_M_bus_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"io_M_bus_WDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"io_M_bus_WSTRB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+47,0,"io_M_bus_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"io_M_bus_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"io_M_bus_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"io_M_bus_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"io_M_bus_ARADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"io_M_bus_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"io_M_bus_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"io_M_bus_RDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"io_M_bus_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"io_M_bus_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"io_mem_req_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"io_mem_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"io_mem_req_bits_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"io_mem_req_bits_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"io_mem_req_bits_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"io_mem_req_bits_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"io_mem_req_bits_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+93,0,"io_mem_resp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"io_mem_resp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"io_mem_resp_bits_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+47,0,"io_M_bus_WVALID_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"io_mem_req_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"io_M_bus_RREADY_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"io_M_bus_BREADY_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"io_csr_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+98,0,"io_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"io_csr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+100,0,"io_csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"io_csr_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"io_is_ecall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"io_is_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("exu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"io_in_bits_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+112,0,"io_in_bits_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"io_in_bits_alu_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"io_in_bits_alu_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"io_in_bits_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+116,0,"io_in_bits_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"io_in_bits_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"io_in_bits_csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+119,0,"io_in_bits_csr_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"io_in_bits_csr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+98,0,"io_in_bits_csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"io_in_bits_is_csrrw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io_in_bits_is_csrrs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"io_in_bits_is_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"io_in_bits_is_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_in_bits_is_lw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"io_in_bits_is_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"io_in_bits_is_lb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"io_in_bits_is_sb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"io_in_bits_is_lh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"io_in_bits_is_sh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"io_in_bits_is_lbu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"io_in_bits_is_lhu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"io_in_bits_is_beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"io_in_bits_is_bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"io_in_bits_is_blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"io_in_bits_is_bltu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"io_in_bits_is_bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"io_in_bits_is_bgeu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"io_in_bits_is_ecall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"io_in_bits_is_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"io_out_bits_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"io_out_bits_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"io_out_bits_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+145,0,"io_out_bits_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"io_out_bits_csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"io_out_bits_csr_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"io_out_bits_csr_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+149,0,"io_out_bits_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"io_out_bits_is_csrrw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"io_out_bits_is_csrrs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"io_out_bits_is_lw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"io_out_bits_is_lbu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"io_out_bits_is_lh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"io_out_bits_is_lhu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"io_out_bits_is_lb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"io_out_bits_is_sw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"io_out_bits_is_sb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_out_bits_is_sh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"io_out_bits_is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"io_out_bits_is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"io_branch_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"io_branch_bits_pc_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"io_branch_bits_pc_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"io_branch_bits_pc_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+164,0,"io_branch_bits_is_branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"io_branch_bits_is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"io_branch_bits_is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"io_branch_bits_is_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"io_branch_bits_is_mret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"io_branch_bits_pc_csr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+167,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+171,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+145,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"csr_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"csr_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+150,0,"is_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"is_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"is_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"io_aluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+142,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("idu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"io_out_bits_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+112,0,"io_out_bits_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"io_out_bits_alu_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"io_out_bits_alu_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"io_out_bits_alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+116,0,"io_out_bits_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"io_out_bits_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"io_out_bits_csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+119,0,"io_out_bits_csr_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"io_out_bits_csr_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+98,0,"io_out_bits_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"io_out_bits_is_csrrw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io_out_bits_is_csrrs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"io_out_bits_is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"io_out_bits_is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_out_bits_is_lw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"io_out_bits_is_sw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"io_out_bits_is_lb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"io_out_bits_is_sb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"io_out_bits_is_lh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"io_out_bits_is_sh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"io_out_bits_is_lbu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"io_out_bits_is_lhu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"io_out_bits_is_beq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"io_out_bits_is_bne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"io_out_bits_is_blt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"io_out_bits_is_bltu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"io_out_bits_is_bge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"io_out_bits_is_bgeu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"io_out_bits_is_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"io_out_bits_is_mret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"io_reg_rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+182,0,"io_reg_rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+116,0,"io_reg_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"io_reg_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"io_csr_raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+98,0,"io_csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"io_is_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"io_is_mret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"io_in_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+183,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"imm_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+185,0,"is_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"is_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"is_op_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"is_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"is_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"is_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"is_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"is_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"is_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"is_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"is_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"is_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ifu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+140,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"io_in_bits_pc_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"io_in_bits_pc_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"io_in_bits_pc_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+164,0,"io_in_bits_is_branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"io_in_bits_is_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"io_in_bits_is_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"io_in_bits_is_ecall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"io_in_bits_is_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"io_in_bits_pc_csr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"io_inst_req_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_inst_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"io_inst_req_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"io_inst_resp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"io_inst_resp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"io_inst_resp_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"io_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"inst_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+196,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_inst_resp_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"io_flush_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_inst_req_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"io_in_bits_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"io_in_bits_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"io_in_bits_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+145,0,"io_in_bits_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"io_in_bits_csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"io_in_bits_csr_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"io_in_bits_csr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+149,0,"io_in_bits_csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"io_in_bits_is_csrrw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"io_in_bits_is_csrrs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"io_in_bits_is_lw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"io_in_bits_is_lbu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"io_in_bits_is_lh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"io_in_bits_is_lhu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"io_in_bits_is_lb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"io_in_bits_is_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"io_in_bits_is_sb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_in_bits_is_sh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"io_in_bits_is_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"io_in_bits_is_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"io_out_bits_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"io_out_bits_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+201,0,"io_out_bits_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"io_out_bits_mem_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+203,0,"io_out_bits_is_load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"io_out_bits_is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"io_out_bits_is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+206,0,"io_out_bits_csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"io_out_bits_csr_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"io_out_bits_csr_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+209,0,"io_out_bits_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+210,0,"io_out_bits_is_csrrw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"io_out_bits_is_csrrs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"io_mem_req_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"io_mem_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"io_mem_req_bits_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"io_mem_req_bits_raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"io_mem_req_bits_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"io_mem_req_bits_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"io_mem_req_bits_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+93,0,"io_mem_resp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"io_mem_resp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"io_mem_resp_bits_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+139,0,"in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+201,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+206,0,"csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"csr_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"csr_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+209,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+210,0,"is_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"is_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+198,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+93,0,"io_mem_resp_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"io_mem_req_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+223,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+224,0,"sel_half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"io_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+182,0,"io_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+225,0,"io_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+226,0,"io_rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+227,0,"io_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"io_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"io_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"io_regs_out_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"io_regs_out_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"io_regs_out_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"io_regs_out_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"io_regs_out_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"io_regs_out_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"io_regs_out_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"io_regs_out_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"io_regs_out_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"io_regs_out_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"io_regs_out_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"io_regs_out_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"io_regs_out_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"io_regs_out_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"io_regs_out_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"io_regs_out_16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"io_regs_out_17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"io_regs_out_18",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"io_regs_out_19",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"io_regs_out_20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"io_regs_out_21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"io_regs_out_22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"io_regs_out_23",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"io_regs_out_24",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"io_regs_out_25",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"io_regs_out_26",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"io_regs_out_27",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"io_regs_out_28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"io_regs_out_29",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"io_regs_out_30",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"io_regs_out_31",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"regs_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"regs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"regs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"regs_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"regs_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"regs_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"regs_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"regs_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"regs_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"regs_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"regs_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"regs_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"regs_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"regs_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"regs_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"regs_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"regs_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"regs_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"regs_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"regs_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"regs_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"regs_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"regs_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"regs_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"regs_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"regs_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"regs_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"regs_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"regs_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,0,"regs_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"regs_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"regs_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("slave_selector", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+59,0,"io_slave_in_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"io_slave_in_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"io_slave_in_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"io_slave_in_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"io_slave_in_WSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+60,0,"io_slave_in_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"io_slave_in_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"io_slave_in_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"io_slave_in_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"io_slave_in_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"io_slave_in_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"io_slave_in_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"io_slave_in_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"io_slave_in_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"io_slave_in_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_slave_m_AWADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"io_slave_m_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_slave_m_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"io_slave_m_WDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"io_slave_m_WSTRB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"io_slave_m_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_slave_m_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"io_slave_m_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"io_slave_m_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_slave_m_ARADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"io_slave_m_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"io_slave_m_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"io_slave_m_RDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"io_slave_m_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_slave_m_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"io_slave_i_ARADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"io_slave_i_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_slave_i_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"io_slave_i_RDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"io_slave_i_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"io_slave_i_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"io_is_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+276,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"io_in_bits_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"io_in_bits_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+201,0,"io_in_bits_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"io_in_bits_mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+203,0,"io_in_bits_is_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"io_in_bits_is_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"io_in_bits_is_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+206,0,"io_in_bits_csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"io_in_bits_csr_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"io_in_bits_csr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+209,0,"io_in_bits_csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+210,0,"io_in_bits_is_csrrw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"io_in_bits_is_csrrs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"io_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+226,0,"io_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+227,0,"io_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"io_csr_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+100,0,"io_csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"io_csr_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"io_commit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"io_in_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+227,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+267,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"csr_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"csr_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+270,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+271,0,"is_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"is_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+274,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ebreak_box", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+275,0,"is_ebreak",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__inst_reg),32);
    bufp->fullBit(oldp+2,(vlSelfRef.top__DOT__cpu__DOT__busy));
    bufp->fullIData(oldp+3,(((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                              ? 0U : ((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                             | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                       ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                                ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result
                                                : 0U)))),32);
    bufp->fullBit(oldp+4,(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_m_AWVALID));
    bufp->fullBit(oldp+5,(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0));
    bufp->fullIData(oldp+6,(((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                              ? 0U : ((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                             | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                       ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                                ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
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
    bufp->fullCData(oldp+7,(((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                              ? 0U : ((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
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
                                                : 0U)))),4);
    bufp->fullBit(oldp+8,(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_BVALID_0));
    bufp->fullBit(oldp+9,(((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)) 
                           & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_BREADY_0))));
    bufp->fullIData(oldp+10,(((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                               ? 0U : vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARADDR)),32);
    bufp->fullBit(oldp+11,(((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)) 
                            & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARVALID))));
    bufp->fullBit(oldp+12,(vlSelfRef.top__DOT__cpu__DOT___DSRAM_io_M_bus_ARREADY));
    bufp->fullIData(oldp+13,(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__rdata_reg),32);
    bufp->fullBit(oldp+14,(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_RVALID_0));
    bufp->fullBit(oldp+15,(((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)) 
                            & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_RREADY_0))));
    bufp->fullCData(oldp+16,(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state),2);
    bufp->fullBit(oldp+17,((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state))));
    bufp->fullBit(oldp+18,(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__ar_fire));
    bufp->fullBit(oldp+19,(((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)) 
                            & ((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0) 
                               | (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__ar_fire)))));
    bufp->fullBit(oldp+20,(((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__state)) 
                            & (IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0))));
    bufp->fullIData(oldp+21,(((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT___GEN)
                               ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                        ? 0U : vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARADDR))),32);
    bufp->fullIData(oldp+22,(((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0)
                               ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                   ? 0U : ((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                                  | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                            ? 0U : 
                                           ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                             ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result
                                             : 0U)))
                               : 0U)),32);
    bufp->fullIData(oldp+23,(((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0)
                               ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                   ? 0U : ((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                                  | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                            ? 0U : 
                                           ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                             ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
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
    bufp->fullCData(oldp+24,(((IData)(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT__io_M_bus_WREADY_0)
                               ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT___GEN)
                                   ? 0U : ((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                                  | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                                            ? 0U : 
                                           ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
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
                                             : 0U)))
                               : 0U)),4);
    bufp->fullIData(oldp+25,(vlSelfRef.top__DOT__cpu__DOT__DSRAM__DOT___mem_blackbox_rdata),32);
    bufp->fullIData(oldp+26,(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_i_ARADDR),32);
    bufp->fullBit(oldp+27,(((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_is_inst) 
                            & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARVALID))));
    bufp->fullBit(oldp+28,((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state))));
    bufp->fullIData(oldp+29,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__mem_inst),32);
    bufp->fullBit(oldp+30,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__io_I_bus_RVALID_0));
    bufp->fullBit(oldp+31,(((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_is_inst) 
                            & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_RREADY_0))));
    bufp->fullCData(oldp+32,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state),2);
    bufp->fullIData(oldp+33,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__pc_lat),32);
    bufp->fullBit(oldp+34,(((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__state)) 
                            & (IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___GEN))));
    bufp->fullIData(oldp+35,(((IData)(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___GEN)
                               ? vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_i_ARADDR
                               : vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__pc_lat)),32);
    bufp->fullBit(oldp+36,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___imem_inst_valid));
    bufp->fullIData(oldp+37,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT___imem_inst),32);
    bufp->fullIData(oldp+38,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_r),32);
    bufp->fullBit(oldp+39,(vlSelfRef.top__DOT__cpu__DOT__ISRAM__DOT__imem__DOT__pc_valid_r));
    bufp->fullIData(oldp+40,(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc),32);
    bufp->fullBit(oldp+41,(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__io_I_bus_ARVALID_0));
    bufp->fullBit(oldp+42,(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_i_master_ARREADY));
    bufp->fullIData(oldp+43,(((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__using_ifu)) 
                                     | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_2)))
                               ? 0U : vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RDATA)),32);
    bufp->fullBit(oldp+44,(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_i_master_RVALID));
    bufp->fullBit(oldp+45,(vlSelfRef.top__DOT__cpu__DOT___axi_ifu_master_io_I_bus_RREADY));
    bufp->fullIData(oldp+46,(((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                               ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result
                               : 0U)),32);
    bufp->fullBit(oldp+47,(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID));
    bufp->fullBit(oldp+48,((((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)) 
                             & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                            & (IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_AWREADY))));
    bufp->fullIData(oldp+49,(((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                               ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                                   ? ((0xffU & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                      << (0x18U & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                   << 3U)))
                                   : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                       ? ((0xffffU 
                                           & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                          << (0x10U 
                                              & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                 << 3U)))
                                       : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw)
                                           ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data
                                           : 0U))) : 0U)),32);
    bufp->fullCData(oldp+50,(((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                               ? (0xfU & ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                                           ? ((IData)(1U) 
                                              << (3U 
                                                  & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result))
                                           : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                               ? ((2U 
                                                   & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result)
                                                   ? 0xcU
                                                   : 3U)
                                               : (- (IData)((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw))))))
                               : 0U)),4);
    bufp->fullBit(oldp+51,(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_m_master_BVALID));
    bufp->fullBit(oldp+52,(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_M_bus_BREADY_0));
    bufp->fullIData(oldp+53,(((1U & ((0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
                                     | ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__io_mem_req_valid_0)) 
                                        | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT___GEN_0))))
                               ? 0U : vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result)),32);
    bufp->fullBit(oldp+54,(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_ARVALID));
    bufp->fullBit(oldp+55,(((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_6) 
                            & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)) 
                               & (IData)(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_ARREADY)))));
    bufp->fullIData(oldp+56,(((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN_3)
                               ? 0U : vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RDATA)),32);
    bufp->fullBit(oldp+57,(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_m_master_RVALID));
    bufp->fullBit(oldp+58,(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_M_bus_RREADY_0));
    bufp->fullIData(oldp+59,(((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                     | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                               ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                        ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result
                                        : 0U))),32);
    bufp->fullBit(oldp+60,(((IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN) 
                            & (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__awvalid))));
    bufp->fullBit(oldp+61,(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_AWREADY));
    bufp->fullIData(oldp+62,(((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                     | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                               ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                        ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                                            ? ((0xffU 
                                                & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                               << (0x18U 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                      << 3U)))
                                            : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                                ? (
                                                   (0xffffU 
                                                    & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                                   << 
                                                   (0x10U 
                                                    & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                       << 3U)))
                                                : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw)
                                                    ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data
                                                    : 0U)))
                                        : 0U))),32);
    bufp->fullCData(oldp+63,(((1U & ((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT___GEN)) 
                                     | (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu)))
                               ? 0U : ((IData)(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_M_bus_AWVALID)
                                        ? (0xfU & ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
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
    bufp->fullBit(oldp+64,(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_BVALID));
    bufp->fullBit(oldp+65,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_BREADY_0));
    bufp->fullIData(oldp+66,(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARADDR),32);
    bufp->fullBit(oldp+67,(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_slave_ARVALID));
    bufp->fullBit(oldp+68,(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_ARREADY));
    bufp->fullIData(oldp+69,(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RDATA),32);
    bufp->fullBit(oldp+70,(vlSelfRef.top__DOT__cpu__DOT___slave_selector_io_slave_in_RVALID));
    bufp->fullBit(oldp+71,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__io_slave_RREADY_0));
    bufp->fullBit(oldp+72,(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_is_inst));
    bufp->fullBit(oldp+73,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__busy));
    bufp->fullBit(oldp+74,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__using_ifu));
    bufp->fullBit(oldp+75,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__is_write));
    bufp->fullBit(oldp+76,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__pick_ifu));
    bufp->fullBit(oldp+77,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__awvalid));
    bufp->fullBit(oldp+78,(vlSelfRef.top__DOT__cpu__DOT__axi_arbiter__DOT__arvalid));
    bufp->fullBit(oldp+79,(((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__pending)) 
                            & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_i_master_ARREADY))));
    bufp->fullBit(oldp+80,(vlSelfRef.top__DOT__cpu__DOT___ifu_io_inst_req_valid));
    bufp->fullBit(oldp+81,(vlSelfRef.top__DOT__cpu__DOT___ifu_io_inst_resp_ready));
    bufp->fullBit(oldp+82,(((~ (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending)) 
                            & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_i_master_RVALID))));
    bufp->fullBit(oldp+83,(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__io_flush_0));
    bufp->fullBit(oldp+84,(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__pending));
    bufp->fullBit(oldp+85,(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__killPending));
    bufp->fullBit(oldp+86,(vlSelfRef.top__DOT__cpu__DOT__axi_ifu_master__DOT__r_fire));
    bufp->fullBit(oldp+87,(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__io_mem_req_ready_0));
    bufp->fullBit(oldp+88,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__io_mem_req_valid_0));
    bufp->fullBit(oldp+89,(((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw) 
                            | ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb) 
                               | (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)))));
    bufp->fullIData(oldp+90,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result),32);
    bufp->fullIData(oldp+91,(((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                               ? ((0xffU & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                  << (0x18U & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                               << 3U)))
                               : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                   ? ((0xffffU & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data) 
                                      << (0x10U & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result 
                                                   << 3U)))
                                   : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw)
                                       ? vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data
                                       : 0U)))),32);
    bufp->fullCData(oldp+92,((0xfU & ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb)
                                       ? ((IData)(1U) 
                                          << (3U & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result))
                                       : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh)
                                           ? ((2U & vlSelfRef.top__DOT__cpu__DOT__mem__DOT__alu_result)
                                               ? 0xcU
                                               : 3U)
                                           : (- (IData)((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw))))))),4);
    bufp->fullBit(oldp+93,((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))));
    bufp->fullBit(oldp+94,(((0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
                            & ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state))
                                ? (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_m_master_RVALID)
                                : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state)) 
                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT___axi_arbiter_io_m_master_BVALID))))));
    bufp->fullIData(oldp+95,(vlSelfRef.top__DOT__cpu__DOT___axi_mem_master_io_mem_resp_bits_rdata),32);
    bufp->fullCData(oldp+96,(vlSelfRef.top__DOT__cpu__DOT__axi_mem_master__DOT__state),2);
    bufp->fullSData(oldp+97,(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr),12);
    bufp->fullIData(oldp+98,(((0x300U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                               ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus
                               : ((0x342U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                                   ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mcause
                                   : ((0x341U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                                       ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mepc
                                       : ((0x305U == (IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr))
                                           ? vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mtvec
                                           : 0U))))),32);
    bufp->fullSData(oldp+99,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_waddr),12);
    bufp->fullIData(oldp+100,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wdata),32);
    bufp->fullBit(oldp+101,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_wen));
    bufp->fullBit(oldp+102,((0x73U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    bufp->fullBit(oldp+103,((0x30200073U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)));
    bufp->fullIData(oldp+104,(vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mtvec),32);
    bufp->fullIData(oldp+105,(vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mepc),32);
    bufp->fullIData(oldp+106,(vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mcause),32);
    bufp->fullIData(oldp+107,(vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus),32);
    bufp->fullBit(oldp+108,((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__state)))));
    bufp->fullBit(oldp+109,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__state));
    bufp->fullIData(oldp+110,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__pc),32);
    bufp->fullCData(oldp+111,((0x1fU & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+112,(((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_load) 
                             | ((0x37U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                                | ((0x17U == (0x7fU 
                                              & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                                   | ((0x33U == (0x7fU 
                                                 & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                                      | ((0x6fU == 
                                          (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
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
    bufp->fullIData(oldp+113,((((0x17U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)) 
                                | (0x6fU == (0x7fU 
                                             & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)))
                                ? vlSelfRef.top__DOT__cpu__DOT__idu__DOT__pc
                                : ((0x37U == (0x7fU 
                                              & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))
                                    ? 0U : vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data))),32);
    bufp->fullIData(oldp+114,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b),32);
    bufp->fullCData(oldp+115,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op),4);
    bufp->fullIData(oldp+116,(vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data),32);
    bufp->fullIData(oldp+117,(vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data),32);
    bufp->fullIData(oldp+118,(((0x73U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                                ? vlSelfRef.top__DOT__cpu__DOT__idu__DOT__pc
                                : ((0x30200073U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                                    ? 0U : vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data))),32);
    bufp->fullBit(oldp+119,(((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrw) 
                             | (0x73U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))));
    bufp->fullSData(oldp+120,(((0x73U == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                                ? 0x341U : ((0x30200073U 
                                             == vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst)
                                             ? 0x342U
                                             : (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                                >> 0x14U)))),12);
    bufp->fullBit(oldp+121,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrw));
    bufp->fullBit(oldp+122,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_csrrs));
    bufp->fullBit(oldp+123,((0x6fU == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+124,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_jalr));
    bufp->fullBit(oldp+125,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lw));
    bufp->fullBit(oldp+126,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sw));
    bufp->fullBit(oldp+127,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lb));
    bufp->fullBit(oldp+128,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sb));
    bufp->fullBit(oldp+129,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lh));
    bufp->fullBit(oldp+130,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_sh));
    bufp->fullBit(oldp+131,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lbu));
    bufp->fullBit(oldp+132,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_lhu));
    bufp->fullBit(oldp+133,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_beq));
    bufp->fullBit(oldp+134,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bne));
    bufp->fullBit(oldp+135,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_blt));
    bufp->fullBit(oldp+136,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bltu));
    bufp->fullBit(oldp+137,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bge));
    bufp->fullBit(oldp+138,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bgeu));
    bufp->fullBit(oldp+139,((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))));
    bufp->fullBit(oldp+140,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__out_valid));
    bufp->fullIData(oldp+141,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__pc),32);
    bufp->fullIData(oldp+142,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp),32);
    bufp->fullIData(oldp+143,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs2_data),32);
    bufp->fullCData(oldp+144,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rd_addr),5);
    bufp->fullBit(oldp+145,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rd_en));
    bufp->fullIData(oldp+146,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_wdata),32);
    bufp->fullBit(oldp+147,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_wen));
    bufp->fullSData(oldp+148,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_waddr),12);
    bufp->fullIData(oldp+149,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__csr_rdata),32);
    bufp->fullBit(oldp+150,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_csrrw));
    bufp->fullBit(oldp+151,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_csrrs));
    bufp->fullBit(oldp+152,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lw));
    bufp->fullBit(oldp+153,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lbu));
    bufp->fullBit(oldp+154,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lh));
    bufp->fullBit(oldp+155,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lhu));
    bufp->fullBit(oldp+156,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_lb));
    bufp->fullBit(oldp+157,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sw));
    bufp->fullBit(oldp+158,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sb));
    bufp->fullBit(oldp+159,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_sh));
    bufp->fullBit(oldp+160,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_jalr));
    bufp->fullBit(oldp+161,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_jal));
    bufp->fullIData(oldp+162,(vlSelfRef.top__DOT__cpu__DOT___exu_io_branch_bits_pc_branch),32);
    bufp->fullIData(oldp+163,((0xfffffffeU & (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a 
                                              + vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b))),32);
    bufp->fullBit(oldp+164,(vlSelfRef.top__DOT__cpu__DOT___exu_io_branch_bits_is_branch_taken));
    bufp->fullBit(oldp+165,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_ecall));
    bufp->fullBit(oldp+166,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_mret));
    bufp->fullBit(oldp+167,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__state));
    bufp->fullIData(oldp+168,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_a),32);
    bufp->fullIData(oldp+169,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_b),32);
    bufp->fullCData(oldp+170,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu_op),4);
    bufp->fullIData(oldp+171,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__rs1_data),32);
    bufp->fullBit(oldp+172,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_beq));
    bufp->fullBit(oldp+173,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bne));
    bufp->fullBit(oldp+174,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_blt));
    bufp->fullBit(oldp+175,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bltu));
    bufp->fullBit(oldp+176,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bge));
    bufp->fullBit(oldp+177,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__is_bgeu));
    bufp->fullBit(oldp+178,(vlSelfRef.top__DOT__cpu__DOT___idu_io_in_ready));
    bufp->fullBit(oldp+179,(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__out_valid));
    bufp->fullIData(oldp+180,(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc_reg),32);
    bufp->fullCData(oldp+181,((0x1fU & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+182,((0x1fU & (vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+183,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst),32);
    bufp->fullIData(oldp+184,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__imm_i),32);
    bufp->fullBit(oldp+185,((0x17U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+186,((0x37U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+187,((0x13U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+188,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_load));
    bufp->fullBit(oldp+189,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srai));
    bufp->fullBit(oldp+190,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srli));
    bufp->fullBit(oldp+191,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_slli));
    bufp->fullBit(oldp+192,((0x33U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+193,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_branch));
    bufp->fullBit(oldp+194,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_store));
    bufp->fullBit(oldp+195,((0x73U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+196,(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__state));
    bufp->fullBit(oldp+197,((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))));
    bufp->fullBit(oldp+198,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__out_valid));
    bufp->fullIData(oldp+199,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__pc),32);
    bufp->fullCData(oldp+200,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rd_addr),5);
    bufp->fullBit(oldp+201,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rd_en));
    bufp->fullIData(oldp+202,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__mem_data),32);
    bufp->fullBit(oldp+203,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_load));
    bufp->fullBit(oldp+204,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_jalr));
    bufp->fullBit(oldp+205,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_jal));
    bufp->fullIData(oldp+206,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_wdata),32);
    bufp->fullBit(oldp+207,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_wen));
    bufp->fullSData(oldp+208,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_waddr),12);
    bufp->fullIData(oldp+209,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__csr_rdata),32);
    bufp->fullBit(oldp+210,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_csrrw));
    bufp->fullBit(oldp+211,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_csrrs));
    bufp->fullIData(oldp+212,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__rs2_data),32);
    bufp->fullBit(oldp+213,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lw));
    bufp->fullBit(oldp+214,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lbu));
    bufp->fullBit(oldp+215,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lh));
    bufp->fullBit(oldp+216,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lhu));
    bufp->fullBit(oldp+217,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_lb));
    bufp->fullBit(oldp+218,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sw));
    bufp->fullBit(oldp+219,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sb));
    bufp->fullBit(oldp+220,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_sh));
    bufp->fullCData(oldp+221,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state),2);
    bufp->fullCData(oldp+222,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__casez_tmp),8);
    bufp->fullCData(oldp+223,(((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
                                ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__exu__DOT___GEN_0)
                                    ? (1U | (2U & (
                                                   (~ 
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
                                        ? (2U | (1U 
                                                 & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__is_load))))
                                        : (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
                                    : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
                                        ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT___GEN_1)
                                            ? 3U : (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state))
                                        : ((IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT___GEN_2)
                                            ? 0U : (IData)(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__state)))))),2);
    bufp->fullSData(oldp+224,(vlSelfRef.top__DOT__cpu__DOT__mem__DOT__sel_half),16);
    bufp->fullCData(oldp+225,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_addr),5);
    bufp->fullIData(oldp+226,(vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data),32);
    bufp->fullBit(oldp+227,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__rd_en));
    bufp->fullIData(oldp+228,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_0),32);
    bufp->fullIData(oldp+229,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_1),32);
    bufp->fullIData(oldp+230,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_2),32);
    bufp->fullIData(oldp+231,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_3),32);
    bufp->fullIData(oldp+232,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_4),32);
    bufp->fullIData(oldp+233,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_5),32);
    bufp->fullIData(oldp+234,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_6),32);
    bufp->fullIData(oldp+235,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_7),32);
    bufp->fullIData(oldp+236,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_8),32);
    bufp->fullIData(oldp+237,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_9),32);
    bufp->fullIData(oldp+238,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_10),32);
    bufp->fullIData(oldp+239,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_11),32);
    bufp->fullIData(oldp+240,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_12),32);
    bufp->fullIData(oldp+241,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_13),32);
    bufp->fullIData(oldp+242,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_14),32);
    bufp->fullIData(oldp+243,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_15),32);
    bufp->fullIData(oldp+244,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_16),32);
    bufp->fullIData(oldp+245,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_17),32);
    bufp->fullIData(oldp+246,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_18),32);
    bufp->fullIData(oldp+247,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_19),32);
    bufp->fullIData(oldp+248,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_20),32);
    bufp->fullIData(oldp+249,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_21),32);
    bufp->fullIData(oldp+250,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_22),32);
    bufp->fullIData(oldp+251,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_23),32);
    bufp->fullIData(oldp+252,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_24),32);
    bufp->fullIData(oldp+253,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_25),32);
    bufp->fullIData(oldp+254,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_26),32);
    bufp->fullIData(oldp+255,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_27),32);
    bufp->fullIData(oldp+256,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_28),32);
    bufp->fullIData(oldp+257,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_29),32);
    bufp->fullIData(oldp+258,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_30),32);
    bufp->fullIData(oldp+259,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_31),32);
    bufp->fullIData(oldp+260,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp),32);
    bufp->fullIData(oldp+261,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp_0),32);
    bufp->fullIData(oldp+262,(vlSelfRef.top__DOT__cpu__DOT__slave_selector__DOT__addr),32);
    bufp->fullBit(oldp+263,((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))));
    bufp->fullIData(oldp+264,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__pc),32);
    bufp->fullIData(oldp+265,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__alu_result),32);
    bufp->fullIData(oldp+266,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__mem_data),32);
    bufp->fullBit(oldp+267,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_load));
    bufp->fullBit(oldp+268,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_jalr));
    bufp->fullBit(oldp+269,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_jal));
    bufp->fullIData(oldp+270,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__csr_rdata),32);
    bufp->fullBit(oldp+271,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_csrrw));
    bufp->fullBit(oldp+272,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__is_csrrs));
    bufp->fullCData(oldp+273,(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state),2);
    bufp->fullCData(oldp+274,(((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))
                                ? ((IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT___GEN)
                                    ? 1U : (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))
                                : ((1U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))
                                    ? 2U : ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))
                                             ? 0U : (IData)(vlSelfRef.top__DOT__cpu__DOT__wb__DOT__state))))),2);
    bufp->fullBit(oldp+275,(vlSelfRef.top__DOT____Vcellinp__ebreak_box__is_ebreak));
    bufp->fullBit(oldp+276,(vlSelfRef.clock));
    bufp->fullBit(oldp+277,(vlSelfRef.reset));
    bufp->fullIData(oldp+278,(vlSelfRef.io_pc),32);
    bufp->fullIData(oldp+279,(vlSelfRef.io_inst),32);
    bufp->fullBit(oldp+280,(vlSelfRef.io_halt_ret));
    bufp->fullBit(oldp+281,(vlSelfRef.io_non_inst));
    bufp->fullIData(oldp+282,(vlSelfRef.io_gpr_0),32);
    bufp->fullIData(oldp+283,(vlSelfRef.io_gpr_1),32);
    bufp->fullIData(oldp+284,(vlSelfRef.io_gpr_2),32);
    bufp->fullIData(oldp+285,(vlSelfRef.io_gpr_3),32);
    bufp->fullIData(oldp+286,(vlSelfRef.io_gpr_4),32);
    bufp->fullIData(oldp+287,(vlSelfRef.io_gpr_5),32);
    bufp->fullIData(oldp+288,(vlSelfRef.io_gpr_6),32);
    bufp->fullIData(oldp+289,(vlSelfRef.io_gpr_7),32);
    bufp->fullIData(oldp+290,(vlSelfRef.io_gpr_8),32);
    bufp->fullIData(oldp+291,(vlSelfRef.io_gpr_9),32);
    bufp->fullIData(oldp+292,(vlSelfRef.io_gpr_10),32);
    bufp->fullIData(oldp+293,(vlSelfRef.io_gpr_11),32);
    bufp->fullIData(oldp+294,(vlSelfRef.io_gpr_12),32);
    bufp->fullIData(oldp+295,(vlSelfRef.io_gpr_13),32);
    bufp->fullIData(oldp+296,(vlSelfRef.io_gpr_14),32);
    bufp->fullIData(oldp+297,(vlSelfRef.io_gpr_15),32);
    bufp->fullIData(oldp+298,(vlSelfRef.io_gpr_16),32);
    bufp->fullIData(oldp+299,(vlSelfRef.io_gpr_17),32);
    bufp->fullIData(oldp+300,(vlSelfRef.io_gpr_18),32);
    bufp->fullIData(oldp+301,(vlSelfRef.io_gpr_19),32);
    bufp->fullIData(oldp+302,(vlSelfRef.io_gpr_20),32);
    bufp->fullIData(oldp+303,(vlSelfRef.io_gpr_21),32);
    bufp->fullIData(oldp+304,(vlSelfRef.io_gpr_22),32);
    bufp->fullIData(oldp+305,(vlSelfRef.io_gpr_23),32);
    bufp->fullIData(oldp+306,(vlSelfRef.io_gpr_24),32);
    bufp->fullIData(oldp+307,(vlSelfRef.io_gpr_25),32);
    bufp->fullIData(oldp+308,(vlSelfRef.io_gpr_26),32);
    bufp->fullIData(oldp+309,(vlSelfRef.io_gpr_27),32);
    bufp->fullIData(oldp+310,(vlSelfRef.io_gpr_28),32);
    bufp->fullIData(oldp+311,(vlSelfRef.io_gpr_29),32);
    bufp->fullIData(oldp+312,(vlSelfRef.io_gpr_30),32);
    bufp->fullIData(oldp+313,(vlSelfRef.io_gpr_31),32);
    bufp->fullBit(oldp+314,(vlSelfRef.io_difftest_valid));
}
