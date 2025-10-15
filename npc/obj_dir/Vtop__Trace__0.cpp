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
        bufp->chgBit(oldp+0,(((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lbu) 
                              | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lw) 
                                 | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lh) 
                                    | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_lhu))))));
        bufp->chgIData(oldp+1,(vlSelfRef.top__DOT__cpu__DOT__imm_i),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__cpu__DOT__imm_s),32);
        bufp->chgBit(oldp+3,(vlSelfRef.top__DOT__cpu__DOT__is_jalr));
        bufp->chgBit(oldp+4,(vlSelfRef.top__DOT__cpu__DOT__is_addi));
        bufp->chgBit(oldp+5,(vlSelfRef.top__DOT__cpu__DOT__is_andi));
        bufp->chgBit(oldp+6,(vlSelfRef.top__DOT__cpu__DOT__is_ori));
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__cpu__DOT__is_xori));
        bufp->chgBit(oldp+8,(vlSelfRef.top__DOT__cpu__DOT__is_lw));
        bufp->chgBit(oldp+9,(vlSelfRef.top__DOT__cpu__DOT__is_lbu));
        bufp->chgBit(oldp+10,(vlSelfRef.top__DOT__cpu__DOT__is_lh));
        bufp->chgBit(oldp+11,(vlSelfRef.top__DOT__cpu__DOT__is_lhu));
        bufp->chgBit(oldp+12,(vlSelfRef.top__DOT__cpu__DOT__is_seqz));
        bufp->chgBit(oldp+13,(vlSelfRef.top__DOT__cpu__DOT__is_srai));
        bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__cpu__DOT__is_srli));
        bufp->chgBit(oldp+15,(vlSelfRef.top__DOT__cpu__DOT__is_slli));
        bufp->chgBit(oldp+16,(vlSelfRef.top__DOT__cpu__DOT__is_add));
        bufp->chgBit(oldp+17,(vlSelfRef.top__DOT__cpu__DOT__is_sub));
        bufp->chgBit(oldp+18,(vlSelfRef.top__DOT__cpu__DOT__is_xor));
        bufp->chgBit(oldp+19,(vlSelfRef.top__DOT__cpu__DOT__is_or));
        bufp->chgBit(oldp+20,(vlSelfRef.top__DOT__cpu__DOT__is_and));
        bufp->chgBit(oldp+21,(vlSelfRef.top__DOT__cpu__DOT__is_mul));
        bufp->chgBit(oldp+22,(vlSelfRef.top__DOT__cpu__DOT__is_div));
        bufp->chgBit(oldp+23,(vlSelfRef.top__DOT__cpu__DOT__is_divu));
        bufp->chgBit(oldp+24,(vlSelfRef.top__DOT__cpu__DOT__is_rem));
        bufp->chgBit(oldp+25,(vlSelfRef.top__DOT__cpu__DOT__is_remu));
        bufp->chgBit(oldp+26,(vlSelfRef.top__DOT__cpu__DOT__is_slt));
        bufp->chgBit(oldp+27,(vlSelfRef.top__DOT__cpu__DOT__is_sltu));
        bufp->chgBit(oldp+28,(vlSelfRef.top__DOT__cpu__DOT__is_sll));
        bufp->chgBit(oldp+29,(vlSelfRef.top__DOT__cpu__DOT__is_srl));
        bufp->chgBit(oldp+30,(vlSelfRef.top__DOT__cpu__DOT__is_sra));
        bufp->chgBit(oldp+31,(vlSelfRef.top__DOT__cpu__DOT__is_sw));
        bufp->chgBit(oldp+32,(vlSelfRef.top__DOT__cpu__DOT__is_sb));
        bufp->chgBit(oldp+33,(vlSelfRef.top__DOT__cpu__DOT__is_sh));
        bufp->chgBit(oldp+34,(vlSelfRef.top__DOT__cpu__DOT__valid));
        bufp->chgBit(oldp+35,(vlSelfRef.top__DOT__cpu__DOT__wen));
        bufp->chgCData(oldp+36,(vlSelfRef.top__DOT__cpu__DOT__op),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__cpu__DOT__raddr),32);
        bufp->chgCData(oldp+38,(((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sw)
                                  ? 0xfU : ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sh)
                                             ? ((2U 
                                                 & vlSelfRef.top__DOT__cpu__DOT__raddr)
                                                 ? 0xcU
                                                 : 3U)
                                             : ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sb)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                                  ? 1U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                                    ? 4U
                                                    : 8U)))
                                                 : 0U)))),4);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__cpu__DOT__reg_wdata),32);
        bufp->chgCData(oldp+40,((3U & vlSelfRef.top__DOT__cpu__DOT__raddr)),2);
        bufp->chgCData(oldp+41,((0xffU & ((0U == (3U 
                                                  & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                           ? vlSelfRef.top__DOT__cpu__DOT__rdata
                                           : ((1U == 
                                               (3U 
                                                & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                               ? (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                                  >> 8U)
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                                   ? 
                                                  (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                                   >> 0x18U)))))),8);
        bufp->chgIData(oldp+42,((0xffU & ((0U == (3U 
                                                  & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                           ? vlSelfRef.top__DOT__cpu__DOT__rdata
                                           : ((1U == 
                                               (3U 
                                                & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                               ? (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                                  >> 8U)
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                                   ? 
                                                  (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                                   >> 0x18U)))))),32);
        bufp->chgSData(oldp+43,(vlSelfRef.top__DOT__cpu__DOT__r2byte),16);
        bufp->chgIData(oldp+44,((((- (IData)((1U & 
                                              ((IData)(vlSelfRef.top__DOT__cpu__DOT__r2byte) 
                                               >> 0xfU)))) 
                                  << 0x10U) | (IData)(vlSelfRef.top__DOT__cpu__DOT__r2byte))),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__cpu__DOT__r2byte),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__cpu__DOT__rdata),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__cpu__DOT__alu_a),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[0]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[1]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[2]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[3]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[4]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[5]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[6]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[7]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[8]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[9]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[10]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[11]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[12]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[13]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[14]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[15]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[16]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[17]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[18]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[19]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[20]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[21]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[22]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[23]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[24]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[25]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[26]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[27]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[28]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[29]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[30]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[31]),32);
    }
    bufp->chgBit(oldp+80,(vlSelfRef.clk));
    bufp->chgBit(oldp+81,(vlSelfRef.rst));
    bufp->chgIData(oldp+82,(vlSelfRef.pc),32);
    bufp->chgIData(oldp+83,(vlSelfRef.inst),32);
    bufp->chgIData(oldp+84,(vlSelfRef.halt_ret),32);
    bufp->chgBit(oldp+85,((0x100073U == vlSelfRef.inst)));
    bufp->chgIData(oldp+86,(vlSelfRef.top__DOT__cpu__DOT__pc_current),32);
    bufp->chgIData(oldp+87,(((0x6fU == (0x7fU & vlSelfRef.inst))
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
                              : ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_jalr)
                                  ? (0xfffffffeU & vlSelfRef.top__DOT__cpu__DOT__raddr)
                                  : ((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelfRef.inst)))
                                      ? ((IData)(vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_3)
                                          ? vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5
                                          : ((IData)(4U) 
                                             + vlSelfRef.top__DOT__cpu__DOT__pc_current))
                                      : ((IData)((0x1063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.inst)))
                                          ? ((IData)(vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_3)
                                              ? ((IData)(4U) 
                                                 + vlSelfRef.top__DOT__cpu__DOT__pc_current)
                                              : vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5)
                                          : ((IData)(
                                                     (0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.inst)))
                                              ? (VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT__rs1_data, vlSelfRef.top__DOT__cpu__DOT__rs2_data)
                                                  ? vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__cpu__DOT__pc_current))
                                              : ((IData)(
                                                         (0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.inst)))
                                                  ? 
                                                 ((vlSelfRef.top__DOT__cpu__DOT__rs1_data 
                                                   < vlSelfRef.top__DOT__cpu__DOT__rs2_data)
                                                   ? vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.top__DOT__cpu__DOT__pc_current))
                                                  : 
                                                 ((IData)(
                                                          (0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.inst)))
                                                   ? 
                                                  (VL_GTES_III(32, vlSelfRef.top__DOT__cpu__DOT__rs1_data, vlSelfRef.top__DOT__cpu__DOT__rs2_data)
                                                    ? vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.top__DOT__cpu__DOT__pc_current))
                                                   : 
                                                  ((IData)(
                                                           (0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.inst)))
                                                    ? 
                                                   ((vlSelfRef.top__DOT__cpu__DOT__rs1_data 
                                                     >= vlSelfRef.top__DOT__cpu__DOT__rs2_data)
                                                     ? vlSelfRef.top__DOT__cpu__DOT____VdfgRegularize_h79b3eccf_0_5
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelfRef.top__DOT__cpu__DOT__pc_current))
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.top__DOT__cpu__DOT__pc_current)))))))))),32);
    bufp->chgBit(oldp+88,((((IData)(vlSelfRef.top__DOT__cpu__DOT__is_addi) 
                            | ((0x17U == (0x7fU & vlSelfRef.inst)) 
                               | ((0x37U == (0x7fU 
                                             & vlSelfRef.inst)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSelfRef.inst)) 
                                     | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_jalr) 
                                        | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_andi) 
                                           | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_ori) 
                                              | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_add) 
                                                 | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_xori) 
                                                    | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sub) 
                                                       | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_xor) 
                                                          | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_and) 
                                                             | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_or) 
                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_slt) 
                                                                   | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sltu) 
                                                                      | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sll) 
                                                                         | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_srl) 
                                                                            | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_mul) 
                                                                               | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sra) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_div) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_divu) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_rem) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_remu) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_seqz) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_srai) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_slli) 
                                                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_srli))))))))))))))))))))))))))) 
                           | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lbu) 
                              | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lw) 
                                 | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lh) 
                                    | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_lhu)))))));
    bufp->chgCData(oldp+89,((0x7fU & vlSelfRef.inst)),7);
    bufp->chgCData(oldp+90,((0x1fU & (vlSelfRef.inst 
                                      >> 7U))),5);
    bufp->chgCData(oldp+91,((7U & (vlSelfRef.inst >> 0xcU))),3);
    bufp->chgCData(oldp+92,((0x1fU & (vlSelfRef.inst 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+93,((0x1fU & (vlSelfRef.inst 
                                      >> 0x14U))),5);
    bufp->chgIData(oldp+94,(VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__rs2_data, 
                                          VL_SHIFTL_III(32,32,32, 
                                                        (3U 
                                                         & vlSelfRef.top__DOT__cpu__DOT__raddr), 3U))),32);
    bufp->chgBit(oldp+95,((0x17U == (0x7fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+96,((0x37U == (0x7fU & vlSelfRef.inst))));
    bufp->chgIData(oldp+97,((((- (IData)((vlSelfRef.inst 
                                          >> 0x1fU))) 
                              << 0x14U) | (((0xff000U 
                                             & vlSelfRef.inst) 
                                            | (0x800U 
                                               & (vlSelfRef.inst 
                                                  >> 9U))) 
                                           | (0x7feU 
                                              & (vlSelfRef.inst 
                                                 >> 0x14U))))),32);
    bufp->chgIData(oldp+98,((0xfffff000U & vlSelfRef.inst)),32);
    bufp->chgIData(oldp+99,((((- (IData)((vlSelfRef.inst 
                                          >> 0x1fU))) 
                              << 0xdU) | (((0x1000U 
                                            & (vlSelfRef.inst 
                                               >> 0x13U)) 
                                           | (0x800U 
                                              & (vlSelfRef.inst 
                                                 << 4U))) 
                                          | ((0x7e0U 
                                              & (vlSelfRef.inst 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlSelfRef.inst 
                                                   >> 7U)))))),32);
    bufp->chgIData(oldp+100,(((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__pc_current)),32);
    bufp->chgBit(oldp+101,((0x6fU == (0x7fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+102,((IData)((0x1063U == (0x707fU 
                                                & vlSelfRef.inst)))));
    bufp->chgBit(oldp+103,((IData)((0x63U == (0x707fU 
                                              & vlSelfRef.inst)))));
    bufp->chgBit(oldp+104,((IData)((0x5063U == (0x707fU 
                                                & vlSelfRef.inst)))));
    bufp->chgBit(oldp+105,((IData)((0x7063U == (0x707fU 
                                                & vlSelfRef.inst)))));
    bufp->chgBit(oldp+106,((IData)((0x4063U == (0x707fU 
                                                & vlSelfRef.inst)))));
    bufp->chgBit(oldp+107,((IData)((0x6063U == (0x707fU 
                                                & vlSelfRef.inst)))));
    bufp->chgBit(oldp+108,(((IData)(vlSelfRef.top__DOT__cpu__DOT__is_addi) 
                            | ((0x17U == (0x7fU & vlSelfRef.inst)) 
                               | ((0x37U == (0x7fU 
                                             & vlSelfRef.inst)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSelfRef.inst)) 
                                     | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_jalr) 
                                        | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_andi) 
                                           | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_ori) 
                                              | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_add) 
                                                 | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_xori) 
                                                    | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sub) 
                                                       | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_xor) 
                                                          | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_and) 
                                                             | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_or) 
                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_slt) 
                                                                   | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sltu) 
                                                                      | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sll) 
                                                                         | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_srl) 
                                                                            | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_mul) 
                                                                               | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sra) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_div) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_divu) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_rem) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_remu) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_seqz) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_srai) 
                                                                                | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_slli) 
                                                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_srli)))))))))))))))))))))))))))));
    bufp->chgIData(oldp+109,(vlSelfRef.top__DOT__cpu__DOT__rs1_data),32);
    bufp->chgIData(oldp+110,(vlSelfRef.top__DOT__cpu__DOT__rs2_data),32);
    bufp->chgIData(oldp+111,(vlSelfRef.top__DOT__cpu__DOT__alu_b),32);
    bufp->chgCData(oldp+112,((vlSelfRef.inst >> 0x19U)),7);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
