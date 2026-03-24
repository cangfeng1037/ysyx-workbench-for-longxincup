package npc.chisel_src.cache

import chisel3._
import chisel3.util._

class data_req extends Bundle {
    val wen = Bool() // true: 写请求，false: 读请求
    val rsize = UInt(3.W) // 0: byte, 1: half-word, 2: word
    val raddr = UInt(32.W)
    val rlen = UInt(3.W) 

    val wdata = UInt(32.W) // 写数据
    val wmask = UInt(4.W) // 写掩码，按字节使能
    val wlen = UInt(3.W) // 突发写入的长度，单位为beat（4字节），值为0-7
    val wsize = UInt(3.W) // 突发传输的大小，单位为字节，值为0-7
    
    val waddr = UInt(32.W)
    val burst = Bool() // true: cache line refill burst(8 beats), false: single beat bypass
}

class data_resp extends Bundle {
    val data = UInt(32.W)
    val last = Bool() // 表示当前响应的数据是一个cache line中的最后一个数据
}

class DCache1 extends Module {
    val io = IO(new Bundle{
        val dcache_req = Flipped(Decoupled(new npc.chisel_src.cpucore.dcache_req))
        val dcache_resp= Decoupled(new npc.chisel_src.cpucore.dcache_resp)

        val data_req = Decoupled(new data_req)
        val data_resp= Flipped(Decoupled(new data_resp))

        val hit_count = Output(UInt(32.W))
        val miss_count = Output(UInt(32.W))

        val flush = Input(Bool())
    }) 

    // cache 参数定义
    val cache_size = 8 * 1024 // 8KB
    val line_bytes = 32 // 32B/line
    val ways = 4 // 4-way
    val sets = 64 // 64 sets
    val words_per_line = line_bytes / 4 // 8 words/line

    val offset_bits = 5
    val index_bits = 6 // 64 sets
    val tag_bits = 21

    // 定义cache结构
    val data_array = Reg(Vec(ways, Vec(sets, Vec(words_per_line, UInt(32.W)))))
    val tag_array = Reg(Vec(ways, Vec(sets, UInt(tag_bits.W))))
    val valid_array = RegInit(
            VecInit(Seq.fill(ways)(
                VecInit(Seq.fill(sets)(false.B))
            ))
        )
    val dirty_array = RegInit(
            VecInit(Seq.fill(ways)(
                VecInit(Seq.fill(sets)(false.B))
            ))
        )

    val tag_reg = RegInit(0.U(tag_bits.W)) // 存储当前访问的地址的 tag、index、offset
    val index_reg = RegInit(0.U(index_bits.W))
    val offset_reg = RegInit(0.U(offset_bits.W))
    val line_base = RegInit(0.U(32.W)) // 存储当前行的基地址
    val req_addr_reg = RegInit(0.U(32.W)) // 锁存本次请求地址（读用raddr，写用waddr）
    val miss_addr_reg = RegInit(0.U(32.W)) // 锁存本次请求地址（用于bypass响应）
    val miss_cacheable_reg = RegInit(false.B) // 当前miss是否可缓存（SDRAM）
    val bypass_data_reg = RegInit(0.U(32.W)) // 非SDRAM单拍返回数据
    val bypass_addr_reg = RegInit(0.U(32.W))   // 非SDRAM单拍返回地址
    val resp_is_bypass = RegInit(false.B)    // s_resp阶段区分
    val wen_reg = RegInit(false.B) // 锁存当前请求的读写属性，供后续状态机使用
    val wdata_reg = RegInit(0.U(32.W))
    val wmask_reg = RegInit(0.U(4.W))
    val bypass_write_reg = RegInit(false.B)
    val wb_addr = RegInit(0.U(32.W)) // 锁存需要写回的地址

    // 伪随机替换算法
    val lfsr = chisel3.util.random.LFSR(8)
    val rand_way = lfsr(1, 0) // 生成0-3的随机数，选择替换的路径
    val victim_way = RegInit(0.U(2.W)) // 记录当前被替换的路径，供下一次替换
    val refill_cnt = RegInit(0.U(3.W)) // 记录当前正在填充的cache line中的数据数量

