package npc.chisel_src.cache

import chisel3._
import chisel3.util._

// ICache : 8KB, 32B/line, 4-way, 64 sets

// instruction request and response (AXI master)
class inst_req extends Bundle {
    val pc = UInt(32.W)
    val burst = Bool() // true: cache line refill burst(8 beats), false: single beat bypass
}

class inst_resp extends Bundle {
    val inst = UInt(32.W)
    val last = Bool() // 表示当前响应的指令是一个cache line中的最后一条指令
}


class ICache1 extends Module {
    val io = IO(new Bundle{
        val fetch_req = Flipped(Decoupled(new npc.chisel_src.cpucore.ICacheFetchReq))
        val fetch_resp= Decoupled(new npc.chisel_src.cpucore.ICacheFetchResp)

        val inst_req = Decoupled(new inst_req)
        val inst_resp= Flipped(Decoupled(new inst_resp))

        val flush = Input(Bool())
        val hit_count = Output(UInt(32.W))
        val miss_count = Output(UInt(32.W))
    })

// ============== cache参数定义  ===================
    val cache_size = 8 * 1024 // 8KB
    val line_bytes = 32 // 32B/line
    val ways = 4 // 4-way
    val sets = 64
    val words_per_line = line_bytes / 4 // 8 words/line

    val offset_bits = 5
    val index_bits = 6 // 64 sets
    val tag_bits = 21


// ============== 定义cache结构  ===================
    // data/tag 使用 SyncReadMem，便于综合推断为 BRAM
    val data_array = Seq.fill(ways)(SyncReadMem(sets * words_per_line, UInt(32.W)))
    val tag_array = Seq.fill(ways)(SyncReadMem(sets, UInt(tag_bits.W)))
    val valid_array = RegInit(
            VecInit(Seq.fill(ways)(
                VecInit(Seq.fill(sets)(false.B))
            ))
        )


    val tag_reg = RegInit(0.U(21.W)) // 存储当前访问地址的 tag[31:11]
    val index_reg = RegInit(0.U(6.W))
    val offset_reg = RegInit(0.U(5.W))
    // lookup 元数据快照：与一次 SyncReadMem 读请求严格绑定
    val lk_tag_reg = RegInit(0.U(tag_bits.W))
    val lk_index_reg = RegInit(0.U(index_bits.W))
    val lk_offset_reg = RegInit(0.U(offset_bits.W))
    val lk_pc_reg = RegInit(0.U(32.W))
    // SyncReadMem 读结果打一拍，避免状态推进导致的读值错配
    val rd_tags_reg = Reg(Vec(ways, UInt(tag_bits.W)))
    val rd_words_reg = Reg(Vec(ways, UInt(32.W)))
    val line_base = RegInit(0.U(32.W)) // 存储当前行的基地址
    val miss_pc_reg = RegInit(0.U(32.W)) // 锁存本次请求PC（用于bypass响应）
    val miss_cacheable_reg = RegInit(false.B) // 当前miss是否可缓存（SDRAM）
    val bypass_inst_reg = RegInit(0.U(32.W)) // 非SDRAM单拍返回数据
    val bypass_pc_reg = RegInit(0.U(32.W))   // 非SDRAM单拍返回PC
    val resp_inst_reg = RegInit(0.U(32.W))   // s_resp 阶段统一响应数据
    val resp_pc_reg = RegInit(0.U(32.W))     // s_resp 阶段统一响应地址

// ============== 伪随机替换算法  ===================
    val lfsr = chisel3.util.random.LFSR(8)
    val rand_way = lfsr(1, 0) // 生成0-3的随机数，选择替换的路径
    val victim_way = RegInit(0.U(2.W)) // 记录当前被替换的路径，供下一次替换使用
    val refill_cnt = RegInit(0.U(3.W)) // 记录当前正在填充的cache line中的指令数量

// ============== 状态机定义  ===================
    val state = RegInit(0.U(3.W)) // 状态机状态
    val s_idle :: s_lookup_req :: s_lookup_resp :: s_lookup_eval :: s_missreq :: s_refill :: s_resp :: Nil = Enum(7)

// ============== 性能计数器  ===================
    val hit_count = RegInit(0.U(32.W))
    val miss_count = RegInit(0.U(32.W))
    io.hit_count := hit_count
    io.miss_count := miss_count

