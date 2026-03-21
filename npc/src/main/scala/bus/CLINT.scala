// clint 模块
// 实现mtime，每周期加一，64位
// 具体的，mtime的值与真实事件比值的系数是CLINT模块的频率
package bus
import chisel3._
import chisel3.util._

class CLINT extends Module {
    val io = IO(new Bundle {
        val clint_bus = (new Axi4SlaveIO())
    })
        // 目前仅实现mtime寄存器，且不支持读写
        // mtime寄存器地址为0x0200BFF8和0x0200BFFC，64位宽
        // 其他地址返回0，写入无效
    
        // 处理总线访问
        io.clint_bus.rdata := 0.U
        io.clint_bus.rvalid := false.B
        io.clint_bus.rresp := 0.U   // OKAY
        io.clint_bus.rlast := true.B
        io.clint_bus.rid := 0.U

        // 本模块暂不处理写请求，写通道保持不握手
        io.clint_bus.awready := false.B
        io.clint_bus.wready := false.B
        io.clint_bus.bvalid := false.B
        io.clint_bus.bresp := 0.U   // OKAY
        io.clint_bus.bid := 0.U

        io.clint_bus.arready := true.B

    val mtime_low  = RegInit(0.U(32.W))
    val mtime_high = RegInit(0.U(32.W))

    val lo_next = mtime_low + 1.U
    mtime_low := lo_next
    when(lo_next === 0.U) {
    mtime_high := mtime_high + 1.U
    }

    
    // 使用状态机，第一周期收ar并锁存地址，第二周期根据地址返回数据，并拉高rvalid，rvalid要保持到rready握手完成
    val sIdle :: s_read :: Nil = Enum(2)
    val state = RegInit(sIdle)
    val addr_reg = RegInit(0.U(32.W))

    switch(state) {
        is(sIdle) {
            when(io.clint_bus.arvalid) {
                addr_reg := io.clint_bus.araddr
                state := s_read
            }
        }
        is(s_read) {
            io.clint_bus.arready := false.B
            io.clint_bus.rvalid := true.B
            io.clint_bus.rid := 0.U
            io.clint_bus.rresp := 0.U
            io.clint_bus.rlast := true.B
            when(addr_reg === 0x0200BFF8.U) {
                io.clint_bus.rdata := mtime_low
            }.elsewhen(addr_reg === 0x0200BFFC.U) {
                io.clint_bus.rdata := mtime_high
            }.otherwise {
                io.clint_bus.rdata := 0.U
            }
            when(io.clint_bus.rready) {
                state := sIdle
            }
        }
    }
}
