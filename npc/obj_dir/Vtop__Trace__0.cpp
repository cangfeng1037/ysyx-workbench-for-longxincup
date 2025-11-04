// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(((IData)(vlSelf->top__DOT__cpu__DOT____VdfgTmp_hab3eb5ba__0) 
                              | ((IData)(vlSelf->top__DOT__cpu__DOT__is_csrrs) 
                                 | (IData)(vlSelf->top__DOT__cpu__DOT__is_csrrw)))));
        bufp->chgBit(oldp+1,(((IData)(vlSelf->top__DOT__cpu__DOT__is_lw) 
                              | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lbu) 
                                 | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lh) 
                                    | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lb) 
                                       | (IData)(vlSelf->top__DOT__cpu__DOT__is_lhu)))))));
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__cpu__DOT__imm_i),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__cpu__DOT__imm_s),32);
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__cpu__DOT__is_jalr));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__cpu__DOT__is_addi));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__cpu__DOT__is_andi));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__cpu__DOT__is_ori));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__cpu__DOT__is_xori));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__cpu__DOT__is_lw));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__cpu__DOT__is_lbu));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__cpu__DOT__is_lh));
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__cpu__DOT__is_lhu));
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__cpu__DOT__is_seqz));
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__cpu__DOT__is_srai));
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__cpu__DOT__is_srli));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__cpu__DOT__is_slli));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__cpu__DOT__is_add));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__cpu__DOT__is_sub));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__cpu__DOT__is_xor));
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__cpu__DOT__is_or));
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__cpu__DOT__is_and));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__cpu__DOT__is_mul));
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__cpu__DOT__is_div));
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__cpu__DOT__is_divu));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__cpu__DOT__is_rem));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__cpu__DOT__is_remu));
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__cpu__DOT__is_slt));
        bufp->chgBit(oldp+28,(vlSelf->top__DOT__cpu__DOT__is_sltu));
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__cpu__DOT__is_sll));
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__cpu__DOT__is_srl));
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__cpu__DOT__is_sra));
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__cpu__DOT__is_bne));
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__cpu__DOT__is_beq));
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__cpu__DOT__is_bge));
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__cpu__DOT__is_bgeu));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__cpu__DOT__is_blt));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__cpu__DOT__is_bltu));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__cpu__DOT__is_sw));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__cpu__DOT__is_sb));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__cpu__DOT__is_sh));
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__cpu__DOT__is_lb));
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__cpu__DOT__is_csrrw));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__cpu__DOT__is_csrrs));
        bufp->chgSData(oldp+44,(vlSelf->top__DOT__cpu__DOT__csr_raddr),12);
        bufp->chgSData(oldp+45,(vlSelf->top__DOT__cpu__DOT__csr_waddr),12);
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__cpu__DOT__csr_wen));
        bufp->chgBit(oldp+47,(((IData)(vlSelf->top__DOT__cpu__DOT__is_lw) 
                               | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lbu) 
                                  | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lhu) 
                                     | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lh) 
                                        | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lb) 
                                           | (IData)(vlSelf->top__DOT__cpu__DOT__wen))))))));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__cpu__DOT__wen));
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__cpu__DOT__op),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__cpu__DOT__alu_out),32);
        bufp->chgCData(oldp+51,(((IData)(vlSelf->top__DOT__cpu__DOT__is_sw)
                                  ? 0xfU : ((IData)(vlSelf->top__DOT__cpu__DOT__is_sh)
                                             ? ((2U 
                                                 & vlSelf->top__DOT__cpu__DOT__alu_out)
                                                 ? 0xcU
                                                 : 3U)
                                             : ((IData)(vlSelf->top__DOT__cpu__DOT__is_sb)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->top__DOT__cpu__DOT__alu_out))
                                                  ? 1U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->top__DOT__cpu__DOT__alu_out))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->top__DOT__cpu__DOT__alu_out))
                                                    ? 4U
                                                    : 8U)))
                                                 : 0U)))),4);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__cpu__DOT__reg_wdata),32);
        bufp->chgCData(oldp+53,((3U & vlSelf->top__DOT__cpu__DOT__alu_out)),2);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__cpu__DOT__rbyte),8);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__cpu__DOT__rbyte),32);
        bufp->chgSData(oldp+56,(vlSelf->top__DOT__cpu__DOT__r2byte),16);
        bufp->chgIData(oldp+57,((((- (IData)((1U & 
                                              ((IData)(vlSelf->top__DOT__cpu__DOT__r2byte) 
                                               >> 0xfU)))) 
                                  << 0x10U) | (IData)(vlSelf->top__DOT__cpu__DOT__r2byte))),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__cpu__DOT__r2byte),32);
        bufp->chgIData(oldp+59,((((- (IData)((1U & 
                                              ((IData)(vlSelf->top__DOT__cpu__DOT__rbyte) 
                                               >> 7U)))) 
                                  << 8U) | (IData)(vlSelf->top__DOT__cpu__DOT__rbyte))),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__cpu__DOT__rdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__cpu__DOT__pc_current),32);
        bufp->chgIData(oldp+62,(((IData)(4U) + vlSelf->top__DOT__cpu__DOT__pc_current)),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__cpu__DOT__csr__DOT__mepc),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__cpu__DOT__csr__DOT__mstatus),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__cpu__DOT__csr__DOT__mtvec),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__cpu__DOT__csr__DOT__mcause),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[0]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[1]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[2]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[3]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[4]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[5]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[6]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[7]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[8]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[9]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[10]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[11]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[12]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[13]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[14]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[15]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[16]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[17]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[18]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[19]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[20]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[21]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[22]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[23]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[24]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[25]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[26]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[27]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[28]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[29]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[30]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[31]),32);
    }
    bufp->chgBit(oldp+99,(vlSelf->clk));
    bufp->chgBit(oldp+100,(vlSelf->rst));
    bufp->chgIData(oldp+101,(vlSelf->pc),32);
    bufp->chgIData(oldp+102,(vlSelf->inst),32);
    bufp->chgIData(oldp+103,(vlSelf->halt_ret),32);
    bufp->chgBit(oldp+104,(vlSelf->non_inst));
    bufp->chgBit(oldp+105,((0x100073U == vlSelf->inst)));
    bufp->chgIData(oldp+106,(((0x6fU == (0x7fU & vlSelf->inst))
                               ? ((((- (IData)((vlSelf->inst 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->inst 
                                                          >> 0x14U))))) 
                                  + vlSelf->top__DOT__cpu__DOT__pc_current)
                               : ((IData)(vlSelf->top__DOT__cpu__DOT__is_jalr)
                                   ? (0xfffffffeU & vlSelf->top__DOT__cpu__DOT__alu_out)
                                   : ((IData)(vlSelf->top__DOT__cpu__DOT__is_beq)
                                       ? ((IData)(vlSelf->top__DOT__cpu__DOT____VdfgTmp_h42b8e437__0)
                                           ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__cpu__DOT__pc_current))
                                       : ((IData)(vlSelf->top__DOT__cpu__DOT__is_bne)
                                           ? ((IData)(vlSelf->top__DOT__cpu__DOT____VdfgTmp_h42b8e437__0)
                                               ? ((IData)(4U) 
                                                  + vlSelf->top__DOT__cpu__DOT__pc_current)
                                               : vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0)
                                           : ((IData)(vlSelf->top__DOT__cpu__DOT__is_blt)
                                               ? (VL_LTS_III(32, vlSelf->top__DOT__cpu__DOT__rs1_data, vlSelf->top__DOT__cpu__DOT__rs2_data)
                                                   ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__cpu__DOT__pc_current))
                                               : ((IData)(vlSelf->top__DOT__cpu__DOT__is_bltu)
                                                   ? 
                                                  ((vlSelf->top__DOT__cpu__DOT__rs1_data 
                                                    < vlSelf->top__DOT__cpu__DOT__rs2_data)
                                                    ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__cpu__DOT__pc_current))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__cpu__DOT__is_bge)
                                                    ? 
                                                   (VL_GTES_III(32, vlSelf->top__DOT__cpu__DOT__rs1_data, vlSelf->top__DOT__cpu__DOT__rs2_data)
                                                     ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->top__DOT__cpu__DOT__pc_current))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__is_bgeu)
                                                     ? 
                                                    ((vlSelf->top__DOT__cpu__DOT__rs1_data 
                                                      >= vlSelf->top__DOT__cpu__DOT__rs2_data)
                                                      ? vlSelf->top__DOT__cpu__DOT____VdfgTmp_hace3731b__0
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelf->top__DOT__cpu__DOT__pc_current))
                                                     : 
                                                    ((0x73U 
                                                      == vlSelf->inst)
                                                      ? vlSelf->top__DOT__cpu__DOT__csr_rdata
                                                      : 
                                                     ((0x30200073U 
                                                       == vlSelf->inst)
                                                       ? vlSelf->top__DOT__cpu__DOT__csr_rdata
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelf->top__DOT__cpu__DOT__pc_current)))))))))))),32);
    bufp->chgCData(oldp+107,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+108,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->chgCData(oldp+109,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+110,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+111,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgIData(oldp+112,(((0x1fU >= (0x18U & (vlSelf->top__DOT__cpu__DOT__alu_out 
                                                  << 3U)))
                               ? (vlSelf->top__DOT__cpu__DOT__rs2_data 
                                  << (0x18U & (vlSelf->top__DOT__cpu__DOT__alu_out 
                                               << 3U)))
                               : 0U)),32);
    bufp->chgBit(oldp+113,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+114,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->chgIData(oldp+115,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->inst) 
                                            | ((0x800U 
                                                & (vlSelf->inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)))))),32);
    bufp->chgIData(oldp+116,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+117,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xdU) | ((0x1000U 
                                            & (vlSelf->inst 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlSelf->inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->inst 
                                                       >> 7U))))))),32);
    bufp->chgBit(oldp+118,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+119,((0x73U == vlSelf->inst)));
    bufp->chgBit(oldp+120,((0x30200073U == vlSelf->inst)));
    bufp->chgBit(oldp+121,(((IData)(vlSelf->top__DOT__cpu__DOT__is_addi) 
                            | ((0x37U == (0x7fU & vlSelf->inst)) 
                               | ((0x17U == (0x7fU 
                                             & vlSelf->inst)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSelf->inst)) 
                                     | ((IData)(vlSelf->top__DOT__cpu__DOT__is_jalr) 
                                        | ((IData)(vlSelf->top__DOT__cpu__DOT__is_andi) 
                                           | ((IData)(vlSelf->top__DOT__cpu__DOT__is_ori) 
                                              | ((IData)(vlSelf->top__DOT__cpu__DOT__is_xori) 
                                                 | ((IData)(vlSelf->top__DOT__cpu__DOT__is_add) 
                                                    | ((IData)(vlSelf->top__DOT__cpu__DOT__is_sub) 
                                                       | ((IData)(vlSelf->top__DOT__cpu__DOT__is_xor) 
                                                          | ((IData)(vlSelf->top__DOT__cpu__DOT__is_or) 
                                                             | ((IData)(vlSelf->top__DOT__cpu__DOT__is_and) 
                                                                | ((IData)(vlSelf->top__DOT__cpu__DOT__is_slt) 
                                                                   | ((IData)(vlSelf->top__DOT__cpu__DOT__is_sltu) 
                                                                      | ((IData)(vlSelf->top__DOT__cpu__DOT__is_sll) 
                                                                         | ((IData)(vlSelf->top__DOT__cpu__DOT__is_srl) 
                                                                            | ((IData)(vlSelf->top__DOT__cpu__DOT__is_sra) 
                                                                               | ((IData)(vlSelf->top__DOT__cpu__DOT__is_mul) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu__DOT__is_div) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu__DOT__is_divu) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu__DOT__is_rem) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu__DOT__is_remu) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu__DOT__is_seqz) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu__DOT__is_srai) 
                                                                                | ((IData)(vlSelf->top__DOT__cpu__DOT__is_slli) 
                                                                                | (IData)(vlSelf->top__DOT__cpu__DOT__is_srli)))))))))))))))))))))))))))));
    bufp->chgIData(oldp+122,(vlSelf->top__DOT__cpu__DOT__rs1_data),32);
    bufp->chgIData(oldp+123,(vlSelf->top__DOT__cpu__DOT__rs2_data),32);
    bufp->chgIData(oldp+124,(vlSelf->top__DOT__cpu__DOT__csr_rdata),32);
    bufp->chgIData(oldp+125,(vlSelf->top__DOT__cpu__DOT__csr_wdata),32);
    bufp->chgIData(oldp+126,(vlSelf->top__DOT__cpu__DOT__alu_a),32);
    bufp->chgIData(oldp+127,(vlSelf->top__DOT__cpu__DOT__alu_b),32);
    bufp->chgCData(oldp+128,((vlSelf->inst >> 0x19U)),7);
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
