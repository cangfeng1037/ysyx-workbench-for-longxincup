module ysyx_25080212_Decoder(
    input [31:0] inst,
    output [6:0] opcode,
    output [4:0] rd,
    output [2:0] funct3,
    output [4:0] rs1,
    output [4:0] rs2,
    output [31:0] imm_i,
    output [31:0] imm_u,
    output [31:0] imm_j,
    output [31:0] imm_b,
    output [31:0] imm_s,

    output is_auipc,
    output is_lui,
    output is_jal,
    output is_jalr,
    output is_addi,
    output is_andi,
    output is_ori,
    output is_xori,
    output is_lw,
    output is_lbu,
    output is_lh,
    output is_lhu,
    output is_seqz,
    output is_srai,
    output is_srli,
    output is_slli,
    output is_add,
    output is_sub,
    output is_xor,
    output is_or,
    output is_and,
    output is_mul,
    output is_div,
    output is_divu,
    output is_rem,
    output is_remu,
    output is_slt,
    output is_sltu,
    output is_sll,
    output is_srl,
    output is_sra,
    output is_bne,
    output is_beq,
    //output is_blez,
    output is_bge,
    output is_bgeu,
    output is_blt,
    output is_bltu,
    output is_sw,
    output is_sb,
    output is_sh
);

    assign opcode = inst[6:0];
    assign rd = inst[11:7];
    assign funct3 = inst[14:12];
    assign rs1 = inst[19:15];
    assign rs2 = inst[24:20];
    wire [6:0] funct7 = inst[31:25];

    assign imm_i = { {20{inst[31]}}, inst[31:20] }; // 符号位扩展 (符号位扩展到32位)
    assign imm_u = {inst[31:12], {12{1'b0}}};
    assign imm_j = { {12{inst[31]}},  // 符号位扩展 (符号位扩展到32位)
                 inst[19:12],     // imm[19:12]
                 inst[20],        // imm[11]
                 inst[30:21],    // imm[10:1]
                 1'b0 };         // imm[0] = 0
    assign imm_s = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    assign imm_b = {{19{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};        // imm[0] = 0

    // 立即数符号位扩展

    assign is_auipc = (opcode == 7'b0010111) ? 1'b1 : 1'b0; // AUIPC
    assign is_lui = (opcode == 7'b0110111) ? 1'b1 : 1'b0;   // LUI
    assign is_addi = (opcode == 7'b0010011 && funct3 == 3'b000) ? 1'b1 : 1'b0; // ADDI
    assign is_andi = (opcode == 7'b0010011 && funct3 == 3'b111) ? 1'b1 : 1'b0; // ANDI
    assign is_ori = (opcode == 7'b0010011 && funct3 == 3'b110) ? 1'b1 : 1'b0; // ORI
    assign is_xori = (opcode == 7'b0010011 && funct3 == 3'b100) ? 1'b1 : 1'b0; // XORI
    assign is_lw = (opcode == 7'b0000011 && funct3 == 3'b010) ? 1'b1 : 1'b0; // LW
    assign is_lbu = (opcode == 7'b0000011 && funct3 == 3'b100) ? 1'b1 : 1'b0; // LBU
    assign is_lh = (opcode == 7'b0000011 && funct3 == 3'b001) ? 1'b1 : 1'b0; // LH
    assign is_lhu = (opcode == 7'b0000011 && funct3 == 3'b101) ? 1'b1 : 1'b0; // LHU

    // SEQZ 是伪指令：seqz rd, rs -> sltiu rd, rs, 1
    assign is_seqz = (opcode == 7'b0010011 && funct3 == 3'b011 && inst[31:20] == 12'h001) ? 1'b1 : 1'b0; // SEQZ
    assign is_srai = (opcode == 7'b0010011 && funct3 == 3'b101 && inst[30] == 1'b1) ? 1'b1 : 1'b0; // SRAI
    assign is_srli = (opcode == 7'b0010011 && funct3 == 3'b101 && inst[30] == 1'b0) ? 1'b1 : 1'b0; // SRLI
    assign is_slli = (opcode == 7'b0010011 && funct3 == 3'b001) ? 1'b1 : 1'b0; // SLLI

    // J型指令
    assign is_jal = (opcode == 7'b1101111) ? 1'b1 : 1'b0;   // JAL
    assign is_jalr = (opcode == 7'b1100111 && funct3 == 3'b000) ? 1'b1 : 1'b0;  // JALR

    // R型指令，寄存器操作
    assign is_add = (opcode == 7'b0110011 && funct3 == 3'b000 && inst[30] == 1'b0) ? 1'b1 : 1'b0; // ADD
    assign is_sub = (opcode == 7'b0110011 && funct3 == 3'b000 && inst[30] == 1'b1) ? 1'b1 : 1'b0; // SUB
    assign is_xor = (opcode == 7'b0110011 && funct3 == 3'b100) ? 1'b1 : 1'b0; // XOR
    assign is_or = (opcode == 7'b0110011 && funct3 == 3'b110) ? 1'b1 : 1'b0; // OR
    assign is_and = (opcode == 7'b0110011 && funct3 == 3'b111) ? 1'b1 : 1'b0; // AND
    assign is_mul = (opcode == 7'b0110011 && funct3 == 3'b000 && funct7 == 7'b0000001) ? 1'b1 : 1'b0; // MUL
    //assign is_mulh = (opcode == 7'b0110011 && funct3 == 3'b001 && inst[30] == 1'b1) ? 1'b1 : 1'b0; // MULH
    assign is_div = (opcode == 7'b0110011 && funct3 == 3'b100 && funct7 == 7'b0000001) ? 1'b1 : 1'b0; // DIV
    assign is_divu = (opcode == 7'b0110011 && funct3 == 3'b101 && funct7 == 7'b0000001) ? 1'b1 : 1'b0; // DIVU
    assign is_rem = (opcode == 7'b0110011 && funct3 == 3'b110 && funct7 == 7'b0000001) ? 1'b1 : 1'b0; // REM
    assign is_remu = (opcode == 7'b0110011 && funct3 == 3'b111 && funct7 == 7'b0000001) ? 1'b1 : 1'b0; // REMU
    assign is_slt = (opcode == 7'b0110011 && funct3 == 3'b010) ? 1'b1 : 1'b0; // SLT
    assign is_sltu = (opcode == 7'b0110011 && funct3 == 3'b011) ? 1'b1 : 1'b0; // SLTU
    assign is_sll = (opcode == 7'b0110011 && funct3 == 3'b001 && inst[30] == 1'b0) ? 1'b1 : 1'b0; // SLL
    assign is_srl = (opcode == 7'b0110011 && funct3 == 3'b101 && inst[30] == 1'b0) ? 1'b1 : 1'b0; // SRL
    assign is_sra = (opcode == 7'b0110011 && funct3 == 3'b101 && inst[30] == 1'b1) ? 1'b1 : 1'b0; // SRA
    

    // B型指令，分支跳转
    assign is_bne = (opcode == 7'b1100011 && funct3 == 3'b001) ? 1'b1 : 1'b0; // BNE
    assign is_beq = (opcode == 7'b1100011 && funct3 == 3'b000) ? 1'b1 : 1'b0; // BEQ
    //assign is_blez = (opcode == 7'b1100011 && funct3 == 3'b110) ? 1'b1 : 1'b0; // BLEZ
    assign is_bge = (opcode == 7'b1100011 && funct3 == 3'b101) ? 1'b1 : 1'b0; // BGE
    assign is_bgeu = (opcode == 7'b1100011 && funct3 == 3'b111) ? 1'b1 : 1'b0; // BGEU
    assign is_blt = (opcode == 7'b1100011 && funct3 == 3'b100) ? 1'b1 : 1'b0; // BLT
    assign is_bltu = (opcode == 7'b1100011 && funct3 == 3'b110) ? 1'b1 : 1'b0; // BLTU

    // S型指令，存储
    assign is_sw = (opcode == 7'b0100011 && funct3 == 3'b010) ? 1'b1 : 1'b0; // SW
    assign is_sb = (opcode == 7'b0100011 && funct3 == 3'b000) ? 1'b1 : 1'b0; // SB
    assign is_sh = (opcode == 7'b0100011 && funct3 == 3'b001) ? 1'b1 : 1'b0; // SH


endmodule
