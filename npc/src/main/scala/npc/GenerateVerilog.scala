package npc

import chisel3._
import circt.stage.ChiselStage
import npc.chisel_src.cpucore._

object GenerateVerilog extends App {
  // 设置 firtool 环境变量（去掉多余的 /firtool 后缀）
  val firtoolDir = "/home/cangfeng_/circt-build/circt/build/bin"
  System.setProperty("CHISEL_FIRTOOL_PATH", firtoolDir)
  
  // 生成 CPU 顶层模块的 Verilog (强制使用 Verilog 而非 SystemVerilog)
  ChiselStage.emitSystemVerilogFile(
    new top,
    Array("--target-dir", "verilog"),
    Array("--disable-all-randomization", "--strip-debug-info", 
          "--lowering-options=disallowLocalVariables,disallowPackedArrays")
  )
  println("✅ CPU Verilog 生成成功！")
}