    // -------- debug: default on, only print narrow PC windows --------
    val icDbgEnable = false.B
    private def inDbgWin(pc: UInt): Bool = {
        // putch/ioe + printf return path windows
        (pc >= "h80005580".U && pc <= "h800056f0".U) ||
        (pc >= "h80005b00".U && pc <= "h80005c40".U)
    }

// ============== 赋默认值  ===================
    io.fetch_req.ready := false.B
    io.fetch_resp.valid := false.B
    io.fetch_resp.bits.pc := 0.U
    io.fetch_resp.bits.inst := 0.U
    io.fetch_resp.bits.miss := false.B
    io.inst_req.valid := false.B
    io.inst_req.bits.pc := line_base
    io.inst_req.bits.burst := true.B
    io.inst_resp.ready := false.B

    // SyncReadMem: lookup 发读请求后一拍得到读数据
    val lookup_en = state === s_lookup_req
    val lookup_word_addr = Cat(index_reg, offset_reg(4, 2))
    val lookup_tags = Wire(Vec(ways, UInt(tag_bits.W)))
    val lookup_words = Wire(Vec(ways, UInt(32.W)))
    for (w <- 0 until ways) {
        lookup_tags(w) := tag_array(w).read(index_reg, lookup_en)
        lookup_words(w) := data_array(w).read(lookup_word_addr, lookup_en)
    }

    def latchFetchAddr(addr: UInt): Unit = {
        // 4-way, 64 sets, 32B line: tag 必须是 addr[31:11]
        tag_reg := addr(31, 11)
        index_reg := addr(10, 5)
        offset_reg := addr(4, 0)
        line_base := addr & "hffffffe0".U // 行基地址，低5位清零
        miss_pc_reg := addr
        // SDRAM/PSRAM窗口走cache：0xa0xx_xxxx 或 0x80xx_xxxx
        miss_cacheable_reg := (addr(31, 26) === "b101000".U) || (addr(31, 26) === "b100000".U)
        victim_way := rand_way // 记录当前被替换的路径，供下一次替换使用
        refill_cnt := 0.U
    }

// ============== 状态机实现  ===================

