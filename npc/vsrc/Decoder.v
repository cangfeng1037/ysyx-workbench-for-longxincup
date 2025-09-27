module ysyx_25080212_Decoder(
    input [31:0] inst,
    output [6:0] opcode,
    output [4:0] rd,
    output [2:0] funct3,
    output [4:0] rs1,
    output [4:0] rs2,
    output [11:0] imm_i,
    output [19:0] imm_u,
    output [31:0] imm_j,
    output [31:0] imm_ext_u,
    output [31:0] imm_ext_i,

    output is_auipc,
    output is_lui,
    output is_jal,
    output is_jalr,
    output is_addi
);

    assign opcode = inst[6:0];
    assign rd = inst[11:7];
    assign funct3 = inst[14:12];
    assign rs1 = inst[19:15];
    assign rs2 = inst[24:20];

    assign imm_i = inst[31:20];
    assign imm_u = inst[31:12];
    assign imm_j = { {12{inst[31]}},  // 符号位扩展 (符号位扩展到32位)
                 inst[19:12],     // imm[19:12]
                 inst[20],        // imm[11]
                 inst[30:21],    // imm[10:1]
                 1'b0 };         // imm[0] = 0

    // 立即数符号位扩展
    assign imm_ext_u = {imm_u, 12'b0}; // U型指令立即数左移12位
    assign imm_ext_i = {{20{imm_i[11]}}, imm_i}; // I型指令立即数符号位扩展

    assign is_auipc = (opcode == 7'b0010111) ? 1'b1 : 1'b0; // AUIPC
    assign is_lui = (opcode == 7'b0110111) ? 1'b1 : 1'b0;   // LUI
    assign is_jal = (opcode == 7'b1101111) ? 1'b1 : 1'b0;   // JAL
    assign is_jalr = (opcode == 7'b1100111) ? 1'b1 : 1'b0;  // JALR
    assign is_addi = (opcode == 7'b0010011 && funct3 == 3'b000) ? 1'b1 : 1'b0; // ADDI

endmodule
