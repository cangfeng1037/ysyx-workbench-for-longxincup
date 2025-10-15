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
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"halt_ret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"halt_ret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"is_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"halt_ret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"pc_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"pc_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+91,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+92,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+93,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+94,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+96,0,"is_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"is_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"imm_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"imm_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"imm_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"snpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"dnpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"is_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"is_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"is_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"is_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"is_seqz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"is_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"is_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"is_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"is_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"is_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"is_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"is_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"is_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"is_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"is_mulh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"is_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"is_divu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"is_rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"is_remu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"is_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"is_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"is_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"is_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"is_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"reg_wen_normal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"load_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"byte_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"rbyte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"lbu_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"r2byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"lh_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"lhu_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"addr_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+84,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+91,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+92,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+93,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+94,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"imm_i",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"imm_u",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"imm_j",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"imm_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"imm_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+96,0,"is_auipc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"is_lui",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"is_addi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"is_andi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"is_ori",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"is_xori",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"is_lw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"is_lbu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"is_lh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"is_lhu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"is_seqz",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"is_srai",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"is_srli",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"is_slli",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"is_add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"is_sub",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"is_xor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"is_or",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"is_and",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"is_mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"is_div",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"is_divu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"is_rem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"is_remu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"is_slt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"is_sltu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"is_sll",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"is_srl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"is_sra",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"is_bne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"is_beq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"is_bge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"is_bgeu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"is_blt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"is_bltu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"is_sw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"is_sb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"is_sh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+115,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+110,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+40,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+89,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"x10_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+49+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
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
    bufp->fullIData(oldp+114,(5U),32);
    bufp->fullIData(oldp+115,(0x20U),32);
    bufp->fullBit(oldp+116,(1U));
    bufp->fullBit(oldp+117,(vlSelfRef.top__DOT__cpu__DOT__is_mulh));
    bufp->fullIData(oldp+118,(vlSelfRef.top__DOT__cpu__DOT__load_wdata),32);
    bufp->fullIData(oldp+119,(0x80000000U),32);
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
    bufp->fullBit(oldp+1,(((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lbu) 
                           | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lw) 
                              | ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_lh) 
                                 | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_lhu))))));
    bufp->fullIData(oldp+2,(vlSelfRef.top__DOT__cpu__DOT__imm_i),32);
    bufp->fullIData(oldp+3,(vlSelfRef.top__DOT__cpu__DOT__imm_s),32);
    bufp->fullBit(oldp+4,(vlSelfRef.top__DOT__cpu__DOT__is_jalr));
    bufp->fullBit(oldp+5,(vlSelfRef.top__DOT__cpu__DOT__is_addi));
    bufp->fullBit(oldp+6,(vlSelfRef.top__DOT__cpu__DOT__is_andi));
    bufp->fullBit(oldp+7,(vlSelfRef.top__DOT__cpu__DOT__is_ori));
    bufp->fullBit(oldp+8,(vlSelfRef.top__DOT__cpu__DOT__is_xori));
    bufp->fullBit(oldp+9,(vlSelfRef.top__DOT__cpu__DOT__is_lw));
    bufp->fullBit(oldp+10,(vlSelfRef.top__DOT__cpu__DOT__is_lbu));
    bufp->fullBit(oldp+11,(vlSelfRef.top__DOT__cpu__DOT__is_lh));
    bufp->fullBit(oldp+12,(vlSelfRef.top__DOT__cpu__DOT__is_lhu));
    bufp->fullBit(oldp+13,(vlSelfRef.top__DOT__cpu__DOT__is_seqz));
    bufp->fullBit(oldp+14,(vlSelfRef.top__DOT__cpu__DOT__is_srai));
    bufp->fullBit(oldp+15,(vlSelfRef.top__DOT__cpu__DOT__is_srli));
    bufp->fullBit(oldp+16,(vlSelfRef.top__DOT__cpu__DOT__is_slli));
    bufp->fullBit(oldp+17,(vlSelfRef.top__DOT__cpu__DOT__is_add));
    bufp->fullBit(oldp+18,(vlSelfRef.top__DOT__cpu__DOT__is_sub));
    bufp->fullBit(oldp+19,(vlSelfRef.top__DOT__cpu__DOT__is_xor));
    bufp->fullBit(oldp+20,(vlSelfRef.top__DOT__cpu__DOT__is_or));
    bufp->fullBit(oldp+21,(vlSelfRef.top__DOT__cpu__DOT__is_and));
    bufp->fullBit(oldp+22,(vlSelfRef.top__DOT__cpu__DOT__is_mul));
    bufp->fullBit(oldp+23,(vlSelfRef.top__DOT__cpu__DOT__is_div));
    bufp->fullBit(oldp+24,(vlSelfRef.top__DOT__cpu__DOT__is_divu));
    bufp->fullBit(oldp+25,(vlSelfRef.top__DOT__cpu__DOT__is_rem));
    bufp->fullBit(oldp+26,(vlSelfRef.top__DOT__cpu__DOT__is_remu));
    bufp->fullBit(oldp+27,(vlSelfRef.top__DOT__cpu__DOT__is_slt));
    bufp->fullBit(oldp+28,(vlSelfRef.top__DOT__cpu__DOT__is_sltu));
    bufp->fullBit(oldp+29,(vlSelfRef.top__DOT__cpu__DOT__is_sll));
    bufp->fullBit(oldp+30,(vlSelfRef.top__DOT__cpu__DOT__is_srl));
    bufp->fullBit(oldp+31,(vlSelfRef.top__DOT__cpu__DOT__is_sra));
    bufp->fullBit(oldp+32,(vlSelfRef.top__DOT__cpu__DOT__is_sw));
    bufp->fullBit(oldp+33,(vlSelfRef.top__DOT__cpu__DOT__is_sb));
    bufp->fullBit(oldp+34,(vlSelfRef.top__DOT__cpu__DOT__is_sh));
    bufp->fullBit(oldp+35,(vlSelfRef.top__DOT__cpu__DOT__valid));
    bufp->fullBit(oldp+36,(vlSelfRef.top__DOT__cpu__DOT__wen));
    bufp->fullCData(oldp+37,(vlSelfRef.top__DOT__cpu__DOT__op),4);
    bufp->fullIData(oldp+38,(vlSelfRef.top__DOT__cpu__DOT__raddr),32);
    bufp->fullCData(oldp+39,(((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sw)
                               ? 0xfU : ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sh)
                                          ? ((2U & vlSelfRef.top__DOT__cpu__DOT__raddr)
                                              ? 0xcU
                                              : 3U)
                                          : ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_sb)
                                              ? ((0U 
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
    bufp->fullIData(oldp+40,(vlSelfRef.top__DOT__cpu__DOT__reg_wdata),32);
    bufp->fullCData(oldp+41,((3U & vlSelfRef.top__DOT__cpu__DOT__raddr)),2);
    bufp->fullCData(oldp+42,((0xffU & ((0U == (3U & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                        ? vlSelfRef.top__DOT__cpu__DOT__rdata
                                        : ((1U == (3U 
                                                   & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                            ? (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                               >> 8U)
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                                ? (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                                   >> 0x10U)
                                                : (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                                   >> 0x18U)))))),8);
    bufp->fullIData(oldp+43,((0xffU & ((0U == (3U & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                        ? vlSelfRef.top__DOT__cpu__DOT__rdata
                                        : ((1U == (3U 
                                                   & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                            ? (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                               >> 8U)
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.top__DOT__cpu__DOT__raddr))
                                                ? (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                                   >> 0x10U)
                                                : (vlSelfRef.top__DOT__cpu__DOT__rdata 
                                                   >> 0x18U)))))),32);
    bufp->fullSData(oldp+44,(vlSelfRef.top__DOT__cpu__DOT__r2byte),16);
    bufp->fullIData(oldp+45,((((- (IData)((1U & ((IData)(vlSelfRef.top__DOT__cpu__DOT__r2byte) 
                                                 >> 0xfU)))) 
                               << 0x10U) | (IData)(vlSelfRef.top__DOT__cpu__DOT__r2byte))),32);
    bufp->fullIData(oldp+46,(vlSelfRef.top__DOT__cpu__DOT__r2byte),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top__DOT__cpu__DOT__rdata),32);
    bufp->fullIData(oldp+48,(vlSelfRef.top__DOT__cpu__DOT__alu_a),32);
    bufp->fullIData(oldp+49,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[0]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[1]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[2]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[3]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[4]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[5]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[6]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[7]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[8]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[9]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[10]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[11]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[12]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[13]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[14]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[15]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[16]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[17]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[18]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[19]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[20]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[21]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[22]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[23]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[24]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[25]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[26]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[27]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[28]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[29]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[30]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.top__DOT__cpu__DOT__regfile__DOT__regs_out[31]),32);
    bufp->fullBit(oldp+81,(vlSelfRef.clk));
    bufp->fullBit(oldp+82,(vlSelfRef.rst));
    bufp->fullIData(oldp+83,(vlSelfRef.pc),32);
    bufp->fullIData(oldp+84,(vlSelfRef.inst),32);
    bufp->fullIData(oldp+85,(vlSelfRef.halt_ret),32);
    bufp->fullBit(oldp+86,((0x100073U == vlSelfRef.inst)));
    bufp->fullIData(oldp+87,(vlSelfRef.top__DOT__cpu__DOT__pc_current),32);
    bufp->fullIData(oldp+88,(((0x6fU == (0x7fU & vlSelfRef.inst))
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
    bufp->fullBit(oldp+89,((((IData)(vlSelfRef.top__DOT__cpu__DOT__is_addi) 
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
    bufp->fullCData(oldp+90,((0x7fU & vlSelfRef.inst)),7);
    bufp->fullCData(oldp+91,((0x1fU & (vlSelfRef.inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+92,((7U & (vlSelfRef.inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+93,((0x1fU & (vlSelfRef.inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+94,((0x1fU & (vlSelfRef.inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+95,(VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__rs2_data, 
                                           VL_SHIFTL_III(32,32,32, 
                                                         (3U 
                                                          & vlSelfRef.top__DOT__cpu__DOT__raddr), 3U))),32);
    bufp->fullBit(oldp+96,((0x17U == (0x7fU & vlSelfRef.inst))));
    bufp->fullBit(oldp+97,((0x37U == (0x7fU & vlSelfRef.inst))));
    bufp->fullIData(oldp+98,((((- (IData)((vlSelfRef.inst 
                                           >> 0x1fU))) 
                               << 0x14U) | (((0xff000U 
                                              & vlSelfRef.inst) 
                                             | (0x800U 
                                                & (vlSelfRef.inst 
                                                   >> 9U))) 
                                            | (0x7feU 
                                               & (vlSelfRef.inst 
                                                  >> 0x14U))))),32);
    bufp->fullIData(oldp+99,((0xfffff000U & vlSelfRef.inst)),32);
    bufp->fullIData(oldp+100,((((- (IData)((vlSelfRef.inst 
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
    bufp->fullIData(oldp+101,(((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__pc_current)),32);
    bufp->fullBit(oldp+102,((0x6fU == (0x7fU & vlSelfRef.inst))));
    bufp->fullBit(oldp+103,((IData)((0x1063U == (0x707fU 
                                                 & vlSelfRef.inst)))));
    bufp->fullBit(oldp+104,((IData)((0x63U == (0x707fU 
                                               & vlSelfRef.inst)))));
    bufp->fullBit(oldp+105,((IData)((0x5063U == (0x707fU 
                                                 & vlSelfRef.inst)))));
    bufp->fullBit(oldp+106,((IData)((0x7063U == (0x707fU 
                                                 & vlSelfRef.inst)))));
    bufp->fullBit(oldp+107,((IData)((0x4063U == (0x707fU 
                                                 & vlSelfRef.inst)))));
    bufp->fullBit(oldp+108,((IData)((0x6063U == (0x707fU 
                                                 & vlSelfRef.inst)))));
    bufp->fullBit(oldp+109,(((IData)(vlSelfRef.top__DOT__cpu__DOT__is_addi) 
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
    bufp->fullIData(oldp+110,(vlSelfRef.top__DOT__cpu__DOT__rs1_data),32);
    bufp->fullIData(oldp+111,(vlSelfRef.top__DOT__cpu__DOT__rs2_data),32);
    bufp->fullIData(oldp+112,(vlSelfRef.top__DOT__cpu__DOT__alu_b),32);
    bufp->fullCData(oldp+113,((vlSelfRef.inst >> 0x19U)),7);
}
