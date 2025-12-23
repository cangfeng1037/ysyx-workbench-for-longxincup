package npc

import chisel3._
import chisel3.util._
import npc.chisel_src.cpucore._

// 定义 DPI-C ebreak 函数的 BlackBox
class EbreakBlackBox extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle {
        val is_ebreak = Input(Bool())
    })

    setInline("EbreakBlackBox.v",
        """module EbreakBlackBox(
          |    input is_ebreak
          |);
          |    import "DPI-C" function void ebreak();
          |    
          |    always @(posedge is_ebreak) begin
          |        if (is_ebreak) begin
          |            ebreak();
          |        end
          |    end
          |endmodule
        """.stripMargin)
}

class top extends Module {
    val io = IO(new Bundle {
        val pc       = Output(UInt(32.W))
        val inst     = Input(UInt(32.W))
        val halt_ret = Output(Bool())
        val non_inst = Output(Bool())

        // 导出寄存器堆的值
        val gpr = Output(Vec(32, UInt(32.W)))
    })

    val cpu = Module(new CPU())

    // 连接顶层IO
    io.pc := cpu.io.pc_out
    cpu.io.inst_in := io.inst
    io.halt_ret := false.B // 先不实现halt指令
    io.non_inst := false.B // 先不实现非指令异常
    io.gpr := cpu.io.regs_out

    // ebreak 检测和调用
    val is_ebreak = io.inst === "h00100073".U
    
    val ebreak_box = Module(new EbreakBlackBox())
    ebreak_box.io.is_ebreak := is_ebreak
}