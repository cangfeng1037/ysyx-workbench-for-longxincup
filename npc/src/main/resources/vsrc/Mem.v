module MemBlackBox(
    input         clk,
    input         valid,
    input         wen,
    input  [31:0] raddr,
    input  [31:0] waddr,
    input  [31:0] wdata,
    input  [3:0]  wmask,
    output reg [31:0] rdata
);

import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input int wmask);

// 改为256kb 的寄存器，先跑仿真

reg [31:0] mem_array [0:65535]; // 256KB

always @(*) begin
  if (valid && !wen) begin    
    //$display("PMEM_read from addr: %h, clk: %h, valid: %h, wen: %h", raddr, clk, valid, wen);
    rdata = pmem_read(raddr);    
    //rdata = mem_array[raddr]; // 256KB
  end else begin
    rdata = 32'b0;
  end
end

always @(posedge clk) begin
  if (valid && wen) begin
    pmem_write(waddr, wdata, {28'b0, wmask});
    //$display("PMEM_write to addr: %h, clk: %h, valid: %h, wen: %h", waddr, clk, valid, wen);
    //mem_array[waddr] <= wdata; // 256KB
  end
end

endmodule