    when (io.flush) {
        state := s_idle
        io.fetch_req.ready := true.B
        io.fetch_resp.valid := false.B
        io.inst_req.valid := false.B
        io.inst_resp.ready := false.B
        refill_cnt := 0.U
    } .otherwise {
        switch(state) {
            is (s_idle) {
                // 等待 fetch_req，有效时进入 lookup 状态，并锁存地址信息
                io.fetch_req.ready := true.B
                when (io.fetch_req.fire) {
                    latchFetchAddr(io.fetch_req.bits.pc)
                    state := s_lookup_req
                }
            }

            is (s_lookup_req) {
                // 发起 SyncReadMem 读取，并锁存本次 lookup 元数据
                lk_tag_reg := tag_reg
                lk_index_reg := index_reg
                lk_offset_reg := offset_reg
                lk_pc_reg := line_base + offset_reg
                state := s_lookup_resp
            }

            is (s_lookup_resp) {
                // 接收 SyncReadMem 结果，下一拍再做 hit/miss 判定
                for (w <- 0 until ways) {
                    rd_tags_reg(w) := lookup_tags(w)
                    rd_words_reg(w) := lookup_words(w)
                }
                state := s_lookup_eval
            }

            is (s_lookup_eval) {
                val hit0 = valid_array(0)(lk_index_reg) && rd_tags_reg(0) === lk_tag_reg
                val hit1 = valid_array(1)(lk_index_reg) && rd_tags_reg(1) === lk_tag_reg
                val hit2 = valid_array(2)(lk_index_reg) && rd_tags_reg(2) === lk_tag_reg
                val hit3 = valid_array(3)(lk_index_reg) && rd_tags_reg(3) === lk_tag_reg
                val hit = hit0 || hit1 || hit2 || hit3
                val reqPc = lk_pc_reg

                when (hit) {
                    hit_count := hit_count + 1.U
                    // 命中后统一进入 s_resp
                    resp_pc_reg := lk_pc_reg
                    resp_inst_reg := Mux1H(Seq(
                        hit0 -> rd_words_reg(0),
                        hit1 -> rd_words_reg(1),
                        hit2 -> rd_words_reg(2),
                        hit3 -> rd_words_reg(3)
                    ))
                    when (icDbgEnable && inDbgWin(reqPc)) {
                        printf(
                            p"[ICACHE-DBG][HIT] pc=0x${Hexadecimal(reqPc)} tag=0x${Hexadecimal(lk_tag_reg)} idx=0x${Hexadecimal(lk_index_reg)} off=0x${Hexadecimal(lk_offset_reg)} way=${Mux1H(Seq(hit0 -> 0.U, hit1 -> 1.U, hit2 -> 2.U, hit3 -> 3.U))} inst=0x${Hexadecimal(resp_inst_reg)}\n"
                        )
                    }
                    state := s_resp
                } .otherwise {
                    miss_count := miss_count + 1.U
                    when (icDbgEnable && inDbgWin(reqPc)) {
                        printf(
                            p"[ICACHE-DBG][MISS] pc=0x${Hexadecimal(reqPc)} tag=0x${Hexadecimal(lk_tag_reg)} idx=0x${Hexadecimal(lk_index_reg)} off=0x${Hexadecimal(lk_offset_reg)} cacheable=${miss_cacheable_reg}\n"
                        )
                    }
                    // 未命中，进入 missreq:
                    // - SDRAM: 发burst做refill
                    // - 非SDRAM: 发单拍并bypass
                    io.inst_req.valid := true.B
                    io.inst_req.bits.pc := Mux(miss_cacheable_reg, line_base, miss_pc_reg)
                    io.inst_req.bits.burst := miss_cacheable_reg
                    // 锁存rand_way到victim_way，确保在missreq和refill阶段使用同一路径进行替换
                    victim_way := rand_way
                    refill_cnt := 0.U
                    // 如果当拍已经握手成功，直接进入refill，避免"请求已发出但状态还停在missreq"
                    when (io.inst_req.fire) {
                        state := s_refill
                    } .otherwise {
                        state := s_missreq
                    }
                }
            }

            is (s_missreq) {
                io.inst_req.valid := true.B
                io.inst_req.bits.pc := Mux(miss_cacheable_reg, line_base, miss_pc_reg)
                io.inst_req.bits.burst := miss_cacheable_reg
                when (io.inst_req.fire) {
                    when (icDbgEnable && inDbgWin(miss_pc_reg)) {
                        printf(
                            p"[ICACHE-DBG][REQ] pc=0x${Hexadecimal(miss_pc_reg)} req=0x${Hexadecimal(io.inst_req.bits.pc)} burst=${io.inst_req.bits.burst}\n"
                        )
                    }
                    state := s_refill
                }
            }

            is (s_refill) {
                // 等待 inst_resp，填充 cache 行
                io.inst_resp.ready := true.B

                when (io.inst_resp.fire) {
                    val data = io.inst_resp.bits.inst
                    when (icDbgEnable && inDbgWin(miss_pc_reg)) {
                        printf(
                            p"[ICACHE-DBG][RSP] miss_pc=0x${Hexadecimal(miss_pc_reg)} beat=${refill_cnt} data=0x${Hexadecimal(data)} last=${io.inst_resp.bits.last} cacheable=${miss_cacheable_reg}\n"
                        )
                    }
                    when (miss_cacheable_reg) {
                        for (w <- 0 until ways) {
                            when (victim_way === w.U) {
                                data_array(w).write(Cat(index_reg, refill_cnt), data)
                            }
                        }
                        when (refill_cnt === offset_reg(4, 2)) {
                            resp_inst_reg := data
                            resp_pc_reg := line_base + offset_reg
                        }
                        when (io.inst_resp.bits.last) {
                            // 最后一个数据到达，更新标签和有效位，准备响应
                            for (w <- 0 until ways) {
                                when (victim_way === w.U) {
                                    tag_array(w).write(index_reg, tag_reg)
                                }
                            }
                            valid_array(victim_way)(index_reg) := true.B
                            refill_cnt := 0.U
                            state := s_resp
                        } .otherwise {
                            refill_cnt := refill_cnt + 1.U
                        }
                    } .otherwise {
                        // 非SDRAM: 单拍响应，直接透传给前端，不写入cache
                        bypass_inst_reg := data
                        bypass_pc_reg := miss_pc_reg
                        resp_inst_reg := data
                        resp_pc_reg := miss_pc_reg
                        refill_cnt := 0.U
                        state := s_resp
                    }
                }
            }

            is (s_resp) {
                // 统一响应命中/填充完成/旁路返回的数据
                io.fetch_resp.valid := true.B
                io.fetch_resp.bits.pc := resp_pc_reg
                io.fetch_resp.bits.inst := resp_inst_reg
                io.fetch_resp.bits.miss := false.B

                when (io.fetch_resp.fire) {
                    when (icDbgEnable && inDbgWin(resp_pc_reg)) {
                        printf(
                            p"[ICACHE-DBG][OUT] pc=0x${Hexadecimal(resp_pc_reg)} inst=0x${Hexadecimal(resp_inst_reg)} ready=${io.fetch_resp.ready}\n"
                        )
                    }
                    state := s_idle
                }
            }
        }
    }
}
