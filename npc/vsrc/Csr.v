// 按照regfile的思路，实现csr寄存器mepc，mstatus，mtvec和mcause
module ysyx_25080212_csr #(
    parameter ADDR_WIDTH = 12,
    parameter DATA_WIDTH = 32
)(
    input clk,
    input rst,

    input [ADDR_WIDTH - 1:0] csr_raddr,
    input [ADDR_WIDTH - 1:0] csr_waddr,
    input [DATA_WIDTH - 1:0] csr_wdata,
    input csr_wen,
    input is_ecall,
    input is_mret,
    output reg [DATA_WIDTH - 1:0] csr_rdata
);
/* 约定
    305: mtvec
    341: mepc
    300: mstatus
    342: mcause
*/
    reg [DATA_WIDTH - 1:0] mepc;
    reg [DATA_WIDTH - 1:0] mstatus;
    reg [DATA_WIDTH - 1:0] mtvec;
    reg [DATA_WIDTH - 1:0] mcause;    

    // 同步写
    always @(posedge clk or posedge rst) begin
        if (is_ecall) begin
            mcause <= 32'd11;
        end

        if (is_mret) begin
            mstatus[3] <= mstatus[7];
            mstatus[7] <= 1'b1;
        end

        case (csr_waddr)
            12'h305: if(csr_wen) mtvec <= csr_wdata;
            12'h341: if(csr_wen) mepc <= csr_wdata;
            12'h300: if(csr_wen) mstatus <= csr_wdata;
            12'h342: if(csr_wen) mcause <= csr_wdata;
            default: ;
        endcase
        // 打印所有csr寄存器的值，便于调试
        /*
        if(csr_wen) begin
            $display("CSR_waddr:0x%08x, CSR_wdata:0x%08x", csr_waddr, csr_wdata);
            $strobe("CSR Registers: mtvec=0x%08x, mepc=0x%08x, mstatus=0x%08x, mcause=0x%08x", mtvec, mepc, mstatus, mcause);
        end
        */
    end

    // 异步读
    always @(*) begin
        case (csr_raddr)
            12'h305: csr_rdata = mtvec;
            12'h341: csr_rdata = mepc;
            12'h300: csr_rdata = mstatus;
            12'h342: csr_rdata = mcause;
            default: csr_rdata = 32'b0;
        endcase
    end

endmodule