    // 状态机定义
    val s_idle :: s_lookup :: s_wb_req :: s_wb_resp :: s_refill_req :: s_refill :: s_resp :: s_bypass_req :: s_bypass_resp :: Nil = Enum(9)
    val state = RegInit(0.U(4.W))

    // 性能计数器
    val hit_count = RegInit(0.U(32.W))
    val miss_count = RegInit(0.U(32.W))
    io.hit_count := hit_count
    io.miss_count := miss_count

    // 赋默认值
    io.dcache_req.ready := false.B
    io.dcache_resp.valid := false.B
    io.dcache_resp.bits.addr := 0.U
    io.dcache_resp.bits.data := 0.U
    io.data_req.valid := false.B
    io.data_req.bits.wen := false.B
    io.data_req.bits.rsize := 0.U
    io.data_req.bits.rlen := 0.U
    io.data_req.bits.wdata := 0.U
    io.data_req.bits.wmask := 0.U
    io.data_req.bits.wlen := 0.U
    io.data_req.bits.wsize := 0.U
    io.data_req.bits.raddr := 0.U
    io.data_req.bits.waddr := 0.U
    io.data_req.bits.burst := false.B
    io.data_resp.ready := false.B

    // 状态机实现
    when (io.flush) {
        state := s_idle
        io.dcache_req.ready := true.B
        io.dcache_resp.valid := false.B
        io.data_req.valid := false.B
        io.data_resp.ready := false.B
        refill_cnt := 0.U
        resp_is_bypass := false.B
        bypass_write_reg := false.B
    } .otherwise {
        switch(state) {
            is (s_idle) {
                // 等待 dcache_req，有效时进入 lookup 状态，并锁存地址信息
                io.dcache_req.ready := true.B
                when (io.dcache_req.fire) {
                    val addr = Mux(io.dcache_req.bits.wen, io.dcache_req.bits.waddr, io.dcache_req.bits.raddr)
                    tag_reg := addr(31, offset_bits + index_bits)
                    index_reg := addr(offset_bits + index_bits - 1, offset_bits)
                    offset_reg := addr(offset_bits - 1, 0)
                    line_base := addr & "hffffffe0".U
                    req_addr_reg := addr
                    miss_addr_reg := addr
                    wen_reg := io.dcache_req.bits.wen
                    wdata_reg := io.dcache_req.bits.wdata
                    wmask_reg := io.dcache_req.bits.wmask
                    bypass_write_reg := io.dcache_req.bits.bypass && io.dcache_req.bits.wen
                    // 仅SDRAM且非旁路访问才走cache refill
                    miss_cacheable_reg := (addr(31, 26) === "b101000".U) && !io.dcache_req.bits.bypass
                    victim_way := rand_way // 记录当前被替换的路径，供下一次替换使用
                    refill_cnt := 0.U
                    when (io.dcache_req.bits.bypass && io.dcache_req.bits.wen) {
                        state := s_bypass_req
                    } .elsewhen (io.dcache_req.bits.bypass && !io.dcache_req.bits.wen) {
                        // 读旁路：直接走下游单拍读，不经过cache lookup
                        state := s_refill_req
                    } .otherwise {
                        state := s_lookup
                    }
                }
            }

            is (s_lookup) {
                val hit0 = valid_array(0)(index_reg) && tag_array(0)(index_reg) === tag_reg
                val hit1 = valid_array(1)(index_reg) && tag_array(1)(index_reg) === tag_reg
                val hit2 = valid_array(2)(index_reg) && tag_array(2)(index_reg) === tag_reg
                val hit3 = valid_array(3)(index_reg) && tag_array(3)(index_reg) === tag_reg
                val hit = hit0 || hit1 || hit2 || hit3
                
                // 先区分hit/miss再区分读写
                when (hit) {
                    hit_count := hit_count + 1.U
                    // 命中，准备响应数据
                    when (!wen_reg) {
                        // 读命中
                        io.dcache_resp.valid := true.B
                        io.dcache_resp.bits.addr := req_addr_reg
                        io.dcache_resp.bits.data := Mux1H(Seq(
                            hit0 -> data_array(0)(index_reg)(offset_reg(4, 2)),
                            hit1 -> data_array(1)(index_reg)(offset_reg(4, 2)),
                            hit2 -> data_array(2)(index_reg)(offset_reg(4, 2)),
                            hit3 -> data_array(3)(index_reg)(offset_reg(4, 2))
                        ))
                        resp_is_bypass := false.B
                        state := s_resp
                    } .otherwise {
                        // 写命中，直接在缓存中更新数据，并标记dirty
                        io.dcache_resp.valid := true.B
                        io.dcache_resp.bits.addr := req_addr_reg
                        io.dcache_resp.bits.data := wdata_reg
                        val byteMask32 = FillInterleaved(8, wmask_reg)
                        when (hit0) {
                            val oldWord = data_array(0)(index_reg)(offset_reg(4, 2))
                            data_array(0)(index_reg)(offset_reg(4, 2)) := (oldWord & ~byteMask32) | (wdata_reg & byteMask32)
                            dirty_array(0)(index_reg) := true.B
                        }
                        .elsewhen (hit1) {
                            val oldWord = data_array(1)(index_reg)(offset_reg(4, 2))
                            data_array(1)(index_reg)(offset_reg(4, 2)) := (oldWord & ~byteMask32) | (wdata_reg & byteMask32)
                            dirty_array(1)(index_reg) := true.B
                        }
                        .elsewhen (hit2) {
                            val oldWord = data_array(2)(index_reg)(offset_reg(4, 2))
                            data_array(2)(index_reg)(offset_reg(4, 2)) := (oldWord & ~byteMask32) | (wdata_reg & byteMask32)
                            dirty_array(2)(index_reg) := true.B
                        }
                        .otherwise {
                            val oldWord = data_array(3)(index_reg)(offset_reg(4, 2))
                            data_array(3)(index_reg)(offset_reg(4, 2)) := (oldWord & ~byteMask32) | (wdata_reg & byteMask32)
                            dirty_array(3)(index_reg) := true.B
                        }
                        resp_is_bypass := false.B
                        state := s_resp
                    }
                } .otherwise {
                    // 未命中，锁存victim line 信息，
                    // 判断 victim 是否需要写回
                    // valid & dirty -> s_wb_req
                    // 其他 -> s_refill_req
                    miss_count := miss_count + 1.U
                    val invalidVec = VecInit(Seq.tabulate(ways)(w => !valid_array(w)(index_reg)))
                    val hasInvalid = invalidVec.asUInt.orR
                    val allocWay = Mux(hasInvalid, PriorityEncoder(invalidVec), rand_way)
                    victim_way := allocWay
                    val victim_valid = valid_array(allocWay)(index_reg)
                    val victim_dirty = dirty_array(allocWay)(index_reg)
                    when (victim_valid && victim_dirty) {
                        // 锁存victim line的数据，准备写回
                        refill_cnt := 0.U
                        wb_addr := Cat(tag_array(allocWay)(index_reg), index_reg, 0.U(offset_bits.W))
                        state := s_wb_req
                    } .otherwise {
                        state := s_refill_req
                    }
                }
            }

            is (s_wb_req) {
                // 写回，发送写请求
                io.data_req.valid := true.B
                io.data_req.bits.wen := true.B
                io.data_req.bits.wsize := 2.U // word
                io.data_req.bits.wlen := 0.U // 单拍写回
                io.data_req.bits.wdata := data_array(victim_way)(index_reg)(refill_cnt)
                io.data_req.bits.wmask := "b1111".U
                io.data_req.bits.waddr := wb_addr + (refill_cnt << 2)
                io.data_req.bits.burst := false.B
                when (io.data_req.fire) {
                    // 每发出一个 beat，都进入响应状态等待该 beat 的写响应
                    state := s_wb_resp
                }   
            }

            is (s_wb_resp) {
                // 等待当前 beat 的写响应
                io.data_resp.ready := true.B
                when (io.data_resp.fire) {
                    when (refill_cnt === (words_per_line - 1).U) {
                        // 全部 beat 写回完成，准备进入 refill 请求
                        refill_cnt := 0.U
                        state := s_refill_req
                    } .otherwise {
                        // 消费完当前 beat 响应，继续下一个 beat
                        refill_cnt := refill_cnt + 1.U
                        state := s_wb_req
                    }
                }
            }

            is (s_refill_req) {
                // 发 refill 请求
                io.data_req.valid := true.B
                io.data_req.bits.wen := false.B
                io.data_req.bits.rsize := 2.U // word
                io.data_req.bits.raddr := Mux(miss_cacheable_reg, line_base, miss_addr_reg)
                io.data_req.bits.burst := miss_cacheable_reg
                io.data_req.bits.rlen := Mux(miss_cacheable_reg, (words_per_line - 1).U, 0.U)
                when (io.data_req.fire) {
                    state := s_refill
                }
            }

            is (s_refill) {
                // 等待 refill 数据返回，填充 cache 行
                io.data_resp.ready := true.B

                when (io.data_resp.fire) {
                    val data = io.data_resp.bits.data
                    when (miss_cacheable_reg) {
                        data_array(victim_way)(index_reg)(refill_cnt) := data
                        when (io.data_resp.bits.last) {
                            // 最后一个数据到达，更新标签和有效位，准备响应
                            tag_array(victim_way)(index_reg) := tag_reg
                            valid_array(victim_way)(index_reg) := true.B
                            dirty_array(victim_way)(index_reg) := wen_reg
                            when (wen_reg) {
                                val byteMask32 = FillInterleaved(8, wmask_reg)
                                val offsetWordIdx = offset_reg(4, 2)
                                val refilledWord = Mux(offsetWordIdx === refill_cnt, data, data_array(victim_way)(index_reg)(offsetWordIdx))
                                data_array(victim_way)(index_reg)(offsetWordIdx) := (refilledWord & ~byteMask32) | (wdata_reg & byteMask32)
                            }
                            refill_cnt := 0.U
                            resp_is_bypass := false.B
                            state := s_resp
                        } .otherwise {
                            refill_cnt := refill_cnt + 1.U
                        }
                    } .otherwise {
                        // 非SDRAM: 单拍响应，直接透传给前端，不写入cache
                        bypass_data_reg := data
                        bypass_addr_reg := miss_addr_reg
                        resp_is_bypass := true.B
                        refill_cnt := 0.U
                        state := s_resp
                    }
                }
            }

            is (s_resp) {
                // 响应阶段，区分bypass和正常响应
                when (!resp_is_bypass) {
                    io.dcache_resp.valid := true.B
                    io.dcache_resp.bits.addr := req_addr_reg
                    io.dcache_resp.bits.data := Mux1H(Seq(
                        ((valid_array(0)(index_reg) && (tag_array(0)(index_reg) === tag_reg))) -> data_array(0)(index_reg)(offset_reg(4, 2)),
                        ((valid_array(1)(index_reg) && (tag_array(1)(index_reg) === tag_reg))) -> data_array(1)(index_reg)(offset_reg(4, 2)),
                        ((valid_array(2)(index_reg) && (tag_array(2)(index_reg) === tag_reg))) -> data_array(2)(index_reg)(offset_reg(4, 2)),
                        ((valid_array(3)(index_reg) && (tag_array(3)(index_reg) === tag_reg))) -> data_array(3)(index_reg)(offset_reg(4, 2))
                    ))
                } .otherwise {
                    io.dcache_resp.valid := true.B
                    io.dcache_resp.bits.addr := bypass_addr_reg
                    io.dcache_resp.bits.data := bypass_data_reg
                }

                when (io.dcache_resp.fire) {
                    resp_is_bypass := false.B
                    bypass_write_reg := false.B
                    state := s_idle
                }
            }

            is (s_bypass_req) {
                // 直通写：不访问 DCache 数组，直接发单拍写请求到下游
                io.data_req.valid := true.B
                io.data_req.bits.wen := true.B
                io.data_req.bits.wsize := 2.U
                io.data_req.bits.wlen := 0.U
                io.data_req.bits.wdata := wdata_reg
                io.data_req.bits.wmask := wmask_reg
                io.data_req.bits.waddr := req_addr_reg
                io.data_req.bits.burst := false.B
                when (io.data_req.fire) {
                    state := s_bypass_resp
                }
            }

            is (s_bypass_resp) {
                // 等待下游写响应
                io.data_resp.ready := true.B
                when (io.data_resp.fire) {
                    bypass_addr_reg := req_addr_reg
                    bypass_data_reg := wdata_reg
                    resp_is_bypass := true.B
                    state := s_resp
                }
            }
        }
    }
}
