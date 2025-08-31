module ysyx_25080212_cpu #(
    parameter ADDR_WIDTH = 5,
    parameter DATA_WIDTH = 32
)(
    input clk,
    input rst,

    output [DATA_WIDTH - 1 : 0] pc,
    input [DATA_WIDTH - 1 : 0] inst
);

    wire [DATA_WIDTH - 1 : 0] pc_current, pc_next; // dnpc
    wire pc_wen;

    ysyx_25080212_Reg #(.WIDTH(DATA_WIDTH), .RESET_VAL(32'h80000000)) pc_reg (
        .clk(clk),
        .rst(rst),
        .din(pc_next),
        .dout(pc_current),
        .wen(pc_wen)
    );

    assign pc_next = pc_current + 32'd4;
    assign pc_wen = 1'b1;

    //wire [DATA_WIDTH - 1 : 0] inst_addr;
    //assign inst_addr = pc_current - 32'h80000000; // 指令存储器数组下标，pc现在值 - pc初始值

    assign pc = pc_current;
    
    // 指令解码
    wire [6 : 0] opcode;
    wire [4 : 0] rd;
    wire [2 : 0] funct3;
    wire [4 : 0] rs1;
    wire [4 : 0] rs2;
    wire [11 : 0] imm_i;
    wire [31 : 0]imm_ext;

    assign opcode = inst[6:0];
    assign rd = inst[11:7];
    assign funct3 = inst[14:12];
    assign rs1 = inst[19:15];
    assign rs2 = inst[24:20];
    assign imm_i = inst[31:20];

    // I型立即数
    assign imm_ext = {{20{imm_i[11]}}, imm_i};

    wire is_addi;
    wire reg_wen;

    assign is_addi = (opcode == 7'b0010011) && (funct3 == 3'b000); // addi指令
    assign reg_wen = is_addi;

    wire [31 : 0] rs1_data, rs2_data;
    wire [31 : 0] reg_wdata;
    
    ysyx_25080212_Regfile #(
        .ADDR_WIDTH 	(5   ),
        .DATA_WIDTH 	(32  )
    ) regfile(
        .clk    	(clk     ),
        .rst    	(rst     ),
        .rs1    	(rs1     ),
        .rdata1 	(rs1_data  ),
        .rs2    	(rs2     ),
        .rdata2 	(rs2_data  ),
        .rd     	(rd      ),
        .din    	(reg_wdata   ),
        .wen    	(reg_wen     )
    );
    
    ysyx_25080212_Alu alu(
        .a 	(rs1_data  ),
        .b 	(imm_ext   ),
        .y 	(reg_wdata  )
    );

endmodule
