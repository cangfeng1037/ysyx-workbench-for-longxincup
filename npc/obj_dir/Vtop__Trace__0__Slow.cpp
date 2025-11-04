// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBus(c+103,"inst", false,-1, 31,0);
    tracep->declBus(c+104,"halt_ret", false,-1, 31,0);
    tracep->declBit(c+105,"non_inst", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBus(c+103,"inst", false,-1, 31,0);
    tracep->declBus(c+104,"halt_ret", false,-1, 31,0);
    tracep->declBit(c+105,"non_inst", false,-1);
    tracep->declBit(c+106,"is_ebreak", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+130,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+131,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBus(c+103,"inst", false,-1, 31,0);
    tracep->declBus(c+104,"halt_ret", false,-1, 31,0);
    tracep->declBit(c+105,"non_inst", false,-1);
    tracep->declBus(c+62,"pc_current", false,-1, 31,0);
    tracep->declBus(c+107,"pc_next", false,-1, 31,0);
    tracep->declBit(c+132,"pc_wen", false,-1);
    tracep->declBit(c+1,"reg_wen", false,-1);
    tracep->declBit(c+2,"is_load", false,-1);
    tracep->declBus(c+108,"opcode", false,-1, 6,0);
    tracep->declBus(c+109,"rd", false,-1, 4,0);
    tracep->declBus(c+110,"funct3", false,-1, 2,0);
    tracep->declBus(c+111,"rs1", false,-1, 4,0);
    tracep->declBus(c+112,"rs2", false,-1, 4,0);
    tracep->declBus(c+51,"raddr", false,-1, 31,0);
    tracep->declBus(c+51,"waddr", false,-1, 31,0);
    tracep->declBus(c+113,"wdata", false,-1, 31,0);
    tracep->declBus(c+52,"wmask", false,-1, 3,0);
    tracep->declBit(c+114,"is_auipc", false,-1);
    tracep->declBit(c+115,"is_lui", false,-1);
    tracep->declBus(c+51,"alu_out", false,-1, 31,0);
    tracep->declBus(c+116,"imm_j", false,-1, 31,0);
    tracep->declBus(c+117,"imm_u", false,-1, 31,0);
    tracep->declBus(c+3,"imm_i", false,-1, 31,0);
    tracep->declBus(c+118,"imm_b", false,-1, 31,0);
    tracep->declBus(c+4,"imm_s", false,-1, 31,0);
    tracep->declBus(c+63,"snpc", false,-1, 31,0);
    tracep->declBus(c+107,"dnpc", false,-1, 31,0);
    tracep->declBit(c+119,"is_jal", false,-1);
    tracep->declBit(c+5,"is_jalr", false,-1);
    tracep->declBit(c+6,"is_addi", false,-1);
    tracep->declBit(c+7,"is_andi", false,-1);
    tracep->declBit(c+8,"is_ori", false,-1);
    tracep->declBit(c+9,"is_xori", false,-1);
    tracep->declBit(c+10,"is_lw", false,-1);
    tracep->declBit(c+11,"is_lbu", false,-1);
    tracep->declBit(c+12,"is_lh", false,-1);
    tracep->declBit(c+13,"is_lhu", false,-1);
    tracep->declBit(c+14,"is_seqz", false,-1);
    tracep->declBit(c+15,"is_srai", false,-1);
    tracep->declBit(c+16,"is_srli", false,-1);
    tracep->declBit(c+17,"is_slli", false,-1);
    tracep->declBit(c+18,"is_add", false,-1);
    tracep->declBit(c+19,"is_sub", false,-1);
    tracep->declBit(c+20,"is_xor", false,-1);
    tracep->declBit(c+21,"is_or", false,-1);
    tracep->declBit(c+22,"is_and", false,-1);
    tracep->declBit(c+23,"is_mul", false,-1);
    tracep->declBit(c+133,"is_mulh", false,-1);
    tracep->declBit(c+24,"is_div", false,-1);
    tracep->declBit(c+25,"is_divu", false,-1);
    tracep->declBit(c+26,"is_rem", false,-1);
    tracep->declBit(c+27,"is_remu", false,-1);
    tracep->declBit(c+28,"is_slt", false,-1);
    tracep->declBit(c+29,"is_sltu", false,-1);
    tracep->declBit(c+30,"is_sll", false,-1);
    tracep->declBit(c+31,"is_srl", false,-1);
    tracep->declBit(c+32,"is_sra", false,-1);
    tracep->declBit(c+33,"is_bne", false,-1);
    tracep->declBit(c+34,"is_beq", false,-1);
    tracep->declBit(c+35,"is_bge", false,-1);
    tracep->declBit(c+36,"is_bgeu", false,-1);
    tracep->declBit(c+37,"is_blt", false,-1);
    tracep->declBit(c+38,"is_bltu", false,-1);
    tracep->declBit(c+39,"is_sw", false,-1);
    tracep->declBit(c+40,"is_sb", false,-1);
    tracep->declBit(c+41,"is_sh", false,-1);
    tracep->declBit(c+42,"is_lb", false,-1);
    tracep->declBit(c+120,"is_ecall", false,-1);
    tracep->declBit(c+121,"is_mret", false,-1);
    tracep->declBit(c+43,"is_csrrw", false,-1);
    tracep->declBit(c+44,"is_csrrs", false,-1);
    tracep->declBit(c+122,"reg_wen_normal", false,-1);
    tracep->declBus(c+123,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+124,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+53,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+134,"load_wdata", false,-1, 31,0);
    tracep->declBus(c+54,"byte_off", false,-1, 1,0);
    tracep->declBus(c+55,"rbyte", false,-1, 7,0);
    tracep->declBus(c+56,"lbu_data", false,-1, 31,0);
    tracep->declBus(c+57,"r2byte", false,-1, 15,0);
    tracep->declBus(c+58,"lh_data", false,-1, 31,0);
    tracep->declBus(c+59,"lhu_data", false,-1, 31,0);
    tracep->declBus(c+60,"lb_data", false,-1, 31,0);
    tracep->declBus(c+125,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+45,"csr_raddr", false,-1, 11,0);
    tracep->declBus(c+46,"csr_waddr", false,-1, 11,0);
    tracep->declBus(c+126,"csr_wdata", false,-1, 31,0);
    tracep->declBit(c+47,"csr_wen", false,-1);
    tracep->declBus(c+61,"rdata", false,-1, 31,0);
    tracep->declBit(c+48,"valid", false,-1);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->declBus(c+50,"op", false,-1, 3,0);
    tracep->declBus(c+127,"alu_a", false,-1, 31,0);
    tracep->declBus(c+128,"alu_b", false,-1, 31,0);
    tracep->declBus(c+54,"addr_off", false,-1, 1,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+127,"a", false,-1, 31,0);
    tracep->declBus(c+128,"b", false,-1, 31,0);
    tracep->declBus(c+51,"y", false,-1, 31,0);
    tracep->declBus(c+50,"op", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBus(c+135,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+131,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+45,"csr_raddr", false,-1, 11,0);
    tracep->declBus(c+46,"csr_waddr", false,-1, 11,0);
    tracep->declBus(c+126,"csr_wdata", false,-1, 31,0);
    tracep->declBit(c+47,"csr_wen", false,-1);
    tracep->declBit(c+120,"is_ecall", false,-1);
    tracep->declBit(c+121,"is_mret", false,-1);
    tracep->declBus(c+125,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+64,"mepc", false,-1, 31,0);
    tracep->declBus(c+65,"mstatus", false,-1, 31,0);
    tracep->declBus(c+66,"mtvec", false,-1, 31,0);
    tracep->declBus(c+67,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+103,"inst", false,-1, 31,0);
    tracep->declBus(c+108,"opcode", false,-1, 6,0);
    tracep->declBus(c+109,"rd", false,-1, 4,0);
    tracep->declBus(c+110,"funct3", false,-1, 2,0);
    tracep->declBus(c+111,"rs1", false,-1, 4,0);
    tracep->declBus(c+112,"rs2", false,-1, 4,0);
    tracep->declBus(c+3,"imm_i", false,-1, 31,0);
    tracep->declBus(c+117,"imm_u", false,-1, 31,0);
    tracep->declBus(c+116,"imm_j", false,-1, 31,0);
    tracep->declBus(c+118,"imm_b", false,-1, 31,0);
    tracep->declBus(c+4,"imm_s", false,-1, 31,0);
    tracep->declBit(c+114,"is_auipc", false,-1);
    tracep->declBit(c+115,"is_lui", false,-1);
    tracep->declBit(c+119,"is_jal", false,-1);
    tracep->declBit(c+5,"is_jalr", false,-1);
    tracep->declBit(c+6,"is_addi", false,-1);
    tracep->declBit(c+7,"is_andi", false,-1);
    tracep->declBit(c+8,"is_ori", false,-1);
    tracep->declBit(c+9,"is_xori", false,-1);
    tracep->declBit(c+10,"is_lw", false,-1);
    tracep->declBit(c+11,"is_lbu", false,-1);
    tracep->declBit(c+12,"is_lh", false,-1);
    tracep->declBit(c+13,"is_lhu", false,-1);
    tracep->declBit(c+42,"is_lb", false,-1);
    tracep->declBit(c+14,"is_seqz", false,-1);
    tracep->declBit(c+15,"is_srai", false,-1);
    tracep->declBit(c+16,"is_srli", false,-1);
    tracep->declBit(c+17,"is_slli", false,-1);
    tracep->declBit(c+18,"is_add", false,-1);
    tracep->declBit(c+19,"is_sub", false,-1);
    tracep->declBit(c+20,"is_xor", false,-1);
    tracep->declBit(c+21,"is_or", false,-1);
    tracep->declBit(c+22,"is_and", false,-1);
    tracep->declBit(c+23,"is_mul", false,-1);
    tracep->declBit(c+24,"is_div", false,-1);
    tracep->declBit(c+25,"is_divu", false,-1);
    tracep->declBit(c+26,"is_rem", false,-1);
    tracep->declBit(c+27,"is_remu", false,-1);
    tracep->declBit(c+28,"is_slt", false,-1);
    tracep->declBit(c+29,"is_sltu", false,-1);
    tracep->declBit(c+30,"is_sll", false,-1);
    tracep->declBit(c+31,"is_srl", false,-1);
    tracep->declBit(c+32,"is_sra", false,-1);
    tracep->declBit(c+33,"is_bne", false,-1);
    tracep->declBit(c+34,"is_beq", false,-1);
    tracep->declBit(c+35,"is_bge", false,-1);
    tracep->declBit(c+36,"is_bgeu", false,-1);
    tracep->declBit(c+37,"is_blt", false,-1);
    tracep->declBit(c+38,"is_bltu", false,-1);
    tracep->declBit(c+39,"is_sw", false,-1);
    tracep->declBit(c+40,"is_sb", false,-1);
    tracep->declBit(c+41,"is_sh", false,-1);
    tracep->declBit(c+120,"is_ecall", false,-1);
    tracep->declBit(c+121,"is_mret", false,-1);
    tracep->declBit(c+43,"is_csrrw", false,-1);
    tracep->declBit(c+44,"is_csrrs", false,-1);
    tracep->declBus(c+129,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+48,"valid", false,-1);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->declBus(c+51,"raddr", false,-1, 31,0);
    tracep->declBus(c+51,"waddr", false,-1, 31,0);
    tracep->declBus(c+113,"wdata", false,-1, 31,0);
    tracep->declBus(c+52,"wmask", false,-1, 3,0);
    tracep->declBus(c+61,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+131,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+136,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+107,"din", false,-1, 31,0);
    tracep->declBus(c+62,"dout", false,-1, 31,0);
    tracep->declBit(c+132,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+130,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+131,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+111,"rs1", false,-1, 4,0);
    tracep->declBus(c+123,"rdata1", false,-1, 31,0);
    tracep->declBus(c+112,"rs2", false,-1, 4,0);
    tracep->declBus(c+124,"rdata2", false,-1, 31,0);
    tracep->declBus(c+109,"rd", false,-1, 4,0);
    tracep->declBus(c+53,"din", false,-1, 31,0);
    tracep->declBit(c+1,"wen", false,-1);
    tracep->declBus(c+104,"x10_value", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+68+i*1,"regs_out", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(((IData)(vlSelf->top__DOT__cpu__DOT____VdfgTmp_hab3eb5ba__0) 
                           | ((IData)(vlSelf->top__DOT__cpu__DOT__is_csrrs) 
                              | (IData)(vlSelf->top__DOT__cpu__DOT__is_csrrw)))));
    bufp->fullBit(oldp+2,(((IData)(vlSelf->top__DOT__cpu__DOT__is_lw) 
                           | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lbu) 
                              | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lh) 
                                 | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lb) 
                                    | (IData)(vlSelf->top__DOT__cpu__DOT__is_lhu)))))));
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__cpu__DOT__imm_i),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__cpu__DOT__imm_s),32);
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__cpu__DOT__is_jalr));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__cpu__DOT__is_addi));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__cpu__DOT__is_andi));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__cpu__DOT__is_ori));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__cpu__DOT__is_xori));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__cpu__DOT__is_lw));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__cpu__DOT__is_lbu));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__cpu__DOT__is_lh));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__cpu__DOT__is_lhu));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__cpu__DOT__is_seqz));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__cpu__DOT__is_srai));
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__cpu__DOT__is_srli));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__cpu__DOT__is_slli));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__cpu__DOT__is_add));
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__cpu__DOT__is_sub));
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__cpu__DOT__is_xor));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__cpu__DOT__is_or));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__cpu__DOT__is_and));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__cpu__DOT__is_mul));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__cpu__DOT__is_div));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__cpu__DOT__is_divu));
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__cpu__DOT__is_rem));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__cpu__DOT__is_remu));
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__cpu__DOT__is_slt));
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__cpu__DOT__is_sltu));
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__cpu__DOT__is_sll));
    bufp->fullBit(oldp+31,(vlSelf->top__DOT__cpu__DOT__is_srl));
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__cpu__DOT__is_sra));
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__cpu__DOT__is_bne));
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__cpu__DOT__is_beq));
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__cpu__DOT__is_bge));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__cpu__DOT__is_bgeu));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__cpu__DOT__is_blt));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__cpu__DOT__is_bltu));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__cpu__DOT__is_sw));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__cpu__DOT__is_sb));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__cpu__DOT__is_sh));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__cpu__DOT__is_lb));
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__cpu__DOT__is_csrrw));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__cpu__DOT__is_csrrs));
    bufp->fullSData(oldp+45,(vlSelf->top__DOT__cpu__DOT__csr_raddr),12);
    bufp->fullSData(oldp+46,(vlSelf->top__DOT__cpu__DOT__csr_waddr),12);
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__cpu__DOT__csr_wen));
    bufp->fullBit(oldp+48,(((IData)(vlSelf->top__DOT__cpu__DOT__is_lw) 
                            | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lbu) 
                               | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lhu) 
                                  | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lh) 
                                     | ((IData)(vlSelf->top__DOT__cpu__DOT__is_lb) 
                                        | (IData)(vlSelf->top__DOT__cpu__DOT__wen))))))));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__cpu__DOT__wen));
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__cpu__DOT__op),4);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__cpu__DOT__alu_out),32);
    bufp->fullCData(oldp+52,(((IData)(vlSelf->top__DOT__cpu__DOT__is_sw)
                               ? 0xfU : ((IData)(vlSelf->top__DOT__cpu__DOT__is_sh)
                                          ? ((2U & vlSelf->top__DOT__cpu__DOT__alu_out)
                                              ? 0xcU
                                              : 3U)
                                          : ((IData)(vlSelf->top__DOT__cpu__DOT__is_sb)
                                              ? ((0U 
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
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__cpu__DOT__reg_wdata),32);
    bufp->fullCData(oldp+54,((3U & vlSelf->top__DOT__cpu__DOT__alu_out)),2);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__cpu__DOT__rbyte),8);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__cpu__DOT__rbyte),32);
    bufp->fullSData(oldp+57,(vlSelf->top__DOT__cpu__DOT__r2byte),16);
    bufp->fullIData(oldp+58,((((- (IData)((1U & ((IData)(vlSelf->top__DOT__cpu__DOT__r2byte) 
                                                 >> 0xfU)))) 
                               << 0x10U) | (IData)(vlSelf->top__DOT__cpu__DOT__r2byte))),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__cpu__DOT__r2byte),32);
    bufp->fullIData(oldp+60,((((- (IData)((1U & ((IData)(vlSelf->top__DOT__cpu__DOT__rbyte) 
                                                 >> 7U)))) 
                               << 8U) | (IData)(vlSelf->top__DOT__cpu__DOT__rbyte))),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__cpu__DOT__rdata),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__cpu__DOT__pc_current),32);
    bufp->fullIData(oldp+63,(((IData)(4U) + vlSelf->top__DOT__cpu__DOT__pc_current)),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__cpu__DOT__csr__DOT__mepc),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__cpu__DOT__csr__DOT__mstatus),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__cpu__DOT__csr__DOT__mtvec),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__cpu__DOT__csr__DOT__mcause),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[0]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[1]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[2]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[3]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[4]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[5]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[6]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[7]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[8]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[9]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[10]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[11]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[12]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[13]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[14]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[15]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[16]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[17]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[18]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[19]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[20]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[21]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[22]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[23]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[24]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[25]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[26]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[27]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[28]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[29]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[30]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__cpu__DOT__regfile__DOT__regs_out[31]),32);
    bufp->fullBit(oldp+100,(vlSelf->clk));
    bufp->fullBit(oldp+101,(vlSelf->rst));
    bufp->fullIData(oldp+102,(vlSelf->pc),32);
    bufp->fullIData(oldp+103,(vlSelf->inst),32);
    bufp->fullIData(oldp+104,(vlSelf->halt_ret),32);
    bufp->fullBit(oldp+105,(vlSelf->non_inst));
    bufp->fullBit(oldp+106,((0x100073U == vlSelf->inst)));
    bufp->fullIData(oldp+107,(((0x6fU == (0x7fU & vlSelf->inst))
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
                                    ? (0xfffffffeU 
                                       & vlSelf->top__DOT__cpu__DOT__alu_out)
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
                                                ? (
                                                   VL_LTS_III(32, vlSelf->top__DOT__cpu__DOT__rs1_data, vlSelf->top__DOT__cpu__DOT__rs2_data)
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
    bufp->fullCData(oldp+108,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+109,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+110,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+111,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+112,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+113,(((0x1fU >= (0x18U & (vlSelf->top__DOT__cpu__DOT__alu_out 
                                                   << 3U)))
                                ? (vlSelf->top__DOT__cpu__DOT__rs2_data 
                                   << (0x18U & (vlSelf->top__DOT__cpu__DOT__alu_out 
                                                << 3U)))
                                : 0U)),32);
    bufp->fullBit(oldp+114,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+115,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+116,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->inst) 
                                             | ((0x800U 
                                                 & (vlSelf->inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+117,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+118,((((- (IData)((vlSelf->inst 
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
    bufp->fullBit(oldp+119,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+120,((0x73U == vlSelf->inst)));
    bufp->fullBit(oldp+121,((0x30200073U == vlSelf->inst)));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->top__DOT__cpu__DOT__is_addi) 
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
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__cpu__DOT__rs1_data),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__cpu__DOT__rs2_data),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__cpu__DOT__csr_rdata),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__cpu__DOT__csr_wdata),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__cpu__DOT__alu_a),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__cpu__DOT__alu_b),32);
    bufp->fullCData(oldp+129,((vlSelf->inst >> 0x19U)),7);
    bufp->fullIData(oldp+130,(5U),32);
    bufp->fullIData(oldp+131,(0x20U),32);
    bufp->fullBit(oldp+132,(1U));
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__cpu__DOT__is_mulh));
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__cpu__DOT__load_wdata),32);
    bufp->fullIData(oldp+135,(0xcU),32);
    bufp->fullIData(oldp+136,(0x80000000U),32);
}
