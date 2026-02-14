# NPC（Chisel RISC-V CPU）子项目说明

本文档用于记录 `ysyx-workbench/npc` 子项目的定位、目录结构与当前进度。

> 适用场景：在 ysyxSoCFull 平台上跑 NPC（Verilator 仿真/波形调试），并通过 AXI 与 SoC 外设交互（例如 UART 输出）。

不要直接修改我的代码！！！！

---

## 1. 项目简介

- **NPC**：用 Chisel/Scala 实现的五级流水（IF/ID/EX/MEM/WB）RISC-V CPU，与总线/SoC 通过 AXI4 互联。
- **目标**：能够在 ysyxSoCFull 上运行 AM 程序/测试用例（如 `char-test`），并完成外设访问（UART/内存等）。
- **调试手段**：Verilator 仿真、VCD 波形（`wave.vcd`）、关键信号打印等。

---

## 2. 快速开始

### 2.1 构建与运行

常见用法（示例）：

```bash
# 在 npc 目录下
make run IMAGE=csrc/char-test.bin
```

运行产物与常见输出：

- `wave.vcd`：VCD 波形（若 testbench 开启 tracing）。
- 控制台：UART 打印/调试信息等。

### 2.2 波形调试建议

- 观察复位：SoC 内部 `cpu.reset` 可能存在同步延迟（例如 shift 寄存器延迟若干周期）。
- 观察 AXI：重点看 `AR/AW/W/R/B` 五通道是否出现“握手卡住”。
  - 写：`AWVALID/AWREADY`、`WVALID/WREADY`、`BVALID/BREADY`
  - 读：`ARVALID/ARREADY`、`RVALID/RREADY`

---

## 3. 目录结构（npc/）

（只列出与开发/调试最相关的目录）

```text
npc/
  Makefile              # 运行/构建入口
  build.sbt             # Scala/Chisel 构建配置
  gen_verilog.sh        # 生成 Verilog（如果项目采用脚本生成）

  csrc/                 # Verilator C++ testbench / DPI / 仿真入口
    top.cpp             # 常见为仿真主入口（时钟、reset、trace、退出处理等）

  src/main/scala/
    npc/                # CPU 五级流水与核心模块（IFU/IDU/EXU/MEM/WB/CPU 等）
    bus/                # AXI master、仲裁器、总线适配等

  vsrc/                 # 手写 Verilog（若有）
  verilog/              # 生成的 Verilog（视工程约定）

  obj_dir/              # Verilator 构建中间产物
  wave.vcd              # 波形输出（若已启用）
```

---

## 4. 关键模块速览

### 4.1 CPU 五级流水（Chisel）

- `src/main/scala/npc/CPU.scala`：顶层 CPU 连接与流水控制（含 busy/阻塞机制等）。
- `src/main/scala/npc/IFU.scala`：取指与 AXI 读请求（通常会被总线 busy 影响）。
- `src/main/scala/npc/MEM.scala`：访存请求生成（load/store）与对齐/掩码处理。

### 4.2 AXI 总线相关

- `src/main/scala/bus/Axi4MEMMaster.scala`：数据访存用 AXI master（读/写）。
- `src/main/scala/bus/Axi4IFUMaster.scala`（若存在）：取指用 AXI master（读）。
- `src/main/scala/bus/AxiArb2To1.scala`：IFU 与 MEM 的 AXI 仲裁/路由（单 outstanding owner 锁存等）。

---

## 5. 当前进度（截至 2026-02-06）

### 5.1 已跑通的关键目标

- `char-test` 在 **NPC + ysyxSoCFull**（AXI 互联）上可运行并完成 UART 输出。
- 已能生成并保存 `wave.vcd` 波形用于定位握手/死锁问题。

### 5.2 已定位并修复的核心问题：AXI 写通道死锁

#### 现象

- 程序在早期（常见为首批 store/UART 写附近）“卡死”。
- 波形可见：
  - `AW` 先握手成功，但 `W` 通道迟迟无法握手（`WREADY` 被饿死/不被转发）。
  - 或 `B` 写响应路由/握手异常，导致事务无法结束，进而 `busy` 不释放，IFU 取指被阻塞。

#### 根因

- SoC 侧允许 **AXI 写通道 AW 与 W 解耦**（先地址后数据，不要求同拍）。
- 旧的 `AxiArb2To1` 写请求判定/转发逻辑假设 `awvalid && wvalid` 同时成立；当 AW 已握手后 `awvalid` 拉低，仲裁器不再认为“写请求存在”，导致 **WREADY 不再被转发**，MEM master 卡在等待 WREADY 的状态。

#### 修复策略（已落地）

- 仲裁器支持 AW/W 分离：
  - **AW 握手成功即锁存 owner/type**（busy、using_ifu、is_write 等）。
  - 引入写数据阶段（例如 `w_phase`）：在 busy 且处于写事务时，持续转发 `W` 通道与回传 `WREADY`，直到 `W` 完成握手。
  - 随后进入 `B` 响应阶段，按锁存 owner 路由 `BVALID/BREADY`，完成后释放 busy。

相关文件：

- `src/main/scala/bus/AxiArb2To1.scala`
- `src/main/scala/bus/Axi4MEMMaster.scala`

### 5.3 复位现象澄清

- 观测到“复位释放后又像是复位/信号清零”的错觉：常见原因是 SoC 内部对 `cpu.reset` 做了同步/延迟（例如 `SynchronizerShiftReg` 延迟若干周期）。
- 调试时建议：在波形中明确区分外部 reset 与 cpu 内部 reset 的释放时刻，并在内部 reset 真正释放后再判断功能问题。

---

## 6. 已知风险与下一步 TODO

- **回归测试**：建议对 AM 测试、cpu-tests、以及更多外设访问用例做回归（避免仲裁/路由改动引入读通道边界问题）。
- **AXI 健壮性**：
  - 检查是否存在多 outstanding 的潜在扩展需求（当前多为单 outstanding）。
  - 检查读通道 owner 锁存是否覆盖所有组合（尤其是 backpressure 场景）。
- **调试输出清理**：将临时 printf/调试信号抽象为可开关的 debug flag，避免影响性能与可读性。

---

## 7. 备注

如果你希望我把这份文档再补充为“实验报告/修复记录”的形式（含波形关键截面与信号对照表），我也可以继续完善。比如：

- 写事务死锁前后的关键信号时序（AW/W/B）
- 仲裁器状态机与 owner 锁存的状态转移图
- `char-test` 的指令级触发点（store 到 UART）与对应总线事务
