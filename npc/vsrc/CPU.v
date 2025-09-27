module ysyx_25080212_cpu #(
    parameter ADDR_WIDTH = 5,
    parameter DATA_WIDTH = 32
)(
    input clk,
    input rst,

    output [DATA_WIDTH - 1 : 0] pc,
    input [DATA_WIDTH - 1 : 0] inst,
    output [DATA_WIDTH - 1 : 0] halt_ret
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

    //assign pc_next = pc_current + 32'd4;
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
    
    wire is_auipc;
    wire is_lui;
    wire [31 : 0] alu_out;
    


    wire [19 : 0] imm_u;
    wire [31 : 0] imm_j;
    wire [31 : 0] imm_ext_u;
    wire [31 : 0] imm_ext_i;

    wire [31 : 0] snpc;
    wire [31 : 0] dnpc;

    wire is_jal; 
    wire is_jalr;
    wire is_addi;


    wire reg_wen;
     
    assign reg_wen = is_addi | is_lui | is_auipc | is_jal | is_jalr;

    wire [31 : 0] rs1_data, rs2_data;
    wire [31 : 0] reg_wdata;
    
    ysyx_25080212_Decoder decoder(
        .inst       (inst       ),
        .opcode     (opcode     ),
        .rd         (rd         ),
        .funct3     (funct3     ),
        .rs1        (rs1        ),
        .rs2        (rs2        ),
        .imm_i      (imm_i      ),
        .imm_u      (imm_u      ),
        .imm_j      (imm_j      ),
        .imm_ext_u  (imm_ext_u  ),
        .imm_ext_i  (imm_ext_i  ),
        .is_auipc   (is_auipc   ),
        .is_lui     (is_lui     ),
        .is_jal     (is_jal     ),
        .is_jalr    (is_jalr    ),
        .is_addi    (is_addi    )
    );


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
        .wen    	(reg_wen     ),
        .x10_value (halt_ret)
    );
    
    wire [3 : 0] op;
    wire [31 : 0] alu_a;
    wire [31 : 0] alu_b;
    assign op = 4'b0000;

    assign alu_a = is_auipc ? pc_current :
                   is_jal   ? pc_current :
                   is_jalr  ? rs1_data :
                   is_addi  ? rs1_data :
                   rs1_data;

    assign alu_b = is_auipc ? imm_ext_u :
                   is_jal   ? rs1_data :
                   is_jalr  ? imm_ext_i :
                   is_addi  ? imm_ext_i :
                   rs2_data;


    ysyx_25080212_Alu alu(
        .a 	(alu_a  ),
        .b 	(alu_b  ),
        .y 	(alu_out  ),
        .op (op)
    );
    assign snpc = pc_current + 32'd4;
    
    assign reg_wdata =  is_addi ? alu_out :
                        is_lui  ? imm_ext_u :
                        is_auipc ? alu_out :
                        is_jal   ? snpc :
                        is_jalr  ? snpc :
                        32'b0;
                       
    
    assign dnpc =   is_jal   ? (pc_current + imm_j) :
                    is_jalr  ? (alu_out & ~32'd1) : 
                    snpc;
    assign pc_next = dnpc;

    
    //assign is_ebreak = (inst == 32'h00100073) ? 1'b1 : 1'b0; // EBREAK指令



endmodule
