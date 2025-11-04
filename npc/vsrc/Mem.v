module ysyx_25080212_Mem(
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


always @(*) begin
  if (valid && !wen) begin    
    //$display("PMEM_read from addr: %h, clk: %h, valid: %h, wen: %h", raddr, clk, valid, wen);
    rdata = pmem_read(raddr);    
  end else begin
    rdata = 32'b0;
  end
end

always @(posedge clk) begin
  if (valid && wen) begin
    pmem_write(waddr, wdata, {28'b0, wmask});
    //$display("PMEM_write to addr: %h, clk: %h, valid: %h, wen: %h", waddr, clk, valid, wen);
  end
end

endmodule
