// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        CData/*0:0*/ top__DOT____Vcellinp__ebreak_box__is_ebreak;
        VL_IN8(reset,0,0);
        VL_OUT8(io_halt_ret,0,0);
        VL_OUT8(io_non_inst,0,0);
        CData/*0:0*/ top__DOT__cpu__DOT___wb_io_csr_wen;
        CData/*0:0*/ top__DOT__cpu__DOT___mem_io_out_bits_is_load;
        CData/*0:0*/ top__DOT__cpu__DOT___mem_io_out_bits_is_jalr;
        CData/*0:0*/ top__DOT__cpu__DOT___mem_io_out_bits_is_csrrw;
        CData/*0:0*/ top__DOT__cpu__DOT___mem_io_out_bits_is_csrrs;
        CData/*0:0*/ top__DOT__cpu__DOT___mem_io_mem_wen;
        CData/*0:0*/ top__DOT__cpu__DOT___exu_io_out_bits_is_lw;
        CData/*0:0*/ top__DOT__cpu__DOT___exu_io_out_bits_is_lbu;
        CData/*0:0*/ top__DOT__cpu__DOT___exu_io_out_bits_is_lh;
        CData/*0:0*/ top__DOT__cpu__DOT___exu_io_out_bits_is_lhu;
        CData/*0:0*/ top__DOT__cpu__DOT___exu_io_out_bits_is_lb;
        CData/*0:0*/ top__DOT__cpu__DOT___exu_io_out_bits_is_sw;
        CData/*0:0*/ top__DOT__cpu__DOT___exu_io_out_bits_is_sb;
        CData/*0:0*/ top__DOT__cpu__DOT___exu_io_out_bits_is_sh;
        CData/*3:0*/ top__DOT__cpu__DOT___idu_io_out_bits_alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT___idu_io_out_bits_is_beq;
        CData/*0:0*/ top__DOT__cpu__DOT___idu_io_out_bits_is_bne;
        CData/*0:0*/ top__DOT__cpu__DOT___idu_io_out_bits_is_blt;
        CData/*0:0*/ top__DOT__cpu__DOT___idu_io_out_bits_is_bltu;
        CData/*0:0*/ top__DOT__cpu__DOT___idu_io_out_bits_is_bge;
        CData/*0:0*/ top__DOT__cpu__DOT___idu_io_out_bits_is_bgeu;
        CData/*0:0*/ top__DOT__cpu__DOT__idu__DOT__is_load;
        CData/*0:0*/ top__DOT__cpu__DOT__idu__DOT__is_srai;
        CData/*0:0*/ top__DOT__cpu__DOT__idu__DOT__is_srli;
        CData/*0:0*/ top__DOT__cpu__DOT__idu__DOT__is_slli;
        CData/*0:0*/ top__DOT__cpu__DOT__idu__DOT__is_branch;
        CData/*0:0*/ top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_5;
        CData/*0:0*/ top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_10;
        CData/*0:0*/ top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_11;
        CData/*0:0*/ top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_12;
        CData/*0:0*/ top__DOT__cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_13;
        CData/*0:0*/ top__DOT__cpu__DOT__regfile__DOT___GEN;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT____Vcellinp__ebreak_box__is_ebreak__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ top__DOT__cpu__DOT___wb_io_csr_waddr;
        SData/*11:0*/ top__DOT__cpu__DOT___idu_io_csr_raddr;
        VL_OUT(io_pc,31,0);
        VL_IN(io_inst,31,0);
        VL_OUT(io_gpr_0,31,0);
        VL_OUT(io_gpr_1,31,0);
        VL_OUT(io_gpr_2,31,0);
        VL_OUT(io_gpr_3,31,0);
        VL_OUT(io_gpr_4,31,0);
        VL_OUT(io_gpr_5,31,0);
        VL_OUT(io_gpr_6,31,0);
        VL_OUT(io_gpr_7,31,0);
        VL_OUT(io_gpr_8,31,0);
        VL_OUT(io_gpr_9,31,0);
        VL_OUT(io_gpr_10,31,0);
        VL_OUT(io_gpr_11,31,0);
        VL_OUT(io_gpr_12,31,0);
        VL_OUT(io_gpr_13,31,0);
        VL_OUT(io_gpr_14,31,0);
        VL_OUT(io_gpr_15,31,0);
        VL_OUT(io_gpr_16,31,0);
        VL_OUT(io_gpr_17,31,0);
    };
    struct {
        VL_OUT(io_gpr_18,31,0);
        VL_OUT(io_gpr_19,31,0);
        VL_OUT(io_gpr_20,31,0);
        VL_OUT(io_gpr_21,31,0);
        VL_OUT(io_gpr_22,31,0);
        VL_OUT(io_gpr_23,31,0);
        VL_OUT(io_gpr_24,31,0);
        VL_OUT(io_gpr_25,31,0);
        VL_OUT(io_gpr_26,31,0);
        VL_OUT(io_gpr_27,31,0);
        VL_OUT(io_gpr_28,31,0);
        VL_OUT(io_gpr_29,31,0);
        VL_OUT(io_gpr_30,31,0);
        VL_OUT(io_gpr_31,31,0);
        IData/*31:0*/ top__DOT__cpu__DOT___csr_io_csr_rdata;
        IData/*31:0*/ top__DOT__cpu__DOT___mem_blackbox_rdata;
        IData/*31:0*/ top__DOT__cpu__DOT___regfile_io_rs1_data;
        IData/*31:0*/ top__DOT__cpu__DOT___regfile_io_rs2_data;
        IData/*31:0*/ top__DOT__cpu__DOT___wb_io_rd_data;
        IData/*31:0*/ top__DOT__cpu__DOT___wb_io_csr_wdata;
        IData/*31:0*/ top__DOT__cpu__DOT___exu_io_branch_pc_branch;
        IData/*31:0*/ top__DOT__cpu__DOT___idu_io_out_bits_alu_a;
        IData/*31:0*/ top__DOT__cpu__DOT___idu_io_out_bits_alu_b;
        IData/*31:0*/ top__DOT__cpu__DOT__ifu__DOT__pc;
        IData/*31:0*/ top__DOT__cpu__DOT__idu__DOT__imm_i;
        IData/*31:0*/ top__DOT__cpu__DOT__exu__DOT__alu__DOT__casez_tmp;
        IData/*31:0*/ top__DOT__cpu__DOT__mem__DOT___rdata_byte_T_1;
        IData/*31:0*/ top__DOT__cpu__DOT__mem__DOT___rdata_half_T_1;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_0;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_1;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_2;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_3;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_4;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_5;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_6;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_7;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_8;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_9;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_10;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_11;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_12;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_13;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_14;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_15;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_16;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_17;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_18;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_19;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_20;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_21;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_22;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_23;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_24;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_25;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_26;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_27;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_28;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_29;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_30;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__regs_31;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__casez_tmp;
        IData/*31:0*/ top__DOT__cpu__DOT__regfile__DOT__casez_tmp_0;
        IData/*31:0*/ top__DOT__cpu__DOT__csr__DOT__mtvec;
        IData/*31:0*/ top__DOT__cpu__DOT__csr__DOT__mepc;
    };
    struct {
        IData/*31:0*/ top__DOT__cpu__DOT__csr__DOT__mcause;
        IData/*31:0*/ top__DOT__cpu__DOT__csr__DOT__mstatus;
        IData/*31:0*/ __Vfunc_top__DOT__cpu__DOT__mem_blackbox__DOT__pmem_read__0__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
