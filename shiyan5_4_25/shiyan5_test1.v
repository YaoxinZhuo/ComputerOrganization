`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:47:18 04/25/2016 
// Design Name: 
// Module Name:    shiyan5_test1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module experiment5_storage_1_top(input Storage_clk_m,
	input[7:0] Storage_Mem_Addr,
	output reg [7:0] Storage_LED,
	input Storage_Mem_Write,
	
	//input Register_Addr_A,
	//input Register_Addr_B,
	//input Register_W_Addr,
	//input Register_W_Data,
	input Register_Write_Reg,
	input Register_Reset,
	output [31:0] Register_Data_A,
	output [31:0] Register_Data_B,
	
	//input ALU_AA,
	//input ALU_BB, 
	input ALU_OPP, 
	
	input mytest
    );//Mem_write 写为1，读为0,CLK手动时钟
	 wire [31:0] Storage_Read_Data;//读数据
	 reg [31:0] Storage_Write_Data;//写入数据
	 wire Storage_Mem_Write;
	 
	 //register
	reg [4:0] Register_Addr_A;
	reg[4:0] Register_Addr_B;
	reg[4:0] Register_W_Addr;
	reg [31:0] Register_W_Data;
	wire Register_Write_Reg;
	wire Register_Reset;
	reg [31:0] Register_Data_A;
	reg [31:0] Register_Data_B;
	
	//alu
	reg [31:0] ALU_AA; 
	reg [31:0] ALU_BB; 
	wire [2:0] ALU_OPP; 
	reg [31:0] ALU_F; 
	
	//

	 
	always @(*)
		begin
			if(mytest == 0)
				begin
				Register_Data_A = 32'b 10101010101010101010101010101010;
				
					ALU_AA = Register_Data_A;
					ALU_BB = Storage_Read_Data;
				end
			else
				begin
					Register_W_Data = ALU_F;
				end
		end
	 Register_4 REGISTER4(
	 .R_Addr_A(Register_Addr_A),
	 .R_Addr_B(Register_Addr_B),
	 .W_Addr(Register_W_Addr),
	.W_Data(Register_W_Data),
	.Write_Reg(Register_Write_Reg),
	.Reset(Register_Reset),
	.R_Data_A(Register_Data_A),
	.R_Data_B(Register_Data_B)
	);
	
	ALU4 ALUAL4(
	.AA(ALU_AA),
	.BB(ALU_BB), 
	.ALU_OP(ALU_OPP),	
	.F(ALU_F)
    );
	
	RAM_B RAM_B_INSTANCE(
  .clka(Storage_clk_m), // input clka
  .wea(Storage_Mem_Write), // input [0 : 0] wea
  .addra(Storage_Mem_Addr[7:2]), // input [5 : 0] addra
  .dina(Storage_Write_Data), // input [31 : 0] dina
  .douta(Storage_Read_Data) // output [31 : 0] douta
);
endmodule
