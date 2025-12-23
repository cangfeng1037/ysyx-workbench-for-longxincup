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
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelfRef.top__DOT__cpu__DOT___idu_io_csr_raddr),12);
        bufp->chgSData(oldp+1,(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_waddr),12);
        bufp->chgBit(oldp+2,(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_wen));
        bufp->chgCData(oldp+3,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_op),4);
        bufp->chgBit(oldp+4,(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_csrrw));
        bufp->chgBit(oldp+5,(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_csrrs));
        bufp->chgBit(oldp+6,(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_jalr));
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lw));
        bufp->chgBit(oldp+8,(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sw));
        bufp->chgBit(oldp+9,(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lb));
        bufp->chgBit(oldp+10,(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sb));
        bufp->chgBit(oldp+11,(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lh));
        bufp->chgBit(oldp+12,(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sh));
        bufp->chgBit(oldp+13,(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lbu));
        bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lhu));
        bufp->chgBit(oldp+15,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_beq));
        bufp->chgBit(oldp+16,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bne));
        bufp->chgBit(oldp+17,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_blt));
        bufp->chgBit(oldp+18,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bltu));
        bufp->chgBit(oldp+19,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bge));
        bufp->chgBit(oldp+20,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bgeu));
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__imm_i),32);
        bufp->chgBit(oldp+22,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_load));
        bufp->chgBit(oldp+23,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srai));
        bufp->chgBit(oldp+24,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_srli));
        bufp->chgBit(oldp+25,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_slli));
        bufp->chgBit(oldp+26,(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_branch));
        bufp->chgBit(oldp+27,(vlSelfRef.top__DOT__cpu__DOT___mem_io_mem_wen));
        bufp->chgBit(oldp+28,(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_load));
        bufp->chgBit(oldp+29,(((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_load) 
                               | (IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_mem_wen))));
        bufp->chgBit(oldp+30,(vlSelfRef.top__DOT____Vcellinp__ebreak_box__is_ebreak));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__cpu__DOT___csr_io_csr_rdata),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__cpu__DOT___wb_io_csr_wdata),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__cpu__DOT___exu_io_branch_pc_branch),32);
        bufp->chgIData(oldp+39,((0xfffffffeU & (vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_a 
                                                + vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_alu_b))),32);
        bufp->chgBit(oldp+40,(((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_beq)
                                ? (vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data 
                                   == vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data)
                                : ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bne)
                                    ? (vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data 
                                       != vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data)
                                    : ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_blt)
                                        ? VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data, vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data)
                                        : ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bltu)
                                            ? (vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data 
                                               < vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data)
                                            : ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bge)
                                                ? VL_GTES_III(32, vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data, vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data)
                                                : ((IData)(vlSelfRef.top__DOT__cpu__DOT___idu_io_out_bits_is_bgeu) 
                                                   & (vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs1_data 
                                                      >= vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data)))))))));
        bufp->chgIData(oldp+41,(((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lb)
                                  ? (((- (IData)((1U 
                                                  & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT___rdata_byte_T_1 
                                                     >> 7U)))) 
                                      << 8U) | (0xffU 
                                                & vlSelfRef.top__DOT__cpu__DOT__mem__DOT___rdata_byte_T_1))
                                  : ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lbu)
                                      ? (0xffU & vlSelfRef.top__DOT__cpu__DOT__mem__DOT___rdata_byte_T_1)
                                      : ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lh)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.top__DOT__cpu__DOT__mem__DOT___rdata_half_T_1 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelfRef.top__DOT__cpu__DOT__mem__DOT___rdata_half_T_1))
                                          : ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lhu)
                                              ? (0xffffU 
                                                 & vlSelfRef.top__DOT__cpu__DOT__mem__DOT___rdata_half_T_1)
                                              : ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_lw)
                                                  ? vlSelfRef.top__DOT__cpu__DOT___mem_blackbox_rdata
                                                  : 0U)))))),32);
        bufp->chgCData(oldp+42,((0xfU & ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sb)
                                          ? ((IData)(1U) 
                                             << (3U 
                                                 & vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp))
                                          : ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sh)
                                              ? ((2U 
                                                  & vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp)
                                                  ? 0xcU
                                                  : 3U)
                                              : (- (IData)((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sw))))))),4);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__cpu__DOT___mem_blackbox_rdata),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__cpu__DOT___wb_io_rd_data),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp_0),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mtvec),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mepc),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mcause),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__cpu__DOT__csr__DOT__mstatus),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__cpu__DOT__ifu__DOT__pc),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_0),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_1),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_2),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_3),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_4),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_5),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_6),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_7),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_8),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_9),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_10),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_11),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_12),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_13),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_14),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_15),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_16),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_17),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_18),32);
        bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_19),32);
        bufp->chgIData(oldp+72,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_20),32);
        bufp->chgIData(oldp+73,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_21),32);
        bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_22),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_23),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_24),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_25),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_26),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_27),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_28),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_29),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_30),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_31),32);
    }
    bufp->chgBit(oldp+84,(vlSelfRef.clock));
    bufp->chgBit(oldp+85,(vlSelfRef.reset));
    bufp->chgIData(oldp+86,(vlSelfRef.io_pc),32);
    bufp->chgIData(oldp+87,(vlSelfRef.io_inst),32);
    bufp->chgBit(oldp+88,(vlSelfRef.io_halt_ret));
    bufp->chgBit(oldp+89,(vlSelfRef.io_non_inst));
    bufp->chgIData(oldp+90,(vlSelfRef.io_gpr_0),32);
    bufp->chgIData(oldp+91,(vlSelfRef.io_gpr_1),32);
    bufp->chgIData(oldp+92,(vlSelfRef.io_gpr_2),32);
    bufp->chgIData(oldp+93,(vlSelfRef.io_gpr_3),32);
    bufp->chgIData(oldp+94,(vlSelfRef.io_gpr_4),32);
    bufp->chgIData(oldp+95,(vlSelfRef.io_gpr_5),32);
    bufp->chgIData(oldp+96,(vlSelfRef.io_gpr_6),32);
    bufp->chgIData(oldp+97,(vlSelfRef.io_gpr_7),32);
    bufp->chgIData(oldp+98,(vlSelfRef.io_gpr_8),32);
    bufp->chgIData(oldp+99,(vlSelfRef.io_gpr_9),32);
    bufp->chgIData(oldp+100,(vlSelfRef.io_gpr_10),32);
    bufp->chgIData(oldp+101,(vlSelfRef.io_gpr_11),32);
    bufp->chgIData(oldp+102,(vlSelfRef.io_gpr_12),32);
    bufp->chgIData(oldp+103,(vlSelfRef.io_gpr_13),32);
    bufp->chgIData(oldp+104,(vlSelfRef.io_gpr_14),32);
    bufp->chgIData(oldp+105,(vlSelfRef.io_gpr_15),32);
    bufp->chgIData(oldp+106,(vlSelfRef.io_gpr_16),32);
    bufp->chgIData(oldp+107,(vlSelfRef.io_gpr_17),32);
    bufp->chgIData(oldp+108,(vlSelfRef.io_gpr_18),32);
    bufp->chgIData(oldp+109,(vlSelfRef.io_gpr_19),32);
    bufp->chgIData(oldp+110,(vlSelfRef.io_gpr_20),32);
    bufp->chgIData(oldp+111,(vlSelfRef.io_gpr_21),32);
    bufp->chgIData(oldp+112,(vlSelfRef.io_gpr_22),32);
    bufp->chgIData(oldp+113,(vlSelfRef.io_gpr_23),32);
    bufp->chgIData(oldp+114,(vlSelfRef.io_gpr_24),32);
    bufp->chgIData(oldp+115,(vlSelfRef.io_gpr_25),32);
    bufp->chgIData(oldp+116,(vlSelfRef.io_gpr_26),32);
    bufp->chgIData(oldp+117,(vlSelfRef.io_gpr_27),32);
    bufp->chgIData(oldp+118,(vlSelfRef.io_gpr_28),32);
    bufp->chgIData(oldp+119,(vlSelfRef.io_gpr_29),32);
    bufp->chgIData(oldp+120,(vlSelfRef.io_gpr_30),32);
    bufp->chgIData(oldp+121,(vlSelfRef.io_gpr_31),32);
    bufp->chgBit(oldp+122,((0x73U == vlSelfRef.io_inst)));
    bufp->chgBit(oldp+123,((0x30200073U == vlSelfRef.io_inst)));
    bufp->chgCData(oldp+124,((0x1fU & (vlSelfRef.io_inst 
                                       >> 7U))),5);
    bufp->chgBit(oldp+125,(((IData)(vlSelfRef.top__DOT__cpu__DOT__idu__DOT__is_load) 
                            | ((0x37U == (0x7fU & vlSelfRef.io_inst)) 
                               | ((0x17U == (0x7fU 
                                             & vlSelfRef.io_inst)) 
                                  | ((0x33U == (0x7fU 
                                                & vlSelfRef.io_inst)) 
                                     | ((0x6fU == (0x7fU 
                                                   & vlSelfRef.io_inst)) 
                                        | ((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_jalr) 
                                           | ((0x13U 
                                               == (0x7fU 
                                                   & vlSelfRef.io_inst)) 
                                              | (((IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_csrrw) 
                                                  | (IData)(vlSelfRef.top__DOT__cpu__DOT___mem_io_out_bits_is_csrrs)) 
                                                 & (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.io_inst 
                                                        >> 7U)))))))))))));
    bufp->chgBit(oldp+126,((0x6fU == (0x7fU & vlSelfRef.io_inst))));
    bufp->chgCData(oldp+127,((0x1fU & (vlSelfRef.io_inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+128,((0x1fU & (vlSelfRef.io_inst 
                                       >> 0x14U))),5);
    bufp->chgBit(oldp+129,((0x17U == (0x7fU & vlSelfRef.io_inst))));
    bufp->chgBit(oldp+130,((0x37U == (0x7fU & vlSelfRef.io_inst))));
    bufp->chgBit(oldp+131,((0x13U == (0x7fU & vlSelfRef.io_inst))));
    bufp->chgBit(oldp+132,((0x33U == (0x7fU & vlSelfRef.io_inst))));
    bufp->chgBit(oldp+133,((0x73U == (0x7fU & vlSelfRef.io_inst))));
    bufp->chgIData(oldp+134,(((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sb)
                               ? (((0U == (0x1fU & 
                                           (vlSelfRef.io_inst 
                                            >> 0x14U)))
                                    ? 0U : (0xffU & vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp_0)) 
                                  << (0x18U & (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp 
                                               << 3U)))
                               : ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sh)
                                   ? (((0U == (0x1fU 
                                               & (vlSelfRef.io_inst 
                                                  >> 0x14U)))
                                        ? 0U : (0xffffU 
                                                & vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__casez_tmp_0)) 
                                      << (0x10U & (vlSelfRef.top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp 
                                                   << 3U)))
                                   : ((IData)(vlSelfRef.top__DOT__cpu__DOT___exu_io_out_bits_is_sw)
                                       ? vlSelfRef.top__DOT__cpu__DOT___regfile_io_rs2_data
                                       : 0U)))),32);
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
}
